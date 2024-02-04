#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFile>
#include <QFileDialog>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    openBut_ = new QPushButton(this);
    openBut_->setText("Open");
    openBut_->setToolTip("Открыть");

    saveBut_ = new QPushButton(this);
    saveBut_->setText("Save");
    saveBut_->setToolTip("Сохранить");

    copyBut_ = new QPushButton(this);
    copyBut_->setText("Copy");
    copyBut_->setToolTip("Копировать");

    pasteBut_ = new QPushButton(this);
    pasteBut_->setText("Paste");
    pasteBut_->setToolTip("Вставить");

    fontSizeCombo_ = new QComboBox(this);
    fontSizeCombo_->insertItems(0, {"8", "9", "10", "11", "12", "14", "16", "18"});
    fontSizeCombo_->setToolTip("Размер шрифта");

    textEdit_ = new QTextEdit(this);

    auto const toolbar = new QWidget(this);
    auto hBox = new QHBoxLayout(toolbar);
    hBox->addWidget(openBut_);
    hBox->addWidget(saveBut_);
    hBox->addWidget(copyBut_);
    hBox->addWidget(pasteBut_);
    hBox->addWidget(fontSizeCombo_);

    auto const vBox = new QVBoxLayout(this);
    vBox->addWidget(toolbar, 0, Qt::AlignLeft);
    vBox->addWidget(textEdit_);

    setLayout(vBox);

}

Widget::~Widget() {}
