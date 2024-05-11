#ifndef _REPORTMANAGER_H
#define _REPORTMANAGER_H

#include <QWidget>
#include "ui_ReportManager.h"

class CReportManager : public QWidget
{
	Q_OBJECT

public:
	CReportManager(QWidget *parent = nullptr);
	~CReportManager();

private:
	Ui::CReportManagerClass ui;
};
#endif //_REPORTMANAGER_H
