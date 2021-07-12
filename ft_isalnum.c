/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:19:33 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/12 18:19:52 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	return (0);
}
