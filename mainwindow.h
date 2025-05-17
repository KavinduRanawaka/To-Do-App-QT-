// #ifndef MAINWINDOW_H
// #define MAINWINDOW_H

// #include <QMainWindow>

// QT_BEGIN_NAMESPACE
// namespace Ui {
// class MainWindow;
// }
// QT_END_NAMESPACE

// class MainWindow : public QMainWindow
// {
//     Q_OBJECT

// public:
//     MainWindow(QWidget *parent = nullptr);
//     ~MainWindow();

// private slots:
//     void on_AddButton_clicked();

//     void on_RemoveButton_clicked();

//     void on_RemoveAll_clicked();

//     void on_txtList_clicked(const QModelIndex &index);

// private:
//     Ui::MainWindow *ui;
// };
// #endif // MAINWINDOW_H


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddButton_clicked();
    void on_RemoveButton_clicked();
    void on_RemoveAll_clicked();
    void on_txtList_clicked(const QModelIndex &index);
    void on_txtList_itemChanged(QListWidgetItem *item); // NEW SLOT

private:
    Ui::MainWindow *ui;

    void loadTasks();  // NEW
    void saveTasks();  // NEW
};

#endif // MAINWINDOW_H

