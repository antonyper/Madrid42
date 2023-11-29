/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:32:19 by antopere          #+#    #+#             */
/*   Updated: 2023/11/13 13:44:37 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 97;
	while (i < 123)
	{
		c = i;
		write (1, &c, 1);
		i++;
	}
}
/*
int main()
{
	ft_print_alphabet();
	return 0;
}
*/
