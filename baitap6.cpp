#include<iostream>
using namespace std;

int main() {
	int ngay, thang;
	do {
		cout << "Nhap ngay: ";
		cin >> ngay;
		cout << "Nhap thang: ";
		cin >> thang;
	} while (ngay > 31);
	switch (thang)
	{
	case 1:
		if (ngay <= 19) cout << "Ma ket";// Neu thang 1 ngay nho hon 19 thi MK con k thi bao binh
		else cout << "Bao binh";
		break;
	case 2:
		if (ngay <= 19) cout << "song ngu " << endl;
		else cout << "bach duong " << endl;
		break;

		// Copy qua tu lam thu di tui buoofn ngu qua lam xong cai nay toi nem lai de ẵ ong code roi noi chi tiet cho toi
	case 3: if (ngay >= 20) cout << " KIM NGUU " << endl;
		  else cout << " song tu " << endl;
		break;
	case 4:if (ngay >= 20) cout << " cu giai " << endl;
		  else cout << "su tu " << endl;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:;
	}
	system("pause");
	return 0;
}chiu roi tui di wc cai thoi mai hoc bai 17 tui gui ong qua mes