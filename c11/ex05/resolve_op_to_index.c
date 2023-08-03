/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_op_to_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 03:15:41 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 03:15:42 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./resolve_op_to_index.h"

int	resolve_op_to_index(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '/')
		return (2);
	else if (c == '*')
		return (3);
	return (4);
}
