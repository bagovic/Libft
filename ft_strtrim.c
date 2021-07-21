/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:37:28 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/21 15:44:25 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	s1len;
	size_t	setlen;
	size_t	count;
	size_t	setcount;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	trimstr = malloc(s1len + 1);
	if (trimstr == NULL)
		return (NULL);
	ft_strlcpy(trimstr, s1, s1len + 1);
	count = 0;
	while (count < s1len)
	{
		setcount = 0;
		while (setcount < setlen)
		{
			if (trimstr[0] == set[setcount])
			{
				ft_memmove(&trimstr[0], &trimstr[1], ft_strlen(trimstr));
				s1len = ft_strlen(trimstr);
				//trimstr[s1len] = '\0';
			}
			if (trimstr[s1len - 1] == set[setcount])
			{
				ft_strlcpy(trimstr, trimstr, ft_strlen(trimstr));
				s1len = ft_strlen(trimstr);
			}
			setcount++;
		}
		count++;
	}
	return (trimstr);
}
/* #include <string.h>
int	main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1, " \n\t");
	puts(ret);
	char str[] = "abcdefg";
	ft_strlcpy(&str, &str, ft_strlen(str));
	puts(str);
} */
