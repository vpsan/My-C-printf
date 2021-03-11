/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_prcsn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 04:26:39 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:07:17 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

void	ft_get_prcsn_internal(t_spcfctr **spcfctr, va_list arg_ptr)
{
	(*spcfctr)->prcsn = va_arg(arg_ptr, int);
	if ((*spcfctr)->prcsn < 0)
	{
		(*spcfctr)->prcsn = 0;
		(*spcfctr)->flg = ((*spcfctr)->flg & (~FLG_PRCSN));
	}
}

int		ft_get_prcsn(char **str, t_spcfctr *spcfctr, va_list arg_ptr)
{
	int	count;

	count = 0;
	if (**str == '.')
	{
		spcfctr->flg = spcfctr->flg | FLG_PRCSN;
		(*str)++;
		count++;
		if (**str == '*')
		{
			ft_get_prcsn_internal(&spcfctr, arg_ptr);
			count++;
			(*str)++;
		}
		else if (ft_isdigit(**str))
		{
			spcfctr->prcsn = ft_atoi(*str);
			while (ft_isdigit(**str))
			{
				count++;
				(*str)++;
			}
		}
	}
	return (count);
}
