/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:24:24 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/22 12:02:52 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_free_array(char **substrings, int qtdArray)
{
	int	i;

	i = 0;
	while (i < qtdArray)
	{
		if (substrings[i])
			free(substrings[i]);
		i++;
	}
	free(substrings);
}

static size_t	ft_len_substring(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s == c && *s)
		s++;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**substrings;
	int		i;

	substrings = (char **)ft_calloc((ft_countword(s, c) + 1), sizeof(char *));
	if (!s || !substrings)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			substrings[i] = ft_substr(s, 0, ft_len_substring(s, c));
			if (!substrings[i])
			{
				ft_free_array(substrings, i);
				return (NULL);
			}
			i++;
			s += ft_len_substring(s, c);
		}
		else
			s++;
	}
	substrings[i] = NULL;
	return (substrings);
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
