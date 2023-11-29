/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:33:39 by antopere          #+#    #+#             */
/*   Updated: 2023/11/19 18:35:24 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sal;
	int	flag;

	sal = 0;
	flag = 1;
	if (*str)
	{
		while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				flag = -flag;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			sal = (sal * 10) + (*str - 48);
			str++;
		}
	}
	return (sal * flag);
}
/*
int main ()
{
	char str[]= " ---+--+1234ab567";
	printf("el numero es %d",ft_atoi(str));
}
*/
