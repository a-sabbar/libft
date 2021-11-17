/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:45:11 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:06:02 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	if (!(lst->next))
		return (lst);
	return (ft_lstlast(lst->next));
}
/*
int main()
{
  	t_list *n1;
  	t_list *n2;
  	t_list *n3;
  	t_list *head;

    n1 = ft_lstnew("node1");
    n2 = ft_lstnew("node2");
    n3 = ft_lstnew("node3");
	n1->next = n2;
	n2->next = n3;

	head = ft_lstlast(n3);
   	printf("%s\n", head->content);
}
*/