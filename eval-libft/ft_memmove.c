/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:13:51 by messkely          #+#    #+#             */
/*   Updated: 2023/11/25 14:33:32 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		new_dst = (unsigned char *)dst;
		new_src = (unsigned char *)src;
		while (len--)
			*new_dst++ = *new_src++;
	}
	else
	{
		new_dst = (unsigned char *)dst + (len - 1);
		new_src = (unsigned char *)src + (len - 1);
		while (len--)
			*new_dst-- = *new_src--;
	}
	return (dst);
}
// hello ello
// ello
#include <stdio.h>
int main()
{
	char dst[4] = "ello";
	char src[4] = "ello";

	//printf("%d", src + 1 > src);
	
	printf("memove:%s\n",ft_memmove(src+1,src,2));
	printf("%s\n", src);

	printf("cpy:%s\n",ft_memcpy(src+1,src,2));
	printf("%s\n", src);
	// printf("%s", dst);
}