#include <iostream>
using namespace std;

struct data
{
	short int s_i = 0;
	unsigned short int us_i = 0;
	int i = 0;
	unsigned int ul = 0;
	float fl = 0;
	double db = 0;;
};

void out(const unsigned char* pc, const int size) {
	cout << "Биты числа длиной в " << size << " байта : ";
	for(int i = size - 1; i >= 0; i--)
	{
		for(int j = 7; j >= 0; j--)
			cout << (pc[i] >> j) % 2;
		cout << " ";
	}
	cout << endl << endl;
}

template <typename Type>
void bytes(Type num){
	const auto* pc = reinterpret_cast<unsigned char*>(&num);
	out(pc, sizeof(num));
}

template <typename Type>
void input(Type num) {
	cout << typeid(num).name() << ": ";
	cin >> num;
	bytes<Type>(num);
}