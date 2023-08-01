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


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		i;
	int		ordered;

	ordered = 1;
	while (ordered)
	{
		ordered = 0;
		i = 1;
		while (tab[i])
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				temp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = temp;
				ordered = 1;
				i++;
			}
		}
	}
}

#include <stdio.h>


int main(void) 
{
	char	*str0 = "zzzzz";
	char	*str1 = "aaaaaa";
	char	*str2 = "ddddd";
	char	*str3 = "sssssss";
	char	*strs[5];
	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;
	strs[3] = str3;
	strs[4] = NULL;


	ft_advanced_sort_string_tab(strs, ft_strcmp);
	int i = 0;
	while (i < 5)
	{
		printf("%s\n", strs[i]);
		i++;
	}
}
