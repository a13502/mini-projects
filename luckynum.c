#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int n,a,b,c,i,j=1;
    srand(time(NULL));
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    //scanf("%d%d%d",&a,&b,&c);
        a=rand()%9+1;
        b=rand()%9+1;
        c=rand()%9+1;
        printf("%d%d%d\n",a,b,c);
	    while(j==i)
	    {
		if(a==7||b==7||c==7)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	    printf("NO\n");
	    }
	    j++;
	    }
	}
	return 0;
}

