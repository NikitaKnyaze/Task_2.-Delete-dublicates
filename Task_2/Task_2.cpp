#include <iostream>
#include <set>
#include <string>

struct compare
{
	bool operator()(const int& a, const int& b) const
	{
		return a > b;
	}
};

int main()
{
	std::string count_numbers;
	std::set<int, compare> numbers;
	int num{};

	std::cout << "Count numbers: ";
	getline(std::cin, count_numbers);
	std::cout << std::endl;

	int i = stoi(count_numbers); 
	for (i; i > 0; --i) {
		std::cin >> num;
		numbers.insert(num);
	}

	for (const auto& c : numbers)
		std::cout << std::endl << c ;

	return 0;
}