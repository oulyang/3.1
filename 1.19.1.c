#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[8] = { 0 };
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////Ô¤¶¨Òå·ûºÅ
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __DATE__);
//
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("time.txt", "w");
//	if (!pf)
//	{
//		return 0;
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			arr[i] = i;
//			fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int c = MAX(a++, b++);
//	//int c=(a++)>(b++)?(a++):(b++)
//	printf("%d\n", c);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("a");
//#elif 2==2
//	printf("b");
//#else
//	printf("c");
//#endif
//	printf("d");
//	return 0;
//}


//#define DEBUG 1
//
//int main()
//{
//#if defined(DEBUG)
//	printf("a");
//#endif

////#ifdef DEBUG
////printf("A");
////#endif // DEBUG

//	return 0;
//}