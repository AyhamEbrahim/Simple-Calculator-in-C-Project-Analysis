flowchart TD

A[Start Program] --> B[Read First Number]
B --> C[Read Second Number]
C --> D[Choose Operation]

D --> E[compute()]

E --> F{Operation Type}

F -->|ADD| G[add()]
F -->|SUB| H[sub()]
F -->|MUL| I[mul()]
F -->|DIV| J[divideNumbers()]

G --> K[Display Result]
H --> K
I --> K
J --> K

K --> L[End Program]
