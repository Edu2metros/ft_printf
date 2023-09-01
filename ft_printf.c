/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:43:13 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/09/01 15:29:15 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_parse(const char *str, va_list ap)
{
    int offset; // Declaração de uma variável chamada 'offset' do tipo inteiro.

    offset = 0; // Inicializa a variável 'offset' com zero.
    if (*str == 'c') // Verifica se o caractere atual apontado por 'str' é 'c'.
        offset = ft_putchar(va_arg(ap, int)); // Chama a função 'ft_putchar' com o argumento obtido através de 'va_arg' usando o objeto 'ap'.
    else if (*str == 's') // Verifica se o caractere atual é 's'.
        offset = ft_putstr(va_arg(ap, char *)); // Chama a função 'ft_putstr' com o argumento obtido através de 'va_arg'.
    else if (*str == 'd' || *str == 'i') // Verifica se o caractere atual é 'd' ou 'i'.
        offset = ft_putnbr(va_arg(ap, int)); // Chama a função 'ft_putnbr' com o argumento obtido através de 'va_arg'.
    else if (*str == 'u') // Verifica se o caractere atual é 'u'.
        offset = ft_putnbr(va_arg(ap, unsigned int)); // Chama a função 'ft_putunbr' com o argumento obtido através de 'va_arg'.
    else if (*str == 'x') // Verifica se o caractere atual é 'x'.
        offset = ft_puthex(va_arg(ap, unsigned int), 0); // Chama a função 'ft_puthex' com argumentos obtidos através de 'va_arg'.
    else if (*str == 'X') // Verifica se o caractere atual é 'X'.
        offset = ft_puthex(va_arg(ap, unsigned int), 1); // Chama a função 'ft_puthex' com argumentos obtidos através de 'va_arg'.
    else if (*str == 'p') // Verifica se o caractere atual é 'p'.
        offset = putptr(va_arg(ap, void *)); // Chama a função 'ft_putptr' com o argumento obtido através de 'va_arg'.
    else if (*str == '%') // Verifica se o caractere atual é '%'.
        offset = ft_putchar('%'); // Chama a função 'ft_putchar' para imprimir o caractere '%'.
    return (offset); // Retorna o valor de 'offset', que representa o número de caracteres impressos.
}

int ft_printf(const char *str, ...)
{
    int printed; // Declaração de uma variável chamada 'printed' do tipo inteiro.
    int offset; // Declaração de uma variável chamada 'offset' do tipo inteiro.
    va_list ap; // Declaração de um objeto 'va_list' chamado 'ap'.

    if (!str) // Verifica se o ponteiro 'str' é nulo.
        return (-1); // Se for nulo, retorna -1, indicando um erro.
    va_start(ap, str); // Inicializa o objeto 'ap' para começar a processar os argumentos variáveis, com 'str' como ponto de partida.
    printed = 0; // Inicializa a variável 'printed' com zero, que será usada para contar o número total de caracteres impressos.
    offset = 0; // Inicializa a variável 'offset' com zero.
    while (*str) // Entra em um loop que percorre a string 'str' até encontrar o caractere nulo (o final da string).
    {
        if (*str == '%') // Verifica se o caractere atual é '%', indicando um especificador de formato.
            offset = ft_parse(++str, ap); // Chama a função 'ft_parse' para processar o especificador de formato, passando o ponteiro 'str' avançado e a lista de argumentos variáveis 'ap'.
        else // Se o caractere atual não for '%', significa que é um caractere regular.
            offset = ft_putchar(*str); // Chama a função 'ft_putchar' para imprimir o caractere atual.
        printed += offset; // Atualiza o contador 'printed' com o valor retornado pela função 'ft_parse' ou 'ft_putchar'.
        str++; // Avança para o próximo caractere na string.
    }
    va_end(ap); // Finaliza o processamento da lista de argumentos variáveis após o loop.
    return (printed); // Retorna o número total de caracteres impressos.
}

int main(void)
{
	ft_printf("%%\n");
}