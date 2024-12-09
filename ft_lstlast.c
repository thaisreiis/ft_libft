/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:27:40 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 08:59:11 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
/*void ft_lstprint(t_list *lst)
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
    t_list *lst = ft_lstnew("Primeiro");
    t_list *node2 = ft_lstnew("Segundo");
    t_list *node3 = ft_lstnew("Terceiro");

    lst->next = node2;
    node2->next = node3;

    t_list *last = ft_lstlast(lst);  // Obtém o último nó
    printf("Último nó: %s\n", (char *)last->content);  // Esperado: "Terceiro"

    return 0;
}*/