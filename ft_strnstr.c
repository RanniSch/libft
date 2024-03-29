/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:24:09 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 17:34:20 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Locates the first occurrence of the null-terminated string little 
	in the string big, where not more than len characters are searched. */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little || !little[0])
		return ((char *)big);
	i = 0;
	while (*(big + i) && i < len)
	{
		j = 0;
		while (*(big + i + j) && *(little + j) && i + j < len && *(big + i
				+ j) == *(little + j))
			j++;
		if (!*(little + j))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
