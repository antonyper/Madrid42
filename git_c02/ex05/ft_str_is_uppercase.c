/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:54:44 by antopere          #+#    #+#             */
/*   Updated: 2023/11/15 12:02:07 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 90 || str[i] < 65)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        char str[10]="EWRBEWR";
        printf("Resultado: %d",ft_str_is_uppercase(str));
}
*/
