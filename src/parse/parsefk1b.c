/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsefk1b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbober <jbober@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:22:02 by jbober            #+#    #+#             */
/*   Updated: 2024/08/29 16:24:14 by jbober           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ms_count32(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i + j])
	{
		if ((str[i + j] == 32) && (str[i + j + 1] == 32))
			j++;
		else
			i++;
	}
	return (j);
}
