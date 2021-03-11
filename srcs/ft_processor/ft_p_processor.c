/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_processor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:11:23 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:58:30 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_p_processor(t_spcfctr *spcfctr, va_list arg_ptr)
{
	unsigned long	arg;
	int				done;
	char			flag_value;
	int				count_zeros;
	int				len_p;

	arg = va_arg(arg_ptr, unsigned long);
	done = 0;
	flag_value = ft_cs_take_flag(spcfctr->flg);
	len_p = ft_px16_take_len(spcfctr, arg);
	count_zeros = ft_dupx_take_zeros(spcfctr, arg, len_p);
	if (spcfctr->flg & FLG_MINUS)
		done += ft_p_write(spcfctr, arg, count_zeros);
	while ((spcfctr->wdth - (len_p + count_zeros + 2) > 0))
	{
		done += ft_putchar_fd(' ', 1);
		spcfctr->wdth--;
	}
	if ((spcfctr->flg & FLG_MINUS) == FALSE)
		done += ft_p_write(spcfctr, arg, count_zeros);
	return (done);
}
