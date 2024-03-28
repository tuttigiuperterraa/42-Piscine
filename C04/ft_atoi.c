/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:55:42 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/31 23:23:55 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = 10 * num + str[i] - 48;
		i++;
	}
	return (num * neg);
}
/*int	main()
{
	printf("%d", ft_atoi("-+--+-+-+-a456"));	
}*/
