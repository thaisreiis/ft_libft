/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:02:19 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 12:32:15 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	convert_c;
	unsigned char	*convert_s;
	size_t			i;

	convert_c = (unsigned char) c;
	convert_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (convert_s[i] == convert_c)
			return ((void *) &convert_s[i]);
		i++;
	}
	return (NULL);
}
/*int main()
{
     char str[] = "Exemplo de teste";
	 
    // Teste 1: Procurando o caractere 'e'
    char *result1 = ft_memchr(str, 'e', 15);
    if (result1)
        printf("Teste 1: Caractere encontrado: %c\n", *result1); 
    else
        printf("Teste 1: Caractere não encontrado\n");

    // Teste 2: Procurando o caractere 'z' (não presente)
    char *result2 = ft_memchr(str, 'z', 15);
    if (result2)
        printf("Teste 2: Caractere encontrado: %c\n", *result2);
    else
        printf("Teste 2: Caractere não encontrado\n");  

    // Teste 3: Procurando o caractere 'p' na primeira posição
    char *result3 = ft_memchr(str, 'p', 15);
    if (result3)
        printf("Teste 3: Caractere encontrado: %c\n", *result3); 
    else
        printf("Teste 3: Caractere não encontrado\n");

    return 0;
}*/
