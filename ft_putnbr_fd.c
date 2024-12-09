/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdos-rei <tdos-rei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:29:44 by tdos-rei          #+#    #+#             */
/*   Updated: 2024/11/18 09:17:40 by tdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write (fd, "-", 1);
		write (fd, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + '0', fd);
	}
}
/*int main()
{
    // Teste 1: Escrever números inteiros no stdout (fd 1)
    ft_putnbr_fd(12345, 1);  // Esperado: "12345" na saída padrão
    write(1, "\n", 1);  // Nova linha para separar

    // Teste 2: Escrever número negativo no stdout (fd 1)
    ft_putnbr_fd(-9876, 1);  // Esperado: "-9876" na saída padrão
    write(1, "\n", 1);  // Nova linha para separar

    // Teste 3: Escrever o menor valor de int no stdout (fd 1)
    ft_putnbr_fd(-2147483648, 1);  // Esperado: "-2147483648" na saída padrão
    write(1, "\n", 1);  // Nova linha para separar

    // Teste 4: Escrever 0 no stdout (fd 1)
    ft_putnbr_fd(0, 1);  // Esperado: "0" na saída padrão
    write(1, "\n", 1);  // Nova linha para separar

    return 0;
}*/