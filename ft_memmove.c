/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:35:49 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:53:43 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	while (n > 0)
	{
		if (src < dest)
			temp_dest[n - 1] = temp_src[n - 1];
		else
		{
			*temp_dest = *temp_src;
			temp_dest++;
			temp_src++;
		}
		n--;
	}
	return (dest);
}
