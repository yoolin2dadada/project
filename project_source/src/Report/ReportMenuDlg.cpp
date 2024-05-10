#include "ReportMenuDlg.h"

#include <qpropertyanimation.h>

CReportMenuDlg::CReportMenuDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
}

CReportMenuDlg::~CReportMenuDlg()
{
}