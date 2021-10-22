/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbru.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/20 09:46:03 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/22 12:22:58 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_printf.h"

int	ft_putnbru(int nb, int i)
{
	if (nb >= 10)
	{
		i = ft_putnbr(nb / 10, i + 1);
		ft_putnbr(nb % 10, 0);
		return (i);
	}
	else
		ft_putchar(nb + '0');
		return (i);
}
