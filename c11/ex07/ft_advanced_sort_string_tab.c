/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:11:57 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 16:11:59 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		ordered;
	int		i;

	ordered = 1;
	while (ordered)
	{
		i = 1;
		ordered = 0;
		while (tab[i])
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				temp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = temp;
				ordered = 1;
			}
			i++;
		}
	}
}
