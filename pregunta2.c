#include <stdio.h>
#include <stdlib.h>
#include "mycommon.h"
#include "common.h"
#include "common_threads.h"
#include "entero.h"

//volatile int counter = 0; 
//int loops;
float v, u;

void *primero(void *arg) {
	float z = 25;
	float y = 350;
	u = division(z,y);
	return NULL;
}

void *segundo(void *arg) {
	float x = 1250;
	v = multiplicacion(x,u);
	return NULL;
}


int main(int argc, char *argv[]) {
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, primero, NULL);
    Pthread_create(&p2, NULL, segundo, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("x =  %f\n", v);
    return 0;
}

