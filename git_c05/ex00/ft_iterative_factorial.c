/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:27:20 by antopere          #+#    #+#             */
/*   Updated: 2023/11/23 11:58:56 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sal;

	sal = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		sal = sal * nb;
		nb--;
	}
	return (sal);
}
/*
int main()
{
	int nb = 4;
	printf("factorial de %d es: %d",nb, ft_iterative_factorial(nb));
	return 0;
}
*/
