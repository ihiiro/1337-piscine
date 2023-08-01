/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 23:10:06 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/13 11:12:38 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	print(char c);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			print((char)(i / 10) + '0');
			print((char)(i % 10) + '0');
			print(' ');
			print((char)(j / 10) + '0');
			print((char)(j % 10) + '0');
			if (i != 98)
			{
				print(',');
				print(' ');
			}
		}
	}
}

void	print(char c)
{
	write(1, &c, 1);
}
