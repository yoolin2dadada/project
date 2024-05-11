#include "ReportScheduleDlg.h"

#include <QPropertyAnimation>

CReportScheduleDlg::CReportScheduleDlg(QWidget *parent)
	: QDialog(parent)
	, m_pDlgWidget(NULL)
{
	ui.setupUi(this);
	this->setWindowFlag(Qt::FramelessWindowHint);
	this->setUI();
}

CReportScheduleDlg::~CReportScheduleDlg()
{
	if (m_pDlgWidget != NULL)
	{
		delete m_pDlgWidget;
		m_pDlgWidget = NULL;
	}
}

void CReportScheduleDlg::setUI()
{
	if (m_pDlgWidget == NULL)
	{
		m_pDlgWidget = new CReportDlgWidget;
	}

	int nWidth = this->width();
	int nHeight = this->height() * 0.05;
	m_pDlgWidget->resize(nWidth, nHeight);

	ui.horizontalLayout->addWidget(m_pDlgWidget);
}

void CReportScheduleDlg::showEvent(QShowEvent* e)
{
	// show할 때, animation 추가
	QPropertyAnimation* pAni = new QPropertyAnimation(this, "windowOpacity");
	pAni->setStartValue(0.0);
	pAni->setEndValue(1.0);
	pAni->setDuration(1000);
	pAni->start(QAbstractAnimation::DeleteWhenStopped);

	QDialog::showEvent(e);
}

bool CReportScheduleDlg::event(QEvent* e)
{
	// 마우스가 안올라와 있으면 창을 숨긴다.
	if (e->type() == QEvent::Leave)
	{
		this->hide();
	}

	return QDialog::event(e);
}