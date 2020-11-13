#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <errno.h>

int main  (int argc, char** argv, char** envp) {

	int i = 0;
	while (*envp != NULL) {
		fprintf(stdout, "envp[%d]: %s\n", i, *envp);
		++envp;
		++i;
	}
	return 0;
}