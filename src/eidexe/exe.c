/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbober <jbober@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:58:04 by rakropp           #+#    #+#             */
/*   Updated: 2024/10/14 10:47:29 by jbober           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int g_lastexit;

void	ms_executable(t_data *data, t_node *node)
{
	data->exe->endline = 1;
	execve(node->path, node->cmd, data->env);
	exit(g_lastexit);
}

// void	do_command(t_data *data, t_node *node)
// {
// 	find_path(data, node);
// 	close(data->exe->tube[0]);
// 	close(node->infd);
// 	close(data->exe->tube[1]);
// 	close(node->outfd);
// 	g_lastexit = 0;
// 	data->exe->endline = 1;
// 	g_lastexit = execve(node->path, node->cmd, data->env);
// 	exit(g_lastexit);
// }
