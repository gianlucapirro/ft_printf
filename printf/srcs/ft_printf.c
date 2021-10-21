/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gianlucapirro <gpirro@student.42   		+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:39:22 by gianlucapir       #+#    #+#             */
/*   Updated: 2021/10/19 10:39:22 by gianlucapir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void	check_format(va_list args, char *string, int i)
{
	int		p;
	char	*s;

	if (string[i] == 'c' || string[i] == 'u' || string[i] == 'i' || \
	string[i] == 'd' || string[i] == 'x' || string[i] == 'X')
		p = va_arg(args, int);
	if (string[i] == 's' || string[i] == 'p')
		s = va_arg(args, char *);
	if (string[i] == 'c')
		ft_putchar(p);
	else if (string[i] == 's')
		ft_putstr(s);
	else if (string[i] == 'p')
		ft_putstr(strlowcase(void_to_hex(s)));
	else if (string[i] == 'u')
		ft_putnbru(p);
	else if (string[i] == 'd' || string[i] == 'i')
		ft_putnbr(p);
	else if (string[i] == 'x')
		ft_putstr(strlowcase(int_to_hex(p)));
	else if (string[i] == 'X')
		ft_putstr(int_to_hex(p));
	else if (string[i] == '%')
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char 	*string;
	int 	i;

	i = 0;
	string = (char *)format;
	va_start(args, format);
	while (string[i])
	{
		if (string[i] != '%')
			ft_putchar(string[i]);
		else
		{
			i++;
			check_format(args, string, i);
		}
		i++;
	}
	va_end(args);
	return (0);
}


int main (void)
{
	ft_printf("Hello world! %i %d", 10, 40);
}