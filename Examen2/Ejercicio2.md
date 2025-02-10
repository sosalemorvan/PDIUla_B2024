## Constante
max ← 1000
## Entradas
$$k \in \mathbb{Z} \qquad k > 0$$
## Salidas
$$primos_i \in\mathbb{Z} \qquad [0,k-1]$$
## Proceso
$$
\begin{align*}
    &p_0 = 3\\
    &p_1 = 0\\
    &p_2 = 2\\
    &primos_0 = 2\\
\end{align*} \\
\left.
    \begin{matrix}
        p_j = p_{j-2} + p_{j-3}\\ 
        \begin{cases}
        primos_i = j & \text{si } (p_j\%j = 0) 
        \end{cases}
    \end{matrix}
\right\} \quad 2 < j < max, 1 < i < k
$$
## Algoritmo
```
p[0] ← 3
p[1] ← 0
p[2] ← 2

Repita
    Obtener(k)
Hasta (k > 0)

primos[0] ← 2;
i ← 0
j ← 2
Si (k = 1) Entonces
    Devolver(primos[0])
Sino
    Repita
        j ← j + 1;
        p[j] ← p[j-2] + p[j-3]
        Si (p[j]%j = 0) Entonces
            i ← i + 1;
            primos[i] ← j        
    Hasta (j>max ∨ i >= k)
    Para i ← 0 .. k-1
        Devolver(primos[i])
```
## Varables
$$i,j \in \mathbb{Z}$$