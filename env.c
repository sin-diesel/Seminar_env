#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <errno.h>

int main (int argc, char** argv, char** envp) {

	// fprintf(stdout, "argc: %d\n", argc);
	// fprintf(stdout, "argv[1]: %s\n", argv[1]);
	// fprintf(stdout, "envp[0]: %s\n", envp[0]);
	// fprintf(stdout, "argv[2]: %s\n", argv[2]);
	char* new_envp[] = {argv[2], NULL};
	char** new_argv = argv + 1;
	//fprintf(stdout, "new_envp[0] = %s\n", new_envp[0]);
	execve(argv[1], argv + 1, new_envp);
	perror("Execve failed");

	return 0;
}