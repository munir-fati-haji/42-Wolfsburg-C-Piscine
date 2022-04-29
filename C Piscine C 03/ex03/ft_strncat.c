/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:04:56 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/06 14:58:47 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_dest;
	unsigned int	i;

	count_dest = 0;
	i = 0;
	while (dest[count_dest] != 0)
		count_dest++;
	while ((src[i] != 0) && i < nb)
	{
		dest[count_dest + i] = src[i];
		i++;
	}
	dest[count_dest + i] = '\0';
	return (dest);
}
