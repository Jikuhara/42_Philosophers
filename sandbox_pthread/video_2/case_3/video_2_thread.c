/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   video_2_thread.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:42:50 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/11 15:11:02 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int x = 2;

void *routine() {
	x++;
	sleep(2);
	printf("value of x: %d\n", x);
}

void *routine2() {
	sleep(2);
	printf("value of x: %d\n", x);
}

int main(void) {
	pthread_t t1, t2;
	pthread_create(&t1, NULL, routine, NULL);
	pthread_create(&t2, NULL, routine2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return (0);
}
