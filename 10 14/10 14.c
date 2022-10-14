#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n",arr );
//	printf("%p\n", &i);
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	ststem("pause");
//	return 0;
//}

//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		str++;
//		dest++;
//	}
//	*dest = *str;
//}

//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* str)
//{
//	if (dest != NULL && str != NULL)
//	{
//		while (*dest++ = *str++)
//		{
//			;
//		}
//	}
//}

#include<assert.h>
//void my_strcpy(char* dest, char* str)
//{
//	assert(dest != NULL);//¶ÏÑÔ 
//	assert(str != NULL);
//
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, const char* str)
//{
//	assert(dest != NULL);//¶ÏÑÔ 
//	assert(str != NULL);
//
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}

//×îÖÕ°æ
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;
//	assert(dest != NULL);//¶ÏÑÔ 
//	assert(str != NULL);
//
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}