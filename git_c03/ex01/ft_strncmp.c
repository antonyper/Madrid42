/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:21:23 by antopere          #+#    #+#             */
/*   Updated: 2023/11/22 12:57:07 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (*s1 && *s2 && counter < n && *s1 == *s2)
	{
		s1++;
		s2++;
		counter++;
	}
	if (counter == n)
	{
		s1--;
		s2--;
	}
	return (*s1 - *s2);
}
/*
int main ()
{
	char s1[10] = "holaa Mun";
	char s2[10] = "holaAndo";
	printf("Respuesta: %d",ft_strncmp(s1,s2,5));
	return 0;
}
*/
