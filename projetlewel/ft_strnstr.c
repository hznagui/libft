/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:37:06 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/08 18:43:52 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*p;

	p = (char *)haystack;
	j = 0;
	i = 0;
	if (!haystack && !len)
		return (0);
	while (p[i + j] && needle[j] && i + j < len)
	{
		if (p[i + j] == needle[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
	}
	if (needle[j] == '\0')
		return (p + i);
	else
		return (0);
}
/*int main()
{
	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "MZIRIBMZE";
	char	*i1 = ft_strnstr(s1, s2,strlen(s2));
	char	*i2 = strnstr(s1, s2,strlen(s2));
	printf("%s \n%s",i1,i2);
}*/
