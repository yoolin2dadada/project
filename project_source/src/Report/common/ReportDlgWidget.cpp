#include "ReportDlgWidget.h"

CReportDlgWidget::CReportDlgWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlag(Qt::FramelessWindowHint);
}

CReportDlgWidget::~CReportDlgWidget()
{
}

void CReportDlgWidget::on_pushButton_dlgFix_clicked()
{
	emit fix();
}

void CReportDlgWidget::on_pushButton_dlgClose_clicked()
{
	emit close();
}
