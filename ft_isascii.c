/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:00:31 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:47:31 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*int main() {
    // Teste 1: Caractere ASCII (letra maiúscula)
    char c1 = 'A';
    printf("Teste 1: '%c' -> %d\n", c1, ft_isascii(c1));  // Esperado: 1 

    // Teste 2: Caractere ASCII (número)
    char c2 = '5';
    printf("Teste 2: '%c' -> %d\n", c2, ft_isascii(c2));  // Esperado: 1 

    // Teste 3: Caractere ASCII (símbolo)
    char c3 = '@';
    printf("Teste 3: '%c' -> %d\n", c3, ft_isascii(c3));  // Esperado: 1 

    // Teste 4: Caractere não ASCII (valor fora do intervalo 0-127)
    int c4 = 200;  // Valor fora do intervalo ASCII
    printf("Teste 4: '%d' -> %d\n", c4, ft_isascii(c4));  // Esperado: 0 

    // Teste 5: Caractere ASCII (letra minúscula)
    char c5 = 'z';
    printf("Teste 5: '%c' -> %d\n", c5, ft_isascii(c5));  // Esperado: 1 

    // Teste 6: Caractere de controle (ASCII 0)
    char c6 = '\0';  // Caractere de controle (ASCII 0)
    printf("Teste 6: '%c' -> %d\n", c6, ft_isascii(c6));  // Esperado: 1 

    // Teste 7: Caractere fora do intervalo ASCII
    int c7 = 128;  // Valor fora do intervalo ASCII
    printf("Teste 7: '%d' -> %d\n", c7, ft_isascii(c7));  // Esperado: 0

    return 0;
}*/