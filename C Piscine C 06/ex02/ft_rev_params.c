/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:07:25 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/06 21:11:23 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arg, char **argc)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (arg > j)
		j++;
	j--;
	if (arg > 1)
	{
		while (0 < j)
		{
			while (argc[j][i] != 0)
			{
				write(1, &argc[j][i], 1);
				i++;
			}
			i = 0;
			write(1, "\n", 1);
			j--;
		}
	}
	return (0);
}
