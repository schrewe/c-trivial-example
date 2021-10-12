#include <stdlib.h>
#include "example.h"

int main (){}

void consume_bytes(const char* string, size_t len){
    if(len!=4){
        return;
    }
    if(string[0]=='F'){
        if(string[1]=='U'){
            if(string[2]=='Z'){
                if(string[3]=='Z'){
                    int int_array[4];
                    int x=4;
                    int_array[x]=42;
                }
            }
        }
    }
}