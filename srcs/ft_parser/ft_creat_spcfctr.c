/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_spcfctr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:40:12 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:15:01 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

void	ft_creat_spcfctr(t_spcfctr *spcfctr)
{
	spcfctr->flg = FLG_NONE;
	spcfctr->wdth = WDTH_NONE;
	spcfctr->prcsn = PRCSN_NONE;
	spcfctr->type = TYPE_NONE;
}
