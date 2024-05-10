#include "ReportBottomMenu.h"

CReportBottomMenu::CReportBottomMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
}

CReportBottomMenu::~CReportBottomMenu()
{
}

void CReportBottomMenu::on_pushButton_close_clicked()
{
	emit exit();
}