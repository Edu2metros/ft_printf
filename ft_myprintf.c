/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:37:06 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 16:10:42 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	size;

	va_list(ap);
	size = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	
}

int	main(void)
{
	printf("%i");
}