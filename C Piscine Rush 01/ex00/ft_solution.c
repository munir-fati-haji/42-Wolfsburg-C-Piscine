/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:54:14 by mgranero          #+#    #+#             */
/*   Updated: 2022/04/03 19:41:45 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cases1(int inputs[4][4], int output[4][4]);

void	ft_cases2(int input[4][4], int output[4][4]);

int	ft_solution(int inputs_int[4][4], int output[4][4])
{
	ft_cases1(inputs_int, output);
	ft_cases2(inputs_int, output);
	return (0);
}
