#pragma once

#include <QWidget>
#include "ui_ReportDlgWidget.h"

class CReportDlgWidget : public QWidget
{
	Q_OBJECT

public:
	CReportDlgWidget(QWidget *parent = nullptr);
	~CReportDlgWidget();

private slots:
	void on_pushButton_dlgFix_clicked();
	void on_pushButton_dlgClose_clicked();

signals:
	void fix();
	void close();

private:
	Ui::CReportDlgWidgetClass ui;
};
