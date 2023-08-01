/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:05:40 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/18 15:08:13 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	product;

	if (nb < 0)
	{
		return (0);
	}
	product = 1;
	while (nb)
	{
		product *= nb;
		nb--;
	}
	return (product);
}
