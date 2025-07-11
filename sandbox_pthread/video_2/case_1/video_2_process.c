/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   video_2_process.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:42:50 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/11 14:58:40 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void) {
	int pid = fork();
	if (pid == -1)
		return (1);
	printf("Hello from process\n");
	if (pid == 0)
		wait(NULL);
	return (0);
}
