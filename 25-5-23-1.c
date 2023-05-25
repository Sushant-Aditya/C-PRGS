//25-5-23
/*
Strings
Strings are used for storing text/characters.

For example, "Aditya Colleges" is a string of characters.
we must use the char type and create an array of characters to make a string in C:
	-->char str[] = "Aditya Colleges";
we can use the printf() function with the format specifier %s.
it appends a null character '\0' at end of the string.
for example "aditya", what happens? it stores inside aditya\0.
string terminating character --->  '\0'  means null character
Example:
char str[] = "Aditya Colleges";
printf("%s", str);
*/
//input a string and print it. and accesing a string.(find length)
#include<stdio.h>
#include<ctype.h>
main()
/*
{
	char arr[100];
	int i=0,count=0,len;
	printf("Enter any string:");
	gets(arr);   //aditya colleges
	
	// finding length of a string
	while(arr[i++]!='\0')
		count++;
	
	//printf("\n\n%d",count);
	len=count;
	for(i=0;i<len;i++)
		printf("%c ",arr[i]);
}
*/
//count number of words in a given string
/*
{
	char str[100];
	int i=0,count=0;
	
	gets(str); //aditya degree college
	while(str[i++]!='\0')
		if(str[i]==' ')
			count++;

	printf("\n%d",count+1);
}
*/
//find number of alphabets, digits and spl char in a string

{
	char str[100],ch;
	int i=0,wrd,dig,alp;
	
	wrd=dig=alp=0;
	gets(str); //aditya degree college
	while(str[i++]!='\0')
	{
		ch=str[i];
		if(ch==' ')
			wrd++;
		if(ch>='0' && ch<='9')
			dig++;
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
			alp++;
	}
	printf("\n%d",wrd+1);
	printf("\n%d",dig);
	printf("\n%d",alp);
}


