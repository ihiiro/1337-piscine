/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 04:01:59 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/14 04:43:39 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	swap(int *tab, int n, int p);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (tab && size > 1)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (tab[j] > tab[j + 1] && j != size - 1)
				{
					swap(tab, j, j + 1);
				}
				j++;
			}
			i++;
		}
	}
}

void	swap(int *tab, int n, int p)
{
	int	temp;

	if (tab)
	{
		temp = tab[n];
		tab[n] = tab[p];
		tab[p] = temp;
	}
}
