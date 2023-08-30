/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:16 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 17:33:25 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr(int nbr)
{
    int size = 0;

    if (nbr < 0)
    {
        size += ft_putchar('-');
        nbr = -nbr;
    }

    if (nbr < 10)
    {
        size += ft_putchar(nbr + '0');
    }
    else
    {
        size += ft_putnbr(nbr / 10);
        size += ft_putchar(nbr % 10 + '0');
    }

    return size;
}

int main(void)
{
    int size;

    printf("\n%i\n", 92494754);
    size = ft_putnbr(92494754);
    printf("\n%i\n", size);
}

