/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:22 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/08/30 16:22:14 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_putstr(char *str)
{
	size_t	size;

	size = 0;
	while (*str)
	{
		ft_putchar(*str);
		str++;
		size++;
	}
	return (size);
}
