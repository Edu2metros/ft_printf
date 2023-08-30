/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 19:51:05 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format. */
#include "printf.h"
#include <stdio.h>

int	ft_puthex(unsigned int nbr, char x)
{
	int size;
	char c;

	size = 0;
	if (nbr / 16 > 0)
		size += ft_puthex(nbr / 16, x);
	if(nbr % 16 > 10)
	{
		if(x == 'x')
			size += ft_putchar(nbr % 16 + 'a');
		else
			size += ft_putchar(nbr % 16 + 'A');
	}
	return (size);
}

int main(void)
{
	ft_puthex(35, 'x');
}