/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:57:56 by antopere          #+#    #+#             */
/*   Updated: 2023/11/23 15:06:25 by antopere         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = 0;
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
/*
int main()
{
	int nb = 21;
	printf("num original %d, el primo es %d", nb, ft_find_next_prime(nb));
	return 0;
}
*/
