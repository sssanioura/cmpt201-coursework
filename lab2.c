#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t pid;
  pid = fork();

  printf("Enter programs to run. \n");
  // recieve user input
  ssize_t user_input = getLine(stream); //??
  strtok_r(user_input);

  execl("hello", "ls", (char *)NULL);
  //??
  // exec once
  // make program fork a new process for execcl
  if (pid ==)
    // wait using waitpid
    pid_t wait();
}
