#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void on_actionNew_Character_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
    void on_actionExit_triggered();
    void on_actionAbout_triggered();
    void onactionAbout_qt_triggered();

  //  void on_press_addCore_triggered();
private slots:
    void on_AddCoresButton_clicked();

    void on_AddSpellButton_clicked();

    //void on_addCoresButtonTest_clicked();

private:
    Ui::MainWindow *ui;
    void createActions();
    QString currentFile;
    QDialog *core; //= new QDialog(0,0);
    // QMouseEvent *click = new QMouseEvent(QEvent::MouseButtonPress)

};

#endif // MAINWINDOW_H
