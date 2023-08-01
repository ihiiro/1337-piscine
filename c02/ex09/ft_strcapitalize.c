/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 23:47:39 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/16 01:33:32 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_alphanum(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (!i && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (!is_alphanum(str[i - 1]) && is_alphanum(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	return (str);
}

int	is_alphanum(char c)
{
	int	a;
	int	b;
	int	z;

	a = (c >= 'a' && c <= 'z');
	b = (c >= 'A' && c <= 'Z');
	z = (c >= '0' && c <= '9');
	return (a || b || z);
}
