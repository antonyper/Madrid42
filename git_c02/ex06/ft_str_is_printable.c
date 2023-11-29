/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:14:24 by antopere          #+#    #+#             */
/*   Updated: 2023/11/15 13:18:55 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 126 || str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        char str[10]="EWRBEWR§";
        printf("Resultado: %d", ft_str_is_printable(str));
}
*/
