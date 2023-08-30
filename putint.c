/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:16 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 16:55:00 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/* • %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
 */
size_t	ft_putchar(char c)
{
	size_t	size;

	size = 0;
	write(1, &c, 1);
	size++;
	return (size);
}
int	ft_putnbr(int nbr)
{
	int	size;

	size = 0;
	if (nbr >= 0 && nbr < 10)
	{
		size = ft_putchar(nbr + '0');
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		size = ft_putchar(nbr % 10 + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nbr * -1);
		size++;
	}
	return (size);
}

int	main(void)
{
	int	size;

	printf("\n%i\n", -87);
	size = ft_putnbr(-87);
	printf("\n%i\n", size);
}
