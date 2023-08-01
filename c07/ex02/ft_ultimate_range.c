/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:51:21 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/22 20:23:57 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range_size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range_size = max - min;
	*range = (int *)malloc(range_size * 4);
	if (!range)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (range_size);
}
