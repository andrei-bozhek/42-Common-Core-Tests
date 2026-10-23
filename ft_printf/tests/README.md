# Demonstration tests

Run from the project root:

```sh
sh tests/run.sh
```

`demo.c` contains simple pairs of `printf` and `ft_printf` calls.
Each example shows both outputs and their return values.
Compare the output visually; `show_count` compares the return values.
`count: OK` only means that the return values match.

The tests cover all mandatory conversions, integer limits, zeros,
empty strings, NULL, pointers, and mixed arguments.
The NUL byte printed by `%c` is invisible in the terminal but still counts.
The labels may appear on the same line in the empty string test.

`setbuf(stdout, NULL)` disables printf buffering to keep its output
in order with write calls inside ft_printf.

The executable is saved as `/tmp/ft_printf_demo`. Project sources stay unchanged.
These demonstration tests do not automatically check write errors.
