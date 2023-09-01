/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:16 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 20:10:15 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	size;

	size = 0;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		size++;
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		size++;
	}
	if (nbr >= 10)
		size += ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
	size++;
	return (size);
}
