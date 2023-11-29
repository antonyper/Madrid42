/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:33:29 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 13:49:31 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 48;
	while (i < 58)
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}
/*
int main()
{
	ft_print_numbers();
	return 0;
}
*/
