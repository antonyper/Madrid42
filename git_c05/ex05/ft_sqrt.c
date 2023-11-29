/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:31:39 by antopere          #+#    #+#             */
/*   Updated: 2023/11/23 14:47:38 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	total;
	int	sqrt;

	sqrt = 0;
	total = 1;
	while (nb != 0)
	{
		if (nb < 0)
			return (0);
		else
		{
			nb -= total;
			sqrt++;
			total = total + 2;
		}
	}
	return (sqrt);
}
/*
int main()
{
	int nb = 120;
	printf("la raiz de %d es: %d", nb,ft_sqrt(nb));
	return 0;
}
*/
