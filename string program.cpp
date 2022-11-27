#include<stdio.h>
#include<string.h>

int main()
{
	char st[55];
	int i, count = 0;
	
	printf("\nenter any of ur desired value of string:");
	gets(st);
	
	printf("\n\n\tnumber of times each vowel in the stirng: ");
	
	for (i=0;i<strlen(st);i++) {
		if (st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u') {
			count++;
			printf("%c",st[i]);
		}
	}
	printf("\t\t\tnumber of characters of vowel in the string: %d",count);
	
	printf("\n");
	return 0;
}

