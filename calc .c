#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int divi(int a,int b)
{
	return a/b;
}
int moduls(int a,int b)
{
	return a%b;
}

main()
{
    int a,b,n;
	
	printf("value of A=");
	scanf("%d",&a);
	
	printf("value of B=");
	scanf("%d",&b);
	
	
	do
	{
	    printf("press 1 for addition=\n");
	    printf("press 2 for substraction=\n");
       	printf("press 3 for multiplication=\n");
	    printf("press 4 for division=\n");
	    printf("press 5 for modulation=\n");
	    printf("press 0 for exit\n");
	    
	    printf("enter your choise=");
	    scanf("%d",&n);
	
	    
	    
	    
	    switch(n)
	    {
	    	case 1:
	    		    printf("addition =%d\n",add(a,b));
	    		break;
	    		
	    	case 2:
	    		    printf("substraction =%d\n",sub(a,b));
	    		break;
	    		
	    	case 3:
	    		    printf("multiplication =%d\n",multi(a,b));
	    		break;
	    		
	    	case 4:
	    		    printf("division =%d\n",divi(a,b));
	    		break;
	    		
	    	case 5:
	    		    printf("moduls =%d\n",moduls(a,b));
	    		break;
		}
	}while(n!=0);	
	
}
