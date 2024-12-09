/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:58:09 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:56:00 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			convert_c;

	convert_c = (char) c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == convert_c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == convert_c)
		return ((char *) &s[i]);
	return (NULL);
}
/*int main()
{
    // Teste 1: Encontrar o último 'o' na string
    const char *str1 = "Hello, world!";
    char *result1 = ft_strrchr(str1, 'o');
    printf("Teste 1: ft_strrchr(%s, 'o') = %s\n", str1, result1);

    return 0;
}

*/