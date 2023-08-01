/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:12:39 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/22 18:48:26 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*integers;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	integers = (int *)malloc((max - min) * 4);
	i = 0;
	while (min < max)
	{
		integers[i] = min;
		min++;
		i++;
	}
	return (integers);
}
