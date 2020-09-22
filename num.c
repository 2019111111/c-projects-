#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num;
     int summition=0;
     int division=1;
     printf("enter the number you want to check");
     scanf("%d \n",&num);
     if (num<1000){
        for( division=1; division<num ;  division+=1)
        {
            if(num%division==0){
                summition+=division ;}

        }
        if(summition==num){
        printf("the number is perfect ");}

        else{
            printf("the number isnot perfect\n");
        }
        }
}
