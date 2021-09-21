/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:37:28 by bagovic           #+#    #+#             */
/*   Updated: 2021/09/21 18:10:49 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// static	char	*ft_remove_leaks(char *arr)
// {
// 	char	*arrcpy;

// 	arrcpy = ft_strdup(arr);
// 	free(arr);
// 	return (arrcpy);
// }

size_t	ft_count_set_chars(char const *s1, char const *set)
{
	size_t	newlen;
	size_t	iter;
	size_t	setiter;
	size_t	setcount;

	iter = 0;
	setcount = 0;
	while (iter < ft_strlen(s1))
	{
		setiter = 0;
		while (setiter < ft_strlen(set))
		{
			if (s1[iter] == set[setiter])
				setcount++;
			setiter++;
		}
		iter++;
	}
	newlen = ft_strlen(s1) - setcount;
	return (newlen);
}
// ┌──────────────────────────────────────────────────────────────────────────────┐
// │                                                                              │
// │ Algorithm:                                                                   │
// │                                                                              │
// │ 	* Count the set characters in s1                                            │
// │ 	* Iterate over s1                                                           │
// │ 	* Iterate over set in s1                                                    │
// │ 	* If a char of s1 matches with set                                          │
// │ 		- increase count by 1                                                   │
// │ 	* If not, copy the character of s1 in trimstr                               │
// │ 	* set setiter_count to 0                                                    │
// │ 	* return trimstr                                                            │
// │ 	                                                                            │
// └──────────────────────────────────────────────────────────────────────────────┘

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	s1len;
	size_t	iter_count;
	size_t	setiter_count;

	if (s1 == NULL || set == NULL)
		return (NULL);
	trimstr = malloc(ft_count_set_chars(s1, set) + 1);
	if (trimstr == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	iter_count = 0;
	while (iter_count < ft_strlen(s1))
	{
		setiter_count = 0;
		while (setiter_count < ft_strlen(set))
		{
			if (s1[iter_count] == set[setiter_count])
			{
				iter_count++;
				setiter_count = -1;
				break ;
			}
			setiter_count++;
		}
		if ((long) setiter_count != -1)
			trimstr[iter_count] = s1[iter_count];
		iter_count++;
	}
	return (trimstr);
}

// int	main()
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ret = ft_strtrim(s1, " \n\t");
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*trimstr;
// 	size_t	len;
// 	size_t	count;
// 	size_t	setcount;

// 	if (s1 == NULL || set == NULL)
// 		return (NULL);
// 	trimstr = ft_strdup(s1);
// 	if (trimstr == NULL)
// 		return (NULL);
// 	len = ft_strlen(s1);
// 	count = -1;
// 	while (++count < ft_strlen(s1))
// 	{
// 		setcount = -1;
// 		while (++setcount < ft_strlen(set))
// 		{
// 			if (trimstr[0] == set[setcount])
// 				ft_memmove(&trimstr[0], &trimstr[1], ft_strlen(trimstr));
// 			if (trimstr[len - 1] == set[setcount])
// 				ft_strlcpy(trimstr, trimstr, ft_strlen(trimstr));
// 			len = ft_strlen(trimstr);
// 		}
// 	}
// 	return (ft_remove_leaks(trimstr));
// }
