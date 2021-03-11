/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strct.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:46:24 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 15:14:36 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRCT_H
# define STRCT_H

# define FLG_NONE	0b00000000
# define FLG_MINUS	0b00000010
# define FLG_ZERO	0b00000100
# define FLG_WDTH	0b00001000
# define FLG_PRCSN	0b00010000

# define WDTH_NONE		0
# define PRCSN_NONE		0
# define TYPE_NONE		'n'

typedef struct		s_spcfctr
{
	unsigned char	flg;
	int				wdth;
	int				prcsn;
	char			type;
}					t_spcfctr;

#endif
