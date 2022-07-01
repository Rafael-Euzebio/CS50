#include <cs50.h>
#include <stdio.h>

int get_height();

int main(void) 
{
    int height = get_height();
    while(height > 8 || height < 1)
    {
        height = get_height();
    }

    for(int i = 0; i < height; i++){

        for(int spaces = height - i; spaces > 1; spaces--){
            printf(" ");
        }

        for(int k = 0; k <= i; k++){
            printf("#");     
        }
        printf("\n");
    }
}

int get_height()
{
    return get_int("Height ");     
    
}
