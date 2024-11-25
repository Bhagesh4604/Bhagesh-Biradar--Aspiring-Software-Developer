#include<stdio.H>
void main()
{
    int buf[10],bufsize,in,out,pro,con,ch=0;
    in=0
    out=0;
    bufsize=10;
    while(ch!=3){
        printf("\n1.Produce\t 2.Consume \t 3.Exit\n");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: 
            if((in+1)%bufsize==out)
            printf("\n Buffer is full\n");
            else
            {
                printf("\n Enter the value:")
                scanf("%d",&pro);
                buf[in]=pro;
                in=(in+1)%bufsize
            }
            break;

        case 2:
            if(in==out)
            printf("\ Buffer is Empty");
            else{
                con=buf[out];
                printf("\n The consumed value is %d",con);
                out=(out+1)%bufsize;
            }
            break;
        case 3:printf("Exit the program select correct option");
            break;        
        default:
            printf("\n Invalid choice. Please enter 1,2,or 3.");
        }
     }
    }
