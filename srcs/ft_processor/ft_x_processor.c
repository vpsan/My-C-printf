/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_processor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 00:10:19 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 14:28:53 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_x_processor(t_spcfctr *spcfctr, va_list arg_ptr)
{
	unsigned int	arg;
	int				done;
	char			flag_value;
	int				count_zeros;
	int				len_x;

	arg = va_arg(arg_ptr, unsigned int);
	done = 0;
	flag_value = ft_cs_take_flag(spcfctr->flg);
	len_x = ft_px16_take_len(spcfctr, arg);
	count_zeros = ft_dupx_take_zeros(spcfctr, arg, len_x);
	if (spcfctr->flg & FLG_MINUS)
		done += ft_x_write(spcfctr, arg, count_zeros);
	while ((spcfctr->wdth - (len_x + count_zeros) > 0))
	{
		done += ft_putchar_fd(' ', 1);
		spcfctr->wdth--;
	}
	if ((spcfctr->flg & FLG_MINUS) == FALSE)
		done += ft_x_write(spcfctr, arg, count_zeros);
	return (done);
}
