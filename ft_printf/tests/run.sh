#!/bin/sh
set -eu
cd "$(dirname "$0")/.."
cc -Wall -Wextra -Werror tests/demo.c \
    ft_printf.c ft_print_common.c ft_print_base.c -o /tmp/ft_printf_demo
/tmp/ft_printf_demo
