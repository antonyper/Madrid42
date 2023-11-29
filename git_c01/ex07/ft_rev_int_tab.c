/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:04:39 by antopere          #+#    #+#             */
/*   Updated: 2023/11/15 13:05:17 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int main(void)
{
	int i;
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
