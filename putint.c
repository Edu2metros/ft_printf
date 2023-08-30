/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:16 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 15:58:38 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int nbr)
{
	int size;
	size = 0;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(2);
		ft_putnbr(147483648);
		size++;
	}
	else if (nbr >= 0 && nbr < 10)
	{
		ft_putchar(nbr + '0');
		size++;
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
		size++;
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nbr * -1);
		size++;
	}
	return(size);
}
#include <stdio.h>
int main(void)
{
	printf("\n%i\n", ft_putnbr(34345));
}