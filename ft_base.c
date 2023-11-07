/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:34:33 by dcaracol          #+#    #+#             */
/*   Updated: 2023/05/08 12:00:38 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_base(char format, int base)
{
	char	*str;

	if ((base == 10) && ((format == 'd') || (format == 'i')))
		str = "0123456789";
	else if ((base == 16) && ((format == 'p') || (format == 'x')))
		str = "0123456789abcdef";
	else if ((base == 16) && ((format == 'X')))
		str = "0123456789ABCDEF";
	else if ((base == 10) && ((format == 'u')))
		str = "0123456789";
	else
		return (0);
	return (str);
}
