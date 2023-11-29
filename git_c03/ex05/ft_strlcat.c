/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:11:06 by antopere          #+#    #+#             */
/*   Updated: 2023/11/22 10:57:18 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	t;	

	t = 0;
	while (*dest != '\0' && size > 0)
	{
		dest++;
		t++;
		size --;
	}
	while (*src != '\0' && size > 1)
	{
		*dest = *src;
		src++;
		dest++;
		t++;
		size--;
	}
	if (size >= 1)
		*dest = '\0';
	while (*src)
	{
		src++;
		t++;
	}
	return (t);
}
/*
int main()
{
	char s1[25] = "holamundo";
	char s2[6] = "mundo";
	char s3[25] = "holamundo";
	printf("el tamaño  es: %d\n", ft_strlcat(s1,s2,18));	
	printf("el tamaño2  es: %lu\n", strlcat(s3,s2,18));	
	printf("el tamaño2  es: %s\n", s1);
	
	return 0;
}
*/
