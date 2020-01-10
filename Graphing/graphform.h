#ifndef GRAPHFORM_H
#define GRAPHFORM_H

#include <QWidget>
#include <QPen>
#include <QDebug>

#include "qcustomplot.h"
#include "aqsyncdata.h"

namespace Ui {
class GraphForm;
}

class GraphForm : public QWidget
{
    Q_OBJECT

public:
    explicit GraphForm(QWidget *parent = nullptr);
    ~GraphForm();

public slots:
    //Redraw plot with most recent data
    //void RedrawPlot();

    //Drag functions
    //void MousePress();
    //Mouse wheel functions(zoom in/out)
    //void MouseWheel();
    //void ZoomIn();
    //void ZoomOut();

signals:
    //Trigger update graph thread to update graph
    void UpdateGraph();

private slots:
    //Close page
    //void on_home_clicked();

    //Display the gassess form, allows users to edit color of specific gas plots
    //void on_Gasses_clicked();

    //Display the graph settings page, allows users to manually set min and max
    //void on_Settings_clicked();

    //void on_zoomIn_clicked();
    //void on_zoomOut_clicked();

    //Hides the bottom buttons
    //void on_Down_clicked();

    //Shows the bottom buttons
    //void on_Up_clicked();

    //Closes the legend
    //void on_Right_clicked();

    //Shows the legend
    //void on_Left_clicked();

private:
    Ui::GraphForm *ui;

    //Only update the graph when the user is viewing it
    bool displaying = false;

    //Reference the graph
    QCustomPlot * plot = nullptr;

    //Graph settings, pointer so they can be shared with graph settings form
    bool * autoXMax = new bool(true);
    bool * autoXMin = new bool(true);
    bool * autoYMax = new bool(true);
    bool * autoYmin = new bool(true);
    double * userMaxX = new double(10);
    double * maxX = new double(10);
    double * userMinX = new double(0);
    double * minX = new double(0);
    double * userMaxY = new double(10);
    double * maxY = new double(10);
    double * userMinY = new double(-10);
    double * minY = new double(-10);

    //Bools to show if bottom and legend are open or closed
    bool showingLegend = true;
    bool showingBottom = true;



    //Fixes axis scaled
    //void FixScale();

    //Initializer functions
    //void SetUpGraphThread();
    //void SetUpGraph();
    //void SetUpHelperForms();

    //Add plots for every gas
    //void AddPlots();

    //QColor StringToColor(QString str);


    //Handle functions called when entering form
    //void showEvent(QShowEvent * event);
    //Handle functions called when leaving form
    //void closeEvent(QCloseEvent * event);
};

#endif // GRAPHFORM_H
