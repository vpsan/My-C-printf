/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:03:52 by bhatches          #+#    #+#             */
/*   Updated: 2021/01/16 12:44:31 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int		ft_putstr_fd(char *s, int fd)
{
	int		count;

	count = 0;
	if (s != NULL)
	{
		count += write(fd, s, ft_strlen(s) * sizeof(char));
	}
	return (count);
}
