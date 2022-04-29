/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:08:35 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/08 00:28:29 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change(int i, int j, int *c, int *number)
{
	while (i > 0)
	{
		i--;
		if (j == 0)
			*number = *number + c[i] * 1;
		if (j == 1)
			*number = *number + c[i] * 10;
		if (j == 2)
			*number = *number + c[i] * 100;
		if (j == 3)
			*number = *number + c[i] * 1000;
		if (j == 4)
			*number = *number + c[i] * 10000;
		if (j == 5)
			*number = *number + c[i] * 100000;
		if (j == 6)
			*number = *number + c[i] * 1000000;
		if (j == 7)
			*number = *number + c[i] * 10000000;
		if (j == 8)
			*number = *number + c[i] * 100000000;
		if (j == 9)
			*number = *number + c[i] * 1000000000;
		j++;
	}
}

void	ft_negative(int *negative_count, int *flag, int *number)
{
	if (((*negative_count - 1) % 2 == 0))
		*flag = 1;
	if (*flag == 1)
		*number = *number * -1;
}

//count[0] counts the symbols and space before numbers
//count[1] counts the negative signs
//count[2] counts the digits
//count[3] down count digits to multiply by 10 to power of n
//count[4] is zero or 1 is used to flag negative numbers
//count[5] is to store number
//count[6] is to make all counts to zero

int	ft_atoi(char *str)
{
	int	c[10];
	int	count[6];

	count[6] = 0;
	while (count[6] < 6)
	{
		count[count[6]] = 0;
		count[6]++;
	}
	while (str[count[0]] == '-' || str[count[0]] == '+'
		|| (str[count[0]] > 8 && str[count[0]] < 14) || str[count[0]] == ' ')
	{
		if (str[count[0]] == '-')
			count[1]++;
		count[0]++;
	}
	while (str[count[0] + count[2]] >= '0' && str[count[0] + count[2]] <= '9')
	{
		c[count[2]] = str[count[0] + count[2]] - '0';
		count[2]++;
	}
	ft_change(count[2], count[3], c, &count[5]);
	ft_negative(&count[1], &count[4], &count[5]);
	return (count[5]);
}
