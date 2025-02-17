#ifndef QMLWINDOW_H
#define QMLWINDOW_H

#include "basewindow.h"

#include <QObject>
#include <QQuickWidget>
#include <QQuickView>

class QMLWindow : public BaseWindow
{
protected:
    QString fileName;

    QQuickView *view;
public:
    /*!
     * \brief onOpen a listener for open event
     * \param qmlFilePath a path to a qml file
     */
    void onOpen(const char * qmlFilePath) override;

    void onClose() override;

    void setFileName(QString);
};

#endif // QMLWINDOW_H
