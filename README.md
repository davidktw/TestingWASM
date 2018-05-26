# How to compile
```
emcc helloworld.c -s "EXTRA_EXPORTED_RUNTIME_METHODS=['stringToUTF8','UTF8ToString']"
```

# How to run
```
cd <directory hosting all the files>
python -m SimpleHTTPServer 8000
Browser access http://localhost:8000
```
