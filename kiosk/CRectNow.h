#pragma once
#include "CRectMenu.h"
class CRectNow
{
public:
	CRectMenu* menu; // �߰��� �޴� ��ü(������)
	CPoint pos; // �߰��� �޴��� ǥ���� ��ġ(�»��)
	int width; // ��Ȳǥ�ùڽ� �ʺ�
	int height; // ��Ȳǥ�ùڽ� ����

public:
	CRectNow::CRectNow();
	CRectNow::CRectNow(CPoint p, CRectMenu* m);	// ������
	void CRectNow::draw(CDC* pDC); // ȭ�鿡 �׸��� �Լ�
	bool CRectNow::checkClick(CPoint p); // Ŭ���Ǵ� �Լ�
};

