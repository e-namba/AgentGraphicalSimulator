
// AgentGraphicalSimulatorDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once


// CAgentGraphicalSimulatorDlg �_�C�A���O
class CAgentGraphicalSimulatorDlg : public CDialogEx
{
// �R���X�g���N�V����
public:
	CAgentGraphicalSimulatorDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
	enum { IDD = IDD_AGENTGRAPHICALSIMULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
