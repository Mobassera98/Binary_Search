#include<stdio.h>
int main()
{
    int beg=1,end,mid,iteam,loc,i,n,ara[10];
    printf("How many number you want to input [not more then 10]: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter number %d: ",i);
        scanf("%d",&ara[i]);
    }
    end=n;
    mid=((beg+end)/2);
    printf("\nEnter a number which you want to search: ");
    scanf("%d",&iteam);
    while(beg<=end && ara[mid]!=iteam)
    {
        if(iteam<ara[mid])
        end=mid-1;
        else
            beg=mid+1;
              mid=((beg+end)/2);

    }
    if(ara[mid]==iteam)
        printf("\nNUMBER is Found at index %d\n",mid);
    else
    {
        printf("\nNumber is not found\n");
    }

    return 0;
}
