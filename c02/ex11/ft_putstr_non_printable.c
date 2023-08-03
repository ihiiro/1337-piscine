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

void	ft_putstr_non_printable(char *str)
{
	char	*hex_chars;
	int		uppernibble;
	int		lowernibble;

	hex_chars = "0123456789abcdef";
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
		{
			uppernibble = ((unsigned char)*str >> 4) & 0x0f;
			lowernibble = (unsigned char)*str & 0x0f;
			write(1, "\\", 1);
			write(1, &hex_chars[uppernibble], 1);
			write(1, &hex_chars[lowernibble], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
