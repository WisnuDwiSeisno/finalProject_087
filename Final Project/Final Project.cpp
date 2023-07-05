#include <iostream>
using namespace std;
int r;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {
		cout << "Lingkaran Dibuat." << endl;
		cout << "Masukan Jejari: ";
		cin >> x;
	}
	virtual float Luas(int a) { 
		getX();
		return 0; }
	virtual float Keliling(int a) { 
		
		return 0; }
	virtual void cekUkuran() { 
		if (3.14 * r * r >= 40)
		{
			cout << "Ukuran lingkaran adalah Besar" << endl;
		}
		if (3.14 *r *r >= 20)
		{
			cout << "Ukuran lingkaran adalah Sedang" << endl;
		}
		return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		this->x = r;
		return x;
	}
};
class Lingkaran :public bidangDatar { 
	void input() {
		cout << "Lingkaran Dibuat." << endl;
	}
	float Luas(int r) {
		3.14 * r * r;
	}
	float keliling(int r) {
		return 2 * 3.14 * r;
	}
	void cekUkuran() {
		keliling;
		if (keliling >= 40) {
			cout << "besar" << endl;
		}
	}
};
class Persegipanjang :public bidangDatar { 
	void input() {
		cout << "Persegi Panjang dbuat." << endl;
	}
	void luas(int x) {

}
};

class Output {
public:

	void cek() {
		if (3.14 * r * r >= 40) {
			cout << "Ukuran Lingkaran Besar" << endl;
		}
		else
		{
			cout << "Ukuran Lingkaran Sedang" << endl;
		}
	}

	void input1() {
		double r;
		double hasilL;
		hasilL = (3.14 * r);


		cout << "Lingkaran Dibuat." << endl;
		cout << "Masukan Jejari: ";
		cin >> r;
		cout << "Luas Lingkaran : " << hasilL << endl;
		cout << "Keliling Lingkaran: Tidak tahu rumusnya." << endl;
		cout << "Ukuran Lingkaran: ";
		if (3.14 * r * r >= 40) {
			cout << "Ukuran Lingkaran Besar" << endl;
		}
		else
		{
			cout << "Ukuran Lingkaran Sedang" << endl;
		};
	}
};
int main() { 
	bidangDatar bd;
	bd.input();
	
	//Output o;
	//o.input1();

}