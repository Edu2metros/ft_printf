<h1 align="center"><strong>FT_PRINTF - @42SP</strong></h1>

<p align="center">This project is to recreate the printf function in C.</p>

<p align="center"><a href="https://www.42sp.org.br/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=SP&color=000&style=for-the-badge&logo=42""></a></p>
<p align="center"><img src="https://github.com/Eduu19/42-project-badges/raw/main/badges/ft_printfe.png"> </p>
 <p align="center">Nota: <strong>100/100</strong> ✔️ </p>

<h2 align="center"><strong>What is the ft_printf?</strong></h2>

The ft_printf is a project that aims to recreate the printf function in C. The printf function is a function that is used to print formatted output. The function is declared in the stdio.h header file.

<h2 align=><strong>We need to recreate:</strong></h2>

- The following conversions: cspdiuxX%
```c
Examples:
ft_printf("%c", 'a'); -> Print a character
ft_printf("%s", "Hello, World!"); -> Print a string
ft_printf("%p", &variable); -> Print a pointer
ft_printf("%d", 42); -> Print a decimal number
ft_printf("%i", 42); -> Print a integer number
ft_printf("%u", 42); -> Print a unsigned number
ft_printf("%x", 42); -> Print a hexadecimal number in lowercase
ft_printf("%X", 42); -> Print a hexadecimal number in uppercase
ft_printf("%%"); -> Print a percent sign

Output:
a
Hello, World!
0x7ffeeb1b3b08
42
42
42
2a
2A
%
```