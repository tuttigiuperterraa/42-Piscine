/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:27:51 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/30 13:37:52 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*tmp;

	if (*to_find == '\0')
		return (str); 
	i = 0;
	j = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] == str[j])
		{
			tmp = &str[j];
			while (to_find[++i] != '\0')
			{
				if (to_find[i] != str[++j])
					tmp = 0;
			}
			i = 0;
			j++;
		}
		else
			j++;
	}
	return (tmp);
}
