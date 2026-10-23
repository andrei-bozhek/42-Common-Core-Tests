<h1 align="center">42 Tokyo — Common Core Tests</h1>

<p align="center">
  My collection of testers for projects from the 42 Common Core curriculum.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/42-Tokyo-000000?style=flat-square" alt="42 Tokyo">
  <img src="https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c&logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/2026-Present-555555?style=flat-square" alt="2026 - Present">
</p>

## About

This repository contains tests I write while working through the **42 Common Core** at [42 Tokyo](https://42tokyo.jp/).

The tests help me compare my implementations with standard library functions, explore edge cases, and check expected behavior during development.

My project implementations are available in [42 Common Core](https://github.com/andrei-bozhek/42-Common-Core).

## Testers

| Project | Description | Tests |
|:---|:---|:---:|
| Libft | Individual tests for standard library functions, additional utilities, and bonus linked list functions | [Browse](./Libft/tests/) |
| ft_printf | Demonstration tests comparing output and return values with the standard `printf` | [Browse](./ft_printf/tests/) |

This collection will grow as I progress through the curriculum.

## Usage

Copy the relevant `tests` directory into your project root, alongside its source files and headers.

### Libft

Each test has its own `main` function and should be compiled separately. For example, from your Libft project root:

```sh
make
cc -Wall -Wextra -Werror tests/test_ft_strlen.c libft.a -o test_ft_strlen | /test_ft_strlen
```

Replace `test_ft_strlen.c` with the test you want to run.

### ft_printf

From your ft_printf project root:

```sh
sh tests/run.sh
```

The script expects `ft_printf.c`, `ft_print_common.c`, and `ft_print_base.c` in the project root. Adjust the source list in `tests/run.sh` if your implementation uses different filenames.

See the [ft_printf test README](./ft_printf/tests/README.md) for details on the output and checks.

## Skills & Technologies

- **Languages:** C
- **Tools:** Git, Make, Unix shell, C compiler
- **Concepts:** Function testing, edge cases, memory management, output comparison

## Repository Structure

Each project has its own directory containing a `tests` folder. This repository stores test code; project implementations are kept separately.

The current tests are intended for manual inspection of their output. They are learning tools and do not provide exhaustive coverage or replace peer evaluation.
