# logging.h

A simple header only library of logging methods to add to your project

## Get the file

```console
wget https://github.com/KDesp73/logging.h/blob/main/logging.h
```

## Log Status

- `INFO`
- `WARN`
- `ERRO`
- `DEBU` (if `DEBUG` is defined)
- Any other status using the `LOG` method

## Example

```c
#include "logging.h"

int main(){
    const char* ip = "127.0.0.1";
    INFO("IP: %s\n", ip);

    return 0; 
}
```

Output:
```
[INFO] IP: 127.0.0.1
```


## LICENSE

[MIT](./LICENSE)

## Author

[KDesp73](https://github.com/KDesp73)
