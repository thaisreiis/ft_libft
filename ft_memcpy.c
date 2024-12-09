/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:11:15 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:11:22 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	if (dest == NULL && src == NULL)
		return (dest);
	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	while (n > 0)
	{
		*temp_dest = *temp_src;
		temp_dest++;
		temp_src++;
		n--;
	}
	return (dest);
}
/*int main()
{
    // Teste 1: Copiar uma string para outro buffer
    char src1[] = "Olá, Mundo!";
    char dest1[50];
    ft_memcpy(dest1, src1, strlen(src1) + 1);  // +1 para incluir o '\0'
    printf("Teste 1: %s\n", dest1);  // Esperado: "Olá, Mundo!"

    // Teste 2: Copiar uma parte de um array
    char src2[] = "abcdefg";
    char dest2[5];
    ft_memcpy(dest2, src2, 4);  // Copia "abcd"
    dest2[4] = '\0';  // Adiciona o terminador nulo manualmente
    printf("Teste 2: %s\n", dest2);  // Esperado: "abcd"

    // Teste 3: Copiar para o próprio destino
    char str[] = "Exemplo";
    ft_memcpy(str + 2, str, 5);  // Copia "Exemp" sobre si mesmo
    printf("Teste 3: %s\n", str);  // Esperado: "ExExemplo"

    // Teste 4: Copiar um bloco de memória (não string)
    int src3[] = {1, 2, 3, 4, 5};
    int dest3[5];
    ft_memcpy(dest3, src3, 5 * sizeof(int));
    printf("Teste 4: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", dest3[i]);  // Esperado: "1 2 3 4 5"
    printf("\n");

    return 0;
}*/