/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_du_take_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:58:33 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:57:00 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_du_take_len(t_spcfctr *spcfctr, long long arg)
{
	int		len_nb;

	len_nb = 0;
	if ((spcfctr->flg & FLG_PRCSN) && (spcfctr->prcsn == 0)
											&& (arg == 0))
		return (len_nb);
	else
		return (ft_nbrlen(arg));
}
