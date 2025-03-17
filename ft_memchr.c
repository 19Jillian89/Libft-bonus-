/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:11:55 by ilnassi           #+#    #+#             */
/*   Updated: 2024/12/22 16:44:44 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	j;
	size_t			i;

	ptr = (unsigned char *)s;
	j = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == j)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    const char str[] = "Hello, world!";
    int c = 'o';
    size_t n = 10;

    char *result_ft_memchr = ft_memchr(str, c, n);
    if (result_ft_memchr) {
        printf("ft_memchr: '%c' qui: %ld\n", c, result_ft_memchr - str);
    } else {
        printf("ft_memchr:'%c' non trovato\n", c);
    }

    char *result_memchr = memchr(str, c, n);
    if (result_memchr) {
        printf("memchr: '%c' qui: %ld\n", c, result_memchr - str);
    } else {
        printf("memchr: Carattere '%c' non trovato\n", c);
    }

    return 0;
}
*/
