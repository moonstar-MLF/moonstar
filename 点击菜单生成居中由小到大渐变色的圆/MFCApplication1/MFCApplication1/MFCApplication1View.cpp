
// MFCApplication1View.cpp : CMFCApplication1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication1.h"
#endif

#include "MFCApplication1Doc.h"
#include "MFCApplication1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1View

IMPLEMENT_DYNCREATE(CMFCApplication1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_huayuan, &CMFCApplication1View::Onhuayuan)
END_MESSAGE_MAP()

// CMFCApplication1View ����/����

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: �ڴ˴���ӹ������

	COLORREF color;
	int penwidth;
	m = 0;
	i = 110;
	

}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View ����

void CMFCApplication1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	/*CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	if (cr.bottom - cr.top>cr.right - cr.left)
		dc.Ellipse(0, (cr.bottom - cr.top) / 2 - (cr.right - cr.left) / 2, cr.right - cr.left, (cr.bottom - cr.top) / 2 + (cr.right - cr.left) / 2);
	else dc.Ellipse((cr.right - cr.left) / 2 - (cr.bottom - cr.top) / 2, 0, (cr.bottom - cr.top) / 2 + (cr.right - cr.left) / 2, cr.bottom - cr.top);
	*/
}

void CMFCApplication1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCApplication1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCApplication1View ���

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View ��Ϣ�������


void CMFCApplication1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	
	

	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication1View::Onhuayuan()
{
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);


	for (i,m;i>=10, m <= 250;i -= 10, m += 20)
	{
		CPen pen(PS_SOLID, 2,RGB(0, m, 255));
		dc.SelectObject(&pen);
		dc.Ellipse((cr.right - cr.left) / 2 - i, (cr.bottom - cr.top) / 2 - i, (cr.right - cr.left) / 2 + i, (cr.bottom - cr.top) / 2 + i);

	}
}
