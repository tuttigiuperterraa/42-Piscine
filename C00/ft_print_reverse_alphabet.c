/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:28:20 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/24 18:28:29 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	short	alpha;

	alpha = 122;
	while (alpha > 96)
	{
		write (1, &alpha, 1);
		alpha--;
	}
}

//int	main(void)
//{
//	ft_print_alphabet ();
//	return (0);
//}
