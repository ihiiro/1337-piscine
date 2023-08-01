/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 00:18:54 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/17 01:06:32 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	while (dest[++i])
		;
	j = -1;
	while (src[++j])
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
