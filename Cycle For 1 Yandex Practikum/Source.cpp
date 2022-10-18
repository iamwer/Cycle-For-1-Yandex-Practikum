/*«адание остаЄтс€ тем же Ч выведите все числа между заданными двум€. Ќо теперь первое число может быть больше второго. 
¬ таком случае выводить числа нужно в обратном пор€дке.*/

#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x < y)
	for (int i = x; i <= y; ++i)
	{
		cout << i << endl;
	}
	else
	{
		for (int i = y; i <= x; ++i)
		{
			cout << i << endl;
		}
	}
}