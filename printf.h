/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:45:39 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 15:26:13 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_putchar(char c);
char	*ft_itoa(int n);
size_t	ft_putstr(char *str);
int		ft_putnbr(int nbr);
int	ft_putunsignednbr(unsigned int nbr);
int		ft_puthex(unsigned int nbr, char x);

#endif