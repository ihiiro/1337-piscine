/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:29:17 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/12 22:35:18 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	print(char c);
void	print_comb(char i, char j, char k);

void	print(char c)
{
	write(1, &c, 1);
}

void	print_comb(char i, char j, char k)
{
	print(i);
	print(j);
	print(k);
	if (i != '7')
	{
		print(',');
		print(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				print_comb(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
