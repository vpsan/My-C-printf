/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px16_take_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 03:03:00 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:59:21 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_px16_take_len(t_spcfctr *spcfctr, unsigned long arg)
{
	int		len_nb;

	len_nb = 0;
	if ((spcfctr->flg & FLG_PRCSN) && (spcfctr->prcsn == 0)
											&& (arg == 0))
		return (len_nb);
	else
	{
		len_nb = 1;
		while (arg / 16)
		{
			arg = arg / 16;
			len_nb++;
		}
		return (len_nb);
	}
}
