
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
	ON_WM_SIZE()
	ON_COMMAND(ID_FILE_OPEN, &CMFCApplication1View::OnFileOpen)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CMFCApplication1View ����/����

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0; 
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

void CMFCApplication1View::OnDraw(CDC* pDC)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (flag == 1) {
		CClientDC dc(this);
		CRect cr;
		this->GetClientRect(&cr);//ȡ�ÿͻ���
		
		
		pDoc->img.Draw(pDC->m_hDC, cr.CenterPoint().x - pDoc->img.GetWidth() / 2, cr.CenterPoint().y - pDoc->img.GetHeight() / 2, pDoc->img.GetWidth(), pDoc->img.GetHeight());

		
	}
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
void CMFCApplication1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CMFCApplication1Doc* pDoc = GetDocument();
	
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CString file = cfd.GetPathName();
	pDoc->img.Load(file);flag = 1;
	InvalidateRect(false);

	
}







