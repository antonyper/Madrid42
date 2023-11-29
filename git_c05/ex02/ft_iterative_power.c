/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:38:40 by antopere          #+#    #+#             */
/*   Updated: 2023/11/22 14:02:05 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	sal;

	sal = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		sal = sal * nb;
		power--;
	}
	return (sal);
}

/*
int main()
{
	int nb, power;
	nb = 8;
	power = 3;
	printf("la pot %d del num %d es: %d", power, nb, ft_iterative_power(nb, power));
}
*/
