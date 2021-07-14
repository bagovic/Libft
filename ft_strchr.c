/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:58:25 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/14 15:28:11 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;
	int		counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == c)
			break ;
		counter++;
	}
	if (s[counter] == c)
	{
		pointer = (char *)&s[counter];
		return (pointer);
	}
	return (0);
}
