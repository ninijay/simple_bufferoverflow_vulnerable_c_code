#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *place;
    char *systemcommand;
    place=(char *) malloc(10);
    systemcommand=(char *) malloc(128);
	printf("memory address of place is : %d\n", place);     
    printf("memory address of systemcommand is : %d\n", systemcommand);
    printf("The space in memory between place and systemcommand is : %d\n", systemcommand-place);
    printf("Where is the best place on the web to learn hacking?");
    gets(place);
    printf("The best place to learn hacking on the web is %s\n", place);
    system(systemcommand);
    return 0;
}
