#include <iostream>
using namespace std;

/*

 1、环境和编辑器
 https://www.bilibili.com/video/BV1et411b73Z?p=7（黑马视频教程）
 https://code.visualstudio.com/docs/languages/cpp  （这里面的教程安装C++环境）
 https://visualstudio.microsoft.com/zh-hans/thank-you-downloading-visual-studio/?sku=Community&rel=16 （这个安装编辑器）

 2、变量定义
 语法：变量类型 变量名 = 初始值；
 例如：int a = 10 ;
 3、常量定义两种方式
 (1)#define 宏常量 （通常在文件上方定义表示一个常量）
 定义方式： #define 常量名 = 初始值
 例如：  #define  Day = 7
 (2)const修饰的变量 (通常在变量定义前加关键字const)
 定义方式： const  数据类型 常量名= 常量值
 例如： const int Day = 7
 4、变量命名规则
 (1)变量不可以是关键字
 (2)变量是由字母、数字、下划线构成
 (3)变量第一个字符只能是字母或者下划线
 (4)变量区分大小写
*/
int main1()
{
    cout << "hello  world C++" << endl;
    system("pause");
    return 0;
}