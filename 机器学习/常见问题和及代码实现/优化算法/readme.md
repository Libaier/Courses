###[梯度下降VS牛顿法](https://www.zhihu.com/question/19723347/answer/14636244)
牛顿法是二阶收敛，梯度下降是一阶收敛，所以牛顿法就更快。如果更通俗地说的话，比如你想找一条最短的路径走到一个盆地的最底部，梯度下降法每次只从你当前所处位置选一个坡度最大的方向走一步，牛顿法在选择方向时，不仅会考虑坡度是否够大，还会考虑你走了一步之后，坡度是否会变得更大。所以，可以说牛顿法比梯度下降法看得更远一点，能更快地走到最底部。

根据wiki上的解释，从几何上说，牛顿法就是用一个二次曲面去拟合你当前所处位置的局部曲面，而梯度下降法是用一个平面去拟合当前的局部曲面，通常情况下，二次曲面的拟合会比平面更好，所以牛顿法选择的下降路径会更符合真实的最优下降路径。

![](http://i.imgur.com/aIZhDd3.png)

红色的牛顿法的迭代路径，绿色的是梯度下降法的迭代路径

###拟牛顿法

牛顿法要求二阶导数，涉及到海森矩阵求逆，具有较大开销，若以较低代价寻找海森矩阵的近似逆矩阵，可显著降低计算开销，这就是拟牛顿法。


###随机梯度下降

随机梯度下降（Stochastic Gradient Descent），每一步随机选择一个样本，计算相应的梯度，并完成w的更新。

