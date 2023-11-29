/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:23:44 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 17:08:44 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int*a, int*b)
{
	int		temp_a;
	int		temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
int main(void)
{
	int a;
	int b;
	a=25;
	b=10;

	ft_ultimate_div_mod(&a,&b); 
	printf("la division %u\n", a);
 	printf("el modulo es %u\n", b);	  
	return 0;
}
*/
