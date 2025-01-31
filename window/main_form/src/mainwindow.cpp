#include "../include/mainwindow.h"
#include "../include/mainwindow_ui.h"

#include <QShortcut>
#include <QDebug>
#include <QMessageBox>

#include "qribbon.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent)
{
  ui = new Ui::MainWindow();
  ui->setupUi(this);

  setCorner(Qt::BottomLeftCorner, Qt::LeftDockWidgetArea);
  setCorner(Qt::BottomRightCorner, Qt::RightDockWidgetArea);

  this->addAction(ui->actionFullScreen);
  connect(ui->actionFullScreen, &QAction::triggered, [&]() {
		auto full = ui->actionFullScreen->isChecked();
		menuBar()->setVisible(!full);
		ui->actionFullScreen->setShortcut(  full ? QKeySequence("Esc") : QKeySequence("Ctrl+F"));
		
		static bool maximized = false;// 记录当前状态
		if ( full )
		{
			maximized = isMaximized();
		}
		else if ( maximized && isMaximized() )
		{
			return;
		}

		if ( full && !isMaximized() || !full && isMaximized() )
		{
			if (isMaximized())
			{
				showNormal();
			}
			else
				showMaximized();
		} });
  // QRibbon::install(this);
  // this->show();
  // connect(ui->pushButton, &QPushButton::clicked, [this]() {
  // 	QRibbon::install(this);
  // 	this->show(); });
}

MainWindow::~MainWindow()
{
  delete ui;
}
void MainWindow::on_act_open_anno_triggered()
{
  qDebug() << "on_act_open_anno_triggered";
  // QMessageBox box(QMessageBox::Warning, "warning", "ll", QMessageBox::Ok);
  // box.exec();
}
void MainWindow::on_act_open_data_triggered()
{
  qDebug() << "on_act_open_data_triggered";
}
void MainWindow::on_act_save_anno_triggered()
{
  qDebug() << "on_act_save_anno_triggered";
}
