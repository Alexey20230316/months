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

	std::cout << "������� ����� ������." << "\n";
	std::cin >> n;

	switch (n)
	{
	case january:
		std::cout << "������." << "\n\n";
		break;
	case seasons::february:
			std::cout << "�������." << "\n\n";
			break;
	case seasons::march:
			std::cout << "����." << "\n\n";
			break;
	case seasons::april:
			std::cout << "������." << "\n\n";
			break;
	case seasons::may:
			std::cout << "���." << "\n\n";
			break;
	case seasons::june:
			std::cout << "����." << "\n\n";
			break;
	case seasons::july:
			std::cout << "����." << "\n\n";
			break;
	case seasons::august:
			std::cout << "������." << "\n\n";
			break;
	case seasons::september:
			std::cout << "��������." << "\n\n";
			break;
	case seasons::october:
			std::cout << "�������." << "\n\n";
			break;
	case seasons::november:
			std::cout << "������." << "\n\n";
			break;
	case seasons::december:
			std::cout << "�������." << "\n\n";
			break;
	case 0 :
		std::cout << "\n" << "����������!" << "\n\n";
		break;
	default:
		std::cout << "�� ���������� �����." << "\n\n";
		break;
	}

} while (!(n == 0));

}