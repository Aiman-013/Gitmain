#include<stdio.h> 
#include<stdlib.h>
int a[10], n, elem, i, pos;
Void create()
{
printf("\nEnter the size of the array elements: ");
scanf("%d", &n);
printf("\nEnter the elements for the array:\n"); 
for(i=0; i<n; i++) 
  scanf(“%d”, &a[i]);
}
Void display(){
Int i;
printf("\nThe array elements are:\n");
for(i=0; i<n; i++)
{
printf("%d\t", a[i]);
}
}
Void insert(){
printf("\nEnter the position for the new element: "); 
scanf("%d", &pos);
printf("\nEnter the element to be inserted: "); 
scanf("%d", &elem);
For(i=n-1; i>=pos; i--)
{
A[i+1] = a[i];
} 
  a[pos] = elem;
  n = n+1;
}
Void del()
{
printf("\nEnter the position of the element to be deleted: ");
Scanf("%d", &pos); 
  elem = a[pos]; 
For(i=pos; i<n-1; i++)
{
A[i] = a[i+1];
} 
  n = n-1;
Printf("\nThe deleted element is = %d", elem);
}
Void main()
{
int ch;
do{
printf("\n\n--------Menu-----------\n");
printf("1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.Exit\n"); 
printf("\nEnter your choice: ");
scanf("%d", &ch); 
switch(ch)
{
Case 1: create();
        break; 
Case 2: Display();
        break; 
Case 3: insert();
        break; 
Case 4: del(); 
        break; 
Case 5: exit(0);
        break;
Default: printf("\nInvalid choice:\n");
        break;
}
}while(ch!=5);
}
