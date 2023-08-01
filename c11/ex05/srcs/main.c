/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 02:04:54 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 02:04:55 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	result;
	int	(*ops[5])(int, int);

	ops[0] = add;
	ops[1] = subtract;
	ops[2] = divide;
	ops[3] = multiply;
	ops[4] = ft_remainder;
	if (argc != 4)
		return (1);
	else if (!valid(argv[2][0]) || argv[2][1] != '\0')
		write(1, "0\n", 2);
	else if (argc != 4)
		return (1);
	else
	{
		if (!check_mod_div_by_0(ft_atoi(argv[3]), argv[2][0]))
			return (1);
		result = ops[resolve_op_to_index(argv[2][0])](ft_atoi(argv[1]), 
				ft_atoi(argv[3]));
		ft_putnbr(result);
		write(1, "\n", 1);
		return (0);
	}
	return (1);
}
