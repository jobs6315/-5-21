#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, char* src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//	assert(src && dest);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char *arr2 = "hello bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf_s("%d", & num);
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 6;
//	for (i = 0;i <10;i++)
//	{
//		scanf_s("%d",&arr[i]);
//	}
//	for (i = 0;i < 10;i+=2)
//	{
//		arr[j] = arr[i];
//		j++;
//	}
//	printf("\n");
//	for (i = 1;i < 10;i += 2)
//	{
//		arr[k] = arr[i];
//		k++;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//void func(int arr[], int sz)
//{
//    int i = 0;   //首先将i初始化
//    for (int j = 0; j < sz; j++)
//    {
//        if (arr[j] % 2 == 1)   //进去的条件：nums是奇数
//        {
//            int tmp = arr[j];   //先保存nums[j]
//            for (int k = j - 1; k >= i; k--) //将[i，j)之间的偶数都像后移动一个位置
//            {
//                arr[k + 1] = arr[k];
//            }
//            arr[i++] = tmp;  //将tmp的值放进前面因移动而多出的一个空位上，下标i向后移动
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    func(arr, sz);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//void swap(int arr[], int sz)
//
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//    while (left < right)
//    {
//        // 从前往后，找到一个偶数，找到后停止
//        while ( arr[left] % 2 == 1)
//        {
//            left++;
//        }
//
//        // 从后往前找，找一个奇数，找到后停止
//        while (arr[right] % 2 == 0)
//        {
//            right--;
//        }
//
//        // 如果偶数和奇数都找到，交换这两个数据的位置
//        // 然后继续找，直到两个指针相遇
//        if (left < right)
//        {
//            tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    swap(arr, sz);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<assert.h>
//int My_strlen(const char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = My_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[10] = { 0 };
//	gets_s(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0;i < n;i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0;i <= 100000;i++)
//	{
//		//判断i是否为“水仙花数”
//		//1234
//		//1.计算i时几位数->n
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.得到i的每一位，计算他的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int line =0;
//	scanf_s("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0;i < line - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			printf(" ");
//		}
//		for(j)
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    printf("%d\n", sizeof(long double));
//    return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a > b) ? a : b;
//	printf("%d", max);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char strings[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    printf("%c\n", strings);
//    return 0;
//}
//int main()
//{
//    int ret = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", ret);
//    return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (c > b)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	if (b > a)
//	{
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf_s("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int i = 0;
//    for (i = 0;i < n;i++)
//    {
//        scanf_s("%d ", &arr1[i]);
//    }
//    int arr2[1000] = { 0 };
//    int j = 0;
//    for (j = 0;j < m;j++)
//    {
//        scanf_s("%d ", &arr2[j]);
//    }
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    return 0;
//}
//#include<math.h>
//int main()
//{
//    int i = 0;
//    scanf_s("%d", &i);
//    int a = 0;
//    int b = 0;
//    int count = 0;
//    while (i)
//    {
//        a = i % 10;
//        if (i % 2 == 0)
//        {
//            i = 0;
//        }
//        else
//        {
//            i = 1;
//        }
//        b += i * pow(10, a++);
//        i = i / 10;
//    }
//    printf("%d\n", b);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf_s("%d", &n);
//    int i = 0;
//    for (i = 0;i < n;i++)
//    {
//        int j = 0;
//        for (j = 0;j < n - i;j++)
//        {
//            printf("  ");
//           
//        }
//        for (j = 0;j < i + 1;j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m, n, temp, i;
//	scanf_s("%d%d", &m, &n);
//	if (m < n) 
//	{
//	temp = m;
//	m = n;
//	n = temp;
//	}
//	for (i = m; i > 0; i++) 
//		if (i % m == 0 && i % n == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", i * a);
//	return 0;
//}
#include<string.h>
#include<stdio.h>
#include<string.h>
void reverse(char* start, char* end)
{
	char tmp;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets_s(arr);
	int len = strlen(arr);
	int i = 0;
	//先将字符串整体翻转
	reverse(arr, arr + len - 1);
	char* a = arr;
	for (i = 0; i <= len; i++)
	{
		if (arr[i] == ' ' || arr[i] == '\0')
		{
			reverse(a, arr + i - 1);//空格之前的再一次翻转，两次翻转正好
			a = (arr + i + 1);
		}
	}
	printf("%s", arr);
	return 0;
}
