/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 06:25:22 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/23 06:25:28 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str);
char				*ft_strcpy(char *src, int size);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	int			i;

	strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strs)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].str = av[i];
		strs[i].copy = ft_strcpy(strs[i].str, strs[i].size);
		i++;
	}
	strs[i].size = 0;
	strs[i].str = 0;
	strs[i].copy = 0;
	return (strs);
}

int	ft_strlen(char *str)
{
	int			i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strcpy(char *src, int size)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(size + 1);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
