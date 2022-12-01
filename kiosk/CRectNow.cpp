#include "pch.h"
#include "CRectNow.h"

CRectNow::CRectNow() {}
CRectNow::CRectNow(CPoint p, CRectMenu* m) {
	pos = p;
	menu = m;
	width = 410;
	height = 70;
}
void CRectNow::draw(CDC* pDC) {
	// ��Ʈ
	CFont font1;
	font1.CreatePointFont(170, _T("�������"));
	pDC->SelectObject(&font1);

	// ū �ڽ�(���̴� �ڽ�)
	CRect rect1(pos.x, pos.y, pos.x+width, pos.y+height);
	pDC->Rectangle(rect1);

	// ���� �ڽ�(�Ⱥ��̴� �ڽ�; ���ڶ����� �׵θ��� ©���� ���� ������ ����)
	CRect rect2(pos.x+3, pos.y+3, pos.x + width-3, pos.y + height-3);

	// �޴� �̸�, ���� ǥ��
	pDC->DrawText(menu->name, rect2, DT_LEFT|DT_SINGLELINE);
	pDC->DrawText(menu->price+L" ��", rect2, DT_LEFT | DT_BOTTOM | DT_SINGLELINE);

	// ���� ��ư(X) �ڽ� ����
	CRect rect3(pos.x + 340, pos.y + 10, pos.x + 390, pos.y + 60);
	pDC->Rectangle(rect3);

	// ��Ʈ
	CFont font2;
	font2.CreatePointFont(300, _T("�������"));
	pDC->SelectObject(&font2);
	pDC->SetTextColor(RGB(255, 30, 30));

	// X���� ǥ��
	pDC->DrawText(L"X", rect3, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	pDC->SetTextColor(RGB(0, 0, 0));
}

bool CRectNow::checkClick(CPoint p) {
	// Ŭ���̺�Ʈ �߻� �� Ŀ���� ��ġ�� ���� ��ư ���� ���� �� true�� ����, �ƴϸ� false ����
	if (p.x < (pos.x + 390) && pos.x + 340 < p.x && p.y < (pos.y + 60) && pos.y + 10 < p.y) {
		return true;
	}
	return false;
}