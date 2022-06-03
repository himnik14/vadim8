#include <iostream>
#include <clocale>
#include <string>
#include <windows.h>

#include <vector>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str1, str2;
	cout << "Введите текст, в который вы хотите вставить слово: " << "\n";
	getline(cin, str1); // С помощью гетлайн присваиваем переменным текст 
	int p = 0; // Счетчик пробелов 
	cout << "Введите слово, которое хотите вставить: ";
	getline(cin, str2);
	str2.insert(0, " "); // Перед словом, которые мы хотим вставить ставим пробел, чтобы оно не сливалось с текстом далее 
	for (int i = 0; i < str1.length(); i++) { // В цикле for проходим по всему тексту, если находим первый пробел то прибавляем к счетчику пробелов 1
											  // Когда находим второй пробел с помощью функции инсерт ставим вместо пробела слово
		if (str1[i] == ' ') {
			p++;
		}
		if (str1[i] == ' ' && p == 2) {
			str1.insert(i, str2);
		}

	}
	cout << "Изменённый текст: " << str1;
}