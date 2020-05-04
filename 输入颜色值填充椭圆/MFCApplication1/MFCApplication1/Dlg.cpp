// Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Dlg.h"
#include "afxdialogex.h"


// Dlg 对话框

IMPLEMENT_DYNAMIC(Dlg, CDialogEx)

Dlg::Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, R(0)
	, G(0)
	, B(0)
{

}

Dlg::~Dlg()
{
}

void Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, R);
	DDX_Text(pDX, IDC_EDIT2, G);
	DDX_Text(pDX, IDC_EDIT3, B);
}


BEGIN_MESSAGE_MAP(Dlg, CDialogEx)
	
END_MESSAGE_MAP()


// Dlg 消息处理程序


