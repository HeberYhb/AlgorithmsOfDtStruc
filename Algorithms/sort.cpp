#include<iostream>
#include<vector>
#include<algorithm>   //很多内置函数可以用
using namespace std;

void  printResult(vector<int> data, int len)
{
	for (int k = 0; k < len; k++)
	{
		cout << data[k] << ',';
	}
	cout << endl;
}

//两种交换排序
//冒泡排序 稳定排序
void BubbleSort(std::vector<int>& data, int len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{

		for (int j = i + 1; j < len; j++)
		{
			if (data[j]<data[i])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

//快速排序 不稳定
void QuickSort(std::vector<int>& data, int low, int heigh)
{
	if (low >= heigh)
	{
		return;
	}
	int start = low, end = heigh;
	int key = data[start];

	while (start < end)
	{
		for (int i = end; i >= start; i--)
		{
			end = i;
			if (key > data[i])
			{
				int tmp = data[start];
				data[start] = data[i];
				data[i] = tmp;

				break;
			}
		}
		for (int j = start; j <= end; j++)
		{
			start = j;
			if (key < data[j])
			{
				int tmp1 = data[end];
				data[end] = data[j];
				data[j] = tmp1;

				break;
			}
		}
	}
	QuickSort(data, low, start - 1);
	QuickSort(data, start + 1, heigh);
}

//两种选择排序
//直接插入

//堆排序 不稳定
//创建堆
void CreatHeap(std::vector<int>& data)
{

}

void HeapSort(std::vector<int>& data, int len)
{

}


int main()
{
	vector<int> data;   //需要排序的数组
	int num;
	cout << "请输入待排序数组，并以ctrl+z结束输入：";
	while (cin >> num)
	{
		data.push_back(num);
	}
	cin.clear();
	cin.ignore();
	int len = data.size();
	//调用冒泡排序函数
	/*
	BubbleSort(data, len);
	cout << "冒泡排序结果：";
	printResult(data, len);
	*/

	//调用快排函数
	/*
	int low = 0, heigh = len - 1;
	QuickSort(data, low, heigh);
	cout << "快速排序结果：";
	printResult(data, len);
	*/

	//调用C++内置sort函数
	/*
	cout << "C++自带sort排序结果：";
	std::sort(data.begin(), data.end());
	printResult(data, len);
	*/
	return 0;
}