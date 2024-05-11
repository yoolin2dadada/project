#ifndef _REPORTMANAGERPINDLG_H
#define _REPORTMANAGERPINDLG_H

#include <QDialog>
#include "ui_ReportManagerPINDlg.h"

class CReportManagerPINDlg : public QDialog
{
	Q_OBJECT

public:
	CReportManagerPINDlg(QWidget *parent = nullptr);
	~CReportManagerPINDlg();

private:
	void showEvent(QShowEvent* e);

private slots:
	void on_pushButton_PIN0_clicked();
	void on_pushButton_PIN1_clicked();
	void on_pushButton_PIN2_clicked();
	void on_pushButton_PIN3_clicked();
	void on_pushButton_PIN4_clicked();
	void on_pushButton_PIN5_clicked();
	void on_pushButton_PIN6_clicked();
	void on_pushButton_PIN7_clicked();
	void on_pushButton_PIN8_clicked();
	void on_pushButton_PIN9_clicked();

	void on_pushButton_PINModify_clicked();
	void on_pushButton_PINRemove_clicked();	

	void on_pushButton_PINOK_clicked();
	void on_pushButton_PINClose_clicked();

	void inputPIN(const int nInputNum);

private:
	Ui::CReportManagerPINDlgClass ui;
};
#endif //_REPORTMANAGERPINDLG_H