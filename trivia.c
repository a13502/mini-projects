/*trivia game*/
#include <stdio.h>
int s(void);
int g(void);
void pause(int x);
 
int s(void)
    {
    int a=0;
    system("clear");
    printf("\nthis is sport question");
    printf("\nwhat university did nfl star deon attand?");
    printf("\n1\tuniversity of miami\n2\tcaloforni state university\n3\tindiana university\n4\tflorida state university");
    printf("\n choose your option: ");
    scanf("%d",&a);
    return a;
}
int g(void){
      int a=0;
      system("clear");
      printf("\nthis is geography section");
      printf("\nwhat is the capital of india\n1\tkolkata\n2\tdelhi\n3\tmumbai\n4\tahamdabad");
      printf("\nchoose from above");
      scanf("%d",&a);
      return a;
}
main(){
    int m=0;
    int a=0,b=0;
    system("clear");
    do{printf("\nplay a trivia game");
    printf("\nchoose from the following");
    printf("\n1\tsports");
    printf("\n2\tgeography");
    printf("\n3\tquit:\n");
    scanf("%d",&m);
    switch(m){
        case 1:  if(s()==4){
        printf("\ncorrect");
        a++;
        }
        else
        printf("\nincorrect");
        b++;
        pause(2);
    break;
    case 2: 
          if(g()==2){
          printf("\ncorrect");
          a++;
           }
           else
           printf("\nincorrect");
           b++;
           pause(3);
    break;
        
    }
        
    }while(m!=3);
    printf("\ncorrect answers were: %d \nincrrect answers were: %d",a,b);
}

void pause(int x){
    int q=0,w=0;
    q=time(NULL);
    do{
        w=time(NULL);
    }while((w-q)<x);
}



