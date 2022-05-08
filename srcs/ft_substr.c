/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:52:04 by lseiller          #+#    #+#             */
/*   Updated: 2022/05/08 16:50:17 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strmalloc;
	int		i;

	i = (int) start;
	if (!s || start >= ft_strlen(s))
		return (NULL);
	if (len >= ft_strlen(s + start))
		strmalloc = ft_calloc((ft_strlen(s + start) + 1), sizeof(char));
	else
		strmalloc = ft_calloc((len + 1), sizeof(char));
	if (strmalloc == NULL)
		return (NULL);
	while (s[i] && i - start < len)
	{
		strmalloc[i - start] = s[i];
		i++;
	}
	strmalloc [i - start] = '\0';
	return (strmalloc);
}
