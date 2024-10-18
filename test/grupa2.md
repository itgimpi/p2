# Група 2, 18.10.2024.

## $1^{\circ}$ Математичка индукција

### $1^{\circ}1^{\circ}$ Објасни својим речима математичку индукцију
### $1^{\circ}2^{\circ}$ Докажи да је збир првих $n$ непарних бројева једнак $n^2$
### $1^{\circ}3^{\circ}$ Докажи да је

$$
A = \begin{bmatrix}
  1 & 1 \\
  1 & 0
\end{bmatrix},
A^n = \begin{bmatrix}
  fib(n+1) & fib(n) \\
  fib(n) & fib(n-1)
\end{bmatrix}
$$

### $2^{\circ}$ Одреди временску $T(n)$, меморијску $M(n)$ зависност и $\mathcal{O}(n)$
$2^{\circ}1^{\circ}$
``` cpp title="p1.cpp" linenums="1"
int naj = a;
if ( b > naj ) naj = b;
```

$2^{\circ}2^{\circ}$
``` cpp title="p2.cpp" linenums="1"
for (int i = n; i >= 0; i--) {
    for (int j = i; j > 0; j--) {
        int p += i;
        x -= i;
}}

```

$2^{\circ}3^{\circ}$
``` cpp title="p3.cpp" linenums="1"
for (int i = n; i >= 1; i /= 2) {
    p += i;
    x -= i;
}
```


## $3^{\circ}$ Нотације
### $3^{\circ}1^{\circ}$ Објасни $\mathcal{O}$ нотацију
### $3^{\circ}2^{\circ}$ Докажи да је 2n+10 $\mathcal{O}(n)$
### $3^{\circ}3^{\circ}$ Нацртај заједнички график нотација: $\mathcal{O}(1)$, $\mathcal{O}(n)$, $\mathcal{O}(\log{}n)$, $\mathcal{O}(n^2)$, $\mathcal{O}(2^n)$

## $4^{\circ}$ Реши проблем помоћу елементарне рекурзије
### $4^{\circ}1^{\circ}$ Помножи два броја без оператора $*$
### $4^{\circ}2^{\circ}$ Испис бројева од $1$ до $n$
### $4^{\circ}3^{\circ}$ Алгоритам бинарне претраге низа

## $5^{\circ}$ Реши проблем помоћу репне рекурзије
### $5^{\circ}1^{\circ}$ Факторијел
### $5^{\circ}2^{\circ}$ Најмањи елемент низа
### $5^{\circ}3^{\circ}$ Други најмањи елемент низа
