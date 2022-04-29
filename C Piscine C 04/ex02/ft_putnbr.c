/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 01:43:52 by coder             #+#    #+#             */
/*   Updated: 2022/04/06 17:06:06 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_negative(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		c[9];
	char	n;

	i = 0;
	ft_putnbr_negative(nb);
	while (nb != 0)
	{
		if (nb > 0)
		{
			c[i] = (nb % 10);
		}
		else if (nb < 0)
		{
			c[i] = (nb % 10) * (-1);
		}
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		--i;
		n = c[i] + '0';
		ft_putchar(n);
	}
}
