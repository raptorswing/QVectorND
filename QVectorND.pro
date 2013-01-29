TEMPLATE = subdirs

SUBDIRS += \
    QVectorND \
    Tests

Tests.depends += QVectorND
