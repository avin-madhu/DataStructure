#include<stdio.h>
int main()
{
    int arr[100]={2,4,6,1,5,3},n=6;
    int small,ind,temp=0,i,j;

    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(arr[j]<arr[i])
        {
           ind =j;
        }
         temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            
      }
            
    }


for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
}    
    