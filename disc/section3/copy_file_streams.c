#include <stdio.h>

void copy (const char *src, const char *dest) {
	char buffer[100];
	FILE* read_file = fopen (NULL, NULL); // FIXME
	int buf_size = fread (NULL, NULL, NULL, NULL); // FIXME
	fclose (read_file);

	FILE* write_file = fopen (NULL, NULL); // FIXME
	fwrite (NULL, NULL, NULL, NULL); // FIXME
	fclose (write_file);
}

int main () {
	// We assume you have written test.txt in the previous exercise
	copy ("test.txt", "test_stream.txt");
}
