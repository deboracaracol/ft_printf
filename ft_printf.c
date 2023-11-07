/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:28:00 by dcaracol          #+#    #+#             */
/*   Updated: 2023/06/20 14:34:50 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_pointer(unsigned long val, unsigned long base, char format);

int	write_formats(va_list args, char format)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, unsigned long), 16, format));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int), 10, format));
	else if (format == 'u')
		return (ft_putnbr_t(va_arg(args, unsigned int), 10, format));
	else if (format == 'x')
		return (ft_putnbr_t(va_arg(args, unsigned int), 16, format));
	else if (format == 'X')
		return (ft_putnbr_t(va_arg(args, unsigned int), 16, format));
	else if (format == '%')
		return (counter += ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		counter;
	va_list	args;

	counter = 0;
	va_start(args, format);
	if (format == 0)
		return (0);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			counter += write_formats(args, *format);
		}
		else
			counter += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (counter);
}
