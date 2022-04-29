/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:57:19 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/03 19:40:14 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	case1(int input[4][4], int output[4][4]);

void	case2(int input[4][4], int output[4][4]);

void	case3(int input[4][4], int output[4][4]);

void	case4(int input[4][4], int output[4][4]);

void	ft_cases1(int inputs[4][4], int output[4][4])
{
	case1(inputs, output);
	case2(inputs, output);
	case3(inputs, output);
	case4(inputs, output);
}

void	case1(int input[4][4], int output[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input[0][i] == 1)
			output[0][i] = 4;
		if (input[1][i] == 1)
			output[3][i] = 4;
		if (input[2][i] == 1)
			output[i][0] = 4;
		if (input[3][i] == 1)
			output[i][3] = 4;
		i++;
	}
}

// case 2 when you should see 4, write a 1, 2, 3, 4 on the output
void	case2(int input[4][4], int output[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input[0][i] == 4)
		{
			output[0][i] = 1;
			output[1][i] = 2;
			output[2][i] = 3;
			output[3][i] = 4;
		}
		if (input[1][i] == 4)
		{
			output[0][i] = 4;
			output[1][i] = 3;
			output[2][i] = 2;
			output[3][i] = 1;
		}
		i++;
	}
}

void	case3(int input[4][4], int output[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input[2][i] == 4)
		{
			output[i][0] = 1;
			output[i][1] = 2;
			output[i][2] = 3;
			output[i][3] = 4;
		}
		if (input[3][i] == 4)
		{
			output[i][0] = 4;
			output[i][1] = 3;
			output[i][2] = 2;
			output[i][3] = 1;
		}
		i++;
	}
}

// case 3 when you should see in one side 2 and on the 
//other 3, than we need a 4 in the middle
void	case4(int input[4][4], int output[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input[0][i] == 2 && input[1][i] == 3)
			output[1][i] = 4;
		if (input[0][i] == 3 && input[1][i] == 2)
			output[2][i] = 4;
		if (input[2][i] == 2 && input[3][i] == 3)
			output[i][1] = 4;
		if (input[2][i] == 3 && input[3][i] == 2)
			output[i][2] = 4;
		if (input[0][i] == 2 && input[1][i] == 1)
			output[i][0] = 3;
		if (input[0][i] == 1 && input[1][i] == 2)
			output[i][3] = 3;
		if (input[2][i] == 2 && input[3][i] == 1)
			output[0][i] = 3;
		if (input[2][i] == 1 && input[3][i] == 2)
			output[3][i] = 3;
		i++;
	}
}
