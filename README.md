# Programming Lab II — C Exercises

Coursework collection for Laboratório de Programação II, covering arrays, matrices and linked data structures in C. Each topic directory contains its exercise statements and solutions.

## Exercise index

| Topic | Statements and solutions |
| --- | --- |
| Arrays | [ExerciciosVetor](ExerciciosVetor/README.md) |
| Matrices | [ExerciciosMatriz](ExerciciosMatriz/README.md) |
| Linked lists — set 1 | [ExerciciosListas1](ExerciciosListas1/README.md) |
| Linked lists — set 2 | [ExerciciosListas2](ExerciciosListas2/README.md) |
| Doubly linked lists | [ExerciciosListasDuplas](ExerciciosListasDuplas/README.md) |
| Heterogeneous lists | [ExerciciosListasHetero](ExerciciosListasHetero/README.md) |
| Additional list exercises | [ExerciciosListasExtras](ExerciciosListasExtras/README.md) |
| Stacks | [ExerciciosPilhas](ExerciciosPilhas/README.md) |
| Queues | [ExerciciosFilas](ExerciciosFilas/README.md) |

## Build an exercise

Requires a C compiler such as GCC. Exercises are independent programs, so compile the selected exercise with its supporting source files instead of compiling the whole repository together.

For example, the first queue exercise:

```bash
git clone https://github.com/JoaoVtrxx/LabProg2023.git
cd LabProg2023/ExerciciosFilas/exercicio1
gcc -Wall -Wextra exercicio1.c filas.c -o exercicio1
./exercicio1
```

Other exercises use different filenames and helper modules. Read the statement in each topic's README before choosing the compilation units. Existing executable files are historical artifacts; rebuild from the C sources for your environment.
