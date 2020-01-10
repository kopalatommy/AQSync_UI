#ifndef NUMBERPADFORM_H
#define NUMBERPADFORM_H

#include <QWidget>
#include <QDebug>
#include <QGraphicsView>
#include <QKeyEvent>

namespace Ui {
class NumberPadForm;
}

class NumberPadForm : public QWidget
{
    Q_OBJECT

public:
    static NumberPadForm * GetInstance();

    //Used to keep track of what value type is being edited
    enum Types{
        integer,
        longV,
        floatV,
        doubleV,
        UChar,
        IPAddress
    };
    void SetInitialValues(Types t, double _min, double _max, QWidget * parentWindow);

private slots:
    //Removes the last character added
    void on_back_clicked();

    //Clears all characters
    void on_clear_clicked();

    //Add a zero to the array
    void on_zero_clicked();

    //Add a one to the array
    void on_one_clicked();

    //Add a two to the array
    void on_two_clicked();

    //Add a three to the array
    void on_three_clicked();

    //Add a four to the array
    void on_four_clicked();

    //Add a five to the array
    void on_five_clicked();

    //Add a six to the array
    void on_six_clicked();

    //Add a seven to the array
    void on_seven_clicked();

    //Add a eight to the array
    void on_eight_clicked();

    //Add a nine to the array
    void on_nine_clicked();

    //Add a decimal to the array if a float value
    void on_dot_clicked();

    //Creates the value based on the array and
    //applies it to the values being changed
    void on_save_clicked();

    //Closes the form without saving the value
    void on_cancel_clicked();

    void on_plus_clicked();

    void keyPressEvent(QKeyEvent *event);

signals:
    void NewInt(int);
    void NewLong(long);
    void NewFloat(float);
    void NewDouble(double);
    void NewIPAddress(QString);
    void NewUnsignedChar(unsigned char);

private:
    ~NumberPadForm();
    Ui::NumberPadForm *ui;
    NumberPadForm(QWidget *parent = nullptr);
    static NumberPadForm * instance;

    char arr[20] = {0, };
    int length = 0;

    double min = 0;
    double max = 0;

    Types currentType;

    QWidget * parentWindow = nullptr;

    bool hasDecimal = false;
    bool isNegative = false;

    int numDecimals = 0;
    int charIndex = 0;

    void SetInitial();

    void ShiftUp();
    void ShiftDown();

    void OnClose();
    void BackFillAddress();
};

#endif // NUMBERPADFORM_H
