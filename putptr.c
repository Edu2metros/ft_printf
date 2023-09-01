/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:35:08 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 16:40:18 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
