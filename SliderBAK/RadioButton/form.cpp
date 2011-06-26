#include <QtGui>

#include "form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
{
  ui.setupUi(this);
  connect( this->ui.pushButton, SIGNAL( clicked() ), this, SLOT(pushButton_SetLabelText()) );
}

void Form::pushButton_SetLabelText()
{
  
  if(this->ui.radioButton->isChecked())
  {
    this->ui.label->setText("1");
  }
  
  if(this->ui.radioButton_2->isChecked())
  {
      this->ui.label->setText("2");
  }

}
