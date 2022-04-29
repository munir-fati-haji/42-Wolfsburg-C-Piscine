/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:50:17 by coder             #+#    #+#             */
/*   Updated: 2022/03/27 12:01:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_rectangle(int i, int j, int a, int b)
{
	if ((i == 0) || (i == b) || (j == a) || (j == 0))
	{
		if (((i == 0) && (j == 0)) || ((i == b) && (j == a)))
		{
			ft_putchar('o');
		}
		else if (((i == b) && (j == 0)) || ((i == 0) && (j == a)))
		{
			ft_putchar('o');
		}
		else if (i > 0 && i < b)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	j = 0;
	a = x - 1;
	b = y - 1;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			while (j < x)
			{
				print_rectangle(i, j, a, b);
				j++;
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
}
