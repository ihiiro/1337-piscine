/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 05:04:19 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/21 06:29:52 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	sort(int argc, char *argv[]);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort(int argc, char *argv[])
{
	int		left;
	int		right;
	char	*str;

	left = 1;
	while (left < argc)
	{
		right = left + 1;
		while (right < argc)
		{
			if (ft_strcmp(argv[left], argv[right]) > 0)
			{
				str = argv[left];
				argv[left] = argv[right];
				argv[right] = str;
			}
			right++;
		}
		left++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}
