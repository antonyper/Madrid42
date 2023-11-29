/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:48:43 by antopere          #+#    #+#             */
/*   Updated: 2023/11/15 11:52:50 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 122 || str[i] < 97)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        char str[10]="tTtu";
        printf("Resultado: %d",ft_str_is_lowercase(str));

}
*/
