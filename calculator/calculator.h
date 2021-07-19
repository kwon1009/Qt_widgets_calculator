#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QVector>

enum errors { div_zero, others };

class Calculator {
    enum m_opers {
        add='+', sub='-', mul='*', div='/'
    };

    QVector<double> nums;
    QVector<QChar> opers;
    double m_result;

public:
    Calculator(int n);

    double calculate(QString calLine);
    void setValues(QString calLine);
    double getResult();

    QString getErrorMessage(errors err);
};

#endif // CALCULATOR_H
