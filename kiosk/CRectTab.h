#pragma once
class CRectTab
{
public:
	CPoint pos; // �� ��ġ(�»��)
	int width; // �� �ʺ�
	int height; // �� ����
	LPCTSTR name; // �� �̸�(���� ���� ex.Ŀ��, Ƽ...)

public:
	CRectTab::CRectTab(); 
	CRectTab::CRectTab(CPoint p, int w, int h, LPCTSTR n); // ������
	void CRectTab::draw(CDC* pDC); // ȭ�鿡 �׸��� �Լ�
	bool CRectTab::checkClick(CPoint p); // Ŭ���Ǵ� �Լ�
};

