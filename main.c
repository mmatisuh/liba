/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:46:57 by mmatiush          #+#    #+#             */
/*   Updated: 2017/11/03 14:46:58 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		main(void)
{
	char str1[20] = "Hello, world!";
	char str2[20] = "Hello, world!";

	size_t len = 5;
	//char dst1[12];
	//char dst2[12];

	printf("\n-----------------------ft_memmove------------------\n");
	printf("str before memmove: %s\n", str1);
	printf("after memmove:      %s\n", memmove(str1 + 2,  str1, len));
	printf("after ft_memmove    %s\n", ft_memmove(str2 + 2, str2, len));
	//printf("\n-----------------------ft_memccpy------------------\n");
	//printf("str before memcpy: %s\n", str);
	//printf("after memcpy:      %s\n", memccpy(dst,  str, c, len));
	//printf("after ft_memcpy    %s\n", ft_memccpy(dst2, str, c, len));
	//printf("\n-----------------------ft_memcpy------------------\n");
	//printf("str before memcpy: %s\n", str);
	//printf("after memcpy:      %s\n", memcpy(dst,  str, len));
	//printf("after ft_memcpy    %s\n", ft_memcpy(dst2, str, len));
	//printf("\n-----------------------ft_bzero------------------\n");
	// printf("str before memset: %s\n", str);
	// printf("after memset:      %s\n", (str, len));
	//printf("after ft_memset    %s\n\n", ft_bzero(str, len));
	//printf("-----------------------ft_strlen------------------\n");
	//printf("%lu\n", strlen(str));
	//printf("%lu\n", ft_strlen(str));
	//printf("-----------------------ft_strdup------------------\n");
	//printf("%s\n", strdup(str));
	//printf("%s\n", ft_strdup(str));
	// printf("\n-----------------------ft_strcpy------------------\n");
	// printf("\nstr before strcpy: %s\n", str);
	// printf("after strcpy:      %s\n", strcpy(dst, str));
	// printf("after ft_strcpy:   %s\n", ft_strcpy(dst, str));
	// printf("\n-----------------------ft_strncpy------------------\n");
	// printf("str before strncpy: %s\n",str);
	// printf("after strncpy:      %s\n", strncpy(dst, str, 10));
	// printf("after ft_strncpy    %s\n\n", ft_strncpy(dst, str, 10));
	// printf("\n-----------------------ft_memset------------------\n");
	// printf("str before memset: %s\n", str);
	// printf("after memset:      %s\n", memset(str, 95, len));
	// printf("after ft_memset    %s\n\n", ft_memset(str, 95, len));
	// printf("\n-----------------------ft_memset------------------\n");

	return (0);
}
