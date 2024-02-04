#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStringList>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    openBut_ = new QPushButton(this);
    openBut_->setText("Open");
    openBut_->setToolTip("Открыть");
    connect(openBut_, &QPushButton::clicked, this, &Widget::openFile);

    saveBut_ = new QPushButton(this);
    saveBut_->setText("Save");
    saveBut_->setToolTip("Сохранить");
    connect(saveBut_, &QPushButton::clicked, this, &Widget::saveFile);

    copyBut_ = new QPushButton(this);
    copyBut_->setText("Copy");
    copyBut_->setToolTip("Копировать");
    connect(copyBut_, &QPushButton::clicked, this, &Widget::copyText);

    pasteBut_ = new QPushButton(this);
    pasteBut_->setText("Paste");
    pasteBut_->setToolTip("Вставить");
    connect(pasteBut_, &QPushButton::clicked, this, &Widget::pasteText);

    fontSizeCombo_ = new QComboBox(this);
    fontSizeCombo_->insertItems(0, {"8", "9", "10", "11", "12", "14", "16", "18"});
    fontSizeCombo_->setToolTip("Размер шрифта");
    connect(fontSizeCombo_, &QComboBox::currentIndexChanged, this, &Widget::changeSizeText);

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

Widget::~Widget()
{

}

void openFile()
{

}

void saveFile()
{

}

void changeSizeText(QString const& text)
{

}

void copyText()
{

}

void pasteText()
{

}
