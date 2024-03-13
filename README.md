# logging.h

A simple header only library of logging methods to add to your project

## Get the file

```console
wget https://raw.githubusercontent.com/KDesp73/logging.h/main/logging.h 
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
    const char* username = "!user";

    INFO("IP: %s\n", ip);
    WARN("Address is local\n");
    ERRO("Username \'%s\' contains special characters", username);

    return 0; 
}
```

Output:
```
[INFO] IP: 127.0.0.1
[WARN] Address is local
[ERRO] Username '!user' contains special characters
```


## LICENSE

[MIT](./LICENSE)

## Author

[KDesp73](https://github.com/KDesp73)
