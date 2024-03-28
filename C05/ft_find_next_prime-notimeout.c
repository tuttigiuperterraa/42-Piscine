/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime-notimeout.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:48:56 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/07 19:59:05 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (0);
	i = nb - 1;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		else
			i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return(nb);
}

int	main()
{
	printf("%d\n", ft_find_next_prime(2000000050));
}
