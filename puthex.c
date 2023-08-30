/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 19:39:58 by eddos-sa         ###   ########.fr       */
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

	return (size);
}
