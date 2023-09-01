/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:16 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 20:21:30 by eddos-sa         ###   ########.fr       */
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
		size += 1;
		size += ft_putnbr(2);
		size += ft_putnbr(147483648);
	}
	else if (nbr >= 0 && nbr < 10)
		size += ft_putchar(nbr + '0');
	else if (nbr > 9)
	{
		size += ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
		size += 1;
	}
	else
	{
		ft_putchar('-');
		size += 1;
		size += ft_putnbr(nbr * -1);
	}
	return (size);
}

/*
int	main(void)
{
	int size = ft_putnbr(111111111111111);
	printf("\n%i\n", size);
	size = printf("%i\n", 111111111111111);
	printf("\n%i\n", size);
} */