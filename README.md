# A tiny demo for a Python module in C

This repo contains a Python module written in C with only one function.

Works on my machine™. To make it works on yours:

1. Install the python development package. It is usually called `python3-dev`
   or `python3-devel`.
2. Compile this module with `make`.
3. Open `python` and enjoy!

```
>>> import sum_module
>>> sum_module.sum_from_c(23, 19)
42
```
