# FeatureExtraction
https://github.com/pkok/Robolab + https://github.com/thaleshsp2/FeatureDetector

## Legenda
o algorítmo preenche um vetor com `field_points`, que representam as landmarks.

```cpp
struct field_point{
   int type;
   Point position;
   double orientation[2];
   double confidence;
   };
```

* **type**:
   * 0: L
   * 1: T
   * 2: ???
   * 3: X
* **position.x, position.y**: as posições em x e y na imagem respectivamente
* **confidence**: o grau de confiança, o quanto o algorítmo acredita que seja uma feature.
* **orientation**: orientação/rotação em x,y da feature


