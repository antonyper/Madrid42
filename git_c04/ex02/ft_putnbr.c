/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:49:37 by antopere          #+#    #+#             */
/*   Updated: 2023/11/19 17:49:44 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int	i;
	int	s[11];

	i = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * (-1);
	}
	if (nb == -2147483648)
		write (1, "2147483648", 10);
	if (nb == 0)
		write (1, "0", 1);
	while (nb > 0)
	{
		s[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	--i;
	while (i >= 0)
	{
		write (1, &(char){s[i] + '0'}, 1);
		i--;
	}
}
/*
int main()
{
	ft_putnbr(-2147483648);
	return 0;
}
*/
