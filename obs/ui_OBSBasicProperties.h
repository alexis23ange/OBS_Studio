/********************************************************************************
** Form generated from reading UI file 'OBSBasicProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICPROPERTIES_H
#define UI_OBSBASICPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "qt-display.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicProperties
{
public:
    QVBoxLayout *verticalLayout;
    OBSQTDisplay *preview;

    void setupUi(QDialog *OBSBasicProperties)
    {
        if (OBSBasicProperties->objectName().isEmpty())
            OBSBasicProperties->setObjectName(QStringLiteral("OBSBasicProperties"));
        OBSBasicProperties->resize(664, 562);
        OBSBasicProperties->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(OBSBasicProperties);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        preview = new OBSQTDisplay(OBSBasicProperties);
        preview->setObjectName(QStringLiteral("preview"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy);
        preview->setMinimumSize(QSize(20, 20));

        verticalLayout->addWidget(preview);


        retranslateUi(OBSBasicProperties);

        QMetaObject::connectSlotsByName(OBSBasicProperties);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicProperties)
    {
        OBSBasicProperties->setWindowTitle(QApplication::translate("OBSBasicProperties", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicProperties: public Ui_OBSBasicProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICPROPERTIES_H
