#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


void reverse(char* a, char* b);
int main()
{
	char arr[101] = {0};
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	char* end = arr;
	while (*start != '\0')
	{
		if (*end != ' '&& *end !='\0')
		{
			end++;
		}
		else
		{
			reverse(start, end-1);
			start = end + 1;
			end = end + 1;
		}
	}
	printf("%s", arr);
	return 0;
}
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char temp = 0;
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}