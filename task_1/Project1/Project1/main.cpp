#include<iostream>


enum seasons
{
	january = 1,
	february ,
	march ,
	april ,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};

int main() {

setlocale(LC_ALL, "Russian");

int n = 0;
do {

	std::cout << "Введите номер месяца." << "\n";
	std::cin >> n;

	switch (n)
	{
	case january:
		std::cout << "Январь." << "\n\n";
		break;
	case seasons::february:
			std::cout << "Февраль." << "\n\n";
			break;
	case seasons::march:
			std::cout << "Март." << "\n\n";
			break;
	case seasons::april:
			std::cout << "Апрель." << "\n\n";
			break;
	case seasons::may:
			std::cout << "Май." << "\n\n";
			break;
	case seasons::june:
			std::cout << "Июнь." << "\n\n";
			break;
	case seasons::july:
			std::cout << "Июль." << "\n\n";
			break;
	case seasons::august:
			std::cout << "Август." << "\n\n";
			break;
	case seasons::september:
			std::cout << "Сентябрь." << "\n\n";
			break;
	case seasons::october:
			std::cout << "Октябрь." << "\n\n";
			break;
	case seasons::november:
			std::cout << "Ноябрь." << "\n\n";
			break;
	case seasons::december:
			std::cout << "Декабрь." << "\n\n";
			break;
	case 0 :
		std::cout << "\n" << "Досвидания!" << "\n\n";
		break;
	default:
		std::cout << "Не правильный номер." << "\n\n";
		break;
	}

} while (!(n == 0));

}