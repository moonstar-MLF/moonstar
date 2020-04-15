
// MFCApplication1View.cpp : CMFCApplication1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CMFCApplication1View 构造/析构

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: 在此处添加构造代码

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
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View 绘制

void CMFCApplication1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
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


// CMFCApplication1View 诊断

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View 消息处理程序


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
