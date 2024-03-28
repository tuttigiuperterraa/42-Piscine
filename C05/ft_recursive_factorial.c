/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 23:01:49 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/02 23:03:41 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 1 && nb != 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial (nb - 1));
	return (1);
}
