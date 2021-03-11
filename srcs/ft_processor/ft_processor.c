/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:50:17 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 12:43:57 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_processor(t_spcfctr *spcfctr, va_list arg_ptr)
{
	if (spcfctr->type == 'c')
		return (ft_c_processor(spcfctr, arg_ptr));
	else if (spcfctr->type == 's')
		return (ft_s_processor(spcfctr, arg_ptr));
	else if (spcfctr->type == 'p')
		return (ft_p_processor(spcfctr, arg_ptr));
	else if (spcfctr->type == 'd' || spcfctr->type == 'i')
		return (ft_d_processor(spcfctr, arg_ptr));
	else if (spcfctr->type == 'u')
		return (ft_u_processor(spcfctr, arg_ptr));
	else if (spcfctr->type == 'x' || spcfctr->type == 'X')
		return (ft_x_processor(spcfctr, arg_ptr));
	else if (spcfctr->type == '%')
		return (ft_prcnt_processor(spcfctr));
	return (0);
}
