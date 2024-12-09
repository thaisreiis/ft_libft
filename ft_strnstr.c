/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:06:05 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:57:32 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *) big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    const char *big1 = "Hello, world!";
    const char *little1 = "world";
    char *result1 = ft_strnstr(big1, little1, 13);
    printf("Teste 1: ft_strnstr(%s, %s, 13) = %s\n", big1, little1, result1);

  
    return 0;
}*/