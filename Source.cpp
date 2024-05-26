//������� ��� ����������� ����� �������� ���������.
//���� � ����� ������� ����������� ���������������
//������������ ����� unique_ptr, � ����� shared_ptr.�������� ��� � ���������� ����� �����.

#include <iostream>
using namespace std;
#include "MyUnique.h"
#include "MyShared.h"


int main()
{
	//unique_ptr // ������ ��� ��������� �� ������
	//shared_ptr // ����������  ����� ���� ����� ������� ������ ��� ������� ��������� ���������

	////MyUnique
	//cout << "--------------------------------" << endl;
	//MyUnique<int> newPtr(new int(1000));
	//cout << "My ptr1 :" << *newPtr << endl;
	////MyUnique<int> newPtr2 = newPtr; // ��� ������ ���������� ����� ����������� ��������
	//cout << "--------------------------------" << endl;
	//MyUnique<int> newPtr2;
	//newPtr2.remove(newPtr); // �� ��� �� ���
	//cout << "My ptr2 :" << *newPtr2 << endl;
	//cout << "My ptr1 :" << *newPtr << endl;


	////MyShared
	cout << "--------------------------------" << endl;
	MyShared<int> ptr(new int(500));
	cout << "My ptr :" << *ptr << endl;
	MyShared<int> ptr2(ptr);
	cout << "My ptr2 :" << *ptr2 << endl;

	return 0;
}