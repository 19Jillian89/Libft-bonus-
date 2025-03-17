/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 07:45:26 by ilnassi           #+#    #+#             */
/*   Updated: 2024/12/23 12:13:17 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char		*s1;
	const char	*s2;
	size_t		i;

	s1 = (char *)dest;
	s2 = (const char *)src;
	i = 0;
	while (i < count)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
