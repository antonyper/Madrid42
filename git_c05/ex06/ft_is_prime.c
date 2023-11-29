/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:48:21 by antopere          #+#    #+#             */
/*   Updated: 2023/11/23 14:58:54 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb < 2)
		return (0);
	if (nb == 3 || nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	div = 3;
	while (nb % div != 0 && nb / div > div)
		div = div + 2;
	if (nb / div <= div && nb % div != 0)
		return (1);
	return (0);
}
/*
int main()
{
	int nb = 25;
	printf ("el numero %d, primo: %d",nb,ft_is_prime(nb));
	return 0;
}
*/
