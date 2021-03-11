/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:21:33 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:01:32 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_p_write(t_spcfctr *spcfctr, unsigned long arg, int count_zeros)
{
	int		count;

	count = 0;
	if ((spcfctr->flg & FLG_PRCSN) && (spcfctr->prcsn == 0)
											&& (arg == 0))
	{
		count += ft_putstr_fd("0x", 1);
		return (count);
	}
	count += ft_putstr_fd("0x", 1);
	while (count_zeros-- > 0)
		count += ft_putchar_fd('0', 1);
	count += ft_px16_putnbr_fd(arg, 1, 'a');
	return (count);
}
