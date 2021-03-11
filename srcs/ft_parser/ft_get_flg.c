/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:46:45 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:15:04 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

/*
**	In ft_get_flag_internal:
**	First condition for "-0"
**	Second condition for "0-"
*/

int		ft_get_flag_internal(char **str, t_spcfctr **strct_spcfctr)
{
	int	count;

	count = 0;
	if (**str == '0' && ((*strct_spcfctr)->flg == FLG_NONE))
	{
		(*strct_spcfctr)->flg = ((*strct_spcfctr)->flg | FLG_ZERO);
		count++;
	}
	else if (**str == '-' && ((*strct_spcfctr)->flg | FLG_ZERO))
	{
		(*strct_spcfctr)->flg = ((*strct_spcfctr)->flg & FLG_NONE);
		(*strct_spcfctr)->flg = ((*strct_spcfctr)->flg | FLG_MINUS);
		count++;
	}
	else if (**str == '-')
	{
		(*strct_spcfctr)->flg = ((*strct_spcfctr)->flg & FLG_NONE);
		(*strct_spcfctr)->flg = ((*strct_spcfctr)->flg | FLG_MINUS);
		count++;
	}
	else
	{
		count++;
	}
	return (count);
}

int		ft_get_flg(char **str, t_spcfctr *spcfctr)
{
	int count;

	count = 0;
	while (**str == '-' || **str == '0')
	{
		count += ft_get_flag_internal(str, &spcfctr);
		(*str)++;
	}
	return (count);
}
