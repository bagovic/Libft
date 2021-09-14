/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:46:29 by bagovic           #+#    #+#             */
/*   Updated: 2021/09/14 16:30:43 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newhead;
	t_list	*newtmp;
	t_list	*deltmp;

	newhead = NULL;
	while (lst != NULL)
	{
		newtmp = ft_lstnew(f(lst->content));
		if (newtmp == NULL)
			return (NULL);
		if (newhead == NULL)
			newhead = newtmp;
		else
			ft_lstlast(newhead)->next = newtmp;
		if (del != ((void *)0))
		{
			deltmp = lst;
			lst = lst->next;
			del(deltmp->content);
			free(lst);
		}
		else
			lst = lst->next;
	}
	return (newhead);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>

t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void    ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*list;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnewone(str);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	if (1)
	{
		if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
			return (0);
		if (list == elem)
			write(1, "A new list is not returned\n", 27);
		int i;
		i = 0;
		while (list->next)
		{
			list = list->next;
			puts(list->content);
			i++;
		}
	}
	return (0);
}

// //////////////////////////////
// //        ft_lstmap          //
// //////////////////////////////

// #include <string.h>
// void *		lstmap_f(void *content) {
// 	(void)content;
// 	return ("OK !");
// }

// int main()
// {
// 	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
// 	t_list *ret;

// 	l->next = ft_lstnew(strdup("ss"));
// 	l->next->next = ft_lstnew(strdup("-_-"));
// 	ret = ft_lstmap(l, lstmap_f, ((void *)0));
// 	if (strcmp(ret->content, "OK !"))
// 		return (1);
// }