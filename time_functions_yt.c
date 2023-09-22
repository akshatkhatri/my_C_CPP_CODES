#include<stdio.h>
#include<time.h>
int main()
{
    time_t now=time(NULL);
    //printf("%ld",now);
    char * now=ctime(&now);
    printf("%s\n",now);


}
