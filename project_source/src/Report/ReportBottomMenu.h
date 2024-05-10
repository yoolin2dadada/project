#ifndef _REPORTBOTTOMMENU_H
#define _REPORTBOTTOMMENU_H

#include <QWidget>
#include "ui_ReportBottomMenu.h"

class CReportBottomMenu : public QWidget
{
	Q_OBJECT

public:
	CReportBottomMenu(QWidget *parent = nullptr);
	~CReportBottomMenu();

private slots:
	void on_pushButton_close_clicked();

signals:
	void exit();

private:
	Ui::CReportBottomMenuClass ui;
};
#endif //_REPORTBOTTOMMENU_H