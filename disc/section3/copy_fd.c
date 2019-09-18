#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void copy (const char *src, const char *dest) {
	char buffer[100];
	int read_fd = open (NULL, NULL); // FIXME
	int bytes_read = 0;
	int buf_size = 0;

	while ((bytes_read = read (NULL, NULL, NULL)) > 0) { // FIXME
		// FIXME
	}
	close (read_fd);

	int bytes_written = 0;
	int write_fd = open (NULL, NULL); // FIXME
	while (NULL) { // FIXME
		int var = NULL; // DELETE ME
		var += write (NULL, NULL, NULL); // FIXME LHS and RHS
	}
	close (write_fd);
}

int main () {
	// We assume you have written test.txt in the previous exercise
	copy ("test.txt", "test_fd.txt");
}
