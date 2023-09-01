/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:37:06 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 16:07:22 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list(ap);
	size_t size;
	size = 0;

	va_start(ap, str);
	if(!str)
		return(-1);
	return(size);
}

int main(void)
{
	printf("%i");
}