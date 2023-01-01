#include<stdio.h>
void main()
{

int pos,i,n,key,flag;
int a[100];

printf("enter the number of elements ");
scanf("%d",&n);

for( i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}


printf("enter the key to be searched  ");
scanf("%d",&key);


for(i=0;i<n;i++)
{
        if(a[i]==key)
        {
                flag=1;
                pos=i;
                break;
        }
}


if(flag==1)
{
	printf("key %d is found  at position %d",key,pos);
}

else
{
	 printf("key is not  found");
}

}
