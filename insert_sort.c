 /**
 * Assignment: prelab 4
 * 
 * @file    insert_sort.c
 * @brief   Algorithms: Sorting
 * @author  Group 1: Jennifer, Justin, Antonio
 * @date    Sept 25, 2020
 */ 

#include <stdio.h>

void insertion_sort(int a[],size_t size);

int main(void)
{

    int i=0; 

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int c[] = {5,7, 8, 4, 3, 10, 1, 4, 4, 5};
    int size = sizeof(a) / sizeof(int);

    //loop through sorts
    int sorts = 0;
    for(sorts = 0; sorts < size; sorts++){
        insertion_sort(a,size);
    }

    //print sorted array
    for(i = 0; i < size; i++){
        printf("Array Val: a[%d] = %d\n",i, a[i]);
    }    
    return 0;
}

void insertion_sort(int a[],size_t size)
{
    int i =0;
    int tmp =0;
    int j =0;

    for(i = 0; i < size; i++)
    {
        tmp = a[i];
        j = i -1;

        while (j >= 0 && a[j] > tmp)
        {
            a[j+1] = a[j];
            j = j-1;  
            
        }
        a[j+1] = tmp;
    } 
}