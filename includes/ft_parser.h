/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:08:45 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/15 20:42:53 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSER_H
# define FT_PARSER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# include "ft_utils.h"
# include "strct.h"

# define TRUE 1
# define FALSE 0
# define ERROR -1

int				ft_parser(char *frmt, t_spcfctr *spcfctr, va_list arg_ptr);
void			ft_creat_spcfctr(t_spcfctr *spcfctr);
int				ft_get_flg(char **str, t_spcfctr *spcfctr);
int				ft_get_wdth(char **str, t_spcfctr *spcfctr, va_list arg_ptr);
int				ft_get_prcsn(char **str, t_spcfctr *spcfctr, va_list arg_ptr);
int				ft_get_type(char **str, t_spcfctr *spcfctr);

#endif
