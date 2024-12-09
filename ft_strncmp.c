/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:01:47 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 12:18:24 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    char str1[] = "hello world";
    char *result1 = ft_strmapi(str1, to_uppercase);
    if (result1)
    {
        printf("Teste 1: %s\n", result1);  // Esperado: "HELLO WORLD"
        free(result1);  // Liberar a memória alocada
    }
    else
    {
        printf("Teste 1: Erro ao alocar memória\n");
    }

   
    return 0;
}*/
