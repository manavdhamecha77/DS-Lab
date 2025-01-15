#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
   
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    
    int count = 0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i<j && arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    
    printf("\nCount : %d",count);
}
