/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:05:30 by dcaracol          #+#    #+#             */
/*   Updated: 2023/11/07 13:13:53 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (s == 0)
	{
		counter = write(1, "(null)", 6);
		return (counter);
	}
	while (*s != '\0')
	{
		counter += write(1, s, 1);
		s++;
	}
	return (counter);
}
