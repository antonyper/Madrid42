/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:10:31 by antopere          #+#    #+#             */
/*   Updated: 2023/11/23 15:11:52 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	*aux1;
	char	*aux2;

	aux1 = s1;
	aux2 = s2;
	while (*aux1 == *aux2 && *aux1 && *aux2)
	{
		aux1++;
		aux2++;
	}
	return (*aux1 - *aux2);
}

void	sort_args(int i, char **argv)
{
	char	*temp;
	char	**start;
	char	**next;

	start = argv;
	while (i > 1)
	{
		next = start + 1;
		if (ft_strcmp(*start, *next) < 0)
		{
			temp = *start;
			*start = *next;
			*next = temp;
			if (start != argv)
			{
				start--;
				i++;
			}
		}
		else
		{
			start++;
			i--;
		}
	}
}

int	main(int argc, char	**argv)
{
	int	i;
	int	j;

	i = argc - 1;
	sort_args(i, argv + 1);
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		j = 0;
		i--;
	}
	return (0);
}
