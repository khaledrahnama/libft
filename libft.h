/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 09:55:17 by khaledrahna       #+#    #+#             */
/*   Updated: 2026/05/09 14:21:38 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int     ft_isalnum(int c);
size_t	ft_strlen(const char *s);
void	*memset(void *s, int c, size_t n);


#endif