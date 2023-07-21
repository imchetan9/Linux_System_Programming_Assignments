#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>


int main(int argc, char *argv[])
{
	
	DIR *dp = NULL;
struct dirent *entry = NULL;

if(argc != 2)
{

printf("Insufficient arguments\n");
return -1;

}

dp = opendir(argv[1]);
if(dp = NULL)
{
printf("Unable to open directory\n");
return -1;

}

printf("------------------------------------------------------------------\n");


while((entry = readdir(dp)) != NULL)
{
printf("%20s : %d \n",entry->d_name,entry->d_ino);

}

fstat(dp,&entry);

printf("File name : %s\n",argv[1]);
printf("File size is : %d\n",sobj.st_size);
printf("Number of links : %d\n",sobj.st_nlink);
printf("Inode number : %d\n",sobj.st_ino);
printf("File system number : %d\n",sobj.st_dev);
//printf("Number of blocks : %d\n",sobj.st_blocks);


closedir(dp);

	
return 0;

}