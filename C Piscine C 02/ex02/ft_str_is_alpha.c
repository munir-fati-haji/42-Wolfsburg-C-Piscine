/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:53:09 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/04 15:58:09 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((str[i] < 'a' && str[i] > 'Z') || str[i] > 'z' || str[i] < 'A')
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
