/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:45:53 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:54:44 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			convert_c;

	convert_c = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == convert_c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == convert_c)
		return ((char *) &s[i]);
	return (NULL);
}
/*int main()
{

    char str1[] = "Hello, world!";
    char *result1 = ft_strchr(str1, 'o');
    if (result1)
        printf("Teste 1: Encontrado '%c' em: %s\n", *result1, result1);
    else
        printf("Teste 1: Caractere não encontrado\n");

    return 0;
}*/