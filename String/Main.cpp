#include <iostream>
#include <string> //библиотека, позволяющая работать со строками С++


int main () {
	setlocale(LC_ALL, "Russian");
		int n;

		// Строки языка С
		/*char cstr[4]{'H', 'i', '!', '\0'}; //длину массива можно не указывать
		std::cout << cstr << std::endl;
		
		char cstr2[] = "Hallo world!";//удобнее
		std::cout << cstr2 << std::endl;*/
		
		// Строки языка С++
		/*std::string mystr; //создание пустой строки = " " (строковые переменные)
		std::cout << mystr << std::endl;
		//размер строки не зафиксирован
		mystr = "Oranges and apples";
		std::cout << mystr << std::endl;
		std::cout << mystr + "!!!" << std::endl;
		std::cout << mystr << std::endl;
		mystr += ".\nWOW!";
		std::cout << mystr << std::endl;
		std::cout << mystr[3] << mystr[4] << std::endl; //можно обратиться к отдельным элемантам*/

		// Ввод данных в строку 
		/*std::cout << "Как тебя зовут?\n";
		std::cout << "Ввод -> ";
		std::string name;
		// std::cin >> name; // плохой вариает, т.к. считывается только одно слово
		std::getline(std::cin, name); //функция для считывания консоли и внесения информации в строку
		std::cout << "Привет! " << name << "!\n";
		std::cout << "А сколько тебе лет?\n";
		std::cout << "Ввод -> ";
		int age;
		std::cin >> age;
		std::cout << age << "? Круто...\n";

		std::cin.ignore(); //убрали мусор, чтобы гетлайн считывал консольин //метод

		std::cout << "Кем ты работаешь?\n";
		std::cout << "Ввод -> ";
		std::string job;
		std::getline(std::cin, job);
		std::cout << "Я всегда мечтал быть " << job << "....\n\n";*/

		// Методы строк
		/*std::string str = "Hello World!";
		
		// length and size, возвращающие длину строки
		std::cout << str.length() << std::endl; // возвращает длину строки = 12
		std::cout << str.size() << std::endl; // возвращает длину строки = 12
		
		// insert, вставляющий подстроку в строку
		str.insert(3, "llllll");
		std::cout << str << std::endl;

		//replace, заменяющий часть строки на новую подстроку
		str.replace(3, 5, "###");
		std::cout << str << std::endl;
		
		// find, возвращающий позицию первого вхождения подстроки в строку
		std::cout << str.find("l") << std::endl; // = 2
		std::cout << str.find("l", 5) << std::endl; // = 9 (начали поск с 5 позиции)

		// rfind, возвращающий позицию последнего вхождения подстроки в строку
		std::cout << str.rfind('o') << std::endl; // = 7
		std::cout << str.rfind('o',5) << std::endl; // = 4

		// substr
		std::cout << str.substr(3) << std::endl; //lo World!
		std::cout << str.substr(3, 5) << std::endl; // lo wo*/

		// предобразование числа в строку
		/*std::cout << "Введите число -> ";
		std::cin >> n;
		std::cin.ignore();
		std::string numstr = std::to_string(n); 
		bool flag = true;
		for (int i = 0; i < numstr.length()/2; i++)
			if (numstr[i] != numstr[numstr.length() - i - 1]) {
				flag = false;
				break;
		}
		if (flag)
			std::cout << "Палиндром\n\n";
		else
			std::cout << "Не паллиндром\n\n";*/

		// преобразование строки в число
		/*std::cout << "Введи число -> ";
		std::string strnum;
		std::getline(std::cin, strnum);
		int num = std::stoi(strnum);
		std::cout << num << std::endl;*/


		// возведение строк в регистр
		std::string newstr = "HellO!";
		for (int i = 0; i < newstr.size(); i++)
			newstr[i] = std::tolower(newstr[i]); //возведение в нижний регистр
		std::cout << newstr << std::endl;

		for (int i = 0; i < newstr.size(); i++)
			newstr[i] = std::toupper(newstr[i]); //возведение в верхний регистр
		std::cout << newstr << std::endl;



		return 0;
}