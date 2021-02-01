#include <iostream>
using namespace std;

int main4() {

	/*
	* --------------------------------------------------------------------------------------------------------
	*选择结构
	 */
	 //if语句
	 while (true) {
		 int soure = 0;
		 cout << "请用户输入分数：" << endl;
		 cin >> soure;


		 if (soure >= 600) {
			 cout << "恭喜你，考入了清华";
		 }
		 else if (soure < 600 && soure >= 500) {
			 cout << "恭喜你，考入了北大";
		 }
		 else {
			 cout << "恭喜你，考入了杂牌大学";
		 }
	 }

	 //三目运算符 表达式1?表达式2:表达式3
	int a = 1;
	int b = 2;
	string c = "";

	a > b ? c = "a大" : c = "b大";
	cout << c << endl;

	//switch 
	int a2 = 10;
	switch (a2) {
	case 1:
		cout << "a2 = 1 " << endl;
		break;
	case 2:
		cout << "a2 == 2" << endl;
		break;
	case 3:
		cout << "a2 ==3 " << endl;
		break;
	default:
		cout << "a2不等于1，2，3" << endl;
	}

	/*
	* --------------------------------------------------------------------------------------------------------
	*循环结构
	 */
	 //while循环
	int a3 = 0;
	while (a3 < 10) {
		cout << a3 << endl;
		a3++;
	}
	//while循环小游戏练习 猜数字
	int number = rand() % 100 + 1;
	cout << "猜数字,请输入数字 答案是:" << number << endl;
	int qu = 0;
	while(true) {
		cin >> qu;
		if (qu > number) {
			cout << "您输入的数字过大了" <<endl;
		}
		else if (qu < number) {
			cout << "您输入的数字过小了" <<endl;
		}
		else {
			cout << "恭喜您猜对了" << endl;
			break;
		}
	}
	cout << "游戏结束" << endl;

	//do while循环 
	// 语法 do{ 循环内容}while(条件判断); 与while不同的是 do while需要先执行内容，在进行条件判断

	//for 循环
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	//for循环乘法口诀表
	for (int x = 1; x < 10; x++) {
		for (int y = 1; y <= x; y++) {
			cout << y << " x " << x << " = " << x * y << "\t";
		}
		cout << "\n";
	}

	/*
	* --------------------------------------------------------------------------------------------------------
	*跳转语句
	 */
	 //break 用于跳出选择结构或者循环结构
	 //continue  在循环语句中，跳过本次循环中尚未执行完成的语句，继续执行下一次循环
	 //goto 无条件跳转语句

	cout << "1" << endl;
	goto  AAA;
	cout << "2" << endl;
	cout << "3" << endl;
	AAA:
	cout << "4" << endl;
	cout << "5" << endl;

}