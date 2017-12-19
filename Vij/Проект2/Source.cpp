#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	string is, kl;
	int a, Q, W, E;
	char q, w, e;
	//шифрование
	cout << "Введите текст: " << endl;
	cin >> is;
	cout << "Введите ключ: ";
	cin >> kl;
	a = is.size();
	int i = 0;
	while (i < a) {
		q = is[i] - 97;
		Q = q;
		w = kl[i%kl.size()] - 97;
		W = w;
		E = W + Q + 97;
		if (E > 122)
		{
			E = 96 + (E - 122);
		}
		e = E;
		cout << e;
		i++;
	}
	cout << endl;
	//дешифрование
	cout << "Введите зашифрованный текст: " << endl;
	cin >> is;
	cout << "Введите ключ: ";
	cin >> kl;
	a = is.size();
	int l = 0;
	while (l < a) {
		q = is[l] - 97;
		Q = q;
		w = kl[l%kl.size()] - 97;
		W = w;
		E = Q - W;
		if (E < 0)
		{
			E = -96 + E + 122;
		}
		e = E + 97;
		cout << e;
		l++;
	}
	cout << endl;
	system("pause");
	return 0;
}