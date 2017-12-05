#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Variable and Memory Allocation
    char *place;
    char *systemcommand;
    place=(char *)malloc(10);
    systemcommand=(char *)malloc(128);
    // Printing out memory information to user
    printf("memory address of place is : %d\n", place);
    printf("memory address of systemcommand is: %d\n", systemcommand);
    printf("the space in memory betweenn place and systemcommand is :%d\n", systemcommand-place);
    // Prompting user for best place to learn hacking
    printf("Where is the best place on the web to learn hacking?");
    gets(place);
    // Printing answer to user
    printf("The best place to learn hacking on the web is %s\n", place);
    // Executing command stored in systemcommand
    system(systemcommand);

    return 0;
}
