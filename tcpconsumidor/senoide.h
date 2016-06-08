    #ifndef SENOIDE_H
#define SENOIDE_H

#include <QWidget>

class Senoide : public QWidget
{
  Q_OBJECT
public:
  explicit Senoide(QWidget *parent = 0);
   /**
   * @brief Define os valores que serão plotados no eixo Y do gráfico.
   * @param _values Vetor de inteiros que será plotado no eixo Y.
   */
  void setValues(QVector<int> _values);

protected:
  void paintEvent(QPaintEvent *e);

private:
  float Amp, Freq, Angle, varAngle;
  QVector<int> values;
  /**
   * @brief Returns the greatest value in the 'values' array.
   * @return
   */
  int getMaxValue();
};

#endif // SENOIDE_H
