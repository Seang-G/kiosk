#pragma once
class CRectMenu
{
public:
	CPoint pos; // �޴� ��ġ(�»��)
	int width; // �޴� �ʺ�
	int height; // �޴� ����
	CString kind; // �޴� ����(ex. Ŀ��, Ƽ, ������...)
	CString name; // �޴� �̸�
	CString price; // �޴� ����

public:
	CRectMenu::CRectMenu();
	CRectMenu::CRectMenu(CPoint p, int w, int h, CString k, CString  n, CString pr); // ������
	void CRectMenu::draw(CDC* pDC); // ȭ�鿡 �׸��� �Լ�
	bool CRectMenu::checkClick(CPoint p); // Ŭ���Ǵ� �Լ�
};

