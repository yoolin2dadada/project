#ifndef _REPORT_H
#define _REPORT_H

#include <QtWidgets/QMainWindow>
#include "ui_Report.h"

#include "ReportTopMenu.h"
#include "ReportBottomMenu.h"
#include "ReportMenuDlg.h"
#include "ReportManagerPINDlg.h"
#include "ReportManager.h"
#include "ReportToday.h"

#include "./popup/ReportScheduleDlg.h"

class CReport : public QMainWindow
{
    Q_OBJECT

public:
    CReport(QWidget *parent = nullptr);
    ~CReport();

private:
    void setUI();

private slots:
    void execSchedule();

    void on_pushButton_yoolin_clicked();
    void exit();

private:
    Ui::CReportClass ui;

    CReportTopMenu* m_pTopMenu;
    CReportBottomMenu* m_pBottom;
    CReportMenuDlg* m_pMenuDlg;
    CReportManagerPINDlg* m_pPINDlg;
    CReportManager* m_pManager;   
    CReportToday* m_pToday;
    CReportScheduleDlg* m_pScheduleDlg;
};

#endif //_REPORT_H
