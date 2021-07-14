/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:48:18 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/14 11:03:43 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	totallen;
	size_t	dstlen;
	size_t	srclen;
	int		c;

	dstlen = 0;
	srclen = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	c = dstlen;
	if(dstlen >= dstsize)
		totallen = dstsize + srclen;
	else
		totallen = dstlen + srclen;
	if ((int)dstsize - (int)dstlen > 0)
	{
		while (c - dstlen < dstsize - dstlen - 1 && src[c - dstlen] != '\0')
		{
			dst[c] = src[c - dstlen];
			c++;
		}
		dst[c] = '\0';
	}
	return (totallen);
}
