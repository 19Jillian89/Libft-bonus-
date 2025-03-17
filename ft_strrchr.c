/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 07:15:31 by ilnassi           #+#    #+#             */
/*   Updated: 2024/12/23 14:18:57 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_word;
	int		i;

	last_word = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_word = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		last_word = (char *)&s[i];
	return (last_word);
}
/*
int main(void)
{
    const char *str = "banana";

    // Cerca l'ultima occorrenza della lettera 'a'
    char *last_a = ft_strrchr(str, 'a');
    printf("Ultima occorrenza di 'a': %s\n", last_a);

    // Cerca l'ultima occorrenza della lettera 'n'
    char *last_n = ft_strrchr(str, 'n');
    printf("Ultima occorrenza di 'n': %s\n", last_n);

    return 0;
}
*/
