/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   video_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:27:53 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/11 14:42:23 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *routine(void *arg)
{
	(void)arg;
	printf("Test from threads\n");
	sleep(3);
	printf("Ending thread\n");
	return (NULL);
}

int main(void)
{
	pthread_t t1, t2;
	if (pthread_create(&t1, NULL, routine, NULL) != 0)
		return (1);
	if (pthread_create(&t2, NULL, routine, NULL) != 0)
		return (2);
	if (pthread_join(t1, NULL) != 0) /* なんでここPointerじゃないんやろ。 */
		return (3);
	if (pthread_join(t2, NULL) != 0)
		return (4);
	return (0);
}
