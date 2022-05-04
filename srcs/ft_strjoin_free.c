/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:40:04 by lseiller          #+#    #+#             */
/*   Updated: 2022/04/12 12:33:49 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strjoin_classic(char *s1, char *s2)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (dest);
	while (*s1)
	{
		dest[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		dest[i] = *s2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	dest = strjoin_classic(s1, s2);
	free(s1);
	free(s2);
	return (dest);
}
