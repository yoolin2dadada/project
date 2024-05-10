#ifndef _REPORTMENUDLG_H
#define _REPORTMENUDLG_H

#include <QDialog>
#include "ui_ReportMenuDlg.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CReportMenuDlgClass; };
QT_END_NAMESPACE

class CReportMenuDlg : public QDialog
{
	Q_OBJECT

public:
	CReportMenuDlg(QWidget *parent = nullptr);
	virtual ~CReportMenuDlg();

private:
	//event
	void showEvent(QShowEvent* e);
	bool event(QEvent* e);

private:
	Ui::CReportMenuDlgClass ui;
};

#endif