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
	, String1(_T(""))
	, String2(_T(""))
{

}

Dlg::~Dlg()
{
}

void Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, String1);
	DDV_MaxChars(pDX, String1, 100);
	DDX_Text(pDX, IDC_EDIT2, String2);
	DDV_MaxChars(pDX, String2, 100);
}


BEGIN_MESSAGE_MAP(Dlg, CDialogEx)
	
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()




void Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString a;
	UpdateData(true);
	a = String1;
	String1 = String2;
	String2 = a;
	UpdateData(false);
}
