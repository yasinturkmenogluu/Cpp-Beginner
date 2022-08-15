#include <iostream>
using namespace std;

/*
Kullanıcıdan alınan 3 adet değişkenin toplamını ekrana yazdırma
*/

int main() {

	int a,b,c, toplam; // toplanacak değerleri ve toplam değerini tutacak değişkeni int olarak tanımlıyoruz.
  
 // Yöntem1: Sayıları aşağıdaki gibi ayrı ayrı alabiliriz.  
/*
	cout << "sayı1: ";
	cin >> a;

	cout << "sayı2: ";
	cin >> b;
  
  cout << "sayı3: ";
	cin >> c;
  */
  
// Yöntem2: Daha pratik bir yöntem olarak sayıları (aralarında boşluk bırakarak) alabiliriz.
	cout << "sayıları giriniz:";
	cin >> a >> b >> c;

	toplam = a + b + c;

	cout << "toplam: " << toplam << endl;

	return 0;
}
