/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:28:24 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 16:50:18 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int*div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a = 35;
	int b = 8;
	int div;
	int mod;
	ft_div_mod(a,b,&div,&mod);
*/
/*
	printf("la div	es %u y el mod es %u",a,b,div,mod);
}
*/
