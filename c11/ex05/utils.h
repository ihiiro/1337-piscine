/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 01:22:42 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/31 01:22:45 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		add(int a, int b);
int		subtract(int a, int b);
int		divide(int a, int b);
int		multiply(int a, int b);
int		ft_remainder(int a, int b);
int		valid(char c);
int		resolve_op_to_index(char c);
int		check_mod_div_by_0(int b, char op);

#endif