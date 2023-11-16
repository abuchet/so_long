/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:03:39 by abuchet           #+#    #+#             */
/*   Updated: 2023/05/01 17:03:07 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	printlen;

	printlen = 0;
	if (format == 'c')
		printlen += ft_printchar(va_arg(args, int));
	else if (format == 's')
		printlen += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		printlen += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		printlen += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		printlen += ft_printui(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printlen += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		printlen += ft_printpercent();
	return (printlen);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;
	int		printlen;

	len = 0;
	printlen = 0;
	va_start(args, str);
	while (str[len])
	{
		if (str[len] == '%')
		{
			printlen += ft_formats(args, str[len + 1]);
			len++;
		}
		else
			printlen += ft_printchar(str[len]);
		len++;
	}
	va_end(args);
	return (printlen);
}
