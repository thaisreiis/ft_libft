/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:26:35 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/22 09:16:56 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int n)
{
	size_t	i;

	if (n == -2147483648)
		return (10);
	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	num;

	num = n;
	len = ft_len(n);
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = 0;
	while (len--)
	{
		*(str + len) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}

/*int main() {
    // Teste 1: Número positivo
    int n1 = 12345;
    char *str1 = ft_itoa(n1);
    printf("Teste 1: %d -> %s\n", n1, str1);  // Esperado: "12345"
    free(str1);

    // Teste 2: Número negativo
    int n2 = -12345;
    char *str2 = ft_itoa(n2);
    printf("Teste 2: %d -> %s\n", n2, str2);  // Esperado: "-12345"
    free(str2);

    // Teste 3: Zero
    int n3 = 0;
    char *str3 = ft_itoa(n3);
    printf("Teste 3: %d -> %s\n", n3, str3);  // Esperado: "0"
    free(str3);

    // Teste 4: Número negativo pequeno
    int n4 = -1;
    char *str4 = ft_itoa(n4);
    printf("Teste 4: %d -> %s\n", n4, str4);  // Esperado: "-1"
    free(str4);

    // Teste 5: Número positivo grande
    int n5 = 2147483647;  // Maior valor para um inteiro (int)
    char *str5 = ft_itoa(n5);
    printf("Teste 5: %d -> %s\n", n5, str5);  // Esperado: "2147483647"
    free(str5);

    // Teste 6: Número negativo grande
    int n6 = -2147483648;  // Menor valor para um inteiro (int)
    char *str6 = ft_itoa(n6);
    printf("Teste 6: %d -> %s\n", n6, str6);  // Esperado: "-2147483648"
    free(str6);

    return 0;
}*/
