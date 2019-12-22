#include"List.h"
#include<iomanip>
#include<string.h>
void HoVaTen();
void menu();
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();
void menu7();

List* list = new List();

int main() {
	
	HoVaTen();
	char select;
	do {
		menu();
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

void HoVaTen() {
	cout << "\n";
	cout << "\t\t\t\t\t\t _______________________________________________________________\n";
	cout << "\t\t\t\t\t\t|" << setw(45) << "<=: DE TAI :=> QUAN LY THU VIEN" << "                  |\n";
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|" << setw(40) << "GVHD : DAO TUYET HOA" << "                       |\n";
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|" << setw(40) << "SVTH : DANG QUOC KHANH" << "                       |\n";
	cout << "\t\t\t\t\t\t|" << setw(32) << "Lop : 17T2" << "                               |\n";
	cout << "\t\t\t\t\t\t|" << setw(38) << "MSSV : 102170093" << "                         |\n";
	cout << "\t\t\t\t\t\t|" << setw(40) << "SVTH : DUONG CHI MANH" << "                       |\n";
	cout << "\t\t\t\t\t\t|" << setw(32) << "Lop : 16T2" << "                               |\n";
	cout << "\t\t\t\t\t\t|" << setw(38) << "MSSV : 1021600XX" << "                         |\n";
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	
}
void menu() {
	cout << "\t\t\t\t\t\t                          >>>>>***<<<<<                         " << endl;
	cout << "\t\t\t\t\t\t _______________________________________________________________"<<endl;
	cout << "\t\t\t\t\t\t|               CHUC NANG CHINH CUA CHUONG TRINH                |" << endl;
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|  1  |     Khoi Tao Danh Sach va Doc File !                    |\n";
	cout << "\t\t\t\t\t\t|  2  |     Them 1 Cuon Sach Vao Danh Sach !                    |\n";
	cout << "\t\t\t\t\t\t|  3  |     Xoa 1 Cuon Sach Trong Danh Sach !                   |\n";
	cout << "\t\t\t\t\t\t|  4  |     Tim Kiem Sach !                                     |\n";
	cout << "\t\t\t\t\t\t|  5  |     Xem Danh Sach !                                     |\n";
	cout << "\t\t\t\t\t\t|  6  |     Muon va Tra Sach !                                  |\n";
	cout << "\t\t\t\t\t\t|  7  |     Luu File !                                          |\n";
	cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
}

void menu1() {
	cout << endl;
	cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	cout << "\t\t\t\t\t\t|               KHOI TAO DANH SACH VA DOC FILE                  |" << endl;
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|  1  |     Khoi tao muc sach rong !                            |\n";
	cout << "\t\t\t\t\t\t|  2  |     Doc tu file !                                       |\n";
	cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
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
	cout << endl;
	cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	cout << "\t\t\t\t\t\t|               THEM 1 CUON SACH VAO DANH SACH                  |" << endl;
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|  1  |     Them dau danh sach !                                |\n";
	cout << "\t\t\t\t\t\t|  2  |     Them sau vi tri: !                                  |\n";
	cout << "\t\t\t\t\t\t|  3  |     Them cuoi danh sach !                               |\n";
	cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
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
			cout << "Nhap vi tri can them: "; cin >> index;
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
	cout << endl; 
	cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	cout << "\t\t\t\t\t\t|                      CAC LUA CHON XOA SACH                    |" << endl;
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|  1  |     Theo ma so !                                        |\n";
	cout << "\t\t\t\t\t\t|  2  |     Theo ten sach !                                     |\n";
	cout << "\t\t\t\t\t\t|  3  |     Theo ten tac gia !                                  |\n";
	cout << "\t\t\t\t\t\t|  4  |     Dau danh sach !                                     |\n";
	cout << "\t\t\t\t\t\t|  5  |     Sau cuon sach co ma so !                            |\n";
	cout << "\t\t\t\t\t\t|  6  |     Cuoi danh sach !                                    |\n";
	cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
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
	cout << endl;
	cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	cout << "\t\t\t\t\t\t|                      CAC LUA CHON TIM KIEM                    |" << endl;
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|  1  |     Tim theo ten sach !                                 |\n";
	cout << "\t\t\t\t\t\t|  2  |     Tim theo ten tac gia !                              |\n";
	cout << "\t\t\t\t\t\t|  3  |     Tim theo ten nha xuat ban !                         |\n";
	cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
	int select;
	cout << "\t\t\t\t\t\tTIM: ";
	cin >> select;
	list->timKiem(select);
}

void menu5() {
	cout << endl;
	cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	cout << "\t\t\t\t\t\t|                 CAC LUA CHON XEM DANH SACH                    |" << endl;
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|  1  |     Xem toan bo danh sach !                             |\n";
	cout << "\t\t\t\t\t\t|  2  |     Xem nhung cuon sach cho muon !                      |\n";
	cout << "\t\t\t\t\t\t|  3  |     Xem nhung cuon sach chua cho muon !                 |\n";
	cout << "\t\t\t\t\t\t|  4  |     Xem nhung cuon sach theo thu tu !                   |\n";
	cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
	int select;
	cout << "\t\t\t\t\t\tXEM: ";
	cin >> select;
	switch (select) {
	case 1: {
		
		list->xemToanBoDanhSach(1);
		break;
	}
	case 2: {
		list->xemToanBoDanhSach(2);
		break;
	}
	case 3: {
		list->xemToanBoDanhSach(3);
		break;
	}
	case 4: {
		cout << endl;
		cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
		cout << "\t\t\t\t\t\t|                 CAC LUA CHON XEM THEO THU TU                  |" << endl;
		cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
		cout << "\t\t\t\t\t\t|  1  |     Xem dach theo van alphabet cua tac gia !            |\n";
		cout << "\t\t\t\t\t\t|  2  |     Xem danh sach theo van alphabet cua nha xuat ban !  |\n";
		cout << "\t\t\t\t\t\t|  3  |     Xem danh sach theo nam xuat ban !                   |\n";
		cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
		cout << "\t\t\t\t\t\tXEM THEO: ";
		int n;
		cin >> n;
		list->xemTheoThuTu(n);
		break;
	}
	default: break;
	}
}

void menu6() {
	cout << endl;
	cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	cout << "\t\t\t\t\t\t|                 CAC LUA CHON MUON TRA SACH                    |" << endl;
	cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	cout << "\t\t\t\t\t\t|  1  |     Muon sach !                                         |\n";
	cout << "\t\t\t\t\t\t|  2  |     Tra sach !                                          |\n";
	cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
	int select;
	cout << "\t\t\t\t\t\tBAN MUON:" << endl;
	cin >> select;
	switch (select) {
	case 1: {
		list->muonSach();
		break;
	}
	case 2: {
		list->traSach();
		break;
	}
	default: break;
	}
}
void menu7() {
	list->ghiFile();
}