#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void sigint_handler (int sig)
{
	char c;
	printf ("Ouch you just hit Ctrl-C? Do you really want to quit [y/n]?");
	c = getchar ();
	if (c == 'y' || c == 'Y') {
		// Your code here
	}
}

int main () {
	// Anything here???
	while (1) {
		sleep (1);
	}
	

}
