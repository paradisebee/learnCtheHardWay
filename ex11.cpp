#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    // go through each string in argv

    int i = 0;
  
    char *states[5] = {"a","b"};
   
    while (i < argc) {
        states[i] = argv[i];
        i++;
    }

    int num_states = 4;
    i = 0; // watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
