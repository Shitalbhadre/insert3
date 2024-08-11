#include<stdio.h>
void main()
{
    int n,i,a[10],num,pos;
    printf("Enter the number of elements you want in an array:");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("array elements are:\n");
    for(i=0; i<n; i++){
        printf("%d\n", a[i]);
    }

     printf("Enter the number which you want to insert at any position:");
     scanf("%d",&num);

     printf("at what position you want insert number:");
     scanf("%d\n", &pos);
    
    for(i=n; i>=pos; i--){
        a[i]=a[i-1];
        
    }

    a[pos]=num;   
        
    printf("Array after inserting element:");
    for(i=0; i<=n; i++){
        printf("%d\n", a[i]);
    }
}