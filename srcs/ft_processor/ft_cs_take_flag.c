/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cs_take_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 06:32:12 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:56:28 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

char	ft_cs_take_flag(unsigned char flg)
{
	char flag_value;

	if (flg == FLG_NONE || flg & FLG_WDTH || flg & FLG_PRCSN)
		flag_value = ' ';
	if (flg & FLG_ZERO)
		flag_value = '0';
	if (flg & FLG_MINUS)
		flag_value = ' ';
	return (flag_value);
}
