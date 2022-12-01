#include "pch.h"
#include "CRectMenu.h"
#include "string"

CRectMenu::CRectMenu() {};

CRectMenu::CRectMenu(CPoint p, int w, int h, CString k, CString n, CString pr) {
	pos = p;
	width = w;
	height = h;
	kind = k;
	name = n;
	price = pr;
};

void CRectMenu::draw(CDC* pDC){
	// ��
	CPen pen;
	pen.CreatePen(PS_SOLID, 3, RGB(146, 216, 240));
	pDC->SelectObject(&pen);

	// �޴� ȭ�鿡 �׸���
	CRect Rect(pos, CPoint(pos.x + width, pos.y + height));
	pDC->SelectObject(Rect);
	pDC->Rectangle(&Rect);
	CImage img;
	img.Load(L"res/" + kind + L"/" + name + L" " + price + L".png");
	img.Draw(*pDC, pos.x+1, pos.y+1);
};

// Ŭ�� �̺�Ʈ �߻� �� Ŀ���� �޴� �ڽ� �Ƴ� �ִٸ� true ����, �ƴϸ� false ����
bool CRectMenu::checkClick(CPoint p) {
	if (p.x < (pos.x + width) && pos.x < p.x && p.y < (pos.y + height) && pos.y < p.y) {
		return true;
	}
	return false;
}