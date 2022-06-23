// Simple file that prints hello world

// Added this comment after staging a version of this file without this comment

// Additional comments that change the code

#include <stdio.h>

int main()
{
  printf("Hello, world\n");
  printf("Hello, again!\n");
  
  // reply to hello world
  // this was added in hello_world_reply
  printf("Well hello there.\n");

  // add another line - this was added in master
  printf("We added another line\n");

  // add a line locally and push to github
  printf("Added locally this line was. Also different than original local line add.\n");
  
  // add a line on GitHub to create conflict with local
  printf("This line was added with GH text editor.\n");
   
  // add a line locally that conflicts with a remote added line
  printf("this line was added locally to conflict w a line added remotely.\n");
  
  return 0;
}
