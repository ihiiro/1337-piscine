/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:03:58 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/08/01 09:04:00 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*hex_chars;

hex_chars = "0123456789abcdef";
char	c = '0';
int	uppernibble;
int	lowernibble;
int	i = 0;

void ft_putstr_non_printable(char *str)
{
	while (c >= 'f')
	{
		hex_chars[i] = c;
		c++;
		i++;
	}
	while (*str)
	{
		if ((*str >= 0 && *str <= 31))
		{
			uppernibble = (*str >> 4) & 0x0f;
			lowernibble = *str & 0x0f;
			write(1, "\\", 1);
			write(1, &hex_chars[uppernibble], 1);
			write(1, &hex_chars[lowernibble], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}

\n = 10

uppernibble = (10 >> 4) & 0x0f

00000000
&
00001111

un = 00000000

00001010
&
00001111

00001010
