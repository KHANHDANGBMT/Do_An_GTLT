#pragma once
#include"Node.h"
#include<fstream>
#include <string>
#include<iomanip>

class  List
{
public:
	 List();
	 void menu1();
	 void menuchinh();
	 void menu1a();
	 void menu2();
	 void menu3();
	 void menu4();
	 void menu5();
	 void menu54();
	 void menu6();
	 void docTuFile();
	 void init();
	 void insertFirst(int x);
	 void xemToanBoDanhSach(int pos);
	 void xemTheoThuTu(char pos);
	 void xoaTheoViTri(int pos);
	 void xoaSach(int pos);
	 void timKiem(char pos);
	 void dauBang();
	 void thanBang(Node* node, int i);
	 void cuoiBang();
	 int length();
	 void muonSach();
	 void traSach();
	 void ghiFile();
	 void swap(Book& B1, Book& B2);
	~ List();

private:
	Node* head;
	Node* tail;
};

 List:: List()
{
	 this->head = new Node();
	 this->tail = new Node();
}

 inline void List::menu1()
 {
	 cout << "\n";
	 cout << "\t\t\t\t\t\t _______________________________________________________________\n";
	 cout << "\t\t\t\t\t\t|" << setw(45) << "<=: DE TAI :=> QUAN LY THU VIEN" << "                  |\n";
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|" << setw(40) << "GVHD : DO THI TUYET HOA" << "                       |\n";
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|" << setw(40) << "SVTH : DANG QUOC KHANH" << "                       |\n";
	 cout << "\t\t\t\t\t\t|" << setw(32) << "Lop : 17T2" << "                               |\n";
	 cout << "\t\t\t\t\t\t|" << setw(38) << "MSSV : 102170093" << "                         |\n";
	 cout << "\t\t\t\t\t\t|" << setw(40) << "SVTH : DUONG CHI MANH" << "                       |\n";
	 cout << "\t\t\t\t\t\t|" << setw(32) << "Lop : 16T2" << "                               |\n";
	 cout << "\t\t\t\t\t\t|" << setw(38) << "MSSV : 102160103" << "                         |\n";
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
 }

 inline void List::menuchinh()
 {
	 cout << "\t\t\t\t\t\t                          >>>>>***<<<<<                         " << endl;
	 cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
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

 inline void List::menu1a()
 {
	 cout << endl;
	 cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	 cout << "\t\t\t\t\t\t|               KHOI TAO DANH SACH VA DOC FILE                  |" << endl;
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|  1  |     Khoi tao muc sach rong !                            |\n";
	 cout << "\t\t\t\t\t\t|  2  |     Doc tu file !                                       |\n";
	 cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
 }

 inline void List::menu2()
 {
	 cout << endl;
	 cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	 cout << "\t\t\t\t\t\t|               THEM 1 CUON SACH VAO DANH SACH                  |" << endl;
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|  1  |     Them dau danh sach !                                |\n";
	 cout << "\t\t\t\t\t\t|  2  |     Them sau vi tri: !                                  |\n";
	 cout << "\t\t\t\t\t\t|  3  |     Them cuoi danh sach !                               |\n";
	 cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
 }

 inline void List::menu3()
 {
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
 }

 inline void List::menu4()
 {
	 cout << endl;
	 cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	 cout << "\t\t\t\t\t\t|                      CAC LUA CHON TIM KIEM                    |" << endl;
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|  1  |     Tim theo ten sach !                                 |\n";
	 cout << "\t\t\t\t\t\t|  2  |     Tim theo ten tac gia !                              |\n";
	 cout << "\t\t\t\t\t\t|  3  |     Tim theo ten nha xuat ban !                         |\n";
	 cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
 }

 inline void List::menu5()
 {
	 cout << endl;
	 cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	 cout << "\t\t\t\t\t\t|                 CAC LUA CHON XEM DANH SACH                    |" << endl;
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|  1  |     Xem toan bo danh sach !                             |\n";
	 cout << "\t\t\t\t\t\t|  2  |     Xem nhung cuon sach cho muon !                      |\n";
	 cout << "\t\t\t\t\t\t|  3  |     Xem nhung cuon sach chua cho muon !                 |\n";
	 cout << "\t\t\t\t\t\t|  4  |     Xem nhung cuon sach theo thu tu !                   |\n";
	 cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
 }

 inline void List::menu54()
 {
	 cout << endl;
	 cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	 cout << "\t\t\t\t\t\t|                 CAC LUA CHON XEM THEO THU TU                  |" << endl;
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|  1  |     Xem dach theo van alphabet cua tac gia !            |\n";
	 cout << "\t\t\t\t\t\t|  2  |     Xem danh sach theo van alphabet cua nha xuat ban !  |\n";
	 cout << "\t\t\t\t\t\t|  3  |     Xem danh sach theo nam xuat ban !                   |\n";
	 cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
	 cout << "\t\t\t\t\t\tXEM THEO: ";
 }

 inline void List::menu6()
 {
	 cout << endl;
	 cout << "\t\t\t\t\t\t _______________________________________________________________" << endl;
	 cout << "\t\t\t\t\t\t|                 CAC LUA CHON MUON TRA SACH                    |" << endl;
	 cout << "\t\t\t\t\t\t|_______________________________________________________________|\n";
	 cout << "\t\t\t\t\t\t|  1  |     Muon sach !                                         |\n";
	 cout << "\t\t\t\t\t\t|  2  |     Tra sach !                                          |\n";
	 cout << "\t\t\t\t\t\t|_____|_________________________________________________________|\n";
 }

 inline void List::docTuFile()
 {
	 this->head = NULL;
	 this->tail = NULL;
	 ifstream fileInput("text.txt");
	 if (fileInput.fail())
	 {
		 std::cout << "\t\t\t\t\t\tFailed to open this file!" << std::endl;
	 }
	 else {
		 while (!fileInput.eof())
		 {
			 Node* node = new Node();
			 char temp[255];
			 string n;

			 fileInput.getline(temp, 255);
			 n = temp;
			 node->data.setTen(n);

			 fileInput.getline(temp, 255);
			 n = temp;
			 node->data.setMaSo(n);

			 fileInput.getline(temp, 255);
			 n = temp;
			 node->data.setTacGia(n);

			 fileInput.getline(temp, 255);
			 n = temp;
			 node->data.setNhaSX(n);

			 fileInput.getline(temp, 255);
			 n = temp;
			 node->data.setNamXB(n);

			 fileInput.getline(temp, 255);
			 n = temp;
			 node->data.setTrangThai(n);

			 if (this->head == NULL) {
				 this->head = node;
				 this->tail = node;
			 }
			 else {
				 (*this->tail).next = node;
				 this->tail = node;
			 }
		 }
		 cout << endl << "\t\t\t\t\t\tDOC FILE THANH CONG !!!" << endl;
	 }
 }

 inline void List::init()
 {
	 this->head = NULL;
	 this->tail = NULL;
	 cout << "\t\t\t\t\t\tKHOI TAO THANH CONG !!!" << endl;
 }

 inline void List::insertFirst(int index)
 {
	 Node* b = new Node();
	 string text;
	 cout << "\t\t\t\tTen sach: "; 
	 cin.ignore();
	 getline(cin,text);
	 b->data.setTen(text);
	 cout << "\t\t\t\tMa so sach: ";
	 getline(cin, text);
	 b->data.setMaSo(text);
	 cout << "\t\t\t\tTen tac gia: "; 
	 getline(cin, text);
	 b->data.setTacGia(text);
	 cout << "\t\t\t\tNha xuat ban: "; 
	 getline(cin, text);
	 b->data.setNhaSX(text);
	 cout << "\t\t\t\tNam xuat ban: "; 
	 getline(cin, text);
	 b->data.setNamXB(text);
	 cout << "\t\t\t\tTrang thai(0-chua muon, 1-da muon): "; 
	 getline(cin, text);
	 b->data.setTrangThai(text);
	 switch (index) {
	 case 0: {
		 b->next = NULL;
		 this->tail->next = b;
		 this->tail = b;
		 break;
	 }
	 case 1: {
		 b->next = this->head;
		 this->head = b;
		 break;
	 }
	 default: {
		 int length = this->length();
		 while (index > length) {
			 cout << "\t\t\t\t\t\tNhap lai vi tri <" << length << endl;
			 cin >> index;
		 }
		 int count=1;
		 Node* check = this->head;
		 while (count < index) {
			 if (count==(index-1)) {
				 b->next = check->next;
				 check->next = b;
			 }
			 count++;
			 check = check->next;
		 }
	 }
	 }
	 
 }

 inline void List::xemToanBoDanhSach(int index)
 {
	 Node* check = this->head;
	 if (check == NULL) {
		 cout << "\t\t\t\t\t\tDanh sach rong !!!" << endl;
	 }
	 switch (index) {
	 case 1: {
		 this->dauBang();
		 int i = 1;
		 while (check != NULL) {
			 this->thanBang(check, i);
			 check = check->next;
			 i++;
		 }
		 this->cuoiBang();
		 break;
	 }
	 case 2: {
		 this->dauBang();
		 int i = 1;
		 while (check != NULL) {
			 if (check->data.getTrangThai() == "0") {
				 this->thanBang(check, i);
				 i++;
			 }
			 check = check->next;
		 }
		 this->cuoiBang();
		 break;
	 }
	 case 3: {
		 this->dauBang();
		 int i = 1;
		 while (check != NULL) {
			 if (check->data.getTrangThai() == "1") {
				 this->thanBang(check, i);
				 i++;
			 }
			 check = check->next;
		 }
		 this->cuoiBang();
		 break;
	 }
	 }
 }

 inline void List::xemTheoThuTu(char pos)
 {
	 switch (pos) {
	 case '1': {
		 Node* i = this->head;
		 Node* j = i->next;
		 while (i != NULL) {
			 j = i->next;
			 while (j != NULL) {
				 if (i->data.getTacGia() > j->data.getTacGia()) {
					 this->swap(i->data, j->data);
				 }
				 j = j->next;
			 }
			 i = i->next;
		 }
		 this->xemToanBoDanhSach(1);
		 break;
		}
			 case '2': {
		 Node* i = this->head;
		 Node* j = i->next;
		 while (i != NULL) {
			 j = i->next;
			 while (j != NULL) {
				 if (i->data.getNhaSX() > j->data.getNhaSX()) {
					 this->swap(i->data, j->data);
				 }
				 j = j->next;
			 }
			 i = i->next;
		 }
		 this->xemToanBoDanhSach(1);
		 break;
	 }
	 case '3': {
		 Node* i = this->head;
		 Node* j = i->next;
		 while (i != NULL) {
			 j = i->next;
			 while (j != NULL) {
				 if (i->data.getNamXB() > j->data.getNamXB()||i->data.getNamXB().length()>j->data.getNamXB().length()) {
					 this->swap(i->data, j->data);
				 }
				 j = j->next;
			 }
			 i = i->next;
		 }
		 this->xemToanBoDanhSach(1);
		 break;
	 }
	 default: break;
	 }
 }

 

 inline void List::xoaTheoViTri(int pos)
 {
	 int count = 1;

	 if (pos == 1) {
		 this->head = this->head->next;
		 return;
	 }
	 Node* check = this->head;
	 while (check != NULL) {
		 if (count == (pos - 1)) {
			 check->next = check->next->next;
			 return;
		 }
		 count++;
		 check = check->next;
	 }
 }

 inline void List::xoaSach(int pos)
 {
	 switch (pos) {
	 case 1: {
		 string maso;
		 cin.ignore();
		 cout << "\t\t\t\tNhap ma so: "; getline(cin, maso);
		 Node* check = this->head;
		 int index = 1;
		 while (check != NULL) {
			 if (check->data.getMaso() == maso) {
				 this->xoaTheoViTri(index);
				 cout << "\t\t\t\t\t\tDa xoa sach thanh cong!!!" << endl;
				 return;
			 }
			 index++;
			 check = check->next;
		 }
		 break;
	 }
	 case 2: {
		 string tensach;
		 cin.ignore();
		 cout << "\t\t\t\tNhap ten sach: "; getline(cin, tensach);
		 Node* check = this->head;
		 int index = 1;
		 while (check != NULL) {
			 if (check->data.getTen() == tensach) {
				 this->xoaTheoViTri(index);
				 cout << "\t\t\t\t\t\tDa xoa sach thanh cong!!!" << endl;
				 return;
			 }
			 index++;
			 check = check->next;
		 }
		 break;
	 }
	 case 3: {
		 string tacgia;
		 cin.ignore();
		 cout << "\t\t\t\tNhap ten tac gia: "; getline(cin, tacgia);
		 Node* check = this->head;
		 int index = 1;
		 int daxoa = 0;
		 while (check != NULL) {
			 if (check->data.getTacGia() == tacgia) {
				 this->xoaTheoViTri(index-daxoa);
				 cout << "\t\t\t\t\t\tDa xoa sach thanh cong!!!" << endl;
				 daxoa++;
			 }
			 index++;
			 check = check->next;
		 }
		 break;
	 }
	 case 5: {
		 string maso;
		 cin.ignore();
		 cout << "\t\t\t\tNhap ma so sach: "; getline(cin, maso);
		 Node* check = this->head;
		 int index = 1;
		 while (check != NULL) {
			 if (check->data.getMaso() == maso) {
				 this->xoaTheoViTri(index+1);
				 cout << "\t\t\t\t\t\tDa xoa sach thanh cong!!!" << endl;
				 return;
			 }
			 index++;
			 check = check->next;
		 }
		 break;
	 }
	 case 6: {
		 Node* check = this->head;
		 int index = 1;
		 while (check != NULL) {
			 if (check->next == this->tail) {
				 this->xoaTheoViTri(index + 1);
				 cout << "\t\t\t\t\t\tDa xoa sach thanh cong!!!" << endl;
				 return;
			 }
			 index++;
			 check = check->next;
		 }
		 break;
	 }
	}
 }

 inline void List::timKiem(char pos)
 {
	 string chuoi;
	 switch (pos) {
	 case '1': {
		 cin.ignore();
		 cout << "\t\t\t\tNhap ten sach "; getline(cin,chuoi);
		 Node* check = this->head;
		 this->dauBang();
		 int count = 1;
		 while (check != NULL) {
			 if (check->data.getTen() == chuoi) {
				 if (check->data.getTen() == chuoi) {
					 this->thanBang(check,count);
					 count++;
				 }
			 }
			 check = check->next;
		 }
		 this->cuoiBang();
		 if (count == 1) {
			 cout << "\t\t\t\t\t\tSACH KHONG CO TRONG THU VIEN !" << endl;
		 }
		 break;
		 }
	 case '2': {
		 cin.ignore();
		 cout << "\t\t\t\t\t\tNhap ten tac gia: "; getline(cin, chuoi);
		 Node* check = this->head;
		 this->dauBang();
		 int count = 1;
		 while (check != NULL) {
			 if (check->data.getTacGia() == chuoi) {
				 if (check->data.getTacGia() == chuoi) {
					 this->thanBang(check, count);
					 count++;
				 }
			 }
			 check = check->next;
		 }
		 this->cuoiBang();
		 if (count == 1) {
			 cout << "\t\t\t\t\t\tTAC GIA KHONG CO TRONG THU VIEN !" << endl;
		 }
		 break;
	 }
	 case '3': {
		 cin.ignore();
		 cout << "\t\t\t\tNhap ten nha xuat ban: "; getline(cin, chuoi);
		 Node* check = this->head;
		 this->dauBang();
		 int count = 1;
		 while (check != NULL) {
			 if (check->data.getNhaSX() == chuoi) {
				 if (check->data.getNhaSX() == chuoi) {
					 this->thanBang(check, count);
					 count++;
				 }
			 }
			 check = check->next;
		 }
		 this->cuoiBang();
		 if (count == 1) {
			 cout << "\t\t\t\t\t\tNHA XUAT BAN KHONG CO TRONG THU VIEN !!!" << endl;
		 }
		 break;
	 }
	 default: break;
	 }
 }

 inline void List::dauBang()
 {
	 cout << " ________________________________________________________________________________________________________________________________________________________________" << endl;
	 cout << "|                                                                                                                                                                |" << endl;
	 cout << "|                                              CHAO MUNG CAC BAN DEN VOI THU VIEN TRUONG DH BACH KHOA - DH DA NANG                                               |" << endl;
	 cout << "|________________________________________________________________________________________________________________________________________________________________|" << endl;
	 cout << "| STT |      Ma Sach    |             Ten Sach              |TrangThaiSach|             Ten Tac Gia           |         Nha Xuat Ban           |  Nam Xuat Ban   |" << endl;
	 cout << "|_____|_________________|___________________________________|_____________|___________________________________|________________________________|_________________|" << endl;
 }

 inline void List::thanBang(Node* node, int i)
 {
	 cout << "|" << setw(3) << i << "  |" << setw(15) << node->data.getMaso() << "  |" << setw(32) << node->data.getTen() << "   |";
	 // xuat trang thai sach
	 if (node->data.getTrangThai() == "0") {
		 cout << setw(11) << "CHUA MUON";
	 }
	 else {
		 cout << setw(11) << "DA MUON";
	 }
	 //////
	 cout << "  |" << setw(33) << node->data.getTacGia() << "  |"
		 << setw(28) << node->data.getNhaSX() << "    |" << setw(12) << node->data.getNamXB() << "     |\n";
 }

 inline void List::cuoiBang()
 {
	 cout << "|" << setw(3) << "_____" << "|" << setw(14) << "_________________" << "|" << setw(35)
		 << "___________________________________" << "|"
		 << setw(9) << "_____________" << "|" << setw(35) << "___________________________________"
		 << "|"
		 << setw(32) << "________________________________" << "|" << setw(17) << "_________________" << "|\n";
 }


 inline int List::length()
 {
	 Node* leng = this->head;
	 int index = 0;
	 while (leng != NULL) {
		 index++;
		 leng = leng->next;
	 }
	 return index;
 }

 inline void List::muonSach()
 {
	 string name; cin.ignore();
	 cout << "\t\t\t\tNhap sach muon muon:"; getline(cin, name);
	 Node* check = this->head;
	 while (check != NULL) {
		 if (check->data.getTen() == name && check->data.getTrangThai() == "0") {
			 check->data.setTrangThai("1");
			 cout << "\t\t\t\t\t\t>>> CHUC MUNG BAN DA MUON THANH CONG <<<" << endl;
			 return;
		 }
		 check = check->next;
	 }
	 cout << "\t\t\t\t\tCUON SACH " << name << " KHONG CO TRONG THU VIEN !" << endl;
 }

 inline void List::traSach()
 {
	 string name; cin.ignore();
	 cout << "\t\t\t\tNhap sach muon tra:"; getline(cin, name);
	 Node* check = this->head;
	 while (check != NULL) {
		 if (check->data.getTen() == name && check->data.getTrangThai() == "1") {
			 check->data.setTrangThai("0");
			 cout << "\t\t\t\t\t\t>>> CAM ON BAN DA SU DUNG SACH CUA THU VIEN <<<" << endl;
			 return;
		 }
		 check = check->next;
	 }
 }

 inline void List::ghiFile()
 {
	 fstream f;
	 f.open("text.txt", ios::out);
	 Node* check = this->head;
	 while (check != NULL) {
		 f << check->data.getTen()<<endl;
		 f << check->data.getMaso() << endl;
		 f << check->data.getTacGia() << endl;
		 f << check->data.getNhaSX() << endl;
		 f << check->data.getNamXB() << endl;
		 f << check->data.getTrangThai();
		 check = check->next;
		 if (check != NULL) {
			 f << endl;
		 }
	 }
	 cout << "\t\t\t\t\t\tGHI FILE THANH CONG !" << endl;
	 f.close();
 }

 inline void List::swap(Book& B1, Book& B2)
 {
	 Book temp = B1;
	 B1 = B2;
	 B2 = temp;
 }

 List::~ List()
{
}