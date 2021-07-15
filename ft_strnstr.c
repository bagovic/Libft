/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:32:42 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/15 10:09:12 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		ch;
	size_t		cn;
	size_t		needlelen;
	const char	*subpointer;

	ch = 0;
	cn = 0;
	needlelen = ft_strlen(needle);
	subpointer = &haystack[0];
	while (ch < len && haystack[ch] != '\0')
	{
		if (haystack[ch] == needle[cn])
		{
			if (cn == 0)
				subpointer = &haystack[ch];
			cn++;
		}
		else if (needlelen != cn)
			cn = 0;
		ch++;
	}
	if (cn >= needlelen)
		return ((char *)subpointer);
	return (NULL);
}
