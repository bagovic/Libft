/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:52:59 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/07 17:17:02 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		temp_array[509];
	char		*str_dest_pointer;
	const char	*str_src_pointer;
	size_t		c;

	str_dest_pointer = dest;
	str_src_pointer = src;
	c = 0;
	while (c < n)
	{
		temp_array[c] = str_src_pointer[c];
		c++;
	}
	c = 0;
	while (c < n)
	{
		str_dest_pointer[c] = temp_array[c];
		c++;
	}
	return (dest);
}
