/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   c_arguments.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 20:15:20 by tmullan        #+#    #+#                */
/*   Updated: 2020/02/21 20:40:21 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_handle(va_list args, t_flags *flags)
{
	int	c;
	int	len;

	c = va_arg(args, int);
	len = 1;
	if (flags->flag)
		pad_c(c, flags, len);
	else
		ft_putcharcount_fd(c, 1, flags);
}

void	pad_c(int c, t_flags *flags, int len)
{
	if (flags->flag == 1 || flags->flag == 3)
	{
		if (flags->pflag && flags->flag == 3)
			flags->flag = 1;
		while (flags->width > len)
		{
			if (flags->flag == 1 & flags->cflag == 1)
				flags->flag = 3;
			if (flags->flag == 1)
				ft_putcharcount_fd(' ', 1, flags);
			else if (flags->flag == 3)
				ft_putcharcount_fd('0', 1, flags);
			flags->width--;
		}
		ft_putcharcount_fd(c, 1, flags);
	}
	if (flags->flag == 2)
	{
		ft_putcharcount_fd(c, 1, flags);
		while (flags->width - len > 0)
		{
			ft_putcharcount_fd(' ', 1, flags);
			flags->width--;
		}
	}
}
