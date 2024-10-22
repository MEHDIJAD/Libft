/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:44:24 by eel-garo          #+#    #+#             */
/*   Updated: 2024/10/21 19:44:27 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c)
{
    return  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}