/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:48:18 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/12 17:34:24 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	return_size;
	size_t	dst_size;
	size_t	src_size;
	int		c;

	dst_size = 0;
	src_size = 0;
	while (dst[dst_size] != '\0')
		dst_size++;
	while (src[src_size] != '\0')
		src_size++;
	c = dst_size;
	return_size = dst_size + src_size;
	if ((int)size - (int)dst_size > 0)
	{
		while (c - dst_size < size - dst_size - 1)
		{
			dst[c] = src[c - dst_size];
			c++;
		}
		dst[c] = '\0';
	}
	return (return_size);
}
