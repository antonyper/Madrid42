/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:26:29 by antopere          #+#    #+#             */
/*   Updated: 2023/11/18 18:11:18 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 91 && str[i] > 64)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "hola MUNDO";

    printf("String original: %s\n", str);
    ft_strlowcase(str);

    printf("String convertido a minusculas: %s\n", str);

}
*/
