//Insertion sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[50];
    int i,j,temp,n,count1=0,count2=0;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A [i]);
    }
    //insertion sort
    for(i=1;i<n;i++)
   {
        temp=A [i];
        count1+=1;
        for(j=i-1;(j>=0 && A[j]>temp);j--)
        {
            A[j+1]=A [j];
            count2+=1;
        }
        A[j+1]=temp;
    }
    printf("\nSorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n No. of iteration Outer loop:%d",count1);
    printf("\n No. of iteration Inner loop :%d",count2);
    getch();
}
