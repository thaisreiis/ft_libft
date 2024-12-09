/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:47:18 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/22 12:29:16 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int main() {
// Teste 1: String representando um número positivo
    const char *str1 = "12345";
    printf("Entrada: '%s' -> Resultado: %d\n", str1, ft_atoi(str1));

    // Teste 2: String representando um número negativo
    const char *str2 = "-6789";
    printf("Entrada: '%s' -> Resultado: %d\n", str2, ft_atoi(str2));

    // Teste 3: String com espaços antes do número
    const char *str3 = "   42";
    printf("Entrada: '%s' -> Resultado: %d\n", str3, ft_atoi(str3));

    // Teste 4: String com espaços antes e depois do número
    const char *str4 = "  -456  ";
    printf("Entrada: '%s' -> Resultado: %d\n", str4, ft_atoi(str4));

    // Teste 5: String com caracteres não numéricos após o número
    const char *str5 = "789abc";
    printf("Entrada: '%s' -> Resultado: %d\n", str5, ft_atoi(str5));

    // Teste 6: String vazia
    const char *str6 = "";
    printf("Entrada: '%s' -> Resultado: %d\n", str6, ft_atoi(str6));

    // Teste 7: String com número zero
    const char *str7 = "0";
    printf("Entrada: '%s' -> Resultado: %d\n", str7, ft_atoi(str7));

    // Teste 8: String com sinais e números grandes
    const char *str8 = "-2147483648";  // Menor valor de um int em 32 bits
    printf("Entrada: '%s' -> Resultado: %d\n", str8, ft_atoi(str8));

    return 0;
}

*/
