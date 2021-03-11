/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dupx_take_zeros.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:59:09 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:06:20 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_dupx_take_zeros(t_spcfctr *spcfctr, long long arg, int len_nb)
{
	int		count_zeros;

	count_zeros = 0;
	if (arg >= 0)
	{
		if (len_nb < spcfctr->prcsn)
			count_zeros = (spcfctr->prcsn - len_nb);
	}
	else if (arg < 0)
	{
		if ((len_nb - 1) < spcfctr->prcsn)
			count_zeros = (spcfctr->prcsn - (len_nb - 1));
	}
	if ((spcfctr->flg & FLG_ZERO) && ((spcfctr->flg & FLG_PRCSN) == FALSE))
	{
		if (len_nb < spcfctr->wdth)
			count_zeros = (spcfctr->wdth - len_nb);
	}
	return (count_zeros);
}
