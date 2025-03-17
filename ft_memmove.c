/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 07:57:30 by ilnassi           #+#    #+#             */
/*   Updated: 2024/12/23 10:48:47 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t			j;
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	j = 0;
	i = 1;
	if (!dest || !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest > src)
	{
		i = -1;
		d += count - 1;
		s += count - 1;
	}
	while (j < count)
	{
		*d = *s;
		d += i;
		s += i;
		j++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[50] = "Copia questa stringa in un'altra posizione";
    char str2[50];

    // Copia i primi 20 caratteri da str1 a str2
    ft_memmove(str2, str1, 20);
    
    
    printf("Contenuto di str2: %s\n", str2); // Stampa "Copia questa"
    
    return 0;
}
*/
