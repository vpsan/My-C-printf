# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 15:13:29 by bhatches          #+#    #+#              #
#    Updated: 2021/03/11 17:46:20 by bhatches         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FT_PARSER = srcs/ft_parser/
FT_PROCESSOR = srcs/ft_processor/
FT_UTILS = srcs/ft_utils/
INCLD = includes/

SRCS	=	srcs/ft_printf.c\
			$(FT_PARSER)ft_parser.c\
			$(FT_PARSER)ft_creat_spcfctr.c\
			$(FT_PARSER)ft_get_flg.c\
			$(FT_PARSER)ft_get_wdth.c\
			$(FT_PARSER)ft_get_prcsn.c\
			$(FT_PARSER)ft_get_type.c\
			$(FT_PROCESSOR)ft_processor.c\
			$(FT_PROCESSOR)ft_c_processor.c\
			$(FT_PROCESSOR)ft_s_processor.c\
			$(FT_PROCESSOR)ft_d_processor.c\
			$(FT_PROCESSOR)ft_u_processor.c\
			$(FT_PROCESSOR)ft_p_processor.c\
			$(FT_PROCESSOR)ft_x_processor.c\
			$(FT_PROCESSOR)ft_prcnt_processor.c\
			$(FT_PROCESSOR)ft_du_write.c\
			$(FT_PROCESSOR)ft_p_write.c\
			$(FT_PROCESSOR)ft_x_write.c\
			$(FT_PROCESSOR)ft_du_take_len.c\
			$(FT_PROCESSOR)ft_px16_take_len.c\
			$(FT_PROCESSOR)ft_dupx_take_zeros.c\
			$(FT_PROCESSOR)ft_px16_putnbr_fd.c\
			$(FT_PROCESSOR)ft_cs_take_flag.c\
			$(FT_UTILS)ft_strlen.c\
			$(FT_UTILS)ft_isdigit.c\
			$(FT_UTILS)ft_putchar_fd.c\
			$(FT_UTILS)ft_putstr_fd.c\
			$(FT_UTILS)ft_putnbr_fd.c\
			$(FT_UTILS)ft_atoi.c\
			$(FT_UTILS)ft_nbrlen.c

HDRS	=	$(INCLD)ft_printf.h\
			$(INCLD)ft_parser.h\
			$(INCLD)ft_processor.h\
			$(INCLD)ft_utils.h

OBJ		=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror
CDEBUG	=	-g
OPTFLGS	=	-O2

all:		$(NAME)

$(NAME):	$(OBJ)
			@ar rcs $(NAME) $?

.c.o:
			@$(CC) $(CFLAGS) -I$(INCLD) -c $< -o $(<:.c=.o)

clean:
			@rm -rf $(OBJ)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all
