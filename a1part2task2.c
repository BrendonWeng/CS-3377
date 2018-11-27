#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
    system("gcc a1part2task1.c -o a1part2task1prog");
    system("chmod 700 a1part2task1prog");  
    system("./a1part2task1prog");   
    exit(0);
}
