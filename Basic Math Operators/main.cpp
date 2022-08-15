#include <iostream>
using namespace std;

/*
+ : toplama
- : çıkarma
* : çarpma
/ : bçölme
*/

int main() {
	// int veri itpinde 2 tane değişken oluşturuyoruz ve bunlara tamsayı değerleri atıyoruz.
	int sayi1 = 8;
	int sayi2 = 14;

	cout << "sayi1 + sayi2 : " << sayi1 + sayi2 << endl; // toplama
	cout << "sayi1 - sayi2 : " << sayi1 - sayi2 << endl; // çıkarma
	cout << "sayi1 * sayi2 : " << sayi1 * sayi2 << endl; // çarpma
	cout << "sayi1 / sayi2 : " << sayi1 / float(sayi2) << endl; // bölme. Float metodunu kullanma sebebimiz sonucun int yerine float değer döndürme isteğimizdir.

	int a = 4; // int bir değer oluşturduk

	cout << "a : " << a << endl; // ilk değerini yazdırıyoruz.

	a++; // 1 artırma işlemi yapıyoruz. 2. yöntem: a += 1 ve 3. yöntem: a = a + 1
	a--; // 1 azaltma işlemi
  a *= 3; // 3 ile çarpma işlemi
  a /= 4; // 4'e  bölme işlemi
  
	cout << "a : " << a << endl; // a'nın son değerini ekrana yazdırma

	return 0;
}
