/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 02:16:24 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/14 03:57:33 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	if (tab)
	{
		start = 0;
		end = size - 1;
		while (start < end)
		{
			temp = tab[start];
			tab[start] = tab[end];
			tab[end] = temp;
			start++;
			end--;
		}
	}
}
