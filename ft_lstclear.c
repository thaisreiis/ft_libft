/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:43:49 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 08:56:33 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	if (lst && del)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = temp;
		}
	}
	*lst = NULL;
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
    t_list *lst = NULL;

    t_list *node1 = ft_lstnew("1");
    t_list *node2 = ft_lstnew("2");
    t_list *node3 = ft_lstnew("3");

    lst = node1;
    node1->next = node2;
    node2->next = node3;

    ft_lstclear(&lst, ft_del);  // Libera a lista

    ft_lstprint(lst);  // Esperado: "NULL"

    return 0;
}
*/
