#include <stdio.h>

int init_array(int height, int width, int arr[height][width], int sim);
int print_array(int height, int width, int arr[height][width]);

int main(){
    int height, width, sim;
    scanf("%d", &height);
    scanf("%d", &width);
    scanf("%d", &sim);
    int arr[height][width];
    init_array(height, width, arr, sim);
    print_array(height, width, arr);
    return 0;
}

int init_array(int height, int width, int arr[height][width], int sim){
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            arr[i][j] = sim;
    return(arr);
}

int print_array(int height, int width, int arr[height][width]){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++)
            printf("%d", arr[i][j]);
        printf("\n");
    }

}
