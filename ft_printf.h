/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:39 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 20:28:06 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		format(const char *str, va_list ap);
size_t	ft_putchar(char c);
int		ft_puthex(unsigned int nbr, char x);
int		ft_putnbr(int nbr);
int		ft_putptr(void *ptr);
size_t	ft_putstr(char *str);
int		ft_unsint(unsigned int nbr);

#endif