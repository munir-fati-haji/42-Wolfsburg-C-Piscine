/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:37:48 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/04 16:15:38 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable2(int i, int j, char *str, char *str2)
{
	str2[0] = 0;
	str2[1] = 0;
	while (str[i] != 0)
	{
		str2[j] = str[i] % 16;
		str[i] = (str[i] / 16);
		j++;
	}
	j = 0;
	write(1, "\\", 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	str2[2];
	int		i;
	int		j;
	char	*str3;

	j = 0;
	i = 0;
	str3 = "0123456789abcdef";
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putstr_non_printable2(i, j, str, str2);
			write(1, &str3[(int)str2[1]], 1);
			write(1, &str3[(int)str2[0]], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
