/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:05:28 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 18:12:39 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &(char){a / 10 + '0'}, 1);
			write(1, &(char){a % 10 + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){b / 10 + '0'}, 1);
			write(1, &(char){b % 10 + '0'}, 1);
			b++;
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
		a++;
	}
	write(1,"\n",1);
}
/*
int main ()
{
	ft_print_comb2();
	return 0;
}
*/
