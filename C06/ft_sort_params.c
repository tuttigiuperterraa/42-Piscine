/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:29:01 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/06 17:32:21 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_sort_params(int argc, char *argv[], int i, int j)
{
	char	*tmp;
	int		k;

	k = 0;
	while (k < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			j = 0;
			while (argv[i][j] != '\0' && argv[i + 1][j] != '\0' 
				&& argv[i][j] == argv[i + 1][j])
				j++;
			if (argv[i][j] > argv[i + 1][j])
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		k++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_sort_params(argc, argv, 1, 0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write (1, argv[i] + j, 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
