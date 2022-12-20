#include<stdio.h>
main()
{
	FILE *fp1,*fp2;
	char ch;
	
	fp1=fopen("
	","r");
	fp2=fopen("cours2.c","w");
	
	while ((ch=getc(fp1))!=EOF)
	putc(ch,fp2);
	printf("check file2");
	fclose(fp1);
	fclose(fp2);
}
