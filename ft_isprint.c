/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:05:32 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:49:31 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*int main() {
    // Teste 1: Caractere imprimível (letra maiúscula)
    char c1 = 'A';
    printf("Teste 1: '%c' -> %d\n", c1, ft_isprint(c1));  // Esperado: 1

    // Teste 2: Caractere imprimível (número)
    char c2 = '7';
    printf("Teste 2: '%c' -> %d\n", c2, ft_isprint(c2));  // Esperado: 1 

    // Teste 3: Caractere imprimível (símbolo)
    char c3 = '#';
    printf("Teste 3: '%c' -> %d\n", c3, ft_isprint(c3));  // Esperado: 1 

    // Teste 4: Caractere não imprimível (controle: '\n')
    char c4 = '\n';  // Caractere de nova linha (não imprimível)
    printf("Teste 4: '%c' -> %d\n", c4, ft_isprint(c4));  // Esperado: 0 

    // Teste 5: Caractere não imprimível (controle: '\t')
    char c5 = '\t';  // Caractere de tabulação (não imprimível)
    printf("Teste 5: '%c' -> %d\n", c5, ft_isprint(c5));  // Esperado: 0 

    // Teste 6: Caractere imprimível (letra minúscula)
    char c6 = 'b';
    printf("Teste 6: '%c' -> %d\n", c6, ft_isprint(c6));  // Esperado: 1 

    // Teste 7: Caractere não imprimível (valor fora do intervalo 32-126)
    int c7 = 31;  // Caractere com valor ASCII 31 (não imprimível)
    printf("Teste 7: '%d' -> %d\n", c7, ft_isprint(c7));  // Esperado: 0 

    // Teste 8: Caractere imprimível (caractere especial)
    char c8 = ' ';  // Caractere de espaço (imprimível)
    printf("Teste 8: '%c' -> %d\n", c8, ft_isprint(c8));  // Esperado: 1 
    return 0;
}*/