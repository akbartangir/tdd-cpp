# tdd-cpp

Test-Driven Development (TDD) with C++ and Google Test.

Quick start

- Configure and build:

```bash
cmake -S . -B build
cmake --build build
```

- Run tests:

```bash
cd build
ctest --output-on-failure
```

TDD flow: write a failing test in `tests/`, implement code in `src/`, run tests, refactor, repeat.
