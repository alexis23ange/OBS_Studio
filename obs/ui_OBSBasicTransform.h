/********************************************************************************
** Form generated from reading UI file 'OBSBasicTransform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICTRANSFORM_H
#define UI_OBSBASICTRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicTransform
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *positionX;
    QDoubleSpinBox *positionY;
    QLabel *label_2;
    QDoubleSpinBox *rotation;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *sizeX;
    QDoubleSpinBox *sizeY;
    QLabel *label_4;
    QComboBox *align;
    QLabel *label_5;
    QComboBox *boundsType;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *boundsWidth;
    QDoubleSpinBox *boundsHeight;
    QComboBox *boundsAlign;

    void setupUi(QDialog *OBSBasicTransform)
    {
        if (OBSBasicTransform->objectName().isEmpty())
            OBSBasicTransform->setObjectName(QStringLiteral("OBSBasicTransform"));
        OBSBasicTransform->setEnabled(false);
        OBSBasicTransform->resize(564, 241);
        verticalLayout = new QVBoxLayout(OBSBasicTransform);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(OBSBasicTransform);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(170, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        widget = new QWidget(OBSBasicTransform);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        positionX = new QDoubleSpinBox(widget);
        positionX->setObjectName(QStringLiteral("positionX"));
        positionX->setMinimumSize(QSize(100, 0));
        positionX->setDecimals(4);
        positionX->setMinimum(-90001);
        positionX->setMaximum(90001);

        horizontalLayout->addWidget(positionX);

        positionY = new QDoubleSpinBox(widget);
        positionY->setObjectName(QStringLiteral("positionY"));
        positionY->setMinimumSize(QSize(100, 0));
        positionY->setDecimals(4);
        positionY->setMinimum(-90001);
        positionY->setMaximum(90001);

        horizontalLayout->addWidget(positionY);


        formLayout->setWidget(0, QFormLayout::FieldRole, widget);

        label_2 = new QLabel(OBSBasicTransform);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        rotation = new QDoubleSpinBox(OBSBasicTransform);
        rotation->setObjectName(QStringLiteral("rotation"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rotation->sizePolicy().hasHeightForWidth());
        rotation->setSizePolicy(sizePolicy2);
        rotation->setMinimumSize(QSize(100, 0));
        rotation->setMinimum(-360);
        rotation->setMaximum(360);
        rotation->setSingleStep(0.1);

        formLayout->setWidget(1, QFormLayout::FieldRole, rotation);

        label_3 = new QLabel(OBSBasicTransform);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        widget_2 = new QWidget(OBSBasicTransform);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sizeX = new QDoubleSpinBox(widget_2);
        sizeX->setObjectName(QStringLiteral("sizeX"));
        sizeX->setMinimumSize(QSize(100, 0));
        sizeX->setDecimals(4);
        sizeX->setMinimum(-90001);
        sizeX->setMaximum(90001);
        sizeX->setSingleStep(1);

        horizontalLayout_2->addWidget(sizeX);

        sizeY = new QDoubleSpinBox(widget_2);
        sizeY->setObjectName(QStringLiteral("sizeY"));
        sizeY->setMinimumSize(QSize(100, 0));
        sizeY->setDecimals(4);
        sizeY->setMinimum(-90001);
        sizeY->setMaximum(90001);
        sizeY->setSingleStep(1);

        horizontalLayout_2->addWidget(sizeY);


        formLayout->setWidget(2, QFormLayout::FieldRole, widget_2);

        label_4 = new QLabel(OBSBasicTransform);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        align = new QComboBox(OBSBasicTransform);
        align->setObjectName(QStringLiteral("align"));

        formLayout->setWidget(3, QFormLayout::FieldRole, align);

        label_5 = new QLabel(OBSBasicTransform);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        boundsType = new QComboBox(OBSBasicTransform);
        boundsType->setObjectName(QStringLiteral("boundsType"));

        formLayout->setWidget(5, QFormLayout::FieldRole, boundsType);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        label_6 = new QLabel(OBSBasicTransform);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(OBSBasicTransform);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        widget_3 = new QWidget(OBSBasicTransform);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        boundsWidth = new QDoubleSpinBox(widget_3);
        boundsWidth->setObjectName(QStringLiteral("boundsWidth"));
        boundsWidth->setEnabled(false);
        boundsWidth->setMinimumSize(QSize(100, 0));
        boundsWidth->setDecimals(4);
        boundsWidth->setMinimum(1);
        boundsWidth->setMaximum(90001);

        horizontalLayout_3->addWidget(boundsWidth);

        boundsHeight = new QDoubleSpinBox(widget_3);
        boundsHeight->setObjectName(QStringLiteral("boundsHeight"));
        boundsHeight->setEnabled(false);
        boundsHeight->setMinimumSize(QSize(100, 0));
        boundsHeight->setDecimals(4);
        boundsHeight->setMinimum(1);
        boundsHeight->setMaximum(90001);

        horizontalLayout_3->addWidget(boundsHeight);


        formLayout->setWidget(7, QFormLayout::FieldRole, widget_3);

        boundsAlign = new QComboBox(OBSBasicTransform);
        boundsAlign->setObjectName(QStringLiteral("boundsAlign"));
        boundsAlign->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, boundsAlign);


        verticalLayout->addLayout(formLayout);


        retranslateUi(OBSBasicTransform);

        QMetaObject::connectSlotsByName(OBSBasicTransform);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicTransform)
    {
        OBSBasicTransform->setWindowTitle(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow", 0));
        label->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Position", 0));
        label_2->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Rotation", 0));
        label_3->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Size", 0));
        label_4->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment", 0));
        align->clear();
        align->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", 0)
        );
        align->setCurrentText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", 0));
        label_5->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType", 0));
        boundsType->clear();
        boundsType->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.None", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.Stretch", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleInner", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleOuter", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToWidth", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToHeight", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.MaxOnly", 0)
        );
        label_6->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsAlignment", 0));
        label_7->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Bounds", 0));
        boundsAlign->clear();
        boundsAlign->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", 0)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", 0)
        );
        boundsAlign->setCurrentText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", 0));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicTransform: public Ui_OBSBasicTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICTRANSFORM_H
