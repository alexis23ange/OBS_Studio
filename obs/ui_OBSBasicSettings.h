/********************************************************************************
** Form generated from reading UI file 'OBSBasicSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICSETTINGS_H
#define UI_OBSBASICSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *settingsPages;
    QWidget *generalPage;
    QFormLayout *formLayout_2;
    QSpacerItem *verticalSpacer;
    QComboBox *language;
    QLabel *label;
    QWidget *streamPage;
    QVBoxLayout *verticalLayout_5;
    QWidget *streamContainer;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_6;
    QFormLayout *formLayout_8;
    QLabel *label_21;
    QComboBox *streamType;
    QFrame *line;
    QWidget *outputPage;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QFormLayout *formLayout_5;
    QLabel *label_16;
    QComboBox *outputMode;
    QFrame *line_2;
    QStackedWidget *outputModePages;
    QWidget *easyOutputsPage;
    QVBoxLayout *verticalLayout_3;
    QWidget *simpleOutputContainer;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QFormLayout *formLayout_6;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *simpleOutputPath;
    QPushButton *simpleOutputBrowse;
    QLabel *label_19;
    QSpinBox *simpleOutputVBitrate;
    QLabel *label_20;
    QComboBox *simpleOutputABitrate;
    QCheckBox *simpleOutReconnect;
    QSpinBox *simpleOutRetryDelay;
    QSpinBox *simpleOutMaxRetries;
    QLabel *label_17;
    QLabel *label_22;
    QCheckBox *simpleOutAdvanced;
    QLineEdit *simpleOutCustomX264;
    QLabel *label_23;
    QLabel *label_24;
    QComboBox *simpleOutPreset;
    QCheckBox *simpleOutUseCBR;
    QWidget *customOutputsPage;
    QWidget *audioPage;
    QFormLayout *formLayout;
    QLabel *label_14;
    QComboBox *sampleRate;
    QLabel *label_15;
    QComboBox *channelSetup;
    QLabel *label_2;
    QComboBox *desktopAudioDevice1;
    QLabel *label_3;
    QComboBox *desktopAudioDevice2;
    QLabel *label_4;
    QComboBox *auxAudioDevice1;
    QLabel *label_5;
    QComboBox *auxAudioDevice2;
    QLabel *label_6;
    QComboBox *auxAudioDevice3;
    QLabel *audioMsg;
    QWidget *videoPage;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QComboBox *renderer;
    QLabel *label_7;
    QComboBox *adapter;
    QLabel *label_8;
    QComboBox *baseResolution;
    QLabel *label_10;
    QComboBox *outputResolution;
    QComboBox *downscaleFilter;
    QLabel *label_11;
    QComboBox *fpsType;
    QStackedWidget *fpsTypes;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *fpsCommon;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *fpsInteger;
    QWidget *page_2;
    QFormLayout *formLayout_4;
    QSpinBox *fpsNumerator;
    QSpinBox *fpsDenominator;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *videoMsg;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicSettings)
    {
        if (OBSBasicSettings->objectName().isEmpty())
            OBSBasicSettings->setObjectName(QStringLiteral("OBSBasicSettings"));
        OBSBasicSettings->resize(770, 602);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSBasicSettings->sizePolicy().hasHeightForWidth());
        OBSBasicSettings->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(OBSBasicSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(OBSBasicSettings);
        QIcon icon;
        icon.addFile(QStringLiteral(":/settings/images/settings/system-settings-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/settings/images/settings/network.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/settings/images/settings/network-bluetooth.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/settings/images/settings/decibel_audio_player.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/settings/images/settings/video-display-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon4);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMaximumSize(QSize(135, 16777215));
        listWidget->setIconSize(QSize(48, 48));

        horizontalLayout->addWidget(listWidget, 0, Qt::AlignLeft);

        settingsPages = new QStackedWidget(OBSBasicSettings);
        settingsPages->setObjectName(QStringLiteral("settingsPages"));
        generalPage = new QWidget();
        generalPage->setObjectName(QStringLiteral("generalPage"));
        formLayout_2 = new QFormLayout(generalPage);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(0, QFormLayout::LabelRole, verticalSpacer);

        language = new QComboBox(generalPage);
        language->setObjectName(QStringLiteral("language"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, language);

        label = new QLabel(generalPage);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(170, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        settingsPages->addWidget(generalPage);
        streamPage = new QWidget();
        streamPage->setObjectName(QStringLiteral("streamPage"));
        verticalLayout_5 = new QVBoxLayout(streamPage);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        streamContainer = new QWidget(streamPage);
        streamContainer->setObjectName(QStringLiteral("streamContainer"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(streamContainer->sizePolicy().hasHeightForWidth());
        streamContainer->setSizePolicy(sizePolicy2);
        verticalLayout_6 = new QVBoxLayout(streamContainer);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(streamContainer);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy3);
        verticalLayout_7 = new QVBoxLayout(widget_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        formLayout_8 = new QFormLayout(widget_6);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_21 = new QLabel(widget_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(170, 0));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_21);

        streamType = new QComboBox(widget_6);
        streamType->setObjectName(QStringLiteral("streamType"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, streamType);


        verticalLayout_7->addWidget(widget_6);

        line = new QFrame(widget_5);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);


        verticalLayout_6->addWidget(widget_5, 0, Qt::AlignTop);


        verticalLayout_5->addWidget(streamContainer);

        settingsPages->addWidget(streamPage);
        outputPage = new QWidget();
        outputPage->setObjectName(QStringLiteral("outputPage"));
        verticalLayout_2 = new QVBoxLayout(outputPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(outputPage);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        formLayout_5 = new QFormLayout(widget);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(170, 0));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_16);

        outputMode = new QComboBox(widget);
        outputMode->setObjectName(QStringLiteral("outputMode"));
        outputMode->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(outputMode->sizePolicy().hasHeightForWidth());
        outputMode->setSizePolicy(sizePolicy5);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, outputMode);


        verticalLayout_2->addWidget(widget, 0, Qt::AlignTop);

        line_2 = new QFrame(outputPage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        outputModePages = new QStackedWidget(outputPage);
        outputModePages->setObjectName(QStringLiteral("outputModePages"));
        easyOutputsPage = new QWidget();
        easyOutputsPage->setObjectName(QStringLiteral("easyOutputsPage"));
        verticalLayout_3 = new QVBoxLayout(easyOutputsPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        simpleOutputContainer = new QWidget(easyOutputsPage);
        simpleOutputContainer->setObjectName(QStringLiteral("simpleOutputContainer"));
        verticalLayout_4 = new QVBoxLayout(simpleOutputContainer);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(simpleOutputContainer);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy6);
        formLayout_6 = new QFormLayout(widget_2);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_6->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(170, 0));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_18);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        simpleOutputPath = new QLineEdit(widget_2);
        simpleOutputPath->setObjectName(QStringLiteral("simpleOutputPath"));
        simpleOutputPath->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputPath);

        simpleOutputBrowse = new QPushButton(widget_2);
        simpleOutputBrowse->setObjectName(QStringLiteral("simpleOutputBrowse"));
        simpleOutputBrowse->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputBrowse);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        label_19 = new QLabel(widget_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_19);

        simpleOutputVBitrate = new QSpinBox(widget_2);
        simpleOutputVBitrate->setObjectName(QStringLiteral("simpleOutputVBitrate"));
        simpleOutputVBitrate->setMinimum(200);
        simpleOutputVBitrate->setMaximum(16000);
        simpleOutputVBitrate->setValue(2000);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, simpleOutputVBitrate);

        label_20 = new QLabel(widget_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_20);

        simpleOutputABitrate = new QComboBox(widget_2);
        simpleOutputABitrate->setObjectName(QStringLiteral("simpleOutputABitrate"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, simpleOutputABitrate);

        simpleOutReconnect = new QCheckBox(widget_2);
        simpleOutReconnect->setObjectName(QStringLiteral("simpleOutReconnect"));
        simpleOutReconnect->setChecked(true);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, simpleOutReconnect);

        simpleOutRetryDelay = new QSpinBox(widget_2);
        simpleOutRetryDelay->setObjectName(QStringLiteral("simpleOutRetryDelay"));
        simpleOutRetryDelay->setMaximum(30);

        formLayout_6->setWidget(4, QFormLayout::FieldRole, simpleOutRetryDelay);

        simpleOutMaxRetries = new QSpinBox(widget_2);
        simpleOutMaxRetries->setObjectName(QStringLiteral("simpleOutMaxRetries"));
        simpleOutMaxRetries->setMinimum(1);
        simpleOutMaxRetries->setMaximum(10000);

        formLayout_6->setWidget(5, QFormLayout::FieldRole, simpleOutMaxRetries);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_17);

        label_22 = new QLabel(widget_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, label_22);

        simpleOutAdvanced = new QCheckBox(widget_2);
        simpleOutAdvanced->setObjectName(QStringLiteral("simpleOutAdvanced"));
        simpleOutAdvanced->setChecked(true);

        formLayout_6->setWidget(6, QFormLayout::FieldRole, simpleOutAdvanced);

        simpleOutCustomX264 = new QLineEdit(widget_2);
        simpleOutCustomX264->setObjectName(QStringLiteral("simpleOutCustomX264"));

        formLayout_6->setWidget(9, QFormLayout::FieldRole, simpleOutCustomX264);

        label_23 = new QLabel(widget_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_6->setWidget(9, QFormLayout::LabelRole, label_23);

        label_24 = new QLabel(widget_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setEnabled(true);

        formLayout_6->setWidget(8, QFormLayout::LabelRole, label_24);

        simpleOutPreset = new QComboBox(widget_2);
        simpleOutPreset->insertItems(0, QStringList()
         << QStringLiteral("ultrafast")
         << QStringLiteral("superfast")
         << QStringLiteral("veryfast")
         << QStringLiteral("faster")
         << QStringLiteral("fast")
         << QStringLiteral("medium")
         << QStringLiteral("slow")
         << QStringLiteral("slower")
        );
        simpleOutPreset->setObjectName(QStringLiteral("simpleOutPreset"));

        formLayout_6->setWidget(8, QFormLayout::FieldRole, simpleOutPreset);

        simpleOutUseCBR = new QCheckBox(widget_2);
        simpleOutUseCBR->setObjectName(QStringLiteral("simpleOutUseCBR"));
        simpleOutUseCBR->setChecked(true);

        formLayout_6->setWidget(7, QFormLayout::FieldRole, simpleOutUseCBR);


        verticalLayout_4->addWidget(widget_2, 0, Qt::AlignTop);


        verticalLayout_3->addWidget(simpleOutputContainer, 0, Qt::AlignTop);

        outputModePages->addWidget(easyOutputsPage);
        customOutputsPage = new QWidget();
        customOutputsPage->setObjectName(QStringLiteral("customOutputsPage"));
        outputModePages->addWidget(customOutputsPage);

        verticalLayout_2->addWidget(outputModePages);

        settingsPages->addWidget(outputPage);
        audioPage = new QWidget();
        audioPage->setObjectName(QStringLiteral("audioPage"));
        formLayout = new QFormLayout(audioPage);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(audioPage);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_14);

        sampleRate = new QComboBox(audioPage);
        sampleRate->setObjectName(QStringLiteral("sampleRate"));
        sampleRate->setCurrentText(QStringLiteral("44.1khz"));

        formLayout->setWidget(0, QFormLayout::FieldRole, sampleRate);

        label_15 = new QLabel(audioPage);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_15);

        channelSetup = new QComboBox(audioPage);
        channelSetup->setObjectName(QStringLiteral("channelSetup"));

        formLayout->setWidget(1, QFormLayout::FieldRole, channelSetup);

        label_2 = new QLabel(audioPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(170, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        desktopAudioDevice1 = new QComboBox(audioPage);
        desktopAudioDevice1->setObjectName(QStringLiteral("desktopAudioDevice1"));
        desktopAudioDevice1->setEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, desktopAudioDevice1);

        label_3 = new QLabel(audioPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        desktopAudioDevice2 = new QComboBox(audioPage);
        desktopAudioDevice2->setObjectName(QStringLiteral("desktopAudioDevice2"));
        desktopAudioDevice2->setEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, desktopAudioDevice2);

        label_4 = new QLabel(audioPage);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        auxAudioDevice1 = new QComboBox(audioPage);
        auxAudioDevice1->setObjectName(QStringLiteral("auxAudioDevice1"));
        auxAudioDevice1->setEnabled(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, auxAudioDevice1);

        label_5 = new QLabel(audioPage);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        auxAudioDevice2 = new QComboBox(audioPage);
        auxAudioDevice2->setObjectName(QStringLiteral("auxAudioDevice2"));
        auxAudioDevice2->setEnabled(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, auxAudioDevice2);

        label_6 = new QLabel(audioPage);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        auxAudioDevice3 = new QComboBox(audioPage);
        auxAudioDevice3->setObjectName(QStringLiteral("auxAudioDevice3"));
        auxAudioDevice3->setEnabled(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, auxAudioDevice3);

        audioMsg = new QLabel(audioPage);
        audioMsg->setObjectName(QStringLiteral("audioMsg"));
        audioMsg->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));
        audioMsg->setText(QStringLiteral(""));
        audioMsg->setWordWrap(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, audioMsg);

        settingsPages->addWidget(audioPage);
        videoPage = new QWidget();
        videoPage->setObjectName(QStringLiteral("videoPage"));
        formLayout_3 = new QFormLayout(videoPage);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(videoPage);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        renderer = new QComboBox(videoPage);
        renderer->setObjectName(QStringLiteral("renderer"));
        renderer->setCurrentText(QStringLiteral(""));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, renderer);

        label_7 = new QLabel(videoPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(170, 0));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_7);

        adapter = new QComboBox(videoPage);
        adapter->setObjectName(QStringLiteral("adapter"));
        adapter->setEnabled(false);
        adapter->setCurrentText(QStringLiteral(""));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, adapter);

        label_8 = new QLabel(videoPage);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_8);

        baseResolution = new QComboBox(videoPage);
        baseResolution->setObjectName(QStringLiteral("baseResolution"));
        baseResolution->setEditable(true);
        baseResolution->setCurrentText(QStringLiteral(""));
        baseResolution->setDuplicatesEnabled(false);
        baseResolution->setFrame(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, baseResolution);

        label_10 = new QLabel(videoPage);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_10);

        outputResolution = new QComboBox(videoPage);
        outputResolution->setObjectName(QStringLiteral("outputResolution"));
        outputResolution->setEditable(true);
        outputResolution->setCurrentText(QStringLiteral(""));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, outputResolution);

        downscaleFilter = new QComboBox(videoPage);
        downscaleFilter->setObjectName(QStringLiteral("downscaleFilter"));
        downscaleFilter->setEnabled(false);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, downscaleFilter);

        label_11 = new QLabel(videoPage);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_11);

        fpsType = new QComboBox(videoPage);
        fpsType->setObjectName(QStringLiteral("fpsType"));
        sizePolicy5.setHeightForWidth(fpsType->sizePolicy().hasHeightForWidth());
        fpsType->setSizePolicy(sizePolicy5);
        fpsType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, fpsType);

        fpsTypes = new QStackedWidget(videoPage);
        fpsTypes->setObjectName(QStringLiteral("fpsTypes"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fpsCommon = new QComboBox(page);
        fpsCommon->insertItems(0, QStringList()
         << QStringLiteral("10")
         << QStringLiteral("20")
         << QStringLiteral("29.97")
         << QStringLiteral("30")
         << QStringLiteral("48")
         << QStringLiteral("59.94")
         << QStringLiteral("60")
        );
        fpsCommon->setObjectName(QStringLiteral("fpsCommon"));
        fpsCommon->setCurrentText(QStringLiteral("30"));

        horizontalLayout_2->addWidget(fpsCommon, 0, Qt::AlignTop);

        fpsTypes->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        fpsInteger = new QSpinBox(page_3);
        fpsInteger->setObjectName(QStringLiteral("fpsInteger"));
        fpsInteger->setMinimum(1);
        fpsInteger->setMaximum(120);
        fpsInteger->setValue(30);

        horizontalLayout_3->addWidget(fpsInteger, 0, Qt::AlignTop);

        fpsTypes->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayout_4 = new QFormLayout(page_2);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        fpsNumerator = new QSpinBox(page_2);
        fpsNumerator->setObjectName(QStringLiteral("fpsNumerator"));
        fpsNumerator->setMinimum(1);
        fpsNumerator->setMaximum(1000000);
        fpsNumerator->setValue(30);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, fpsNumerator);

        fpsDenominator = new QSpinBox(page_2);
        fpsDenominator->setObjectName(QStringLiteral("fpsDenominator"));
        fpsDenominator->setMinimum(1);
        fpsDenominator->setMaximum(1000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, fpsDenominator);

        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        fpsTypes->addWidget(page_2);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, fpsTypes);

        videoMsg = new QLabel(videoPage);
        videoMsg->setObjectName(QStringLiteral("videoMsg"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(videoMsg->sizePolicy().hasHeightForWidth());
        videoMsg->setSizePolicy(sizePolicy7);
        videoMsg->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));
        videoMsg->setText(QStringLiteral(""));
        videoMsg->setWordWrap(true);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, videoMsg);

        settingsPages->addWidget(videoPage);

        horizontalLayout->addWidget(settingsPages);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(OBSBasicSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(listWidget, buttonBox);
        QWidget::setTabOrder(buttonBox, language);

        retranslateUi(OBSBasicSettings);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), settingsPages, SLOT(setCurrentIndex(int)));
        QObject::connect(fpsType, SIGNAL(currentIndexChanged(int)), fpsTypes, SLOT(setCurrentIndex(int)));
        QObject::connect(outputMode, SIGNAL(currentIndexChanged(int)), outputModePages, SLOT(setCurrentIndex(int)));
        QObject::connect(simpleOutReconnect, SIGNAL(clicked(bool)), simpleOutRetryDelay, SLOT(setEnabled(bool)));
        QObject::connect(simpleOutReconnect, SIGNAL(clicked(bool)), simpleOutMaxRetries, SLOT(setEnabled(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), simpleOutPreset, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), label_24, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), simpleOutCustomX264, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), label_23, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), simpleOutUseCBR, SLOT(setVisible(bool)));

        settingsPages->setCurrentIndex(0);
        outputMode->setCurrentIndex(0);
        outputModePages->setCurrentIndex(0);
        simpleOutputABitrate->setCurrentIndex(4);
        sampleRate->setCurrentIndex(1);
        channelSetup->setCurrentIndex(0);
        fpsTypes->setCurrentIndex(2);
        fpsCommon->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(OBSBasicSettings);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicSettings)
    {
        OBSBasicSettings->setWindowTitle(QApplication::translate("OBSBasicSettings", "Settings", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Stream", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.Language", 0));
        label_21->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.StreamType", 0));
        label_16->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode", 0));
        outputMode->clear();
        outputMode->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Simple", 0)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Custom", 0)
        );
        label_18->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.SavePath", 0));
        simpleOutputBrowse->setText(QApplication::translate("OBSBasicSettings", "Browse", 0));
        label_19->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.VideoBitrate", 0));
        label_20->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", 0));
        simpleOutputABitrate->clear();
        simpleOutputABitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", 0)
         << QApplication::translate("OBSBasicSettings", "64", 0)
         << QApplication::translate("OBSBasicSettings", "96", 0)
         << QApplication::translate("OBSBasicSettings", "128", 0)
         << QApplication::translate("OBSBasicSettings", "160", 0)
         << QApplication::translate("OBSBasicSettings", "192", 0)
         << QApplication::translate("OBSBasicSettings", "256", 0)
         << QApplication::translate("OBSBasicSettings", "320", 0)
        );
        simpleOutReconnect->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Reconnect", 0));
        label_17->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.RetryDelay", 0));
        label_22->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.MaxRetries", 0));
        simpleOutAdvanced->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Advanced", 0));
        label_23->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomX264Settings", 0));
        label_24->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.X264Preset", 0));
        simpleOutUseCBR->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.UseCBR", 0));
        label_14->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.SampleRate", 0));
        sampleRate->clear();
        sampleRate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "22.05khz", 0)
         << QApplication::translate("OBSBasicSettings", "44.1khz", 0)
         << QApplication::translate("OBSBasicSettings", "48khz", 0)
        );
        label_15->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Channels", 0));
        channelSetup->clear();
        channelSetup->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Mono", 0)
         << QApplication::translate("OBSBasicSettings", "Stereo", 0)
        );
        channelSetup->setCurrentText(QApplication::translate("OBSBasicSettings", "Mono", 0));
        label_2->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice", 0));
        label_3->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice2", 0));
        label_4->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice", 0));
        label_5->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice2", 0));
        label_6->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice3", 0));
        label_9->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Renderer", 0));
        label_7->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Adapter", 0));
        label_8->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.BaseResolution", 0));
        label_10->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.ScaledResolution", 0));
        label_11->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.DownscaleFilter", 0));
        fpsType->clear();
        fpsType->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", 0)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSInteger", 0)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSFraction", 0)
        );
        fpsType->setCurrentText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", 0));
        label_12->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Numerator", 0));
        label_13->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Denominator", 0));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicSettings: public Ui_OBSBasicSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICSETTINGS_H
