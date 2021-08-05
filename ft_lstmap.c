/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:46:29 by bagovic           #+#    #+#             */
/*   Updated: 2021/08/05 19:42:56 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next;

	while (lst != NULL)
	{
		new_list = malloc(sizeof (t_list));
		if (new_list == NULL)
			return (NULL);
		new_list->next = NULL;
		new_list = f(lst->content);
		next = lst->next;
		del(lst->content);
		free(lst);
		lst = next;
		new_list = new_list->next;
	}
	return (new_list);
}

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>

// void	ft_print_result(t_list *elem)
// {
// 	int		len;

// 	len = 0;
// 	while (((char *)elem->content)[len])
// 		len++;
// 	write(1, ((char *)elem->content), len);
// 	write(1, "\n", 1);
// }

// t_list	*ft_lstnewone(void *content)
// {
// 	t_list	*elem;

// 	elem = (t_list *)malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);
// 	if (!content)
// 		elem->content = NULL;
// 	else
// 		elem->content = content;
// 	elem->next = NULL;
// 	return (elem);
// }

// void	*ft_map(void *ct)
// {
// 	int i;
// 	void	*c;
// 	char	*pouet;

// 	c = ct;
// 	i = -1;
// 	pouet = (char *)c;
// 	while (pouet[++i])
// 		if (pouet[i] == 'o')
// 			pouet[i] = 'a';
// 	return (c);
// }

// void    ft_del(void *content)
// {
// 	free(content);
// }

// int main(int argc, const char *argv[])
// {
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	t_list		*list;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");

// 	elem = ft_lstnewone(str);
// 	elem2 = ft_lstnewone(str2);
// 	elem3 = ft_lstnewone(str3);
// 	elem4 = ft_lstnewone(str4);
// 	alarm(5);
// 	if (!elem || !elem2 || !elem3 || !elem4)
// 		return (0);
// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	if (1)
// 	{
// 		if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
// 			return (0);
// 		if (list == elem)
// 			write(1, "A new list is not returned\n", 27);
// 		int i;
// 		i = 0;
// 		ft_print_result(list);
// 		while (list->next)
// 		{
// 			list = list->next;
// 			ft_print_result(list);
// 			i++;
// 		}
// 	}
// 	return (0);
// }
