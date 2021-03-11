/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_processor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 22:37:51 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:07:05 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int	ft_c_processor(t_spcfctr *spcfctr, va_list arg_ptr)
{
	char	arg;
	int		done;
	char	flag_value;

	arg = va_arg(arg_ptr, int);
	done = 0;
	flag_value = ft_cs_take_flag(spcfctr->flg);
	if (spcfctr->flg & FLG_MINUS)
		done += ft_putchar_fd(arg, 1);
	while ((spcfctr->wdth - 1) > 0)
	{
		done += ft_putchar_fd(flag_value, 1);
		spcfctr->wdth--;
	}
	if ((spcfctr->flg & FLG_MINUS) == FALSE)
		done += ft_putchar_fd(arg, 1);
	return (done);
}
