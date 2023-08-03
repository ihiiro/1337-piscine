/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 02:13:03 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 02:13:04 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ops.h"

int	add(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	divide(int a, int b)
{
	return (a / b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	ft_remainder(int a, int b)
{
	return (a % b);
}
