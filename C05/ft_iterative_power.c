/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 23:04:03 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/02 23:06:29 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
