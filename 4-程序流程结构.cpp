#include <iostream>
using namespace std;

int main4() {

	/*
	* --------------------------------------------------------------------------------------------------------
	*ѡ��ṹ
	 */
	 //if���
	 while (true) {
		 int soure = 0;
		 cout << "���û����������" << endl;
		 cin >> soure;


		 if (soure >= 600) {
			 cout << "��ϲ�㣬�������廪";
		 }
		 else if (soure < 600 && soure >= 500) {
			 cout << "��ϲ�㣬�����˱���";
		 }
		 else {
			 cout << "��ϲ�㣬���������ƴ�ѧ";
		 }
	 }

	 //��Ŀ����� ���ʽ1?���ʽ2:���ʽ3
	int a = 1;
	int b = 2;
	string c = "";

	a > b ? c = "a��" : c = "b��";
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
		cout << "a2������1��2��3" << endl;
	}

	/*
	* --------------------------------------------------------------------------------------------------------
	*ѭ���ṹ
	 */
	 //whileѭ��
	int a3 = 0;
	while (a3 < 10) {
		cout << a3 << endl;
		a3++;
	}
	//whileѭ��С��Ϸ��ϰ ������
	int number = rand() % 100 + 1;
	cout << "������,���������� ����:" << number << endl;
	int qu = 0;
	while(true) {
		cin >> qu;
		if (qu > number) {
			cout << "����������ֹ�����" <<endl;
		}
		else if (qu < number) {
			cout << "����������ֹ�С��" <<endl;
		}
		else {
			cout << "��ϲ���¶���" << endl;
			break;
		}
	}
	cout << "��Ϸ����" << endl;

	//do whileѭ�� 
	// �﷨ do{ ѭ������}while(�����ж�); ��while��ͬ���� do while��Ҫ��ִ�����ݣ��ڽ��������ж�

	//for ѭ��
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	//forѭ���˷��ھ���
	for (int x = 1; x < 10; x++) {
		for (int y = 1; y <= x; y++) {
			cout << y << " x " << x << " = " << x * y << "\t";
		}
		cout << "\n";
	}

	/*
	* --------------------------------------------------------------------------------------------------------
	*��ת���
	 */
	 //break ��������ѡ��ṹ����ѭ���ṹ
	 //continue  ��ѭ������У���������ѭ������δִ����ɵ���䣬����ִ����һ��ѭ��
	 //goto ��������ת���

	cout << "1" << endl;
	goto  AAA;
	cout << "2" << endl;
	cout << "3" << endl;
	AAA:
	cout << "4" << endl;
	cout << "5" << endl;

}