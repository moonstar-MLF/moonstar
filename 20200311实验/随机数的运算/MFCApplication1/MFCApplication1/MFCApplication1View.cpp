
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
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication1View 构造/析构

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: 在此处添加构造代码
	
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

void CMFCApplication1View::OnDraw(CDC* pDC)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	
	CPen pen;
	pen.CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
	dc.SelectObject(&pen);
	dc.Rectangle(200,200,300,300);
	dc.Rectangle(400, 200, 500, 300);
	dc.Rectangle(600, 200, 700, 300);
	
	
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
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	if (point.x >= 200 & point.x <= 300 & point.y >= 200 & point.y <= 300)
	{
		pDoc->A = rand() % (100 - 4) + 4;
		s.Format(_T("A=%d"),pDoc->A);
		dc.TextOutW(220, 250, s);
	}
	else if (point.x >= 400 & point.x <= 500 & point.y >= 200 & point.y <= 300)
	{
		pDoc->B = rand() % (200 - 4) + 4;
		s.Format(_T("B=%d"), pDoc->B);
		dc.TextOutW(420, 250, s);
	}
	else
	{
		s.Format(_T("点击无效") );
		dc.TextOutW(point.x, point.y, s);
	}
	
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	if (point.x >= 600 & point.x <= 700 & point.y >= 200 & point.y <= 300)
	{
		s.Format(_T("A+B=%d"),pDoc->A+pDoc->B);
		dc.TextOutW(620, 250, s);
	}
	else
	{
		s.Format(_T("点击无效"));
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
