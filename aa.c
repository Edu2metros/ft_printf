/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/29 18:45:34 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign. */
#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int	num;

	num = 10;
	printf("Número em decimal: %d\n", num);
	printf("Número em hexadecimal: %i\n", num);
	printf("Número em octal: %u\n", num);
}
