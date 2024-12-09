/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:13:59 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/22 10:21:03 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	size_s;

	if (s == NULL)
		return (NULL);
	size_s = ft_strlen(s);
	if (start >= size_s)
		return (ft_strdup(""));
	if (len > size_s - start)
		len = size_s - start;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
     int count = 0;

    char **result = ft_split("xxxxxxxxhello!", 'x');

    
    while (result[count] != NULL) {
        printf("Array[%d]: %s\n", count, result[count]);
        count++;
    }


    free(result);


    return 0;
}*/