/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shared_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranero <mgranero@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:40:46 by mgranero          #+#    #+#             */
/*   Updated: 2022/04/03 16:59:22 by mgranero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_matrix_initializer(int output[4][4])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			output[i][j] = 0;
			j = j + 1;
		}
		i = i + 1;
		j = 0;
	}
}

void	ft_print_matrix(int output[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			c = output[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j = j + 1;
		}
		write(1, "\n", 1);
		i = i + 1;
		j = 0;
	}
}
