#include"List.h"
#include<iomanip>
#include<string.h>
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();
void menu7();

List* list = new List();

int main() {
	
	list->menu1();
	char select;
	do {
		list->menuchinh();
		cout << "\t\t\t\t\t\tBAN MUON: ";
		cin >> select;
		if (int(select) <= 57 && int(select) >= 48) {
			switch (select) {
			case '1': {
				menu1();
				break;
			}
			case '2': {
				menu2();
				break;
			}
			case '3': {
				menu3();
				break;
			}
			case '4': {
				menu4();
				cout << "\n\t\t\t\t\t\tNhan Enter de tiep tuc...";
				cin.ignore();
				cin.get();
				break;
			}
			case '5': {
				menu5();
				cout << "\n\t\t\t\t\t\tNhan Enter de tiep tuc...";
				cin.ignore();
				cin.get();
				break;
			}
			case '6': {
				menu6();
				break;
			}
			case '7': {
				menu7();

				break;
			}
			default: break;
			}
		}
		else {
			cout << "\t\t\t\t\t\tLua chon " << select << " khong hop le !" << endl;
			cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
			select = '1';
		}
	} while (int(select) <= 57 && int(select) >= 48);

	return 0;
}



void menu1() {
	list->menu1a();
	char select;
	cout << "\t\t\t\t\t\tBAN MUON: ";
	cin >> select;
	if (int(select) <= 57 && int(select) >= 48) {
		switch (select) {
		case '1': {
			list->init();
			break;
		}
		case '2': {
			list->docTuFile();
			break;
		}
		default: break;
		}
	}
	else {
		cout << "\t\t\t\t\t\tLua chon " << select << " khong hop le !" << endl;
		cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
	}
	
}

void menu2() {
	list->menu2();
	char selected;
	cout << "\t\t\t\t\t\tTHEM: ";
	cin >> selected;
	if (int(selected) <= 57 && int(selected) >= 48) {
		switch (selected) {
		case '1': {
			list->insertFirst(1);
			break;
		}
		case '2': {
			int index;
			cout << "\t\t\t\tNhap vi tri can them: "; cin >> index;
			list->insertFirst(index);
			break;
		}
		case '3': {
			list->insertFirst(0);
			break;
		}
		default: break;
		}
	}
	else {
		cout << "\t\t\t\t\t\tLua chon " << selected << " khong hop le !" << endl;
		cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
	}
	
 }

void menu3() {
	list->menu3();
	char select;
	cout << "\t\t\t\t\t\tXOA: ";
	cin >> select;
	if (int(select) <= 57 && int(select) >= 48) {
		switch (select) {
			case '1': {
				list->xoaSach(1);
				break;
			}
			case '2': {
				list->xoaSach(2);
				break;
			}
			case '3': {
				list->xoaSach(3);
				break;
			}
			case '4': {
				list->xoaTheoViTri(1);
				break;
			}
			case '5': {
				list->xoaSach(5);
				break;
			}
			case '6': {
				list->xoaSach(6);
				break;
			}
			default: break;
		}
	}
	else {
		cout << "\t\t\t\t\t\tLua chon " << select << " khong hop le !" << endl;
		cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
	}
	
}

void menu4() {
	list->menu4();
	char select;
	cout << "\t\t\t\t\t\tTIM: ";
	cin >> select;
	if (int(select) <= 57 && int(select) >= 48) {
		list->timKiem(select);
	}
	else {
		cout << "\t\t\t\t\t\tLua chon " << select << " khong hop le !" << endl;
		cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
	}
	
}

void menu5() {
	list->menu5();
	char select;
	cout << "\t\t\t\t\t\tXEM: ";
	cin >> select;
	if (int(select) <= 57 && int(select) >= 48) {
		switch (select) {
		case '1': {

			list->xemToanBoDanhSach(1);
			break;
		}
		case '2': {
			list->xemToanBoDanhSach(2);
			break;
		}
		case '3': {
			list->xemToanBoDanhSach(3);
			break;
		}
		case '4': {
			list->menu54();
			char n;
			cin >> n;
			if (int(n) <= 57 && int(n) >= 48) {
				list->xemTheoThuTu(n);
			}
			else {
				cout << "\t\t\t\t\t\tLua chon " << select << " khong hop le !" << endl;
				cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
			}
			break;
		}
		default: break;
		}
	}
	else {
		cout << "\t\t\t\t\t\tLua chon " << select << " khong hop le !" << endl;
		cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
	}
	
}

void menu6() {
	list->menu6();
	char select;
	cout << "\t\t\t\t\t\tBAN MUON:";
	cin >> select;
	if (int(select) <= 57 && int(select) >= 48) {
		switch (select) {
		case '1': {
			list->muonSach();
			break;
		}
		case '2': {
			list->traSach();
			break;
		}
		default: break;
		}
	}
	else {
		cout << "\t\t\t\t\t\tLua chon " << select << " khong hop le !" << endl;
		cout << "\t\t\t\t\t\tVui long nhap lai." << endl;
	}
	
}
void menu7() {
	list->ghiFile();
}