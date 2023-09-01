/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:37:06 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 16:41:44 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	format(const char *str, va_list ap)
{
	size_t	size;

	size = 0;
	if (*str == 'c')
		size += ft_putchar(va_arg(ap, int));
	else if(*str == 's')
		size += ft_putstr(va_arg(ap, char *));
	else if(*str == 'p')
		size += ft_putptr(va_arg(ap, void *));
	else if(*str == 'd' && *str == 'i')
		size += ft_putnbr(va_arg(ap, int));
	else if(*str == 'u')
		size += ft_unsint(va_arg(ap, int));
	else if(*str == 'x' && *str == 'X')
		size += ft_puthex(va_arg(ap, int), *str);
	else if(*str == '%')
		size += ft_putchar('%');
	return(size);
}
int	ft_printf(const char *str, ...)
{
	size_t	sizetotal;
	size_t	size;

	va_list(ap);
	sizetotal = 0;
	size = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	while (*str)
	{
		if(*str == '%')
			size += format(++str, ap);
		else
			size = ft_putchar(*str);
		sizetotal += size;
		str++;
	}
	va_end(ap);
	return(sizetotal);
}

int	main(void)
{
	ft_printf("%d\n", 23);
}