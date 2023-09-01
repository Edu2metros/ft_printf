/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:39 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 17:44:43 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t	ft_putchar(char c);
char	*ft_itoa(int n);
size_t	ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_unsint(unsigned int nbr);
int		ft_puthex(unsigned int nbr, char x);
int		ft_putptr(void *ptr);

#endif