/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:02:23 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/02 23:01:29 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	tmp = nb;
	while (tmp != 1)
		nb = nb * --tmp;
	return (nb);
}

/*int	main()
{
	printf("%d", ft_iterative_factorial(13));
}*/
