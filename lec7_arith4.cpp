#include <iostream>

int main() {
	std::cout << "Gebe eine Zahl ein: ";
	int a;
	std::cin >> a;

	std::cout << "Gebe noch eine Zahle ein: ";
	int b;
	std::cin >> b;

	std::cout << "Ihr Rest ist " << a % b << std::endl;

	return 0;
}