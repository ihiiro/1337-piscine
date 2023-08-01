/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mod_div_by_0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 04:32:13 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 04:32:15 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include <unistd.h>

int	check_mod_div_by_0(int b, char op)
{
	if (op == '/' && b == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (0);
	}
	else if (op == '%' && b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (0);
	}
	return (1);
}
