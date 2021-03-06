/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:11:58 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/04 15:57:06 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	r;
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		r = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			r = 0;
			break ;
		}
		else
		{
			r = 1;
		}
		i++;
	}
	return (r);
}
