/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_processor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 13:30:15 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 16:06:08 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int	ft_s_prcssr_intrnl_flg_minus(t_spcfctr *spcfctr, char *arg, char flag_value)
{
	int		done;
	int		i;

	done = 0;
	i = spcfctr->wdth - spcfctr->prcsn;
	while ((spcfctr->prcsn-- > 0 || ((spcfctr->flg & FLG_PRCSN) == FALSE))
														&& (*arg != '\0'))
	{
		done += ft_putchar_fd(*arg, 1);
		arg++;
		if ((spcfctr->flg & FLG_PRCSN) == FALSE)
			i--;
	}
	while (i-- > 0)
	{
		done += ft_putchar_fd(flag_value, 1);
	}
	return (done);
}

int	ft_s_prcssr_intrnl_flg_zero(t_spcfctr *spcfctr, char *arg, char flag_value)
{
	int		done;
	int		i;

	done = 0;
	i = spcfctr->wdth - spcfctr->prcsn;
	if ((spcfctr->flg & FLG_PRCSN) == FALSE)
		i -= (int)ft_strlen(arg);
	while (i-- > 0)
		done += ft_putchar_fd(flag_value, 1);
	while ((spcfctr->prcsn-- > 0 || ((spcfctr->flg & FLG_PRCSN) == FALSE))
														&& (*arg != '\0'))
	{
		done += ft_putchar_fd(*arg, 1);
		arg++;
	}
	return (done);
}

int	ft_s_processor(t_spcfctr *spcfctr, va_list arg_ptr)
{
	char	*arg;
	int		done;
	char	flag_value;

	arg = va_arg(arg_ptr, char*);
	done = 0;
	if (arg == NULL)
		arg = "(null)";
	flag_value = ft_cs_take_flag(spcfctr->flg);
	if (spcfctr->prcsn >= (int)ft_strlen(arg) || spcfctr->prcsn < 0)
		spcfctr->prcsn = (int)ft_strlen(arg);
	if (spcfctr->flg & FLG_MINUS)
	{
		done += ft_s_prcssr_intrnl_flg_minus(spcfctr, arg, flag_value);
	}
	else
	{
		done += ft_s_prcssr_intrnl_flg_zero(spcfctr, arg, flag_value);
	}
	return (done);
}
