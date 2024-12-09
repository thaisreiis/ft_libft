/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:40:42 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:46:35 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*int main() {
    // Teste 1: Caractere alfabético (letra maiúscula)
    char c1 = 'A';
    printf("Teste 1: '%c' -> %d\n", c1, ft_isalpha(c1));  // Esperado: 1 

    // Teste 2: Caractere alfabético (letra minúscula)
    char c2 = 'z';
    printf("Teste 2: '%c' -> %d\n", c2, ft_isalpha(c2));  // Esperado: 1

    // Teste 3: Caractere não alfabético (número)
    char c3 = '5';
    printf("Teste 3: '%c' -> %d\n", c3, ft_isalpha(c3));  // Esperado: 0 

    // Teste 4: Caractere não alfabético (símbolo)
    char c4 = '#';
    printf("Teste 4: '%c' -> %d\n", c4, ft_isalpha(c4));  // Esperado: 0 

    // Teste 5: Caractere não alfabético (espaço)
    char c5 = ' ';
    printf("Teste 5: '%c' -> %d\n", c5, ft_isalpha(c5));  // Esperado: 0 

    // Teste 6: Caractere alfabético (letra minúscula)
    char c6 = 'b';
    printf("Teste 6: '%c' -> %d\n", c6, ft_isalpha(c6));  // Esperado: 1 

    // Teste 7: Caractere não alfabético (caractere de controle)
    char c7 = '\n';
    printf("Teste 7: '%c' -> %d\n", c7, ft_isalpha(c7));  // Esperado: 0

    return 0;
}*/