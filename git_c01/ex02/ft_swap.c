/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:10:28 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 16:41:46 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int*a, int*b)
{
	int		temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int main()
{	
	int a = 10;
	int b = 20;
	ft_swap(&a,&b);
	printf("el numero a es %u y el numero de b es %u",a,b);
	return 0;
}
*/
