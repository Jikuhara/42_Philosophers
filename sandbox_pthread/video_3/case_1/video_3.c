/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   video_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:42:50 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/11 15:27:43 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int mails = 0;
void *routine() {
	for (int i = 0; i < 10000000; i++) {
		mails++;
		// read mails
		// increment
		// write mails
	}
}

int main(void) {
	pthread_t t1, t2;
	if (pthread_create(&t1, NULL, routine, NULL) != 0)
		return (1);
	if (pthread_create(&t2, NULL, routine, NULL) != 0)
		return (2);
	if (pthread_join(t1, NULL) != 0)
		return (3);
	if (pthread_join(t2, NULL) != 0)
		return (4);
	printf("Number of mails: %d", mails);
	return (0);
}
