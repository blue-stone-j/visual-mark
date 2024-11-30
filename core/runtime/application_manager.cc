#include "application_manager.h"
// #include "logger/logger.h"
#include "select_form/select_form.h"

ApplicationManager::ApplicationManager(/* args */)
{
}

int ApplicationManager::init()
{
  OptionDialog optionDialog;
  int selectedOption = optionDialog.getSelectedIndex();

  if (optionDialog.exec() == QDialog::Accepted)
  {
    main_window.setMode(selectedOption);
  }
  else
  {
    return 1;
  }

  main_window.show();
  return 0;
}

ApplicationManager::~ApplicationManager() {}
