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
	, centerx(0)
	, centery(0)
	, L(0)
	, S(0)
{

}

Dlg::~Dlg()
{
}

void Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, centerx);
	DDX_Text(pDX, IDC_EDIT2, centery);
	DDX_Text(pDX, IDC_EDIT3, L);
	DDX_Text(pDX, IDC_EDIT4, S);
}


BEGIN_MESSAGE_MAP(Dlg, CDialogEx)
	
END_MESSAGE_MAP()


// Dlg ��Ϣ�������


