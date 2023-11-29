/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:21:31 by antopere          #+#    #+#             */
/*   Updated: 2023/11/18 18:36:19 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 123 && str[i] > 96)
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "hola mundo";

    printf("String original: %s\n", str);
    ft_strupcase(str);

    printf("String convertido a mayúsculas: %s\n", str);

}
*/
