/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prcnt_processor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:38:30 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:06:27 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int	ft_prcnt_processor(t_spcfctr *spcfctr)
{
	char	arg;
	int		done;
	char	flag_value;

	arg = '%';
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
