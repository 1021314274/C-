#include <iostream>
using namespace std;

int main5() {
	/*-------------------------------------------------------------------------------------------
	* 数组
	*/
	//定义方法
	//1、数据类型  数组名[数组长度]
	int arr[5];
	//2、数据类型  数组名[数组长度] = {1,2,3...};
	int arr2[5] = { 1,2,3,4,5 };
	//3、数据类型  数组名[] =  {1,2,3...};
	int arr3[] = { 1,2,3,4,5 };

	//一维数组的名称用途
	//1、可以统计整个数组在内存中的长度
	cout << sizeof(arr2) << endl;
	cout << sizeof(arr3[0]) << endl;
	//2、可以获得数组在内存中的首地址
	cout << arr2 << endl;
	cout << &arr3[0] << endl;

	//数组元素逆置
	int end = sizeof(arr3) / sizeof(arr3[0]) - 1; //得到数组长度  -1 就能得到最后一个数组的下标值
	//cout << end << endl;
	int start = 0;

	for (int i = 0; i <= end; i++)
	{
		cout << arr3[i] << endl;
	}
	while (start < end)
	{
		int temp = arr3[start];
		arr3[start] = arr3[end];
		arr3[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i <= 4; i++)
	{
		cout << arr3[i] << endl;
	}

	//二维数组
	//定义方法
	//1、数据类型  数组名[行数][列数]
	int arrs[5][3];
	//2、数据类型  数组名[行数][列数] = {{1,2},{1,2},{1,2}...};
	int arrs2[2][3] = 
	{ 
		{1,2,3},{2,3,4} 
	};
	//3、数据类型  数组名[行数][列数] =  {1,2,3...};
	int arrs3[2][3] ={1,2,3,4,5,6};
	//4、数据类型  数组名[][列数] = {1,2,3,...}
	int arrs4[][3] = { 1,2,3,4,5,6 };

	//二维数组的名称用途
	//1、查看二位数组所占内存空间
	cout << "二维数组所占内存空间："<<sizeof(arrs4) << endl;
	cout << "二维数组第一行所占内存空间：" << sizeof(arrs4[0]) << endl;
	cout << "二维数组第一个元素所占内存空间：" << sizeof(arrs4[0][0]) << endl;

	cout << "二维数组行数：" << sizeof(arrs4) /sizeof(arrs4[0]) << endl;
	cout << "二维数组列数：" << sizeof(arrs4[0]) / sizeof(arrs4[0][0]) << endl;

	//2、获取二位数组首地址
	cout << "二维数组内存空间：" << arrs4 << endl;
	cout << "二维数组第一行内存空间：" << &arrs4[0] << endl;
	cout << "二维数组第一个元素内存地址：" << &arrs4[0][0] << endl;
}