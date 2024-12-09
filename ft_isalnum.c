/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:53:25 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:46:09 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*int main() {
    // Teste 1: Caractere alfanumérico
    char c1 = 'A';
    printf("Teste 1: '%c' -> %d\n", c1, ft_isalnum(c1));  // Esperado: 1 

    // Teste 2: Caractere alfanumérico
    char c2 = '5';
    printf("Teste 2: '%c' -> %d\n", c2, ft_isalnum(c2));  // Esperado: 1 

    // Teste 3: Caractere não alfanumérico
    char c3 = '#';
    printf("Teste 3: '%c' -> %d\n", c3, ft_isalnum(c3));  // Esperado: 0 

    // Teste 4: Caractere minúsculo
    char c4 = 'b';
    printf("Teste 4: '%c' -> %d\n", c4, ft_isalnum(c4));  // Esperado: 1 

    // Teste 5: Caractere de espaço
    char c5 = ' ';
    printf("Teste 5: '%c' -> %d\n", c5, ft_isalnum(c5));  // Esperado: 0 

    // Teste 6: Caractere especial
    char c6 = '@';
    printf("Teste 6: '%c' -> %d\n", c6, ft_isalnum(c6));  // Esperado: 0 
    // Teste 7: Caractere numérico
    char c7 = '9';
    printf("Teste 7: '%c' -> %d\n", c7, ft_isalnum(c7));  // Esperado: 1 

    return 0;
}*/