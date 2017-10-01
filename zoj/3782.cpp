#include <stdio.h>

int main()
{
	int i,n;
	int a,b,c,ans;
	char ch,ch2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %c %d %c %d",&a,&ch,&b,&ch2,&c);
		if((ch=='+'||ch=='-')&&(ch2=='*'||ch2=='/'||ch2=='%')) 
		{
			switch(ch2)
			{
				case '+':ans=b+c;break; 
				case '-':ans=b-c;break;
				case '*':ans=b*c;break;
				case '/':ans=b/c;break;
				case '%':ans=b%c;break;
			}
			switch(ch)
			{
				case '+':ans=a+ans;break;
				case '-':ans=a-ans;break;
			}
		}
		else
		{
			switch(ch)
			{
				case '+':ans=a+b;break;
				case '-':ans=a-b;break;
				case '*':ans=a*b;break;
				case '/':ans=a/b;break;
				case '%':ans=a%b;break;
			}
			switch(ch2)
			{ 
				case '+':ans=ans+c;break;
				case '-':ans=ans-c;break;
				case '*':ans=ans*c;break;
				case '/':ans=ans/c;break;
				case '%':ans=ans%c;break;
			} 
		}
		printf("%d\n",ans);
	}
	return 0;
}