#include "ReportMenuDlg.h"

#include <QPropertyAnimation>

CReportMenuDlg::CReportMenuDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
}

CReportMenuDlg::~CReportMenuDlg()
{
}

void CReportMenuDlg::showEvent(QShowEvent* e)
{
	// show�� ��, animation �߰�
	QPropertyAnimation* pAni = new QPropertyAnimation(this, "windowOpacity");
	pAni->setStartValue(0.0);
	pAni->setEndValue(1.0);
	pAni->setDuration(1000);
	pAni->start(QAbstractAnimation::DeleteWhenStopped);

	QDialog::showEvent(e);
}

bool CReportMenuDlg::event(QEvent* e)
{
    // ���콺�� �ȿö�� ������ â�� �������� �Ѵ�.
	if (e->type() == QEvent::Leave)
	{
		this->close();
	}

	return QDialog::event(e);
}