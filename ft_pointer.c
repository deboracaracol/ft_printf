/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:32:21 by dcaracol          #+#    #+#             */
/*   Updated: 2023/05/08 14:48:51 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long val, unsigned long base, char format)
{
	int	counter;

	counter = 0;
	if (val == 0)
	{
		counter = write(1, "(nil)", 5);
		return (counter);
	}
	return (ft_putstr("0x") + ft_putnbr_t(val, base, format));
}
