/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:17:32 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/20 15:42:45 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
    char str1[0];
    int len1 = ft_strlen(str1);
    printf("Teste 1: O comprimento é: %d\n", ft_strlen(str1));

    char str2[0];
    int len2 = ft_strlen(str2);
    printf("Teste 2: O comprimento de '%s' é: %d\n", str2, len2);

    return 0;
}*/
