/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:31:41 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/24 18:31:49 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int c, int d)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = (c / 10) + 48;
	j = (c % 10) + 48;
	k = (d / 10) + 48;
	l = (d % 10) + 48;
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (! (c == 98 && d == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b <= 99)
		{
			if (a < b)
			{
				put_char(a, b);
				b++;
			}
		}
		a++;
		b = a + 1;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
