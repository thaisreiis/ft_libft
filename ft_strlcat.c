/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:40:36 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/22 09:21:33 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
		return (src_len + size);
	size -= dest_len;
	ft_strlcpy(dest + dest_len, src, size);
	return (dest_len + src_len);
}
/*int main()
{
    char dest1[20] = "Hello, ";
    const char *src1 = "world!";
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("Teste 1: %s (Retorno: %zu)\n", dest1, result1);  

   
    return 0;
}
*/