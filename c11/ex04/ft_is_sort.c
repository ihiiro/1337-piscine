/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:51:33 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/30 22:51:36 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc_sorted;
	int	des_sorted;

	i = 0;
	asc_sorted = 0;
	des_sorted = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			asc_sorted = 1;
		else if (f(tab[i], tab[i + 1]) > 0)
			des_sorted = 1;
		i++;
	}
	if (asc_sorted && des_sorted)
		return (0);
	return (1);
}
