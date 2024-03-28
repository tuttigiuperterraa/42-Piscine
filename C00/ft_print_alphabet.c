/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:57:24 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/22 17:44:55 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	short	alpha;

	alpha = 97;
	while (alpha < 123)
	{
		write (1, &alpha, 1);
		alpha++;
	}
}

//int	main(void)
//{
//	ft_print_alphabet ();
//	return (0);
//}
