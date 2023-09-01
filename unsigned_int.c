/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:00:37 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 15:26:03 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunsignednbr(unsigned int nbr)
{
	if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + '0');
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nbr * -1);
	}
}
