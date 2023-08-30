/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 13:40:12 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format. */
#include "printf.h"
#include <stdio.h>

size_t ft_hexa_min(int number)
{
	size_t size = 0;
	if(number >= 0 && number <= 9)
		ft_putchar(number + '0');
	else if(number >= 10 && number <= 15)
	{
		ft_putchar(number + 'a');
		size++;
	}
}
int	main(void)
{
int number = 5;
int number2 = 15;
ft_hexa_min(number2);
}