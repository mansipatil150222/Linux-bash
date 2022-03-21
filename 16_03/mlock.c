#include<stdio.h>
#include<stdio.h>

main(){
    size_t i;
    const int alloc_size = 16 * 512 * 512;
    char* memory = malloc (alloc_size);
    mlock(memory,alloc_size);
    for(i=0;i<alloc_size;i++)
    memory[i]='#';
    printf("allocated memory initiallizes with = %s\n",memory);
    munlock(memory,alloc_size);
}