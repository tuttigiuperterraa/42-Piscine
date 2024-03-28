/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:20:32 by gcosenza          #+#    #+#             */
/*   Updated: 2023/07/24 19:47:45 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	src[7]="World1";
	char	dest[6]="Hello";
	
	ft_strncpy(dest, src, 7);
	printf("Source: %s\n", src);
	printf("Copied: %s\n", dest);
	return 0;
}*/
