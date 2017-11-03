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
	const char str[50] = "hello, world";

	printf("-----------------------ft_strlen------------------\n");
	printf("%lu\n", strlen(str));
	printf("%lu\n", ft_strlen(str));
	printf("-----------------------ft_strdup------------------\n");
	printf("%s\n", strdup(str));
	printf("%s\n", ft_strdup(str));
}
