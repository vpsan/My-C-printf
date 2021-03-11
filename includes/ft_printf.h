/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:41:44 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/15 20:42:46 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# include "ft_utils.h"
# include "ft_parser.h"
# include "ft_processor.h"
# include "strct.h"

# define TRUE 1
# define FALSE 0
# define ERROR -1

int		ft_printf(const char *frmt, ...);
int		ft_printf_internal(const char *frmt, va_list arg_prt);

#endif
