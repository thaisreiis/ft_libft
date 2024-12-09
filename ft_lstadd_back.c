/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:35:33 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/20 15:50:10 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_node = ft_lstlast(*lst);
			last_node->next = new;
		}
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

    ft_lstadd_back(&lst, node1);  // Adiciona "1"
    ft_lstadd_back(&lst, node2);  // Adiciona "2"
    ft_lstadd_back(&lst, node3);  // Adiciona "3"

    // Imprimindo a lista
    printf("Lista: ");
    ft_lstprint(lst);  // Esperado: "1 -> 2 -> 3 -> NULL"

    return 0;
}
*/
