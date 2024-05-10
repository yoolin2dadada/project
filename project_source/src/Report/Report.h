#ifndef _REPORT_H
#define _REPORT_H

#include <QtWidgets/QMainWindow>
#include "ui_Report.h"

class CReport : public QMainWindow
{
    Q_OBJECT

public:
    CReport(QWidget *parent = nullptr);
    ~CReport();

private slots:
    void on_pushButton_yoolin_clicked();

private:
    void mouseReleaseEvent(QMouseEvent* e);

private:
    Ui::CReportClass ui;

    CReportMenuDlg* dlg;
};

#endif //_REPORT_H
