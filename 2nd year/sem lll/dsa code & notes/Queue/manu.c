#include<stdio.h>
#include<stdlib.h>
#define Size 10
  
int Rear=-1, Queue[Size];
int Front=-1;
void Insert();
void Delete();
void Traverse();
  
int main()
{
    int operation;
     
    while(1)    
    {
      
        printf("\n1=is is insert elements\n2=is delete the element\n3=is traverse\n4=is stop program");
        printf("\n\nEnter the number which you want to perform:");
        scanf("%d",&operation);
         
        switch(operation)
        {
            case 1: Insert();
                    break;
            case 2: Delete();
                    break;
            case 3: Traverse();
                    break;
            case 4: exit(0);
             
            default: printf("\nInvalid number!!");
        }
    }
}
  
void Insert()
{
    int x;
     
    if(Rear==Size-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the queue:");
        scanf("%d",&x);
        Rear++;
        Queue[Rear]=x;
    }
}
  
void Delete()
{
    if(Front==Rear)
    {
        printf("\nUnderflow!!");
    }
    else
    {  Front++;
        printf("\ndelete front  element on queue which is->:  %d",Queue[Front]);
        
        
    }
}
  
void Traverse()
{
     
     
    if(Front==Rear)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nprinting all Elements present on queue: \n");
        for(int i=0;i<=Rear;i++)
            printf("%d\n",Queue[i]);
    }
}