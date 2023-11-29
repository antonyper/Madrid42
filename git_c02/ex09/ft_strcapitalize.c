/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:30:59 by antopere          #+#    #+#             */
/*   Updated: 2023/11/18 18:35:12 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	if (*s != '\0')
	{
		if ((*s >= 'a') && (*s <= 'z'))
			*s = *s - 32;
		s++;
		while (*s != '\0')
		{
			if (*s >= 'A' && *s <= 'Z')
				*s = *s + 32;
			if (!((*(s - 1) >= '0' && *(s - 1) <= '9') || (*(s - 1) >= 'a'
						&& *(s - 1) <= 'z')
					|| (*(s - 1) >= 'A' && *(s - 1) <= 'Z')))
				if (*s >= 'a' && *s <= 'z')
					*s = *s - 32;
			s++;
		}
	}
	return (str);
}
/*
int main()
{
    char str[] = "SALUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("String original:\n%s\n", str);
    ft_strcapitalize(str);

    printf("String convertido a minusculas: \n%s\n", str);

}
*/
