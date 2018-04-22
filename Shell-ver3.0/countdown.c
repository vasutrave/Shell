#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

int main(int argc, char* argv[])
{
	int counter;
	for(int i =0; i<atoi(argv[1]);i++)
		sleep(1);
	printf("DONE!\n");
	exit(0);
}
