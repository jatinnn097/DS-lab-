
#include <stdio.h>
#include <stdlib.h>
void create_array(int a[] , int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
}
int insert_array(int a[])
{
    int i,pos,item,n;
    if (pos>n || pos<=0)
    {
        printf("invalid position",n);
        return n;
    }
    for (i=n-1;i>=pos;i--)
    {

        a[i+1]=a[i];
    }
    a[pos]=item;
    return n+1;
}
int delete_at_pos (int a[] ,int n ,int pos)
{
    int i;
    if (pos==n || pos<n)
    {
        printf("invalid position",n);
        return 0;
    }
    printf("item deleted = %d\n",a[pos]);
    for(i=pos+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    return n-1;
}
void display_array(int a[],int n)
{
    int i;
    for(i=0;i<0;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[100],n,pos,item,ch;
    printf("enter the number of elemrnts");
    scanf("%d",&n);
    while(1)
    {
        printf("enter your choice\n:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:create_array(a,n);
            break;
            case 2:printf("insertion\n");
                   printf("Enter the position");
                   scanf("%d",&pos);
                   printf("Enter the item");
                   scanf("%d",&item);
                   n=insert_array(a);
                   break;
            case 3:printf("Deletion\n");
                   printf("enter the position");
                   scanf("%d",&pos);
                   n=delete_at_pos (a,n,pos);
                   break;
            case 4:display_array(a, n);
                    break;
        }
    }
         return 0;
}



