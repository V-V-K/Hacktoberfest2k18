#include <stdio.h>
#include <conio.h>

void bubble_sort(int array[], int n)
{
    int tmp; 

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++ )
        {
            if(array[j]>array[j+1])
            {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

int main()
{
    
    int array[100], n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    bubble_sort(array,n);

    printf("Sorted array is: ");
    for(int i=0; i<n; i++)
    {
        printf(" %d ", array[i]);
    }

}