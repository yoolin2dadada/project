#ifndef _REPORT_H
#define _REPORT_H

#include <QtWidgets/QMainWindow>
#include "ui_Report.h"

#include "ReportBottomMenu.h"
#include "ReportMenuDlg.h"

class CReport : public QMainWindow
{
    Q_OBJECT

public:
    CReport(QWidget *parent = nullptr);
    ~CReport();

private:
    void setUI();

private slots:
    void on_pushButton_yoolin_clicked();
    void exit();

private:
    Ui::CReportClass ui;

    CReportBottomMenu* m_pBottom;
    CReportMenuDlg* m_pMenuDlg;
};

#endif //_REPORT_H
