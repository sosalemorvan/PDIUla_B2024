## Constantes
$$max \larr 1000$$
## Entradas
$$n \in \mathbb{Z} \\ x \in Arreglo[0 .. n-1] \in \mathbb{R}$$
## Salidas
$$p,std \in \mathbb{R} \\ omin \in Arreglo[0..j-1] \in R \\ omax \in Arreglo[0..k-1]\in\mathbb{R}$$
## Proceso
$$  \begin{align*}
    &suma = \sum_{i=0}^{n-1}x_i\\
    &p = \frac{suma}{n}\\
    &temp =  x_i - p\\
    &aux = \sum_{i = 0}^{n-1} temp^2\\
    &std = \sqrt{\frac{aux}{n-1}}\\
    &\left.\begin{matrix}
    \begin{cases}
    omin_j = x_i & \text{ if } \left | x_i-p \right | < abs \\
    omax_k = x_i & \text{ if otro caso} 
    \end{cases} \\
    \end{matrix}\right\} 0 < i < (n-1)
    \end{align*}  $$
## Algoritmo
```
Repita
    Obtener(n)
Hasta (n > 0)

suma ← 0

Para i ← 0 .. n-1
    Obtener(x[i])
    suma ← suma + x[i]
p ← suma/n
aux ← 0

Para i ← 0 .. n-1
    temp ← x[i] - p
    aux ← aux + (temp*temp)

std ← raiz(aux/(n-1))
j ← 0
k ← 0

Para i ← 0 .. n-1
    Si (abs(p-x[i]) < std) Entonces
        omin[j] ← x[i]
        j ← j + 1
    Sino
        omax[k] ← x[i]
        k ← k + 1

Devolver(p, std)
Para i ← 0 .. j-1
    Devolver(omin[i])
Para i← 0 .. k-1
    Devolver(omax[i])
```

## Variables
$$suma,temp,aux \in \mathbb{R} \\ i,j,k \in \mathbb{Z}$$
