/*
 * @Author: chengyangkj chengyangkj@qq.com
 * @Date: 2023-09-28 14:56:04
 * @LastEditors: chengyangkj chengyangkj@qq.com
 * @LastEditTime: 2023-10-05 11:39:01
 * @FilePath: /ROS2_Qt5_Gui_App/src/main.cpp
 */
#include <QApplication>
#include <QLabel>
#include <QMovie>
#include <QPixmap>
#include <QSplashScreen>
#include <QThread>
#include <csignal>
#include <iostream>
#include "logger/logger.h"
#include "runtime/application_manager.h"

void signalHandler(int signal)
{
  if (signal == SIGINT)
  {
    QCoreApplication::quit();
  }
}
int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  // 注册信号处理函数
  std::signal(SIGINT, signalHandler);

  ApplicationManager manager_;
  int init = manager_.init();
  if (init)
  {
    LOG_ERROR("init error code: " + std::to_string(init));
    return 1;
  }
  LOG_INFO("Visual Mark init!")
  return a.exec();
}
