/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:28:54 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:59:48 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_x_write(t_spcfctr *spcfctr, unsigned int arg, int count_zeros)
{
	int		count;
	int		char_value;

	count = 0;
	if ((spcfctr->flg & FLG_PRCSN) && (spcfctr->prcsn == 0)
											&& (arg == 0))
		return (count);
	if (spcfctr->type == 'x')
		char_value = 'a';
	else
		char_value = 'A';
	while (count_zeros-- > 0)
		count += ft_putchar_fd('0', 1);
	count += ft_px16_putnbr_fd(arg, 1, char_value);
	return (count);
}
