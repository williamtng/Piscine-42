/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:18:14 by witong            #+#    #+#             */
/*   Updated: 2024/03/26 12:47:47 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//
int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return ((void *)0);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == ((void *)0))
		return ((void *)0);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 10;
	max = 100;
	range = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\t", range[i]);
		i++;
	}
	return (0);
}
*/
