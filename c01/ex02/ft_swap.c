/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:25:05 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/13 23:35:59 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (a && b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
