#include "ReportManagerPINDlg.h"
#include <QPropertyAnimation>

CReportManagerPINDlg::CReportManagerPINDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlag(Qt::FramelessWindowHint);
}

CReportManagerPINDlg::~CReportManagerPINDlg()
{
}

void CReportManagerPINDlg::showEvent(QShowEvent* e)
{
	QPropertyAnimation* pAni = new QPropertyAnimation(this, "windowOpacity");
	pAni->setStartValue(0.0);
	pAni->setEndValue(1.0);
	pAni->setDuration(1000);
	pAni->start(QAbstractAnimation::DeleteWhenStopped);

	QDialog::showEvent(e);
}
//이렇게 말고 다른 방법이 없을까..
void CReportManagerPINDlg::on_pushButton_PIN0_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN1_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN2_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN3_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN4_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN5_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN6_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN7_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN8_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PIN9_clicked()
{

}


void CReportManagerPINDlg::inputPIN(const int nInputNum)
{
	if (ui.lineEdit_Input1->text().isEmpty())
	{
		ui.lineEdit_Input1->setText(QString::number(nInputNum));
	}
	else if (ui.lineEdit_Input2->text().isEmpty())
	{
		ui.lineEdit_Input2->setText(QString::number(nInputNum));
	}
	else if (ui.lineEdit_Input3->text().isEmpty())
	{
		ui.lineEdit_Input3->setText(QString::number(nInputNum));
	}
	else if (ui.lineEdit_Input4->text().isEmpty())
	{
		ui.lineEdit_Input4->setText(QString::number(nInputNum));
	}
	else
	{
		return;
	}
}

void CReportManagerPINDlg::on_pushButton_PINModify_clicked()
{

}

void CReportManagerPINDlg::on_pushButton_PINRemove_clicked()
{
	ui.lineEdit_Input1->setText("");
	ui.lineEdit_Input2->setText("");
	ui.lineEdit_Input3->setText("");
	ui.lineEdit_Input4->setText("");
}

void CReportManagerPINDlg::on_pushButton_PINOK_clicked()
{
	//여기서 유효한 PIN인지 검사해야 됨..
	this->accept();
}

void CReportManagerPINDlg::on_pushButton_PINClose_clicked()
{
	this->reject();
}