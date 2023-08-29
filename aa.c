/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/29 19:09:31 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign. */
#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int	num;
	int	*ptr;

	num = 42;
	ptr = &num;
	printf("O valor de num é: %d\n", num);
	printf("O endereço de num é: %p\n", (void *)&num);
	printf("O valor apontado por ptr é: %d\n", *ptr);
	printf("O endereço armazenado em ptr é: %p\n", (void *)ptr);
	return (0);
}
