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
{

}

Dlg::~Dlg()
{
}

void Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(Dlg, CDialogEx)
END_MESSAGE_MAP()




BOOL Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
