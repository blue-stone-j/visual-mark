#pragma once

#include <QMainWindow>
namespace Ui
{
class MainWindow;
};

class MainWindow : public QMainWindow
{
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = Q_NULLPTR);
  ~MainWindow();
  void setMode(int mode_in)
  {
    if (mode >= 0)
    {
      return;
    }
    mode = mode_in;
  }

 private:
  Ui::MainWindow *ui;
  int mode = -1; // 1: cloud; 2: image; 3: cloud-image
 private slots:
  void on_act_open_data_triggered();
  void on_act_open_anno_triggered(); // open stored annotation result and continue last work
  void on_act_save_anno_triggered();
};
