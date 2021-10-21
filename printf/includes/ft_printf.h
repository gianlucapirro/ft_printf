/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gianlucapirro <gianlucapirro@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:36:28 by gianlucapir       #+#    #+#             */
/*   Updated: 2021/10/20 19:53:35 by gianlucapir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int				ft_printf(const char *format, ...);
int				ft_strlen(char *str);
void			ft_putchar(int c);
void			ft_putstr(char *str);
void			ft_rev_int_tab(char *tab, int size);
void			ft_putnbr(int nb);
void			ft_putnbru(unsigned int nb);
char			*strlowcase(char *str);
char			*void_to_hex(void *string);
char			*int_to_hex(int number);


#endif