/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:17 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 20:09:14 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• %p The void * pointer argument has to be printed in hexadecimal format. */
#include "printf.h"
#include <stdio.h>

int    ft_puthex(unsigned int nbr, char x)
{
    int        size;
    char    c;

    size = 0;
    if (nbr / 16 > 0)
        size += ft_puthex(nbr / 16, x);
    if (nbr % 16 > 10)
    {
        if (x == 'x')
            size += ft_putchar(nbr % 16 - 10 + 'a');
        else
            size += ft_putchar(nbr % 16 - 10 + 'A');
    }
    else
        size += ft_putchar(nbr % 16 + '0');
    return (size);
}
