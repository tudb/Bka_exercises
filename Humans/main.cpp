#include "Artist.h"
#include "Human.h"
#include "Pupil.h"
#include "Singer.h"
#include "Student.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int main(){
	Artist *pArtist;
	Pupil *pPupil;
	Singer *pSinger;
	Student *pStudent;
	int nArtist, nPupil, nSinger, nStudent;
	cout << "Nhap vao so luong doi tuong moi loai va thong tin: " << endl;
	cout << "Nghe si:";
	cin >> nArtist;
	pArtist = new Artist[nArtist];
	for (int nNumber = 0; nNumber < nArtist; nNumber++) pArtist[nNumber].import();
	cout << endl << "Hoc sinh: ";
	cin >> nPupil;
	pPupil = new Pupil[nPupil];
	for (int nNumber = 0; nNumber < nPupil; nNumber++) pPupil[nNumber].import();
	cout << endl << "Ca si: ";
	cin >> nSinger;
	pSinger = new Singer[nSinger];
	for (int nNumber = 0; nNumber < nSinger; nNumber++) pSinger[nNumber].import();
	cout << endl << "Sinh vien: ";
	cin >> nStudent;
	pStudent = new Student[nStudent];
	for (int nNumber = 0; nNumber < nStudent; nNumber++) pStudent[nNumber].import();
	cout << endl << "Danh sach: ";
	cout << "Nghe si: ";
	for (int nNumber = 0; nNumber < nArtist; nNumber++){
		cout << endl << "STT: " << nNumber + 1 << endl;
		pArtist[nNumber].display();
	}
	cout << endl << "Hoc sinh: ";
	for (int nNumber = 0; nNumber < nPupil; nNumber++){
		cout << endl << "STT: " << nNumber + 1 << endl;
		pPupil[nNumber].display();
	}
	cout << endl << "Ca si: ";
	for (int nNumber = 0; nNumber < nSinger; nNumber++){
		cout << endl << "STT: " << nNumber + 1 << endl;
		pSinger[nNumber].display();
	}
	cout << endl << "Sinh vien: ";
	for (int nNumber = 0; nNumber < nStudent; nNumber++){
		cout << endl << "STT: " << nNumber + 1 << endl;
		pStudent[nNumber].display();
	}
	delete (pStudent, pPupil, pArtist, pSinger);
	system("pause");
}