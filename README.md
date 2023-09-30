# Get Disk Free and Total Space
<h3 align="center">A c++ pogram to detect Free and Total Disk space made by HuyN</h3>

- 📫 How to reach me **huyn.dev.2105@gmail.com**

<h3 align="left">Connect with me:</h3>
<p align="left">
<a href="https://fb.com/huyn.2105" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/facebook.svg" alt="huyn.2105" height="30" width="40" /></a>
</p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> </a> </p>

## How this works
Program will use system() in

```cpp
#include <Windows.h>
#include <cstdlib>
```
To get information of free and total space of [disk] and write to file.txt
```cpp
system("fsutil volume diskfree [disk] > file.txt");
```
And I also coded a function to get Free Space and Total Space in byte and gb to write to a file
```cpp
ll getFreeSpace(){
    ll s = 0;
    ll t = freeSpace.find(":");
    while(isdigit(freeSpace[t])==false) t++;
    while(freeSpace[t] != ' '){
        if(freeSpace[t] == ','){}
        else if(s==0) s = freeSpace[t]-'0';
        else s = s*10 + (freeSpace[t]-'0');
        t++;
    }
    return s;
}

ll getTotalSpace(){
    ll s = 0;
    ll t = totalSpace.find(":");
    while(isdigit(totalSpace[t])==false) t++;
    while(totalSpace[t] != ' '){
        if(totalSpace[t] == ','){}
        else if(s==0) s = totalSpace[t]-'0';
        else s = s*10 + (totalSpace[t]-'0');
        t++;
    }
    return s;
}
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)

