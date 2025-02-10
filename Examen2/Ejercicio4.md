## Constantes
max &larr; 1000
## Entradas
$$x \in \mathbb{Z} \qquad x>0 $$
## Salidas
$$x_i, xmax, i \in \mathbb{Z}$$
<!-- ## Operacion -->

## Algoritmo
```
Repetir  
    Obtener(x)  
Hasta (x > 0)
Devolver(x)  
i ← 1  
xmax ← x  
Si (x = 1) Entonces  
    Devolver(xmax, i)  
Sino
    Repita
        i ← i + 1
        Si (x%2 = 0) Entonces
            x ← x/2    
        Sino
            x ← (3*x) + 1
        Si (x > xmax) Entonces
            xmax ← x        
        Devolver(x)
    Hasta((x = 1 ∨ i > max))
    Devolver(xmax,i)
```

## Variables