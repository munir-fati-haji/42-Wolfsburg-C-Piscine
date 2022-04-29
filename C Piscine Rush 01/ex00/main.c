/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:10:27 by mgranero          #+#    #+#             */
/*   Updated: 2022/04/03 19:55:10 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Given a map of 4x4, place boxes of height 1 to 4 on each available square in 
a way that every row and column sees the correct number of boxes from each 
the possible points of view (left/right for rows, up/down for columns).
Ex: The box of height 3 will hide the box of height 1 from the left, so we 
have 3 visible boxes, and only one from the right, because the box of height 
4 is hiding everything.
*/

#include <unistd.h>

int		ft_inputs_inichk(char inputs_char[], int inpt_int[4][4], char *argsv[]);
int		ft_solution(int inputs_int[4][4], int output[4][4]);
int		ft_check_output(int output[4][4]);
void	ft_print_matrix(int output[4][4]);
void	ft_matrix_initializer(int output[4][4]);

int	main(int argsc, char *argsv[])
{
	char	inputs_char[16];
	int		output[4][4];
	int		inputs_int[4][4];

	if (argsc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ft_inputs_inichk(inputs_char, inputs_int, argsv) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_matrix_initializer(output);
	ft_solution(inputs_int, output);
	if (ft_check_output(output) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_print_matrix(output);
	return (0);
}

int	ft_check_output(int output[4][4])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (output[i][j] == 0)
			{
				return (1);
			}
			j = j + 1;
		}
		i = i + 1;
		j = 0;
	}
	return (0);
}
