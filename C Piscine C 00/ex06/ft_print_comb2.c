/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:09:59 by mhaji             #+#    #+#             */
/*   Updated: 2022/03/23 13:16:30 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_comb(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (! (a == '9' && b == '8' && c == '9' && d == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		d++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			d = b + 1;
			c = a;
			while (c <= '9')
			{
				ft_put_comb(a, b, c, d);
				d = '0';
				c++;
			}
			b++;
		}
		b = '0';
		a++;
	}
}
