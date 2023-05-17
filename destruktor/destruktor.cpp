#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(int); //construktor
	~angka(); //destruktor
	void cetakData();
	void isiData();
};
//definisi member functon
angka::angka(int i){ //contruktor
	panjang = 1;
	arr = new int[i];
	isiData();
}

angka::~angka() { //destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "alamat array sudah dilepas" << endl;
}
