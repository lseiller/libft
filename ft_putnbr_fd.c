/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:55:57 by lseiller          #+#    #+#             */
/*   Updated: 2021/12/05 15:44:27 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar('-', fd);
	}
	else
		nb = n;
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar(nb % 10 + '0', fd);
}
