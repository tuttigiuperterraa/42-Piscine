/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:24:00 by gcosenza          #+#    #+#             */
/*   Updated: 2023/08/03 14:41:34 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				len;
	int				val;
	unsigned int	j;

	val = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	j = 0;
	while (j < size)
	{
		if (src[j] == '\0')
			val = 1;
		dest[++len] = src[j];
		j++;
	}
	if (val)
	{
		dest[len] = '\0';
		return (len);
	}
	return (len - 1);
}
