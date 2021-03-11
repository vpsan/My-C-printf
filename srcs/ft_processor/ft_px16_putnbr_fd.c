/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px16_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 06:44:48 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:01:43 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_px16_putnbr_fd(unsigned long arg, int fd, int char_value)
{
	int count;

	count = 0;
	if (arg / 16)
		count += ft_px16_putnbr_fd(arg / 16, fd, char_value);
	if ((arg % 16) >= 10)
		count += ft_putchar_fd((arg % 16) - 10 + char_value, fd);
	else
		count += ft_putchar_fd((arg % 16) + '0', fd);
	return (count);
}
