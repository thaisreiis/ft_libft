/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:52:34 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/20 15:44:59 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
// Função para imprimir a lista
void ft_lstprint(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *lst = NULL;

    t_list *node1 = ft_lstnew("1");
    t_list *node2 = ft_lstnew("2");
    t_list *node3 = ft_lstnew("3");

    ft_lstadd_front(&lst, node1);  // Adiciona "1" no início
    ft_lstadd_front(&lst, node2);  // Adiciona "2" no início
    ft_lstadd_front(&lst, node3);  // Adiciona "3" no início

    ft_lstprint(lst);  // Esperado: "3 -> 2 -> 1 -> NULL"

    return 0;
}*/
