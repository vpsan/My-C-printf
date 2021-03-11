/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:44:33 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 12:45:02 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *frmt, ...)
{
	va_list		arg_ptr;
	int			done;

	va_start(arg_ptr, frmt);
	done = ft_printf_internal(frmt, arg_ptr);
	va_end(arg_ptr);
	return (done);
}

int			ft_printf_internal(const char *frmt, va_list arg_prt)
{
	t_spcfctr	spcfctr;
	char		*str;
	int			done;

	done = 0;
	if (frmt == NULL)
		return (done);
	str = (char*)frmt;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			str += ft_parser(str, &spcfctr, arg_prt);
			done += ft_processor(&spcfctr, arg_prt);
		}
		else
		{
			write(1, str, 1);
			done++;
			str++;
		}
	}
	return (done);
}
