#include <iostream>
using namespace std;

int main()
{
	//siswa mempunyai 2 nilai yaitu matematika dan fisika 
	//kemudian di hitung reratanta, jika rerata lebih dari  60
	//maka dari 70 dan jika tidak keduanya maka
	//dinyatakan tidak lulus

	float nMat, nFisika, rerata;
	string status;

	cout << "memasukkan nilai matematika";
	cin >> nMat;
	cout << " memasukkan nilai fisika";
	cin >> nFisika;

	rerata = (nFisika = nMat) / 2;

	if (rerata >= 60) {
		status = "lulus";
	}
	else if (nMat >= 70) {
		status = "lulus jalur matematika";
	}
	else
	{
		status = "tidak lulus";
	}

	cout << "anda dinyatakan lulus = " << status << endl;

	system("pause");

}
