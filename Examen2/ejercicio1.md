## Constantes
$$mx \leftarrow 1000$$
## Entradas
$$k,a,b\in \mathbb{Z} \qquad k > 0,\quad a<b$$
## Salidas
$$\begin{align*}
    &x \in Arreglo[0 .. n] \in \mathbb{Z} \qquad n \geq (k-1) \\
    &contador_i \in \mathbb{Z} \qquad 0 \leq i \leq n
\end{align*}$$
## Proceso
$$\begin{align*}
    &suma = \sum_{i = 0}^{n-1} x_i\\
    &p = \frac{suma}{n}\\
    &\begin{cases}
        min = x_i & \text{si } x_i < min\\
        max = x_i&\text{si } x_i > max
    \end{cases}\\
    &med = min + \frac{max-min}{2}\\

    &\left. \begin{matrix}
        contador_0 = 0\\
        contador_i = contador_{i-1} + 1 &\text{si } x_i = x_0
    \end{matrix} \right\} \begin{matrix}
        0 \leq i \leq n-1 \\
        0 \leq j \leq n-1
    \end{matrix}
\end{align*}$$
## Algoritmo
```
Repita
    Obtener(k)
    Obtener(a)
    Obtener(b)
Hasta (k > 0 ∧ a < b)

i ← 0
suma ← 0
min ← b
max ← a

Repita
    x[i] ← a + rand(b-a+1)
    suma ← suma + x[i]
    p ← suma / (i+1)
    Si (x[i] < min) Entonces
        min ← x[i]
    Si (x[i] > max) Entonces
        max ← x[i]
    med = min + ((max - min)/2)
    i ← i + 1
Hasta (i >= k ∧ p > med)

n ← i
Para i← 0 .. n-1
    contador ← 0
    Para j← 0 .. n-1
        Si (x[i] = x[j]) Entonces
            contador ← contador + 1
        
    Devolver(x[i], contador)

```
## Variables
$$\begin{align*}
    &i, j, suma, min, max \in \mathbb{Z}\\
    &p,med \in \mathbb{R}
\end{align*}$$