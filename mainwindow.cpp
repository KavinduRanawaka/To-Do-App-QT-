// #include "mainwindow.h"
// #include "ui_mainwindow.h"

// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent)
//     , ui(new Ui::MainWindow)
// {
//     ui->setupUi(this);
// }

// MainWindow::~MainWindow()
// {
//     delete ui;
// }

// void MainWindow::on_AddButton_clicked()
// {
//     QString task = ui->txtTask->text().trimmed();
//     if (!task.isEmpty()) {
//         ui->txtList->addItem(task);
//         ui->txtTask->clear();
//         ui->txtTask->setFocus();
//     }
// }


// void MainWindow::on_RemoveButton_clicked()
// {
//     int count = ui->txtList->count();
//     if (count > 0) {
//         delete ui->txtList->takeItem(count - 1);
//     }
// }


// void MainWindow::on_RemoveAll_clicked()
// {
//     ui->txtList->clear();
// }


// void MainWindow::on_txtList_clicked(const QModelIndex &index)
// {

// }


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Load tasks from file
    loadTasks();

    // Allow editing on double-click
    ui->txtList->setEditTriggers(QAbstractItemView::DoubleClicked);

    // Save when an item is edited
    connect(ui->txtList, &QListWidget::itemChanged, this, &MainWindow::on_txtList_itemChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddButton_clicked()
{
    QString task = ui->txtTask->text().trimmed();
    if (!task.isEmpty()) {
        QListWidgetItem *item = new QListWidgetItem(task);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
        ui->txtList->addItem(item);
        ui->txtTask->setFocus();
        ui->txtTask->clear();
        saveTasks();
    }
}

void MainWindow::on_RemoveButton_clicked()
{
    int count = ui->txtList->count();
    if (count > 0) {
        delete ui->txtList->takeItem(count - 1);
        saveTasks();
    }
}

void MainWindow::on_RemoveAll_clicked()
{
    ui->txtList->clear();
    saveTasks();
}

void MainWindow::on_txtList_clicked(const QModelIndex &index)
{
    // Optional - do nothing for now
}

void MainWindow::on_txtList_itemChanged(QListWidgetItem *item)
{
    Q_UNUSED(item);
    saveTasks();
}

void MainWindow::loadTasks()
{
    QFile file("tasks.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine().trimmed();
            if (!line.isEmpty()) {
                QListWidgetItem *item = new QListWidgetItem(line);
                item->setFlags(item->flags() | Qt::ItemIsEditable);
                ui->txtList->addItem(item);
            }
        }
        file.close();
    }
}

void MainWindow::saveTasks()
{
    QFile file("tasks.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (int i = 0; i < ui->txtList->count(); ++i) {
            out << ui->txtList->item(i)->text() << "\n";
        }
        file.close();
    }
}

