#include<stdio.h>
#include<stdlib.h>

int countReps(int array[], int size, int x){
    int reps = 0;
    for (int i = 0; i < size; i++)
      if (array[i]==x)
        reps++;
    return reps;
}

int main(){
    int array[] = {1, 2, 3, 2};
    printf("%d", countReps(array,4,2));
    return 0;
}