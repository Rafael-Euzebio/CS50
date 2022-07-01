#include <stdio.h>
#include <cs50.h>

int get_height();

int main(void)
{
    int  height = get_height();
    while(height < 1 || height > 8){
        height = get_height();
    }

    for (int i = 0;  i < height; i++) {
       
        for(int spaces = height - i; spaces > 1; spaces--){
            printf(" ");
        }

        for(int first_block = 0; first_block <= i; first_block++){
            printf("#");
        }        

        printf("  ");

        for(int second_block = 0; second_block <= i; second_block++){
            printf("#");
        }

        printf("\n");
    }
    
}

int get_height(void){
    return get_int("Height ");
}
