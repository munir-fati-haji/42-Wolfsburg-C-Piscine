/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaji <mhaji@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:07:59 by mhaji             #+#    #+#             */
/*   Updated: 2022/04/06 23:40:15 by mhaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count_dest;
	unsigned int	count_src;
	unsigned int	i;

	count_dest = 0;
	count_src = 0;
	i = 0;
	while (dest[count_dest] != 0)
		count_dest++;
	while (src[count_src] != 0)
		count_src++;
	if (size <= count_dest)
		return (size + count_src);
	while ((src[i] != 0) && ((int)i < ((int)size - (int)count_dest - 1)))
	{
		dest[count_dest + i] = src[i];
		i++;
	}
	dest[count_dest + i] = '\0';
	return (count_dest + count_src);
}
