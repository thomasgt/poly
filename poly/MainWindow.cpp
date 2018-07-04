#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(std::make_unique<Ui::MainWindow>()) {
  ui->setupUi(this);
  createActions();
  createMenus();
}

MainWindow::~MainWindow() = default;

void MainWindow::openFile() {
  auto file_name = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
}

void MainWindow::closeFile() {

}

void MainWindow::createActions() {
  open_action = new QAction(tr("&Open"), this);
  open_action->setShortcuts(QKeySequence::Open);
  open_action->setStatusTip(tr("Open a file"));
  connect(open_action, &QAction::triggered, this, &MainWindow::openFile);

  close_action = new QAction(tr("&Close"), this);
  close_action->setShortcuts(QKeySequence::Open);
  close_action->setStatusTip(tr("Close the file"));
  connect(close_action, &QAction::triggered, this, &MainWindow::closeFile);
}

void MainWindow::createMenus() {
  file_menu = menuBar()->addMenu(tr("&File"));
  file_menu->addAction(open_action);
  file_menu->addAction(close_action);
}
