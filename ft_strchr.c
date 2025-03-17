/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:34:58 by ilnassi           #+#    #+#             */
/*   Updated: 2024/12/22 17:17:14 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, world!";
    char ch = 'o';

    
    char *result = ft_strchr(str, ch);
    
    if (result)
    {
	    printf("Il carattere '%c' è stato trovato: %s\n", ch, result);
    }
    else
    {
	    printf("Il carattere '%c' non è stato trovato.\n", ch);
    }
    result = ft_strchr(str, '\0');
    if (result)
    {
	    printf("Il terminatore null è stato trovato: %s\n", result);
    }
    return (0);
}
*/
