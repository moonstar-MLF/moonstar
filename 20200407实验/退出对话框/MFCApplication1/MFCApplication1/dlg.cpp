// dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "dlg.h"
#include "afxdialogex.h"


// dlg �Ի���

IMPLEMENT_DYNAMIC(dlg, CDialogEx)

dlg::dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

dlg::~dlg()
{
}

void dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(dlg, CDialogEx)
END_MESSAGE_MAP()


// dlg ��Ϣ�������
