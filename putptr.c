/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:35:08 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 19:26:00 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	size;

	size = 0;
	if (!ptr)
	{
		size += ft_putstr("(nil)");
		return (size);
	}
	size += ft_putstr("0x");
	size += ft_puthex((unsigned long int)ptr, 'x');
	return (size);
}

int main(void)
{
	int size = ft_putptr(2403);
	printf("\n%i\n", size);
	size = printf("%p\n", 2403);
	printf("%i\n", size);
}