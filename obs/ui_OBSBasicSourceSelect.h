/********************************************************************************
** Form generated from reading UI file 'OBSBasicSourceSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICSOURCESELECT_H
#define UI_OBSBASICSOURCESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicSourceSelect
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QLineEdit *sourceName;
    QRadioButton *selectExisting;
    QListWidget *sourceList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicSourceSelect)
    {
        if (OBSBasicSourceSelect->objectName().isEmpty())
            OBSBasicSourceSelect->setObjectName(QStringLiteral("OBSBasicSourceSelect"));
        OBSBasicSourceSelect->setWindowModality(Qt::WindowModal);
        OBSBasicSourceSelect->resize(352, 314);
        verticalLayout = new QVBoxLayout(OBSBasicSourceSelect);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton = new QRadioButton(OBSBasicSourceSelect);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        verticalLayout_2->addWidget(radioButton);

        sourceName = new QLineEdit(OBSBasicSourceSelect);
        sourceName->setObjectName(QStringLiteral("sourceName"));

        verticalLayout_2->addWidget(sourceName);

        selectExisting = new QRadioButton(OBSBasicSourceSelect);
        selectExisting->setObjectName(QStringLiteral("selectExisting"));

        verticalLayout_2->addWidget(selectExisting);

        sourceList = new QListWidget(OBSBasicSourceSelect);
        sourceList->setObjectName(QStringLiteral("sourceList"));
        sourceList->setEnabled(false);
        sourceList->setSortingEnabled(true);

        verticalLayout_2->addWidget(sourceList);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(OBSBasicSourceSelect);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OBSBasicSourceSelect);
        QObject::connect(radioButton, SIGNAL(toggled(bool)), sourceName, SLOT(setEnabled(bool)));
        QObject::connect(selectExisting, SIGNAL(toggled(bool)), sourceList, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OBSBasicSourceSelect);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicSourceSelect)
    {
        OBSBasicSourceSelect->setWindowTitle(QApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect", 0));
        radioButton->setText(QApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.CreateNew", 0));
        selectExisting->setText(QApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.AddExisting", 0));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicSourceSelect: public Ui_OBSBasicSourceSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICSOURCESELECT_H
