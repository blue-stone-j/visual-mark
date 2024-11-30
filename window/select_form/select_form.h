#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QIcon>
#include <QPixmap>
#include <QSpinBox>
#include <QDebug>

// Option Dialog Class with ComboBox and Dynamic Icon Display
class OptionDialog : public QDialog
{
  Q_OBJECT
 public:
  OptionDialog(QWidget *parent = nullptr) :
    QDialog(parent), selectedIndex(-1)
  {
    QHBoxLayout *layout = new QHBoxLayout(this); // Horizontal layout for icon and combobox

    // QLabel to show the icon on the left
    iconLabel = new QLabel(this);
    iconLabel->setPixmap(QPixmap(":/Resources/icon/cloud_icon.png").scaled(100, 100, Qt::KeepAspectRatio)); // Set initial icon
    layout->addWidget(iconLabel);

    // Vertical layout for ComboBox and OK button
    QVBoxLayout *rightLayout = new QVBoxLayout();

    QLabel *label = new QLabel("Select an option:", this);
    rightLayout->addWidget(label);

    // ComboBox with options (icon changes based on selection)
    comboMode = new QComboBox(this);
    comboMode->addItem("cloud");
    comboMode->addItem("camera");
    comboMode->addItem("cloud-camera");
    rightLayout->addWidget(comboMode);

    // OK button
    QPushButton *okButton = new QPushButton("OK", this);
    rightLayout->addWidget(okButton);

    // Add right layout to the main layout
    layout->addLayout(rightLayout);

    // Connect signals to slots
    connect(okButton, &QPushButton::clicked, this, &OptionDialog::onOkClicked);
    connect(comboMode, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &OptionDialog::onComboBoxIndexChanged);

    QSpinBox *camera_num = new QSpinBox();

    // Set dialog size
    // resize(400, 200); // Adjust size of the dialog
  }

  int getSelectedIndex() const
  {
    return selectedIndex;
  }

 private slots:
  // Slot for handling ComboBox index changes (icon updates)
  void onComboBoxIndexChanged(int index)
  {
    updateIcon(index); // Call the function to update the icon
  }

  void onOkClicked()
  {
    selectedIndex = comboMode->currentIndex(); // Get the selected index from ComboBox
    accept();                                  // Close the dialog and signal acceptance
  }

 private:
  QComboBox *comboMode;
  QLabel *iconLabel; // Label to display the icon
  int selectedIndex;

  // Function to update the icon in the label based on the selected index
  void updateIcon(int index)
  {
    QString iconPath;

    // Choose icon path based on the selected index
    switch (index)
    {
      case 0:
        iconPath = ":/Resources/icon/cloud_icon.png"; // Replace with your icon path for Option 1
        break;
      case 1:
        iconPath = ":/Resources/icon/img_icon.png"; // Replace with your icon path for Option 2
        break;
      case 2:
        iconPath = ":/Resources/icon/share.png"; // Replace with your icon path for Option 3
        break;
      default:
        iconPath = "";
    }

    // Set the icon if path is valid
    if (!iconPath.isEmpty())
    {
      QPixmap pixmap(iconPath);
      iconLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio)); // Update icon size and display
    }
    else
    {
      iconLabel->clear(); // Clear the label if no icon is set
    }
  }
};