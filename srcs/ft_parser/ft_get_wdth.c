/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_wdth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:46:19 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:54:44 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

int		ft_get_wdth(char **str, t_spcfctr *spcfctr, va_list arg_ptr)
{
	int	count;

	count = 0;
	if (**str == '*' || (**str >= '1' && **str <= '9'))
	{
		spcfctr->flg = spcfctr->flg | FLG_WDTH;
		if (**str == '*')
		{
			spcfctr->wdth = va_arg(arg_ptr, int);
			if (spcfctr->wdth < 0)
			{
				spcfctr->wdth = (-1) * spcfctr->wdth;
				spcfctr->flg = (spcfctr->flg & FLG_NONE);
				spcfctr->flg = (spcfctr->flg | FLG_MINUS);
			}
			count = 1;
		}
		else if (ft_isdigit(**str))
		{
			spcfctr->wdth = ft_atoi(*str);
			count += ft_nbrlen(spcfctr->wdth);
		}
		(*str) += count;
	}
	return (count);
}
