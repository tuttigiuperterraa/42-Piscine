/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:41:17 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/22 17:40:10 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char letter)
{
	write (1, &letter, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar ('P');
	}
	else
	{
		ft_putchar ('N');
	}
}

//int	main(void)
//{
//	ft_is_negative('1');
//	return (0);
//}
