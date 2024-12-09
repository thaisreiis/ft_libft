/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:51:53 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:45:47 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	total_size;

	total_size = nmemb * size;
	if (size && ((total_size / size) != nmemb))
		return (NULL);
	result = malloc(total_size);
	if (!result)
		return (NULL);
	ft_bzero(result, total_size);
	return (result);
}
/*
int main() {

     // Teste 1: Alocar um vetor de inteiros com 5 elementos
    int *arr1 = (int *)ft_calloc(5, sizeof(int));  
    if (arr1) {
        printf("Teste 1: Alocar 5 inteiros (valores esperados: 0)\n");
        for (size_t i = 0; i < 5; i++) {
            printf("%d ", arr1[i]);  // Deve imprimir "0 0 0 0 0"
        }
        printf("\n");
        free(arr1);  // Liberar a memória
    }

    // Teste 2: Alocar um vetor de floats com 3 elementos
    float *arr2 = (float *)ft_calloc(3, sizeof(float));  
    if (arr2) {
        printf("Teste 2: Alocar 3 floats (valores esperados: 0.0)\n");
        for (size_t i = 0; i < 3; i++) {
            printf("%.2f ", arr2[i]);  // Deve imprimir "0.00 0.00 0.00"
        }
        printf("\n");
        free(arr2);  // Liberar a memória
    }

    return 0;
 
}
*/
