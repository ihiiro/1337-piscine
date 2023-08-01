/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:29:40 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 15:29:42 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	char	*temp;
	int		left;
	int		right;
	int		size;

	size = 0;
	left = 0;
	while (tab[size])
		size++;
	while (left < size)
	{
		right = left + 1;
		while (right < size)
		{
			if (ft_strcmp(tab[left], tab[right]) > 0)
			{
				temp = tab[left];
				tab[left] = tab[right];
				tab[right] = temp;
			}
			right++;
		}
		left++;
	}
}
