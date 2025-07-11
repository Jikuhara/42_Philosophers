/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   video_2_thread.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:42:50 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/11 14:55:31 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *routine() {
	printf("Hello from Thread\n");
}

int main(void) {
	pthread_t t1, t2;
	pthread_create(&t1, NULL, routine, NULL);
	pthread_create(&t2, NULL, routine, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return (0);
}
