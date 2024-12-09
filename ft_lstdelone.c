/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:41:08 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 08:57:17 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
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

    ft_lstdelone(node2, ft_del);  // Deleta o nó "Segundo"

    ft_lstprint(lst);  // Esperado: "Primeiro -> Terceiro -> NULL"

    return 0;
}
*/