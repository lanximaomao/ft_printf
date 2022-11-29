/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:30:42 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 19:02:08 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	ft_putstr_fd(char *s, int fd)
//{
//	int	i;

//	if (!s || !*s)
//		return ;
//	i = 0;
//	while (s[i] != '\0')
//	{
//		write(fd, &s[i], 1);
//		i++;
//	}
//}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int count;

	count = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6) ;
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
