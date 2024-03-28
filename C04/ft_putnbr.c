/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:33:46 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/02 22:36:10 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	numero;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = (-nbl);
	}
	numero = '0' + (nbl % 10);
	if (nbl >= 10)
		ft_putnbr (nbl / 10);
	write (1, &numero, 1);
}

/*int	main()
{
	ft_putnbr(42);
}*/
