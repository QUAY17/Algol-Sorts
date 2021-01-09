 /**
 * Assignment: prelab 4
 * 
 * @file    bubble_sort.c
 * @brief   Algorithms: Sorting
 * @author  Group 1: Jennifer
 * @date    Sept 25, 2020
 */ 

#include <stdio.h>

void bubble_sort(int a[],size_t size);

int main(void)
{

int i=0; 

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int b[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int c[] = {5,7, 8, 4, 3, 10, 1, 4, 4, 5};
int size = sizeof(a) / sizeof(int);

bubble_sort(a,size);

for(i = 0; i < size; i++){
    printf("Array Val: a[%d] = %d\n",i, a[i]);
}
    return 0;
}
void bubble_sort(int a[],size_t size)
{
    int i =0;
    int tmp =0;
    int sorts=0;
    for(sorts=0;sorts < size -1; sorts++){
        for (i=0;i < size-sorts-1; i++){
            if (a[i] > a[i+1]){
                tmp=a[i+1];
                a[i+1]=a[i];
                a[i]=tmp;
            }
        }
}


}

