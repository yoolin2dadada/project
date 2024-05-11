#ifndef _REPORTTODAY_H
#define _REPORTTODAY_H

#include <QWidget>
#include "ui_ReportToday.h"

class CReportToday : public QWidget
{
	Q_OBJECT

public:
	CReportToday(QWidget *parent = nullptr);
	~CReportToday();

private slots:
	void on_pushButton_today_clicked();

private:
	Ui::CReportTodayClass ui;
};
#endif //_REPORTTODAY_H
