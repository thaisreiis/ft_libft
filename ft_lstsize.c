/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:58:00 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:00:39 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
    // Criando nós
    t_list *node1 = ft_lstnew("Primeiro");
    t_list *node2 = ft_lstnew("Segundo");
    t_list *node3 = ft_lstnew("Terceiro");

    // Encadeando os nós
    node1->next = node2;
    node2->next = node3;

    // Imprimindo a lista
    ft_lstprint(node1);  // Esperado: "Primeiro -> Segundo -> Terceiro -> NULL"

    // Contando o número de elementos na lista
    int size = ft_lstsize(node1);
    printf("Tamanho da lista: %d\n", size);  // Esperado: 3

    return 0;
}*/