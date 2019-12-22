#include "Book.h"

istream& operator>>(istream in, Book& b)
{
	cout << "Ten sach: "; in >> b.tenSach;
	cout << "Ma so sach: "; in >> b.maSoSach;
	cout << "Ten tac gia: "; in >> b.tenTacGia;
	cout << "Nha xb: "; in >> b.nhaXB;
	cout << "Nam xb: "; in >> b.namXB;
	cout << "Trang thai(0-chua muon, 1-da muon): "; in >> b.trangThai;
	return in;
}

Book::Book()
{
}

 Book::Book(string tensach, string masosach, string tentacgia, string nhaxb, string namxb, string trangthai)
{
	this->tenSach = tensach;
	this->maSoSach = masosach;
	this->tenTacGia = tentacgia;
	this->nhaXB = nhaxb;
	this->namXB = namxb;
	this->trangThai = trangThai;
}

 Book::Book(Book& b)
{
	this->tenSach = b.tenSach;
	this->maSoSach = maSoSach;
	this->namXB = b.namXB;
	this->nhaXB = b.nhaXB;
	this->trangThai = b.trangThai;
	this->tenTacGia = b.tenTacGia;
}

 void Book::setTen(string ten)
{
	this->tenSach = ten;
}

 void Book::setMaSo(string maso)
{
	this->maSoSach = maso;
}

 void Book::setTacGia(string tacgia)
{
	this->tenTacGia = tacgia;
}

 void Book::setNhaSX(string nhasx)
{
	this->nhaXB = nhasx;
}

 void Book::setNamXB(string namxb)
{
	this->namXB = namxb;
}

 void Book::setTrangThai(string trangthai)
{
	this->trangThai = trangthai;
}

 string Book::getTen()
{
	return string(this->tenSach);
}

 string Book::getMaso()
{
	return string(this->maSoSach);
}

 string Book::getTacGia()
{
	return string(this->tenTacGia);
}

 string Book::getNhaSX()
{
	return string(this->nhaXB);
}

 string Book::getNamXB()
{
	return string(this->namXB);
}

 string Book::getTrangThai()
{
	return string(this->trangThai);
}

 Book Book::operator=(Book b)
 {
	 this->tenSach = b.tenSach;
	 this->maSoSach = b.maSoSach;
	 this->nhaXB = b.nhaXB;
	 this->namXB = b.namXB;
	 this->tenTacGia = b.tenTacGia;
	 this->trangThai = b.trangThai;
	 return b;
 }

 Book::~Book()
{
}
