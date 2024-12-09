/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:47:38 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 08:58:39 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (temp)
	{
		while (temp)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
}
/*void ft_print(void *content)
{
    printf("%s -> ", (char *)content);
}

// Função para imprimir a lista
void ft_lstprint(t_list *lst)
{
    while (lst)
    {
        ft_print(lst->content);
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

    ft_lstiter(lst, ft_print);  // Aplica ft_print a cada nó da lista

    return 0;
}*/