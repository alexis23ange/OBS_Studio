/********************************************************************************
** Form generated from reading UI file 'OBSLicenseAgreement.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSLICENSEAGREEMENT_H
#define UI_OBSLICENSEAGREEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSLicenseAgreement
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *agreement;
    QPlainTextEdit *license;
    QLabel *label;
    QFrame *line;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *agree;
    QPushButton *decline;

    void setupUi(QDialog *OBSLicenseAgreement)
    {
        if (OBSLicenseAgreement->objectName().isEmpty())
            OBSLicenseAgreement->setObjectName(QStringLiteral("OBSLicenseAgreement"));
        OBSLicenseAgreement->resize(457, 430);
        OBSLicenseAgreement->setMinimumSize(QSize(200, 300));
        verticalLayout = new QVBoxLayout(OBSLicenseAgreement);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        agreement = new QLabel(OBSLicenseAgreement);
        agreement->setObjectName(QStringLiteral("agreement"));
        agreement->setTextFormat(Qt::RichText);
        agreement->setWordWrap(true);
        agreement->setOpenExternalLinks(true);
        agreement->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(agreement);

        license = new QPlainTextEdit(OBSLicenseAgreement);
        license->setObjectName(QStringLiteral("license"));
        license->setReadOnly(true);

        verticalLayout->addWidget(license);

        label = new QLabel(OBSLicenseAgreement);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        line = new QFrame(OBSLicenseAgreement);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(OBSLicenseAgreement);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        agree = new QPushButton(widget);
        agree->setObjectName(QStringLiteral("agree"));

        horizontalLayout->addWidget(agree);

        decline = new QPushButton(widget);
        decline->setObjectName(QStringLiteral("decline"));

        horizontalLayout->addWidget(decline);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(OBSLicenseAgreement);
        QObject::connect(agree, SIGNAL(clicked()), OBSLicenseAgreement, SLOT(accept()));
        QObject::connect(decline, SIGNAL(clicked()), OBSLicenseAgreement, SLOT(reject()));

        QMetaObject::connectSlotsByName(OBSLicenseAgreement);
    } // setupUi

    void retranslateUi(QDialog *OBSLicenseAgreement)
    {
        OBSLicenseAgreement->setWindowTitle(QApplication::translate("OBSLicenseAgreement", "LicenseAgreement", 0));
        agreement->setText(QApplication::translate("OBSLicenseAgreement", "LicenseAgreement.PleaseReview", 0));
        license->setDocumentTitle(QString());
        license->setPlainText(QString());
        label->setText(QApplication::translate("OBSLicenseAgreement", "LicenseAgreement.ClickIAgreeToContinue", 0));
        agree->setText(QApplication::translate("OBSLicenseAgreement", "LicenseAgreement.IAgree", 0));
        decline->setText(QApplication::translate("OBSLicenseAgreement", "LicenseAgreement.Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class OBSLicenseAgreement: public Ui_OBSLicenseAgreement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSLICENSEAGREEMENT_H
