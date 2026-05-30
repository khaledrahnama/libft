/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:08:22 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/30 11:03:24 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    if(!new)
    return(NULL);

    while (*lst)
    {
        
        lst++;
    }

    new -> content;
    new -> next = NULL;
    return
}