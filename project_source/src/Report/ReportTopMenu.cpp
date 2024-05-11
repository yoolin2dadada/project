#include "ReportTopMenu.h"

CReportTopMenu::CReportTopMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlag(Qt::FramelessWindowHint);
}

CReportTopMenu::~CReportTopMenu()
{
}

void CReportTopMenu::on_pushButton_schedule_clicked()
{
	emit execSchedule();
}

void CReportTopMenu::on_pushButton_task_clicked()
{
	
}

