/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:37:28 by bagovic           #+#    #+#             */
/*   Updated: 2021/09/21 16:33:57 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libft.h"

static	char	*ft_remove_leaks(char *arr)
{
	char	*arrcpy;

	arrcpy = ft_strdup(arr);
	free(arr);
	return (arrcpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	len;
	size_t	count;
	size_t	setcount;

	if (s1 == NULL || set == NULL)
		return (NULL);
	trimstr = ft_strdup(s1);
	if (trimstr == NULL)
		return (NULL);
	len = ft_strlen(s1);
	count = -1;
	while (++count < ft_strlen(s1))
	{
		setcount = -1;
		while (++setcount < ft_strlen(set))
		{
			if (trimstr[0] == set[setcount])
				ft_memmove(&trimstr[0], &trimstr[1], ft_strlen(trimstr));
			if (trimstr[len - 1] == set[setcount])
				ft_strlcpy(trimstr, trimstr, ft_strlen(trimstr));
			len = ft_strlen(trimstr);
		}
	}
	return (ft_remove_leaks(trimstr));
}
