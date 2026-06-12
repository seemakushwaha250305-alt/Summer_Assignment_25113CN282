#include<stdio.h>
int main()
{
    //program to find maximum frequency element in an array
    int n, i, j, max_freq = 0, freq_element;
    printf("Enter the size of the array: ");

    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        int freq = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }
        if(freq > max_freq)
        {
            max_freq = freq;
            freq_element = arr[i];
        }
    }
    printf("The element with maximum frequency is: %d\n", freq_element);
    printf("Maximum frequency is: %d\n", max_freq);
    return 0;
}