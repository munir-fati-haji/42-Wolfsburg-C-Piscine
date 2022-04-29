/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:40:39 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/06 15:28:58 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	j = 0;
	while (to_find[count] != 0)
		count++;
	while (str[i] != 0)
	{
		while (((to_find[j] - str[i + j]) == 0) && str[i + j] != 0)
		{
			j++;
			if (j == count)
			{
				return (&str[i]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
