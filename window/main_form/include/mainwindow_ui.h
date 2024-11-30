// LastEditTime: Wed 04 Sep 2024 02:19:53 PM CST

#ifndef MAINWINDOW_UI_H
#define MAINWINDOW_UI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
 public:
  QAction *act_open_data;
  QAction *act_open_anno, *act_save_anno;
  QAction *actionSave;
  QAction *actionQuit;
  QAction *actionFullScreen;
  QAction *actionNormal;
  QAction *actionCancel;
  QAction *action_Qt;
  QAction *actionAboutApp;
  QAction *actionCopy;
  QAction *actionPaste;
  QAction *actionDelete;
  QAction *actionClip;
  QAction *actionNew;
  QAction *actionForward;
  QAction *actionNoIcon;
  QWidget *centralwidget;
  QPushButton *pushButton;
  QMenuBar *menubar;
  QMenu *menu_file;
  QMenu *menu_Edit;
  QMenu *menu_cancel;
  QMenu *menu_Form;
  QMenu *menu_view;
  QMenu *menu_setting;
  QMenu *menu_Help;
  QStatusBar *statusbar;
  QDockWidget *dockWidget_2;
  QWidget *dockWidgetContents_2;
  QVBoxLayout *verticalLayout_2;
  QTreeView *treeView;
  QDockWidget *dockWidget_4;
  QWidget *dockWidgetContents_4;
  QVBoxLayout *verticalLayout_3;
  QTableWidget *tableWidget;
  QDockWidget *dockWidget;
  QWidget *dockWidgetContents;
  QVBoxLayout *verticalLayout;
  QListView *listView;

  void setupUi(QMainWindow *MainWindow)
  {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1056, 600);
    MainWindow->setStyleSheet(QString::fromUtf8(""));
    act_open_data = new QAction(MainWindow);
    act_open_data->setObjectName(QString::fromUtf8("act_open_data"));
    act_open_anno = new QAction(MainWindow);
    act_open_anno->setObjectName(QStringLiteral("act_open_anno"));
    act_save_anno = new QAction(MainWindow);
    act_save_anno->setObjectName(QString::fromUtf8("act_save_anno"));
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/Resources/icon/folder-open.png"), QSize(), QIcon::Normal, QIcon::Off);
    act_open_data->setIcon(icon);
    actionSave = new QAction(MainWindow);
    actionSave->setObjectName(QString::fromUtf8("actionSave"));
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/Resources/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionSave->setIcon(icon1);
    actionQuit = new QAction(MainWindow);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/Resources/icon/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionQuit->setIcon(icon2);
    actionFullScreen = new QAction(MainWindow);
    actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
    actionFullScreen->setCheckable(true);
    QIcon icon3;
    icon3.addFile(QString::fromUtf8(":/Resources/icon/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionFullScreen->setIcon(icon3);
    actionNormal = new QAction(MainWindow);
    actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
    actionNormal->setCheckable(true);
    actionNormal->setChecked(true);
    QIcon icon4;
    icon4.addFile(QString::fromUtf8(":/Resources/icon/rotate-right.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionNormal->setIcon(icon4);
    actionCancel = new QAction(MainWindow);
    actionCancel->setObjectName(QString::fromUtf8("actionCancel"));
    QIcon icon5;
    icon5.addFile(QString::fromUtf8(":/Resources/icon/reply.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionCancel->setIcon(icon5);
    action_Qt = new QAction(MainWindow);
    action_Qt->setObjectName(QString::fromUtf8("action_Qt"));
    QIcon icon6;
    icon6.addFile(QString::fromUtf8(":/Resources/icon/question.png"), QSize(), QIcon::Normal, QIcon::Off);
    action_Qt->setIcon(icon6);
    actionAboutApp = new QAction(MainWindow);
    actionAboutApp->setObjectName(QString::fromUtf8("actionAboutApp"));
    actionAboutApp->setIcon(icon6);
    actionCopy = new QAction(MainWindow);
    actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
    QIcon icon7;
    icon7.addFile(QString::fromUtf8(":/Resources/icon/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionCopy->setIcon(icon7);
    actionPaste = new QAction(MainWindow);
    actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
    actionPaste->setIcon(icon7);
    actionDelete = new QAction(MainWindow);
    actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
    actionDelete->setIcon(icon2);
    actionClip = new QAction(MainWindow);
    actionClip->setObjectName(QString::fromUtf8("actionClip"));
    QIcon icon8;
    icon8.addFile(QString::fromUtf8(":/Resources/icon/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionClip->setIcon(icon8);
    actionNew = new QAction(MainWindow);
    actionNew->setObjectName(QString::fromUtf8("actionNew"));
    QIcon icon9;
    icon9.addFile(QString::fromUtf8(":/Resources/icon/file-text-o.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionNew->setIcon(icon9);
    actionForward = new QAction(MainWindow);
    actionForward->setObjectName(QString::fromUtf8("actionForward"));
    actionForward->setIcon(icon5);
    actionNoIcon = new QAction(MainWindow);
    actionNoIcon->setObjectName(QString::fromUtf8("actionNoIcon"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    pushButton = new QPushButton(centralwidget);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(110, 90, 281, 121));
    QFont font;
    font.setPointSize(13);
    font.setBold(true);
    font.setWeight(75);
    pushButton->setFont(font);
    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1056, 23));
    menubar->setMinimumSize(QSize(0, 0));
    menubar->setMaximumSize(QSize(16777215, 16777215));
    menu_file = new QMenu(menubar);
    menu_file->setObjectName(QString::fromUtf8("menu_file"));
    menu_Edit = new QMenu(menubar);
    menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
    menu_cancel = new QMenu(menu_Edit);
    menu_cancel->setObjectName(QString::fromUtf8("menu_cancel"));
    QIcon icon10;
    icon10.addFile(QString::fromUtf8(":/Resources/icon/mail-reply.png"), QSize(), QIcon::Normal, QIcon::Off);
    menu_cancel->setIcon(icon10);
    menu_Form = new QMenu(menubar);
    menu_Form->setObjectName(QString::fromUtf8("menu_Form"));
    menu_view = new QMenu(menubar);
    menu_view->setObjectName(QString::fromUtf8("menu_view"));
    menu_setting = new QMenu(menubar);
    menu_setting->setObjectName(QString::fromUtf8("menu_setting"));
    menu_Help = new QMenu(menubar);
    menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);
    dockWidget_2 = new QDockWidget(MainWindow);
    dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
    dockWidget_2->setMinimumSize(QSize(200, 174));
    dockWidgetContents_2 = new QWidget();
    dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
    verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    treeView = new QTreeView(dockWidgetContents_2);
    treeView->setObjectName(QString::fromUtf8("treeView"));

    verticalLayout_2->addWidget(treeView);

    dockWidget_2->setWidget(dockWidgetContents_2);
    MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);
    dockWidget_4 = new QDockWidget(MainWindow);
    dockWidget_4->setObjectName(QString::fromUtf8("dockWidget_4"));
    dockWidget_4->setMinimumSize(QSize(266, 314));
    dockWidgetContents_4 = new QWidget();
    dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
    verticalLayout_3 = new QVBoxLayout(dockWidgetContents_4);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    tableWidget = new QTableWidget(dockWidgetContents_4);
    tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

    verticalLayout_3->addWidget(tableWidget);

    dockWidget_4->setWidget(dockWidgetContents_4);
    MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_4);
    dockWidget = new QDockWidget(MainWindow);
    dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
    dockWidget->setMinimumSize(QSize(200, 174));
    dockWidgetContents = new QWidget();
    dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
    verticalLayout = new QVBoxLayout(dockWidgetContents);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    listView = new QListView(dockWidgetContents);
    listView->setObjectName(QString::fromUtf8("listView"));

    verticalLayout->addWidget(listView);

    dockWidget->setWidget(dockWidgetContents);
    MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

    menubar->addAction(menu_file->menuAction());
    menubar->addAction(menu_Edit->menuAction());
    menubar->addAction(menu_Form->menuAction());
    menubar->addAction(menu_view->menuAction());
    menubar->addAction(menu_setting->menuAction());
    menubar->addAction(menu_Help->menuAction());

    menu_file->addAction(act_open_data); //
    menu_file->addAction(act_open_anno);
    menu_file->addAction(act_save_anno);
    menu_file->addSeparator();
    menu_file->addAction(actionNew);
    menu_file->addAction(actionSave);
    menu_file->addSeparator();
    menu_file->addAction(actionQuit);
    menu_Edit->addAction(menu_cancel->menuAction());
    menu_Edit->addAction(actionForward);
    menu_Edit->addSeparator();
    menu_Edit->addAction(actionCopy);
    menu_Edit->addAction(actionClip);
    menu_Edit->addAction(actionPaste);
    menu_Edit->addSeparator();
    menu_Edit->addAction(actionDelete);
    menu_cancel->addAction(actionCancel);
    menu_Form->addAction(actionFullScreen);
    menu_Form->addAction(actionNormal);
    menu_view->addAction(actionNoIcon);
    menu_Help->addAction(action_Qt);
    menu_Help->addAction(actionAboutApp);

    retranslateUi(MainWindow);
    QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

    QMetaObject::connectSlotsByName(MainWindow);
  } // setupUi

  void retranslateUi(QMainWindow *MainWindow)
  {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Visual Mark", nullptr));
    act_open_data->setText(QApplication::translate("MainWindow", "Open Data", nullptr));
    act_save_anno->setText(QApplication::translate("MainWindow", "Save annotation", nullptr));
    act_open_anno->setText(QApplication::translate("MainWindow", "Open annotation", nullptr));
    actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#ifndef QT_NO_TOOLTIP
    actionSave->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
    actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
    actionQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_SHORTCUT
    actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
    actionFullScreen->setText(QApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
#ifndef QT_NO_SHORTCUT
    actionFullScreen->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
    actionNormal->setText(QApplication::translate("MainWindow", "Default", nullptr));
    actionCancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
    action_Qt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt", nullptr));
    actionAboutApp->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
    actionAboutApp->setIconText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
    actionAboutApp->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
    actionCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#ifndef QT_NO_SHORTCUT
    actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
    actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_TOOLTIP
    actionPaste->setToolTip(QApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
    actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
    actionDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#ifndef QT_NO_TOOLTIP
    actionDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
    actionDelete->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
    actionClip->setText(QApplication::translate("MainWindow", "Cut", nullptr));
#ifndef QT_NO_TOOLTIP
    actionClip->setToolTip(QApplication::translate("MainWindow", "Cut", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
    actionClip->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
    actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#ifndef QT_NO_TOOLTIP
    actionNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_NO_TOOLTIP
    actionForward->setText(QApplication::translate("MainWindow", "\345\220\216\351\200\200", nullptr));
#ifndef QT_NO_TOOLTIP
    actionForward->setToolTip(QApplication::translate("MainWindow", "\345\220\216\351\200\200", nullptr));
#endif // QT_NO_TOOLTIP
    actionNoIcon->setText(QApplication::translate("MainWindow", "\346\227\240\345\233\276\346\240\207", nullptr));
    pushButton->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250QRbbon", nullptr));
    menu_file->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    menu_Edit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
    menu_cancel->setTitle(QApplication::translate("MainWindow", "Cancel", nullptr));
    menu_Form->setTitle(QApplication::translate("MainWindow", "Form", nullptr));
    menu_view->setTitle(QApplication::translate("MainWindow", "View", nullptr));
    menu_setting->setTitle(QApplication::translate("MainWindow", "Setting", nullptr));
    menu_Help->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    dockWidget_2->setWindowTitle(QApplication::translate("MainWindow", "\345\234\272\346\231\257\346\240\221", nullptr));
    dockWidget_4->setWindowTitle(QApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
    dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\346\250\241\345\236\213\345\272\223", nullptr));
  } // retranslateUi
};

namespace Ui
{
class MainWindow : public Ui_MainWindow
{};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VGRIBBONWINDOW_H
