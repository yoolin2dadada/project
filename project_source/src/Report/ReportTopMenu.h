#ifndef _REPORTTOPMENU_H
#define _REPORTTOPMENU_H

#include <QWidget>
#include "ui_ReportTopMenu.h"

class CReportTopMenu : public QWidget
{
	Q_OBJECT

public:
	CReportTopMenu(QWidget *parent = nullptr);
	~CReportTopMenu();

private slots:
	void on_pushButton_schedule_clicked();
	void on_pushButton_task_clicked();

signals:
	void	execSchedule();
	void	execTask();

private:
	Ui::CReportTopMenuClass ui;
};
#endif
