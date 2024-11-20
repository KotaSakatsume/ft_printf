/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosakats <kosakats@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:28:33 by kosakats          #+#    #+#             */
/*   Updated: 2024/11/20 12:33:05 by kosakats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_putptr_fd(void *ptr, int fd);
int	ft_putnbr_u_fd(unsigned int n, int fd);
int	ft_puthex_fd(unsigned int n, int fd, char x);
int	ft_printf(const char *str, ...);

#endif