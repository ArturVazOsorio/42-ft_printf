/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 04:10:57 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/24 19:52:31 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_handle(char c, va_list *args)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putnbr_uns(va_arg(*args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(*args, unsigned int), 'x'));
	else if (c == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), 'X'));
	else if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		ret;

	va_start(args, format);
	count = 0;
	ret = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				break ;
			ret = ft_format_handle(*format, &args);
		}
		else
			ret = write(1, format, 1);
		if (ret == -1)
			return (va_end(args), -1);
		count += ret;
		format++;
	}
	va_end(args);
	return (count);
}
