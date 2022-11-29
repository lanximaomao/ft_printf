/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:30:42 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 11:37:17 by linlinsun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// modify to have a return value
int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int count;

	count = 0;
	if (!s || !*s)
	{
		//count += 6;
		write(1, "(null)", 6);
		return (0) ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
		count++;
	}
	return(count);
}
