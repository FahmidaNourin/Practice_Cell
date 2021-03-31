#include<stdio.h>
int main()
{
    int lrg=30,scl=26,i,x;

    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x>lrg){
            scl=lrg;
            lrg=x;
        }
        else if(x>scl){
            scl=x;
        }
        printf("Large is %d\n",lrg);

        printf("Second large is %d\n",scl);

        printf("This is an infinite loop \n");

    }

}



