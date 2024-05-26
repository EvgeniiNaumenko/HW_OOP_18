//Створіть для користувача класи розумних покажчиків.
//Один з класів повинен повторювати функціональність
//стандартного класу unique_ptr, а інший shared_ptr.Напишіть код з тестування ваших класів.

#include <iostream>
using namespace std;
#include "MyUnique.h"
#include "MyShared.h"


int main()
{
	//unique_ptr // только дин указатель на обьект
	//shared_ptr // указателей  может быть много очистка памяти как умирает последний указатель

	////MyUnique
	//cout << "--------------------------------" << endl;
	//MyUnique<int> newPtr(new int(1000));
	//cout << "My ptr1 :" << *newPtr << endl;
	////MyUnique<int> newPtr2 = newPtr; // тут ошибка стандартніе методі копирования запрещені
	//cout << "--------------------------------" << endl;
	//MyUnique<int> newPtr2;
	//newPtr2.remove(newPtr); // хз что не так
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