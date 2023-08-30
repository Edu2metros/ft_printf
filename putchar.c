/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:01 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 16:17:59 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_putchar(char c)
{
	size_t	size;

	size = 0;
	write(1, &c, 1);
	size++;
	return (size);
}

int main(void)
{
	int size;
	
	size = ft_putchar('o');
	printf("\n%i\n", size);
}