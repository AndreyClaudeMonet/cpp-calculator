// mainwindow.h
#pragma once
#include <QMainWindow>
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum class Operation {
    NO_OPERATION,
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    POWER
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    void connectButtons();
    void appendNumber(const QString& number);
    void setOperation(Operation operation);
    void calculateResult();
    void saveToMemory();
    void recallFromMemory();
    void clearMemory();
    void clearCalculator();
    void updateDisplay();
    void updateFormulaDisplay();
    void toggleSign();

private:
    Ui::MainWindow* ui;
    Calculator calculator_;
    Operation current_operation_;
    QString input_number_;
    Number active_number_ = 0.0;
    Number memory_cell_ = 0.0;
    bool memory_saved_ = 0.0;
};