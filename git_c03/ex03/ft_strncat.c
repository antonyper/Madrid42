/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:04:02 by antopere          #+#    #+#             */
/*   Updated: 2023/11/22 12:58:49 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
		temp++;
	while (*src != '\0' && nb > 0)
	{
		*temp = *src;
		temp++;
		nb--;
		src++;
	}
	*temp = '\0';
	return (dest);
}
/*
int main ()
{
char s1[] = "hola ";
char s2[] = "mundo";
printf("el resultado es: %s",ft_strncat(s1,s2,3));
}
*/
