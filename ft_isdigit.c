/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:50:23 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:48:27 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*int main() {
    // Teste 1: Caractere numérico (digito)
    char c1 = '7';
    printf("Teste 1: '%c' -> %d\n", c1, ft_isdigit(c1));  // Esperado: 1 

    // Teste 2: Caractere numérico (digito)
    char c2 = '0';
    printf("Teste 2: '%c' -> %d\n", c2, ft_isdigit(c2));  // Esperado: 1 

    // Teste 3: Caractere não numérico (letra maiúscula)
    char c3 = 'A';
    printf("Teste 3: '%c' -> %d\n", c3, ft_isdigit(c3));  // Esperado: 0 

    // Teste 4: Caractere não numérico (símbolo)
    char c4 = '#';
    printf("Teste 4: '%c' -> %d\n", c4, ft_isdigit(c4));  // Esperado: 0 

    // Teste 5: Caractere não numérico (espaço)
    char c5 = ' ';
    printf("Teste 5: '%c' -> %d\n", c5, ft_isdigit(c5));  // Esperado: 0 

    // Teste 6: Caractere numérico (dígito)
    char c6 = '9';
    printf("Teste 6: '%c' -> %d\n", c6, ft_isdigit(c6));  // Esperado: 1 

    // Teste 7: Caractere não numérico (letra minúscula)
    char c7 = 'z';
    printf("Teste 7: '%c' -> %d\n", c7, ft_isdigit(c7));  // Esperado: 0 
    return 0;
}*/