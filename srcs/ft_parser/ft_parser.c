/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:29:46 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 12:43:21 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

int		ft_parser(char *str, t_spcfctr *spcfctr, va_list arg_ptr)
{
	int	spec_len;

	spec_len = 0;
	ft_creat_spcfctr(spcfctr);
	if (*str != '\0')
	{
		spec_len += ft_get_flg(&str, spcfctr);
		spec_len += ft_get_wdth(&str, spcfctr, arg_ptr);
		spec_len += ft_get_prcsn(&str, spcfctr, arg_ptr);
		spec_len += ft_get_type(&str, spcfctr);
	}
	return (spec_len);
}
