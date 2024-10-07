# A tiny demo for a Python module in C

This repo contains a Python module written in C with only one function.

Works on my machine™. To make it works on yours:

1. Install the python development package. It is usually called `python3-dev`
   or `python3-devel`.
2. Compile this module with `make`. If this does not work, it is possible
   that the path to the Python.h header is different on your system.
   to find it, you can use `python3-config --includes` and replace the
   appropriate line in the Makefile.
3. Open `python` and enjoy!

```
>>> import sum_module
>>> sum_module.sum_from_c(23, 19)
42
```
