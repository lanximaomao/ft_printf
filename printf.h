/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:16:30 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/27 19:42:44 by linlinsun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_
# define FT_PRINTF_H_

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef int ft_ops (char*, ap);


typedef s_printf
{
	char [];
	ft_ops *ops;
} t_printf;

void ft_assign ()
{
	t_printf new;

	str[0][0] = '%';
	str[0][1] = 'c';
	str[0][2] = '\0';


}


int	ft_printf(const char *, ...);

#endif
