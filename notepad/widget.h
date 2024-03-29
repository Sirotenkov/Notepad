#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>
#include <QPushButton>
#include <QTextEdit>
#include <QComboBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void openFile();
    void saveFile();
    void changeSizeText(QString const& text);
    void copyText();
    void pasteText();

private:
    QFile file_;
    QPushButton* openBut_;
    QPushButton* saveBut_;
    QPushButton* copyBut_;
    QPushButton* pasteBut_;
    QComboBox* fontSizeCombo_;
    QTextEdit* textEdit_;

};
#endif // WIDGET_H
