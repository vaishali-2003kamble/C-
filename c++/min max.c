#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a1,a2,a3,b3,b1,b2,max,a,b;
	    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
	    if(a1>a2 && a1>a3)
	    {
	        max=(a2>a3)?a2:a3;
	        a=a1+max;
	    }
	    else if(a2>a1 && a2>a3)
	    {
	        max=(a1>a3)?a1:a3;
	        a=a2+max;
	    }
	    else
	    {
	        max=(a1>a2)?a1:a2;
	        a=a3+max;
	    }
	    
	     if(b1>b2 && b1>b3)
	    {
	        max=(b2>b3)?b2:b3;
	        b=b1+max;
	    }
	    else if(b2>b1 && b2>b3)
	    {
	        max=(b1>b3)?b1:b3;
	        b=b2+max;
	    }
	    else
	    {
	        max=(b1>b2)?b1:b2;
	        b=b3+max;
	    }
	    if(a>b)
	    {
	        printf("\nalice");
	    }
	    else if(a<b)
	    {
	        printf("\nbob");
	    }
	    else
	    {
	        printf("\ntie");
	    }
	}
}


