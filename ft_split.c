/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:44:07 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/22 20:20:39 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	start;
	size_t	subs;
	size_t	count;

	start = 0;
	count = 0;
	subs = 0;
	arr = malloc(subs);
	if (arr == NULL || s == NULL)
		return (NULL);
	while (count <= ft_strlen(s))
	{
		if (s[start] != c && (s[count] == c || s[count] == '\0'))
		{
			arr = realloc(arr, ++subs * sizeof(char *));
			arr[subs - 1] = ft_substr(s, start, count - start);
			start = count;
		}
		else if (s[count] != c && s[start] == c)
			start = count;
		count++;
	}
	return (arr);
}
