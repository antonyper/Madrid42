/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antopere <antopere@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:57:36 by antopere          #+#    #+#             */
/*   Updated: 2023/11/21 14:03:19 by antopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++str;
		++len;
	}
	return (len);
}

int	validation_base(char *str)
{
	int		result;
	int		n;
	char	*inicio;
	char	*siguiente;

	n = base_len(str);
	inicio = str;
	result = 0;
	while (*inicio)
	{
		if (*inicio == '+' || *inicio == '-')
			result = 1;
		siguiente = inicio + 1;
		while (*siguiente)
		{
			if (*inicio == *siguiente)
				result = 1;
			siguiente++;
		}
		inicio++;
	}
	if (n < 2)
		result = 1;
	return (result);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	n = base_len(base);
	if (validation_base(base) == 0)
	{
		if (nbr > (n - 1))
		{
			ft_putnbr_base(nbr / n, base);
			ft_putnbr_base(nbr % n, base);
		}
		else if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / n, base);
			ft_putnbr_base(-(nbr % n), base);
		}
		else if (nbr < 0)
		{
			write (1, "-", 1);
			ft_putnbr_base(-nbr, base);
		}
		else
			write(1, &base[nbr], 1);
	}
}
/*
int main()
	{
		ft_putnbr_base(64, "012");
		return 0;
	}
*/
