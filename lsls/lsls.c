#include <stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include <dirent.h>


/**
 * Main
 */
int main(int argc, char **argv)
  // Parse command line
  {
    int i;

    printf("There are %d command line argument(s):\n", argc);

    for (i = 0; i < argc; i++) {
      printf("   %s\n", argv[i]);
    }

    DIR *dp;
    struct dirent *sd;
    // Open directory
    dp = opendir(argv[1]);

    // Repeatly read and print entries
    while ((sd = readdir(dp)) != NULL) {
      printf("%s\n",sd->d_name);

    }
    // Close directory
    closedir(dp);




  return 0;
}