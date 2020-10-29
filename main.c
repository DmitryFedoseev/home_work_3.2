#include <stdio.h>

void init_array(int height, int width, int *parr[], int sim);
void print_array(int height, int width, int *parr[]);

int main(){
    int my_array [10][10];
    init_array(10,10,my_array,0);
    print_array(10,10,my_array);

    printf("\n");

    init_array(10,10,my_array,1);
    print_array(10,10,my_array);

    return 0;
}

void init_array(int height, int width, int *parr[], int sim){
    int (*p)[height] = parr;
    for(int *i = p[0]; i < p[0] + height * width; i++){
            *i = sim;
    }
}

void print_array(int height, int width, int *parr[]){
    int (*p)[height] = parr;
    for(int i = 0; i < height; i++){
        for(int *j = p[i]; j < p[i] + width; j++)
            printf("%d ", *j);
        printf("\n");
    }
}
