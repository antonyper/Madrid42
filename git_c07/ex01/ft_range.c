/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:36:30 by antopere          #+#    #+#             */
/*   Updated: 2023/11/23 15:49:51 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*ptr;

	if (max <= min)
		return (0);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (!ptr)
		return (0);
	else
	{
		i = -1;
		while (++i < max - min)
			ptr[i] = min + i;
		return (ptr);
	}
}
/*
int main()
{
	int min = 5;
	int max = 10;
	int *result;
	result=	ft_range(5,10);
	
	for (int i = 0; i < max - min; i++)
	{
		printf("%d",result[i]);
		printf("\n");
	}
	return 0;
}
*/
