#include<stdio.h>
#include<stdlib.h>

int col(int k);
int main (int argc, char** argv){
    if (argc != 3){
        printf("Invalid number of arguments\n");
        return 0;
    }
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    int max_length = 0;
    if(start <= 0 || end <= 0 || end <= start){
        printf("Invalid arguments");
        return 0;
    }
    for (int i = start; i <= end; i++)
    {   
        int length = col(i);
        if (length > max_length){
            max_length = length;
        }
        
    }

    printf("%d\n", max_length);
    
    
    return 0;
}
int col(int k){
    //l = length
    int l = 0;
    while (k >= 1 && k <= 1000000000){
        //printf("%d\n", l);
        if(k == 1 || k == 0){
            l++;
            return l;
        }
        else if (k % 2 == 0 ){
            k = k / 2;
            l++;
        }
        else if (k % 2 == 1){
            k=  3 * k + 1;
            l++;
        }
    
    }
    
    return -1;

   
    
}
