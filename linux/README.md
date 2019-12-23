Linux tricks tips general stuff

## Search and replace string in multiple files
To replace '../sylvtools.cpp' -> 'sylvtools.cpp'
```
sed -i 's/\.\.\/sylvtools\.cpp/sylvtools\.cpp/g' *.cpp
```
