﻿#ifndef DELETE_COURSE_H
#define DELETE_COURSE_H

#include <QDialog>

namespace Ui {
class delete_course;
}

class delete_course : public QDialog
{
    Q_OBJECT

public:
    explicit delete_course(QWidget *parent = nullptr);
    ~delete_course();

signals:
    void signal_ret();

private slots:
    void slot_ret();

private:
    Ui::delete_course *ui;
};

#endif // DELETE_COURSE_H
