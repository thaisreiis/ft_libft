/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:36:54 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:55:08 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}
/*int main()
{
    char dest1[20] = "";
    const char *src1 = "Hello, world!";
    size_t result1 = ft_strlcpy(dest1, src1, sizeof(dest1));
    printf("Teste 1: %s (Retorno: %zu)\n", dest1, result1); 

    return 0;
}*/