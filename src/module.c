#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#include <module.h>

sem_t s;

// paste your module implementation here

void Module_print(void) {
	sem_init(&s, 0, 1);
	puts("Print from Module library");
}
