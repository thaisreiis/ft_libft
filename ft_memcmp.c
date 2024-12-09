/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:05:01 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:53:15 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    // Teste 1: Comparando strings idênticas
    char str1[] = "abcde";
    char str2[] = "abcde";
    int result1 = ft_memcmp(str1, str2, 5);
    printf("Teste 1: Resultado = %d\n", result1);  // Esperado: 0

    // Teste 2: Comparando strings diferentes
    char str3[] = "abcde";
    char str4[] = "abCde";
    int result2 = ft_memcmp(str3, str4, 5);
    printf("Teste 2: Resultado = %d\n", result2);  // Esperado: valor negativo 

    // Teste 3: Comparando até o terceiro caractere
    char str5[] = "abcdef";
    char str6[] = "abcxyz";
    int result3 = ft_memcmp(str5, str6, 3);
    printf("Teste 3: Resultado = %d\n", result3);  // Esperado: 0 
    // Teste 4: Comparando com strings de tamanhos diferentes
    char str7[] = "abcd";
    char str8[] = "abc";
    int result4 = ft_memcmp(str7, str8, 4);
    printf("Teste 4: Resultado = %d\n", result4);  // Esperado: valor positivo
    return 0;
}
*/