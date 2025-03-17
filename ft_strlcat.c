/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:09:06 by ilnassi           #+#    #+#             */
/*   Updated: 2024/12/23 12:25:08 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = 0;
	i = 0;
	while (d < size && dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (d >= size)
	{
		return (size + s);
	}
	while (i < s && d + i < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d + i < size)
		dest[d + i] = '\0';
	return (d + s);
}
