QT += core gui #we are specifying the libraries to be used in our project

greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets #If version of qt is greater than 4, use widgets library

SOURCES += \
    main.cpp
