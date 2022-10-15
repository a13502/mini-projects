#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<conio.h>
void main()
{
    char msg[21];
    int Rand,len,i=0,a,j=0,k=0;
    srand(time(NULL));
    printf("enter the message you want to encrypt\n");
    gets(msg);
    len=strlen(msg);

   // printf("choose from the followin\n1\tencrypt\n2\tdecrypt\n");
   // scanf("%d",a);
    Rand=rand()%len+1;
    // for encryption
       while(i!=len)
       { 
          //Rand=rand()%len+1;
          msg[i]+=Rand;
          i++;
       }
        printf("the encrypted message is %s",msg);
    
    //decryption
       while(k!=len)
        {
           msg[k]-=Rand;
           k++;
        }
        printf("\nthe decrypted message is %s",msg);
       
    

}
