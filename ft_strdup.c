/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:08:00 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:20:15 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;
	int		size;

	i = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	dest = (char *) malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < size)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
    char str1[] = "Hello, world!";
    char *copy1 = ft_strdup(str1);
    if (copy1)
    {
        printf("Teste 1: %s\n", copy1);  // Esperado: "Hello, world!"
        free(copy1);  // Liberar a memória alocada
    }
    else
    {
        printf("Teste 1: Erro ao alocar memória\n");
    }

    return 0;
}*/