//program 4
#include<stdio.h>
main()
{
	char str[50];
	int i,alpha=0,dig=0,spchar=0,space=0;
	printf("\n enter the string=");
	gets(str);
	for(i=0;str[i];i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i<='Z']))
		alpha++;
		else if(str[i]>='0' && str[i]<='9')
		dig++;
		else if(str[i]==' ')
		space++;
		else
		spchar++;
	}
	printf("Alphabets = %d\n",alpha);
	printf("Digits = %d\n",dig);
	printf("Space=%d\n",space);
	printf("special charecters =%d",spchar);
}
