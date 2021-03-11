/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:09:47 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/15 20:42:32 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define ERROR -1

size_t		ft_strlen(const char *str);
int			ft_isdigit(int value);
int			ft_atoi(const char *str);
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(char *s, int fd);
int			ft_putnbr_fd(long long n, int fd);
int			ft_nbrlen(long long n);

#endif
