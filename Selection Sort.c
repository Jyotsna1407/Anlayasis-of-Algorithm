//Selection sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[50];
    int i,j,min,n,temp,count1=0,count2=0,count3=0,count4=0;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        min=i;
        count1+=1;
        for(j=i+1;j<n;j++)
        {
            count2+=1;
            if(A[j]<A[min])
            {
                min=j;
                count3+=1;
            }
        }
        if(i!=min)
        {
        temp=A[i];
        A[i]=A [min];
        A[min]=temp;
        count4+=1;
        }
    }
    printf("Sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n No. of iteration  Outer loop :%d ",count1);
    printf("\n No. of iteration Inner loop :%d ",count2);
    printf("\n No. of comparision first if loop :%d ",count3);
    printf("\n No. of movement in if loop:%d ",count4);
    getch();
}
