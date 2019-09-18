#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



void write_to_file (const char* file, int* a, int size) {
	int write_fd = open (NULL, NULL); // FIXME
	char* write_buf = NULL; // FIXME
	int buf_size = NULL; // FIXME
	int bytes_written = 0;

	// Write a to file.
	// FIXME
	
	

	close (write_fd);
}

void read_from_file (const char* file, int *a, int size) {
	int read_fd = open (NULL, NULL); // FIXME
	char* read_buf = NULL; // FIXME
	int buf_size = NULL; // FIXME

	// Read from a file
	// FIXME
	






	close (read_fd);
}

int main () {
	const char* filename = "integers.txt";
	int integers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int integers_copy[10];
	write_to_file (filename, integers, 10);
	read_from_file (filename, integers_copy, 10);
	for (int i = 0; i < 10; i++) {
		if (integers[i] != integers_copy[i]) {
			printf ("Error the outputs don't match!\n");
			exit (1);
		}
	}
	printf ("Success!\n");
}
