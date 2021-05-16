/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:46:10 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/16 19:20:36 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char input, int fd)
{
	write(fd, &input, 1);
}

void	ft_putnbr(int input, int fd)
{
	unsigned int	nbr;

	if (input < 0)
	{
		nbr = (unsigned int)(-1 * input);
		ft_putchar('-', fd);
	}
	else
		nbr = (unsigned int)input;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, fd);
		ft_putnbr(nbr % 10, fd);
	}
	else
		ft_putchar(nbr + '0', fd);
}

void	ft_putnbrTest(void)
{
	ft_putnbr(200000, 1);
}
