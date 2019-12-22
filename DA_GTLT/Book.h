#pragma once
#include <iostream>
using namespace std;

class Book
{
public:
	Book();
	Book(string tensach, string masosach, string tentacgia, string nhaxb, string namxb, string trangthai);
	Book(Book& b);
	void setTen(string ten);

	void setMaSo(string maso);
	void setTacGia(string tacgia);
	void setNhaSX(string nhasx);
	void setNamXB(string namxb);
	void setTrangThai(string trangthai);

	string getTen();
	string getMaso();
	string getTacGia();
	string getNhaSX();
	string getNamXB();
	string getTrangThai();

	friend istream& operator>>(istream in, Book& b);
	Book operator=(Book b);
	~Book();

private:
	string tenSach;
	string maSoSach;
	string tenTacGia;
	string nhaXB;
	string namXB;
	string trangThai;
};
