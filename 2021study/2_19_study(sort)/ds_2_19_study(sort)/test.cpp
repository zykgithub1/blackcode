#include <iostream>
#include <stdio.h>
using namespace std;

//直接插入排序
//void insertSort(int arr[],int sz)
//{
//	int tmp = 0; int i, j;
//	for (i=1; i <sz; i++)
//	{
//		tmp = arr[i]; j = i - 1;
//		while (tmp< arr[j])
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[++j] = tmp;
//	}
//}
//二分查找版本直接插入排序
//void insertSort(int arr[], int sz)
//{
//	int tmp; int i, j;
//	for (i = 1; i < sz; i++)
//	{
//		tmp = arr[i]; j = i - 1;
//		int left = 0; int right = j;
//		int mid = (left + right) / 2;
//		if (tmp < arr[j])
//		{
//			while (left <= right)
//			{
//				if (arr[mid]>tmp)
//				{
//					right = mid - 1;
//				}
//				else
//					left = mid + 1;
//				mid = (left + right) / 2;
//			}
//			for (j = i; j > left; j--)
//				arr[j] = arr[j - 1];
//			arr[left] = tmp;
//		}
//	}
//}
//希尔排序
//void xierSort(int arr[],int sz)
//{
//	int d;
//	for (d = sz / 2; d >=1; d /= 2)
//	{
//		int i, j, tmp;
//		for (i = d; i < sz; i++)
//		{
//			tmp = arr[i]; j = i - d;
//			while (j>=0&&tmp < arr[j])
//			{
//				arr[j + d] = arr[j];
//				j -= d;
//			}
//			arr[j+d] = tmp;
//		}
//	}
//}
int main()
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//insertSort(arr, sz);
	//xierSort(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}