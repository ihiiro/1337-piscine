/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:26:36 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/23 01:04:59 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		count_bytes(char **strs, int size);
void	fill_buffer(char **strs, char *sep, char *buffer, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*str_start;
	int		to_alloc;
	int		i;

	if (size <= 0)
	{
		str = (char *)malloc(0);
		return (str);
	}
	i = 0;
	to_alloc = count_bytes(strs, size);
	i = 0;
	while (sep[++i])
		;
	to_alloc += (size - 1) * i;
	str = (char *)malloc(to_alloc + 1);
	str_start = str;
	fill_buffer(strs, sep, str, size);
	return (str_start);
}

int	count_bytes(char **strs, int size)
{
	int	i;
	int	j;
	int	to_alloc;

	i = 0;
	to_alloc = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			to_alloc++;
			j++;
		}
		i++;
	}
	return (to_alloc);
}

void	fill_buffer(char **strs, char *sep, char *buffer, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = 0;
		if (i != 0)
		{
			while (sep[j])
			{
				*buffer = sep[j];
				buffer++;
				j++;
			}
		}
		j = -1;
		while (strs[i][++j])
		{
			*buffer = strs[i][j];
			buffer++;
		}
	}
	*buffer = '\0';
}
