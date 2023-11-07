/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:15:57 by dcaracol          #+#    #+#             */
/*   Updated: 2023/05/08 14:48:02 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_t(unsigned long val, unsigned long base, char format)
{
	char		*str;
	int			counter;

	counter = 0;
	str = ft_base(format, base);
	if (val >= base)
		counter += ft_putnbr_t(val / base, base, format);
	counter += ft_putchar(str[val % base]);
	return (counter);
}
