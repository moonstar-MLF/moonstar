// Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Dlg.h"
#include "afxdialogex.h"


// Dlg �Ի���

IMPLEMENT_DYNAMIC(Dlg, CDialogEx)

Dlg::Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
	, b(0)
	, c(_T(""))
{

}

Dlg::~Dlg()
{
}

void Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDX_Text(pDX, IDC_EDIT1, b);
	DDX_Text(pDX, IDC_EDIT2, c);
}


BEGIN_MESSAGE_MAP(Dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dlg ��Ϣ�������


void Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	CString str;
	str.Format(_T("%d"), b);
	c = a+ str;
	UpdateData(false);
}
