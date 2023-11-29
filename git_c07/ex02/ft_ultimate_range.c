/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:56:09 by antopere          #+#    #+#             */
/*   Updated: 2023/11/23 16:03:30 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*ptr;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (!ptr)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			ptr[i] = min + i;
		*range = ptr;
		return (i);
	}
}
/*
int main()
{
	int min = 5;
	int max = 10;
	int *result;
	printf("%d",ft_ultimate_range(&result, min, max));
	printf("\n");
	return 0;
}
*/
