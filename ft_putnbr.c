/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:37:04 by dcaracol          #+#    #+#             */
/*   Updated: 2023/11/07 13:13:43 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int val, int base, char format)
{
	char	*str;
	int		counter;

	counter = 0;
	str = ft_base(format, base);
	if (val == -2147483648)
		counter += write(1, "-2147483648", 11);
	else
	{
		if (val < 0)
		{
			counter += ft_putchar('-');
			val *= -1;
		}
		if (val >= base)
			counter += ft_putnbr(val / base, base, format);
		counter += ft_putchar(str[val % base]);
	}
	return (counter);
}
