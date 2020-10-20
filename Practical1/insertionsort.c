// program to perform insertion sort
#include<stdio.h>
void printresult(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
};

void insertion_sort(int a[],int n){

    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        printf("value of j is %d\n",j);
        while(temp<=a[j])
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=temp;
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
    insertion_sort(a,n);
    printresult(a,n);
    return 0;
}


