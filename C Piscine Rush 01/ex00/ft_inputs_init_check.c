/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputs_init_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranero <mgranero@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:35:00 by mgranero          #+#    #+#             */
/*   Updated: 2022/04/03 16:52:18 by mgranero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_inputs_array_initializer(char inputs_char[]);
void	ft_matrix_initializer(int output[4][4]);
int		ft_inputs_check(char inputs_char[]);
int		ft_get_inputs(char *argsv[], char inputs_char[]);
void	ft_create_inputs_matrix(char inputs_char[], int inpt_int[4][4]);

int	ft_inputs_inichk(char inputs_char[], int inpt_int[4][4], char *argsv[])
{
	ft_inputs_array_initializer(inputs_char);
	ft_matrix_initializer(inpt_int);
	if (ft_get_inputs(argsv, inputs_char) == 1
		|| ft_inputs_check(inputs_char) == 1)
	{
		return (1);
	}
	ft_create_inputs_matrix(inputs_char, inpt_int);
	return (0);
}

void	ft_inputs_array_initializer(char inputs_char[])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		inputs_char[i] = '9';
		i++;
	}
}

int	ft_inputs_check(char inputs_char[])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 16)
	{
		if (inputs_char[i] != '9')
		{
			count++;
		}
		i++;
	}
	if (count == 16)
	{
		return (0);
	}
	return (1);
}

int	ft_get_inputs(char *argsv[], char inputs_char[])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (argsv[1][i] != '\0')
	{
		if ((i > 0 && argsv[1][i] >= '1' && argsv[1][i] <= '4'
			&& argsv[1][i - 1] == ' ')
			|| (i == 0 && argsv[1][i] >= '1' && argsv[1][i] <= '4'))
		{
			inputs_char[count] = argsv[1][i];
			count++;
		}
		i = i + 1;
	}	
	inputs_char[count] = '\0';
	if (i != 31)
	{
		return (1);
	}
	return (0);
}

void	ft_create_inputs_matrix(char inputs_char[], int inpt_int[4][4])
{
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	z = 0;
	while (z < 16)
	{
		inpt_int[i][j] = inputs_char[z] - '0';
		j = j + 1;
		if (j > 3)
		{
			i = i + 1;
			j = 0;
		}
		z = z + 1;
	}
}
