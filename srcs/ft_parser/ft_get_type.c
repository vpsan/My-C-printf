/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:21:42 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 12:43:17 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

static int	ft_istype(int value)
{
	if (value == 'c' || value == 's' ||
		value == 'p' || value == 'd' ||
		value == 'i' || value == 'u' ||
		value == 'x' || value == 'X' ||
		value == '%')
		return (TRUE);
	else
		return (FALSE);
}

int			ft_get_type(char **str, t_spcfctr *spcfctr)
{
	if (ft_istype(**str))
	{
		spcfctr->type = **str;
		(*str)++;
		return (1);
	}
	else
	{
		(*str)++;
	}
	return (0);
}
