/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:10:41 by antopere          #+#    #+#             */
/*   Updated: 2023/11/22 11:36:04 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	base_len(char *base)
{
	char	*aux;
	int		len;

	aux = base;
	len = 0;
	while (*aux)
	{
		len++;
		aux++;
	}
	return (len);
}

int	debug_base(char *base)
{
	char	*inicio;
	char	*next;
	int		n;
	int		result;

	n = base_len(base);
	inicio = base;
	result = 0;
	while (*inicio)
	{
		if (*inicio == '+' || *inicio == '-')
			result = 1;
		next = inicio + 1;
		while (*next)
		{
			if (*inicio == *next)
				result = 1;
			next++;
		}
		inicio++;
	}
	if (n < 2)
		result = 1;
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	flag;
	int	result;
	int	i;

	flag = 1;
	result = 0;
	i = 0;
	if (debug_base(base) == 1)
		return (0);
	while (*str)
	{
		if (*str == '-')
		{
			flag = -1;
			str++;
		}
		while (*str != base[i])
			i++;
		result = (result * base_len(base)) + i;
		str++;
		i = 0;
	}
	return (result * flag);
}
/*
int main()
{
	char str[]= "010101";
	printf("el numero es %d", ft_atoi_base(str, "01234"));
}
*/
