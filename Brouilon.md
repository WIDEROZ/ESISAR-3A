$$\mathbb{P}(X = x) = r^{x-1}(1-r)$$
$$\mathbb{P}(Y = y) = b^{y-1}(1-b)$$


$$\mathbb{P}(X < Y) = \mathbb{P}((x < Y) \cap (X < y)) = \mathbb{P}(Y > x) \mathbb{P}(X < y)$$
$$= \sum_{k = 1}^{y}r^{k-1}(1-r)\left(1- \sum_{i = 1}^{x}b^{i-1}(1-b) \right)$$
$$= (1-r) \times \frac{1-r^{y-1}}{1-r} (1- (1-b) \times \frac{1-b^{x}}{1-b} )$$
$$= (1-r^{y-1})b^{x}$$