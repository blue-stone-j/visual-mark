
name=$1

# whether file exists
# if [ -e "$name" ]; then
#   echo -e "${BLUE}File ${name} exists, skip generatation.${NC}"
#   exit
# fi

# if [ -d "$name" ]; then
#     echo -e "${YELLOW}Directory ${name} exists, skip creation.${NC}"
#     exit
# fi

# Internal Field Separator
IFS='_' 
# Convert string into an array
read -ra PARTS <<< "$name"
# Reset IFS if needed
unset IFS

# traverse an array 
for PART in "${PARTS[@]}"; do
  # echo "$PART"
  # Convert first character to uppercase
  Name=${Name}$(echo "$PART" | sed 's/./\U&/') 
  # convert all charactera to uppercase
  NAME=${NAME}${PART^^} 
  NA_ME=${NA_ME}${PART^^}"_"
done

cat <<EOF > "${name}_ui.h"

#ifndef ${NA_ME}_UI_H
#define ${NA_ME}_UI_H

#include <QtWidgets/QApplication>

QT_BEGIN_NAMESPACE

class ${NAME}_Ui
{
public:

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
         {   widget->setObjectName(QString::fromUtf8("widgets_browser"));
         }

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QMainWindow *widget)
    {
        widget->setWindowTitle(QApplication::translate("MainWindow", "${Name}", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ${Name}: public ${Name}_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif ${NA_ME}_UI_H

EOF