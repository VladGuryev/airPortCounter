TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    airportcounter.h \
    tests.h \
    test_runner.h \
    profile.h

# remove possible other optimization flags
QMAKE_CXXFLAGS -= -O
QMAKE_CXXFLAGS -= -O1
QMAKE_CXXFLAGS -= -O2

# add the desired -O3 if not present
QMAKE_CXXFLAGS += -O3
