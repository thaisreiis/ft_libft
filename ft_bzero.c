/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:10:41 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 08:27:43 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp_s;

	temp_s = (char *)s;
	while (n > 0)
	{
		*temp_s = 0;
		temp_s++;
		n--;
	}
}
/*int main() {

    // Teste 2: Vetor de inteiros
    int arr1[5] = {1, 2, 3, 4, 5};
    printf("Antes de ft_bzero: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    ft_bzero(arr1, 2 * sizeof(int));  // Zerando os primeiros dois inteiros
    printf("Depois de ft_bzero: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Teste 3: Vetor de floats
    float arr2[3] = {1.23, 4.56, 7.89};
    printf("Antes de ft_bzero: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", arr2[i]);
    }
    printf("\n");
    ft_bzero(arr2, 2 * sizeof(float));  // Zerando os dois primeiros elementos
    printf("Depois de ft_bzero: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", arr2[i]);
    }
    printf("\n");

    // Teste 4: Teste com vetor vazio (n = 0)
    char str2[] = "Should not change";
    printf("Antes de ft_bzero: '%s'\n", str2);
    ft_bzero(str2, 0);  // Não deve alterar nada
    printf("Depois de ft_bzero: '%s'\n", str2);

    // Teste 5: Zerando uma string de tamanho 1
    char str3[] = "A";
    printf("Antes de ft_bzero: '%s'\n", str3);
    ft_bzero(str3, 1);  // Zerando o primeiro caractere
    printf("Depois de ft_bzero: '%s'\n", str3);

    return 0;
}*/