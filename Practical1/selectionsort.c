//program to perform selection sort
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
};
void printresult(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
};
void selection_sort(int a[],int n)
{
    int min_index;

    for(int i=0;i<n;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }        
        }
        swap(&a[i],&a[min_index]);
    }
};

int main()
{
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    selection_sort(a,n);
    printresult(a,n);
    return 0;
}
