/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cmb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:02:22 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:54 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	array[3];

	array[0] = '0';
	while (array[0] < '8')
	{
		array[1] = array[0] + 1;
		while (array[1] < '9')
		{
			array[2] = array[1] + 1;
			while (array[2] <= '9')
			{
				write(1, &array, 3);
				array[2] = array[2] + 1;
				if (array[0] != '7')
				{
					write(1, ", ", 2);
				}
			}
			array[1] = array[1] + 1;
		}
		array[0] = array[0] + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
