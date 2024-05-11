#include "ReportManager.h"

CReportManager::CReportManager(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlag(Qt::FramelessWindowHint);
}

CReportManager::~CReportManager()
{
}
