#ifndef _REPORTPUSHBUTTON_H
#define _REPORTPUSHBUTTON_H

#include <QPushButton>
#include <QEvent>

class CReportPushButton  : public QPushButton
{
	Q_OBJECT

public:
	CReportPushButton(QWidget *parent);
	virtual ~CReportPushButton();

private:
	virtual bool event(QEvent* e);
};
#endif //_REPORTPUSHBUTTON_H