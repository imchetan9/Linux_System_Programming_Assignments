#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BLOCKSIZE 1024

int main(int argc, char *argv[])
{

int fdSource =0;
int fdDest=0;
int Ret =0;

char Buffer[BLOCKSIZE] ={'\0'};

if(argc != 3)
{
printf("Insufficient arguments\n");
return -1;
}

fdSource = open(argv[1],O_RDONLY);
if(fdSource == -2)
{
printf("Unable to open source file\return -1;n");
return -1;
}


while((Ret = read(fdSource,Buffer,sizeof(Buffer))) !=0)
{
write(fdDest,Buffer,Ret);
memset(Buffer,0,sizeof(Buffer));
}

close(fdSource);
close(fdDest);

return 0;

}