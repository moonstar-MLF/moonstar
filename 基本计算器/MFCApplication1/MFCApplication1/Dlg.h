#pragma once


// Dlg �Ի���

class Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg)

public:
	Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
