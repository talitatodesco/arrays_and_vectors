#include <iostream>

using namespace std;


int main()
{
	string matriz[14] = { "Demi", "Camila","Lauren", "Tini"};

	matriz[2] = "Miley";

	cout << "Tamanho da Array" << sizeof(matriz);

	for(int i = 0;i<sizeof(matriz)-1; i++)
		cout << matriz[i] << endl;
	return 0;
}
