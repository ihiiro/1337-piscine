/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 02:30:44 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 02:30:46 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

int	valid(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (1);
	else if (c == '/')
		return (1);
	else if (c == '*')
		return (1);
	else if (c == '%')
		return (1);
	return (0);
}
