/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:27:27 by eel-garo          #+#    #+#             */
/*   Updated: 2024/10/23 18:18:04 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int  c, size_t n)
{
	unsigned char *ptr = (unsigned char *)str;
    size_t	i;

    i = 0;
    while (i < n)
    {
       ptr[i] = (unsigned char)c;
        i++;
    }
    return (str); 
}
