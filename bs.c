#include<stdio.h>

int binarySearch(int *arr, int n, int tar)
{
    int s = 0, l = n-1;
    int mid = (s+l)>>1;
    while(s < l)
    {
        if(arr[mid] == tar)
        {
            return mid;
        }

        if(arr[mid] > tar)
        {
            l = mid-1;
        }else{
            s = mid+1;
        }

        mid = (s+l)>>1;
    }

    return -1;

}
int main()
{
    int n; 
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i<n; i++)
    {
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }

    printf("\nenter the target - ");

    int tar;

    scanf("%d", &tar);

    int ind = binarySearch(arr,n,tar);

    if(tar == -1)
    {
        printf("\nyour element is not in the array\n");
    }else{
        printf("\nyour element is at the index - %d", ind);
    }

    return 0;
}