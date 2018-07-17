#include<iostream>
#include<vector>
#include<algorithm>   //�ܶ����ú���������
using namespace std;

void  printResult(vector<int> data, int len)
{
	for (int k = 0; k < len; k++)
	{
		cout << data[k] << ',';
	}
	cout << endl;
}

//���ֽ�������
//ð������ �ȶ�����
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

//�������� ���ȶ�
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

//����ѡ������
//ֱ�Ӳ���

//������ ���ȶ�
//������
void CreatHeap(std::vector<int>& data)
{

}

void HeapSort(std::vector<int>& data, int len)
{

}


int main()
{
	vector<int> data;   //��Ҫ���������
	int num;
	cout << "��������������飬����ctrl+z�������룺";
	while (cin >> num)
	{
		data.push_back(num);
	}
	cin.clear();
	cin.ignore();
	int len = data.size();
	//����ð��������
	/*
	BubbleSort(data, len);
	cout << "ð����������";
	printResult(data, len);
	*/

	//���ÿ��ź���
	/*
	int low = 0, heigh = len - 1;
	QuickSort(data, low, heigh);
	cout << "������������";
	printResult(data, len);
	*/

	//����C++����sort����
	/*
	cout << "C++�Դ�sort��������";
	std::sort(data.begin(), data.end());
	printResult(data, len);
	*/
	return 0;
}