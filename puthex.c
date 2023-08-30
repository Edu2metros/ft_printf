/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 20:01:44 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format. */
#include "printf.h"
#include <stdio.h>

int	ft_putnbr(int nbr)
{
	int	size;

	size = 0;
	if (nbr < 0)
	{
		size += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < 10)
	{
		size += ft_putchar(nbr + '0');
	}
	else
	{
		size += ft_putnbr(nbr / 10);
		size += ft_putchar(nbr % 10 + '0');
	}
	return (size);
}

int	ft_puthex(unsigned int nbr, char x)
{
	int		size;
	char	c;

	size = 0;
	if (nbr / 16 > 0)
		size += ft_puthex(nbr / 16, x);
	if (nbr % 16 > 10)
	{
		if (x == 'x')
			size += ft_putchar(nbr % 16 + 'a');
		else
			size += ft_putchar(nbr % 16 + 'A');
	}
	else
		size += ft_putchar(nbr % 16 + '0');
	return (size);
}

int	main(void)
{
	ft_puthex(1000, 'x');
}