/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:13:34 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/03 19:39:33 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	case5(int input[4][4], int output[4][4], int j);
void	case6(int input[4][4], int output[4][4], int j);
void	case7(int input[4][4], int output[4][4], int j);
void	case8(int input[4][4], int output[4][4], int j);

void	ft_cases2(int inputs[4][4], int output[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			case5(inputs, output, j);
			case6(inputs, output, j);
			case7(inputs, output, j);
			case8(inputs, output, j);
			j++;
		}
		j = 0;
		i++;
	}
}

void	case5(int input[4][4], int output[4][4], int j)
{
	if (input[0][j] == 3 && output[0][j] == 2 && output[2][j] == 4)
	{
		output[1][j] = 3;
		output[3][j] = 1;
	}
	if (input[0][j] == 3 && output[2][j] == 3 && output[3][j] == 4)
	{
		output[0][j] = 2;
		output[1][j] = 1;
	}
	if (input[0][j] == 2 && input[1][j] == 2
		&& output[0][j] == 3 && output[1][j] == 2)
	{
		output[2][j] = 4;
		output[3][j] = 1;
	}
	if (input[0][j] == 3 && output[1][j] == 1 && output[3][j] == 4
		&& (output[0][j] == 0 || output[2][j] == 0))
	{
		output[0][j] = 2;
		output[2][j] = 3;
	}
}

void	case6(int input[4][4], int output[4][4], int j)
{
	if (input[1][j] == 3 && output[0][j] == 4 && output[1][j] == 2)
	{
		output[2][j] = 3;
		output[3][j] = 1;
	}
	if (input[1][j] == 3 && output[0][j] == 3 && output[1][j] == 4)
	{
		output[2][j] = 2;
		output[3][j] = 1;
	}
	if (input[1][j] == 3 && output[0][j] == 4 && output[1][j] == 3)
	{
		output[2][j] = 1;
		output[3][j] = 2;
	}
	if (input[2][j] == 3 && output[j][0] == 2 && output[j][2] == 4)
	{
		output[j][1] = 3;
		output[j][3] = 1;
	}
	if (input[3][j] == 2 && output[j][0] == 3 && output[j][1] == 4)
	{
		output[j][2] = 1;
		output[j][3] = 2;
	}
}

void	case7(int input[4][4], int output[4][4], int j)
{
	if (input[3][j] == 3 && output[j][0] == 4 && output[j][1] == 3)
	{
		output[j][2] = 1;
		output[j][3] = 2;
	}
	if (input[3][j] == 3 && output[j][1] == 4 && output[j][3] == 2)
	{
		output[j][0] = 1;
		output[j][2] = 3;
	}
	if (input[3][j] == 3 && output[j][1] == 4 && output[j][3] == 1)
	{
		output[j][0] = 3;
		output[j][2] = 2;
	}
	if (input[3][j] == 2 && output[j][0] == 4 && output[j][1] == 1)
	{
		output[j][2] = 2;
		output[j][3] = 3;
	}
}

void	case8(int input[4][4], int output[4][4], int j)
{
	if (input[0][j] == 3 && output[0][j] == 2 && output[3][j] == 4
		&& (output[2][j] == 0 || output[1][j] == 0))
	{
		output[1][j] = 3;
		output[2][j] = 1;
	}
}
