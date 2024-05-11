#include "ReportPushButton.h"

CReportPushButton::CReportPushButton(QWidget *parent)
	: QPushButton(parent)
{
}

CReportPushButton::~CReportPushButton()
{
}

bool CReportPushButton::event(QEvent* e)
{
	//button�� hover���� ��, â�� ���� �;.. click�̶� ���� ���� �ϵ��� ��
	if (e->type() == QEvent::HoverEnter)
	{
		this->click();
	}

	return QWidget::event(e);
}