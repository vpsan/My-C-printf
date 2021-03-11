/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_du_write.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:59:55 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:57:20 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_du_write(t_spcfctr *spcfctr, long long arg, int count_zeros)
{
	int		count;

	count = 0;
	if ((spcfctr->flg & FLG_PRCSN) && (spcfctr->prcsn == 0)
											&& (arg == 0))
		return (count);
	if (arg < 0)
	{
		count += ft_putchar_fd('-', 1);
		arg = -1 * arg;
	}
	while (count_zeros-- > 0)
		count += ft_putchar_fd('0', 1);
	count += ft_putnbr_fd(arg, 1);
	return (count);
}
