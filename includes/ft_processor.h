/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:49:27 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 14:52:14 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROCESSOR_H
# define FT_PROCESSOR_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# include "ft_utils.h"
# include "strct.h"

# define TRUE 1
# define FALSE 0
# define ERROR -1

int		ft_processor(t_spcfctr *spcfctr, va_list arg_ptr);
int		ft_c_processor(t_spcfctr *spcfctr, va_list arg_ptr);
int		ft_s_processor(t_spcfctr *spcfctr, va_list arg_ptr);
int		ft_d_processor(t_spcfctr *spcfctr, va_list arg_ptr);
int		ft_u_processor(t_spcfctr *spcfctr, va_list arg_ptr);
int		ft_p_processor(t_spcfctr *spcfctr, va_list arg_ptr);
int		ft_x_processor(t_spcfctr *spcfctr, va_list arg_ptr);
int		ft_prcnt_processor(t_spcfctr *spcfctr);
int		ft_du_write(t_spcfctr *spcfctr, long long arg, int count_zeros);
int		ft_p_write(t_spcfctr *spcfctr, unsigned long arg, int count_zeros);
int		ft_x_write(t_spcfctr *spcfctr, unsigned int arg, int count_zeros);
int		ft_du_take_len(t_spcfctr *spcfctr, long long arg);
int		ft_px16_take_len(t_spcfctr *spcfctr, unsigned long arg);
int		ft_px16_putnbr_fd(unsigned long arg, int fd, int char_value);
int		ft_dupx_take_zeros(t_spcfctr *spcfctr, long long arg, int len_nb);
char	ft_cs_take_flag(unsigned char flg);

#endif
