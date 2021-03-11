/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_processor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:43:21 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:01:17 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_d_processor(t_spcfctr *spcfctr, va_list arg_ptr)
{
	int			arg;
	int			done;
	char		flag_value;
	int			count_zeros;
	int			len_d;

	arg = va_arg(arg_ptr, int);
	done = 0;
	flag_value = ft_cs_take_flag(spcfctr->flg);
	len_d = ft_du_take_len(spcfctr, arg);
	count_zeros = ft_dupx_take_zeros(spcfctr, arg, len_d);
	if (spcfctr->flg & FLG_MINUS)
		done += ft_du_write(spcfctr, arg, count_zeros);
	while ((spcfctr->wdth - (len_d + count_zeros) > 0))
	{
		done += ft_putchar_fd(' ', 1);
		spcfctr->wdth--;
	}
	if ((spcfctr->flg & FLG_MINUS) == FALSE)
		done += ft_du_write(spcfctr, arg, count_zeros);
	return (done);
}
