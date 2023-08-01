/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:22:26 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/30 19:22:28 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*return_values;

	i = 0;
	return_values = (int *)malloc(sizeof(int) * length + sizeof(int));
	while (i < length)
	{
		return_values[i] = f(tab[i]);
		i++;
	}
	return_values[i] = 0;
	return (return_values);
}
