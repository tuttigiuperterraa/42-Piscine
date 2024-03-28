/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:12:22 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/02 22:41:47 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_duplicates(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	j = len - 1;
	while (i < len / 2)
	{
		while (j > i)
		{
			if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
				return (1);
			j--;
		}
		i++;
		j = len - 1;
	}
	return (0);
}

int	check_invalid(int len)
{
	if (len < 2)
		return (1);
	return (0);
}

long	long_convert(int nbr)
{
	long	nbrl;

	nbrl = nbr;
	if (nbrl < 0)
		nbrl = -nbrl;
	return (nbrl);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nbrl;

	nbrl = long_convert(nbr);
	len = 0;
	while (base[len] != '\0')
		len++;
	if (check_invalid(len) || check_duplicates(base, len))
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	if (nbrl >= len)
		ft_putnbr_base((nbrl / len), base);
	write (1, &base[nbrl % len], 1);
}

/*int	main()
{
	ft_putnbr_base(-1558, "01");
}*/
