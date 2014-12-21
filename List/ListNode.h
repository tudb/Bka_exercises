#pragma once
#include "Node.h"
#include <iostream>

//-----------------------------------------------------------------
//Description: Danh sách liên kết mô tả bằng danh sách các Node
//Thuộc tính: con trỏ đến Node đầu tiên
//Phương thức: chèn cuối , chèn vào vị trí bất kì,gỡ,xuất phần tử
//-----------------------------------------------------------------

class ListNode{
public:
	Node *m_pTop;
	ListNode();
	ListNode(int nData);
	~ListNode();
	void memoryFull();
	void insertBegin(int nData);
	void insertEnd(int nData);
	void removeBegin();
	void removeEnd();
	void removeRandom(int nPosition);
	void insertRandom(int nPosition, int nData);
	void readData(int nPosition);
	bool empty();
};

