#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int height = get_int("Height ");     

    for(int i = 0; i < height; i++){

        for(int s = height - i; s > 1; s--){
            printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf("#");     
        }
        printf("\n");
    }
}
