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
	//button에 hover했을 때, 창을 띄우고 싶어서.. click이랑 같은 동작 하도록 함
	if (e->type() == QEvent::HoverEnter)
	{
		this->click();
	}

	return QWidget::event(e);
}