#ifndef _REPORTSCHEDULEDLG_H
#define _REPORTSCHEDULEDLG_H

#include <QDialog>
#include "ui_ReportScheduleDlg.h"

#include "../common/ReportDlgWidget.h"

class CReportScheduleDlg : public QDialog
{
	Q_OBJECT

public:
	CReportScheduleDlg(QWidget *parent = nullptr);
	~CReportScheduleDlg();

private:
	void setUI();
	
	// event
	virtual void showEvent(QShowEvent* e);
	virtual bool event(QEvent* e);

private:
	CReportDlgWidget* m_pDlgWidget;

private:
	Ui::CReportScheduleDlgClass ui;
};
#endif // _REPORTSCHEDULEDLG_H