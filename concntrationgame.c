/*cincentration game*/

#include <stdio.h>
void main()
{      int a,b,c,d,e,f,g,h,i,j,k,l,m,x=0;
       srand(time(NULL));
       printf("wanna play a maths game!\nlet's \tchoose level of difficulty from below.\n ");
       do{
       printf("\n\t1\teasy\n\t2\tmoderated\n\t3\tdifficult\n\t4\tquit:");
       scanf("%d",&a);
           b=(rand()%100)+1;
           c=(rand()%100)+1;
           d=(rand()%100)+1;
           e=(rand()%100)+1;
           f=(rand()%100)+1;
       if(a!=4){
           if(a==1){
           printf("concentrate on these 3 number:\n %d\t%d\t%d ",b,c,d);
           printf("\n ok now ready!!!");
           g=time(NULL);
             do{ 
               h=time(NULL);
               
           }while((h-g)<5);
           system("clear");
           printf("\nenter each number with space:");
           scanf("%d%d%d",&i,&j,&k);
           if(i==b&&j==c&&k==d)
              printf("\ncongratulations you got it right");
              else
              printf("\nsorry! the right numbers were: %d %d %d",b,c,d);
           }
    else       
      if(a==2){
           printf("concentrate on these 5 number:\n %d\t%d\t%d\t%d\t%d ",b,c,d,e,f);
           printf("\n ok now ready!!!");
           g=time(NULL);
             do{ 
               h=time(NULL);
               
           }while((h-g)<5);
           system("clear");
           printf("\nenter each number with space:");
           scanf("%d%d%d%d%d",&i,&j,&k,&l,&m);
           if(i==b&&j==c&&k==d){
              printf("\ncongratulations you got it right");}
              else
              printf("\nsorry! the right numbers were: %d %d %d %d %d",b,c,d,e,f);
            }
        else
        if(a==3){
           printf("concentrate on these 3 number:\n %d\t%d\t%d\t%d\t%d ",b,c,d,e,f);
           printf("\n ok now ready!!!");
           g=time(NULL);
             do{ 
               h=time(NULL);
               
           }while((h-g)<2);
           system("clear");
           printf("\nenter each number with space:");
           scanf("%d%d%d%d%d",&i,&j,&k,&l,&m);
           if(i==b&&j==c&&k==d){
              printf("\ncongratulations you got it right");}
              else
              printf("\nsorry! the right numbers were: %d %d %d %d %d",b,c,d,e,f);
        }
       }
       
       }while(a<4);
       printf("\nthank you for showing interest");
       
}


