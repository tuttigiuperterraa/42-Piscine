/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:00:09 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/27 17:31:56 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	p;
	char	q;

	str = ft_strlowcase(str);
	i = 1;
	while (str[i] != '\0')
	{
		p = str[i];
		q = str[i - 1];
		if (p >= 'a' && p <= 'z')
		{
			if (!((q >= 'a' && q <= 'z') || (q >= 'A' && q <= 'Z')
					|| (q >= '0' && q <= '9')))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "HELLO";
	
	ft_strcapitalize(str);
	write(1, &str, 6);
}*/
