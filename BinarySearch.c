#include <stdio.h>
#include <conio.h>

int binary_search(int array[],int element, int first, int last)
{
    
    if (first>last)
        return -1;
    
    int mid = (first+last)/2;

    if(element == array[mid] )
        return mid;
    else if(element<array[mid])
        last = mid - 1;
    else if(element>array[mid])
        first = mid + 1;
    else
        return -1;
    
    binary_search(array, element, first, last);

}

int main()
{
    int n, array[100], index=-1, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    index = binary_search(array, element, 0, n);
    
    if(index>=0)
        printf("Element found at index: %d", index);
    else
        printf("Element not found");

}