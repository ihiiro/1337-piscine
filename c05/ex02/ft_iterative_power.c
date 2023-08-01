/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:59:38 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/18 16:10:33 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power != 0)
	{
		product *= nb;
		power--;
	}
	return (product);
}
