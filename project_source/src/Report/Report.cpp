#include "Report.h"

CReport::CReport(QWidget *parent)
    : QMainWindow(parent)
    , m_pTopMenu(NULL)
    , m_pBottom(NULL)
    , m_pMenuDlg(NULL)
    , m_pPINDlg(NULL)
    , m_pManager(NULL)
    , m_pToday(NULL)
    , m_pScheduleDlg(NULL)
{
    ui.setupUi(this);
    this->setUI();
}

CReport::~CReport()
{
    if (m_pTopMenu != NULL)
    {
        delete m_pTopMenu;
        m_pTopMenu = NULL;
    }
    if (m_pBottom != NULL)
    {
        delete m_pBottom;
        m_pBottom = NULL;
    }
    if (m_pMenuDlg != NULL)
    {
        delete m_pMenuDlg;
        m_pMenuDlg = NULL;
    }
    if (m_pPINDlg != NULL)
    {
        delete m_pPINDlg;
        m_pPINDlg = NULL;
    }
    if (m_pManager != NULL)
    {
        delete m_pManager;
        m_pManager = NULL;
    }
    if (m_pToday != NULL)
    {
        delete m_pToday;
        m_pToday = NULL;
    }
    if (m_pScheduleDlg != NULL)
    {
        delete m_pScheduleDlg;
        m_pScheduleDlg = NULL;
    }
}

void CReport::setUI()
{
    this->setWindowFlags(Qt::FramelessWindowHint);

    //set topMenu
    if (m_pTopMenu == NULL)
    {
        m_pTopMenu = new CReportTopMenu;
        connect(m_pTopMenu, SIGNAL(execSchedule()), this, SLOT(execSchedule()));
    }

    //set Top menu size, position
    int nHeight = this->height() * 0.1;
    int nWidth = this->width();

    m_pTopMenu->resize(nWidth, nHeight);
    m_pTopMenu->move(0, 0);

    this->layout()->addWidget(m_pTopMenu);   

    // set bottomMenu
    if (m_pBottom == NULL)
    {
        m_pBottom = new CReportBottomMenu;
        connect(m_pBottom, SIGNAL(exit()), this, SLOT(exit()));
    }    
    
    //set Bottom menu size, position
    m_pBottom->resize(nWidth, nHeight);
    m_pBottom->move(0, this->height()*0.9);

    this->layout()->addWidget(m_pBottom);

    // set today
    if (m_pToday == NULL)
    {
        m_pToday = new CReportToday;
    }

    //set today size, position
    nHeight = this->height() * 0.2;
    nWidth = this->width() * 0.2;
    m_pToday->resize(nWidth, nHeight);

    int nY = (this->height() * 0.9) - nHeight + 20;
    m_pToday->move(20, nY);

    this->layout()->addWidget(m_pToday);
}

void CReport::execSchedule()
{
    if (m_pScheduleDlg == NULL)
    {
        m_pScheduleDlg = new CReportScheduleDlg;
    }

    m_pScheduleDlg->resize(this->width(), this->height() * 0.9);
    m_pScheduleDlg->move(this->geometry().x(), this->geometry().y() + (this->height() * 0.1));

    m_pScheduleDlg->show();
}

void CReport::on_pushButton_yoolin_clicked()
{
    if (m_pMenuDlg == NULL)
    {
        m_pMenuDlg = new CReportMenuDlg;
    }
    m_pMenuDlg->resize(m_pMenuDlg->width(), this->height()); // set size
    m_pMenuDlg->move(this->geometry().center() - m_pMenuDlg->rect().center()); // set position
    m_pMenuDlg->show();
}

void CReport::exit()
{
    this->close();
}