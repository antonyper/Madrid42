/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:38:32 by antopere          #+#    #+#             */
/*   Updated: 2023/11/15 11:40:53 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	sal;

	i = 0;
	sal = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] > 90 || str[i] < 65) && (str[i] > 122 || str[i] < 97))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
        char str[10]="hola mundo";
        printf("resultado: %d",ft_str_is_alpha(str));
}
*/
