#include <stdio.h>
#include <string.h>
 
int Compare_Strings(char *Str1, char *Str2);
 
int main()
{
  	char Str1[100], Str2[100];
  	int result;
 
  	printf("\n Please Enter the First String :  ");
  	gets(Str1);
  	
  	printf("\n Please Enter the Second String :  ");
  	gets(Str2);
  	
  	result = Compare_Strings(Str1, Str2);
  	
  	if(result < 0)
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(result > 0)
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
  	
  	return 0;
}
int Compare_Strings(char *Str1, char *Str2)
{
	int i = 0;
  	while(Str1[i] == Str2[i])
  	{
  		if(Str1[i] == '\0' && Str2[i] == '\0')
	  		break;
		i++;
	}
	return Str1[i] - Str2[i];
}
