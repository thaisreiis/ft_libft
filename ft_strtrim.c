/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:35:31 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 10:00:42 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_end_index(char const *s1, char const *set)
{
	int	i;
	int	end_i;

	end_i = ft_strlen(s1) - 1;
	i = 0;
	while (set[i])
	{
		if (s1[end_i] == set[i] && end_i != 0)
		{
			end_i--;
			i = 0;
		}
		else
			i++;
	}
	return (end_i);
}

static int	ft_start_index(char const *s1, char const *set)
{
	int	i;
	int	start_i;

	i = 0;
	start_i = 0;
	while (set[i])
	{
		if (s1[start_i] == set[i])
		{
			start_i++;
			i = 0;
		}
		else
			i++;
	}
	return (start_i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*temp;
	int		start_i;
	int		end_i;

	result = NULL;
	temp = NULL;
	start_i = ft_start_index(s1, set);
	end_i = ft_end_index(s1, set);
	if (start_i > end_i)
		return (ft_strdup(""));
	temp = (char *)malloc((end_i - start_i + 2) * sizeof(char));
	if (!temp)
		return (NULL);
	result = temp;
	while (end_i - start_i + 1 > 0)
	{
		*temp = s1[start_i];
		temp++;
		start_i++;
	}
	*temp = 0;
	return (result);
}
/*
int main()
{
    // Teste 1: Remover espaços no início e no final
    const char *str1 = "  Hello, world!  ";
    const char *set1 = " ";
    char *result1 = ft_strtrim(str1, set1);
    printf("Teste 1: '%s'\n", result1);  // Esperado: "Hello, world!"
    free(result1);  // Lembre-se de liberar a memória

    // Teste 2: Remover caracteres específicos no início e no final
    const char *str2 = "xxHello, world!xx";
    const char *set2 = "x";
    char *result2 = ft_strtrim(str2, set2);
    printf("Teste 2: '%s'\n", result2);  // Esperado: "Hello, world!"
    free(result2);  // Lembre-se de liberar a memória


    return 0;
}*/