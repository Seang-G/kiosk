#include "pch.h"
#include "CRectTab.h"

CRectTab::CRectTab() {}

CRectTab::CRectTab(CPoint p, int w, int h, LPCTSTR n) {
	pos = p; 
	width = w; 
	height = h; 
	name = n; 
}

void CRectTab::draw(CDC* pDC) {
	
	// ��
	CPen pen;
	pen.CreatePen(PS_SOLID, 3, RGB(146, 216, 240));
	pDC->SelectObject(&pen);

	// �� �ڽ� ����
	CRect Rect(pos, CPoint(pos.x + width, pos.y + height));
	pDC->SelectObject(Rect);
	pDC->Rectangle(&Rect);

	// ��Ʈ
	CFont font;
	font.CreatePointFont(200, _T("�������"));
	pDC->SelectObject(&font);

	// �� �̸� ǥ��(���� ����)
	pDC->DrawText(name, &Rect, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
}

// Ŭ�� �̺�Ʈ �߻� �� Ŀ���� ��ġ�� �ش� �� �ڽ� ���� �ִٸ� true�� ����, �ƴϸ� false ����
bool CRectTab::checkClick(CPoint p) {
	if (p.x <( pos.x + width) && pos.x < p.x && p.y < (pos.y + height) && pos.y < p.y) {
		return true;
	}
	return false;
}