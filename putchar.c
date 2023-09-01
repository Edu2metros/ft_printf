/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:01 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 17:47:11 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(char c)
{
	size_t	size;

	size = 0;
	write(1, &c, 1);
	size++;
	return (size);
}

int	put_percent(char c)
{
	int	size;

	size = ft_putchar(c);
	return (size);
}
