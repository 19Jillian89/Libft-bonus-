/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilnassi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:20:20 by ilnassi           #+#    #+#             */
/*   Updated: 2024/12/23 12:56:16 by ilnassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		len;

	n = (long)nb;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		n = -n;
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n /= 10;
		if (n == 0 && nb < 0 && len == 0)
			str[len] = '-';
	}
	return (str);
}
/*
int main(void)
{
    // Test di diversi numeri
    int num1 = 1234;
    int num2 = -5678;
    int num3 = 0;
    int num4 = -2147483648;  // Il valore minimo di un int a 32 bit

    // Test della funzione ft_itoa
    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);
    char *str4 = ft_itoa(num4);

    // Stampa dei risultati
    printf("ft_itoa(%d) = %s\n", num1, str1);
    printf("ft_itoa(%d) = %s\n", num2, str2);
    printf("ft_itoa(%d) = %s\n", num3, str3);
    printf("ft_itoa(%d) = %s\n", num4, str4);
}
*/
