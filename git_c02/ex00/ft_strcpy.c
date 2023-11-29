/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:12:51 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 20:23:29 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char*dest, char*src)
{
	char	*resp;

	resp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (resp);
}
/*
int main(void)
{
	char src[11] = "hola mundo";
	char dest[11];

	//ft_strcpy(dest,src);
	printf("el destino es %s",ft_strcpy(dest, src));
	return (0);
}
*/
