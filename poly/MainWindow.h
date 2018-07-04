#ifndef OVERLAY_MAINWINDOW_H
#define OVERLAY_MAINWINDOW_H

#include <memory>

#include <QMainWindow>

namespace Ui {

class MainWindow;

}  // namespace Ui


class MainWindow : public QMainWindow {
Q_OBJECT
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  /// Open a file
  void openFile();

  /// Close the file
  void closeFile();

private:
  /// Setup the menu bar actions
  void createActions();

  /// Setup the menu bar
  void createMenus();

  QMenu *file_menu;
  QAction *open_action;
  QAction *close_action;

  std::unique_ptr<Ui::MainWindow> ui;
};

#endif //OVERLAY_MAINWINDOW_H
