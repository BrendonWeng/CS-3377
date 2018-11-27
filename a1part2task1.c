#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
    system("mkdir dir1");
    system("mkdir dir2");
    system("cd ~/cs3377/a1part2");
    system("touch file3.txt");
    system("mkdir dir1/dir11");
    system("touch dir1/file1.txt");
    system("touch dir1/dir11/file11.txt");
    system("touch dir2/file2.txt");
    system("ln -s dir2/file2.txt link1");
    system("chmod 777 dir1");
    system("chmod 777 dir1/dir11");
    system("chmod 600 dir1/file1.txt");
    system("chmod 600 dir1/dir11/file11.txt");
    system("chmod 600 dir1/dir11");
    system("chmod 600 dir1");
    system("chmod -R 765 dir2");

    exit(0);
}
