/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:07:09 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:54:18 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	while (n > 0)
	{
		*temp_s = (unsigned char)c;
		temp_s++;
		n--;
	}
	return (s);
}
/*int main()
{
    // Teste 1: Preencher uma string com um caractere
    char str1[20] = "Exemplo de memset";
    ft_memset(str1, '*', 7);  // Preenche os primeiros 7 caracteres com '*'
    printf("Teste 1: %s\n", str1);  // Esperado: "******* de memset"

   
    return 0;
}*/