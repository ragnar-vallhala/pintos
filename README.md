# PINTOS & QEMU for Operating System Lab

This repository is intended for easy installation and setup of the Pintos and QEMU. Various other sources that are available in the open-source have known bugs, while other are hard to setup for a beginner. To setup the system follow the below instruction in your machine.

> [!NOTE]
> The below setup is for Debian based systems. It relies on **apt** package manager.

1. Clone the repository (preferably in your ~ directory).
``` bash
git clone https://github.com/ragnar-vallhala/pintos.git
```
*Note: Make sure that you have git installed. If not the run `sudo apt install git`*

2. Now you have two folders in the cloned repo, `pintos-anon` containing the source code of pintos and `qemu` containing the source code of the QEMU emulator. We will go on by building QEMU from source and then move to pintos.

## Building QEMU

3. Move in the qemu directory.
``` bash
cd pintos/qemu
```

4. Install Python and its pacakages.
```bash
sudo apt install python3
sudo apt install python3-venv    #Python environment manager
```

5. The QEMU project is built by Ninja (a popular project manager for C/C++ projects, like Visual Studio, XCode, etc. *It was my first using it though, I prefer CMake with Visual Studio or GNU Make on Windows and Linux, respectively.* ) So, install Ninja.
```bash
sudo apt install ninja-build
```
6. The project also produces docs after build. For that it uses Sphinx (a documentation generator written in Python.) To install Sphinx run:
```bash
sudo apt install python3-sphinx
sudo apt install python3-sphinx_rtd_theme
```
*Note: In some cases the installation may fail for the above packages. In that case you may use pip (python's default package manager).*

```bash
sudo apt install python3-pip
```

After installing `pip`, you can get the package that is not installed as,
```bash
sudo pip install sphinx
```
and 
```bash
sudo pip install sphinx_rtd_theme
```

*Note: In some cases, even this doesn't work. An error arises as:*
```bash
error: externally-managed-environment

× This environment is externally managed
╰─> To install Python packages system-wide, try apt install
    python3-xyz, where xyz is the package you are trying to
    install.

    If you wish to install a non-Debian-packaged Python package,
    create a virtual environment using python3 -m venv path/to/venv.
    Then use path/to/venv/bin/python and path/to/venv/bin/pip. Make
    sure you have python3-full installed.

    If you wish to install a non-Debian packaged Python application,
    it may be easiest to use pipx install xyz, which will manage a
    virtual environment for you. Make sure you have pipx installed.

    See /usr/share/doc/python3.11/README.venv for more information.

note: If you believe this is a mistake, please contact your Python installation or OS distribution provider. You can override this, at the risk of breaking your Python installation or OS, by passing --break-system-packages.
hint: See PEP 668 for the detailed specification.
```

In this case run the previous commands with an extra `--break-system-packages` argument.
If none of the above works, then kindly leave as it's an non-essential part of Pintos. And even if have geberated docs you are not going to read it any how.

7. After getting the `python` stuff done. Let's move towards the libraries. The project depends on a bunch libraries that are essential to build the project. The comamnd below have all the lib dependencies and even more, some might be already installed on you system.
```bash
sudo apt install \
    git build-essential libglib2.0-dev libfdt-dev libpixman-1-dev zlib1g-dev \
    libsdl2-dev libsdl2-image-dev libaio-dev libbluetooth-dev libcapstone-dev \
    libbrlapi-dev libbz2-dev libcap-ng-dev libcurl4-gnutls-dev libgtk-3-dev \
    libibverbs-dev libjpeg8-dev libncurses5-dev libnuma-dev librbd-dev \
    librdmacm-dev libsasl2-dev libsdl1.2-dev libseccomp-dev libsnappy-dev \
    libspice-server-dev libssl-dev libusb-1.0-0-dev libvde-dev libvdeplug-dev \
    libvte-2.91-dev libxen-dev libxenstore-dev libxkbcommon-dev libxml2-dev \
    libxrandr-dev libxrender-dev libxres-dev libxt-dev libxtst-dev \
    libyaml-dev ninja-build python3 python3-pip python3-sphinx
```
I tried to list all the necessary ones, but if during build process you get error regarding some missiong library then kindly download it yourself It's fairly simple just google and and run the repective command.

8. It needs two additional tools that most of us are familiar with. The dreaded `flex` and `bison`. *I got low grades in that though :(* .\
Install them by running:
```bash
sudo apt install bison flex
```

9. After doing all this you are ready with all the dependencies that I know of. Let's start the fun part `***Building the project*** ` . Run below command to do all the setups.
```bash
./configure
```
*Make sure that you are in `qemu` directory and not wandered-off somewhere else.* 

*If the above commands run without throwing an explicit error to you, you are good to go. If not then you are either non-attentive to follow even this siple workflow or you are in some deep trouble with the `System-God`.*

10. For those who have fared will till now. March ahead. \
Let's build the *QEMU*  once and for all.
```bash
cd build
make -j8    #you can ommit -j8 argument. I just added it and thought it may build the project in parallel. But I am not sure of it as I haven't used the Ninja build before don't know if they passed the parallel build parameter in the Make or make come comes with it by default. Just do it or don't do it. Your choice totally (＾▽＾).
```

11. Wallah! if the build process went curse-less then you are blessed by the `System-God`.\
You will find many executble files for the `QEMU` in the build directory. For my system (x86_64 AMD CPU), I used the `qemu-system-x86_64`. You may use the same. If you run,
```bash
./qemu-system-x86_64
```
you must see the `QEMU` emulator pop-up. But it won't do anything usefull as it has installation media.

12. But we have a problem, to run `QEMU` you ahve to give the path to it. But this is definitely not convinient. Let's ad a link to this executable so that it can be accessed from anywhere.\
```bash
sudo ln -s absolue/path/to/qemu-system-x86_64 /bin/qemu
```
Replace the absolute path in above command. Finally, the link will be added.
Now you can access the `QEMU` from anywhere just by running `qemu`. 

### If you are here, **Congratulations!** you have done a great job.

13. Now, we have to move towards the `Pintos`. The code is precompiled and has the required `pintos` and supporting binaries prebuilt. From the root folder pintos run,
```bash
cd pintos-anon/src/utils
```

14. You will find multiple prebuilt binaries there. You have to add this folder to you path. But before that let's do a quick check.
```bash
./pintos
```
Running this code will run the pintos. You will get a list of options and arguments that are supported by the pintos. If some error occurs then you are on you own (May `System-God` bless you!).

15. Let's add this directory to path. This process is shell dependent. I personally use `Fish shell` for its auto-suggestion and the by God the names of the themes, eg. `BobTheFish` the theme I am using, `OhMyFish` the package managerm, etc. But `Bash shell` is the most used one as it comes default with Debian Linux Distros.
15. 1. For those with `Fish`,
```bash
cd ~/.config/fish
```
Open the `fish_variables` file with any editor of your choice (preferablly Neovim, coz Nano sucks and you know that.) Anyway use whateever you wish, find a line starting with,\
`SETUVAR fish_user_paths:`\
there will be something written after that, notice each path is separated by `\1xe` and there is no spaces.\
Add you path like,
```
SETUVAR fish_user_paths:your/path/to/pintos/utils\1xe/rest/of/the/paths
```
Save and quit the file. After doing this you must be able to run pintos from anywhere, as
```bash
pintos
```

15. 2. For rest who use `Bash`, first thing is kindly switch to `Fish` you are missing a lot. Secondly, let's go editing, open either of the files,

```bash
nvim ~/.bashrc   # for all users
```
OR 
```bash 
nvim ~/.bash_profile
```
You may use Nano if you wish instead of Nvim.\
 Add one line to the file,
```bash
export PATH="$PATH:/your/path/to/pintos/utils"
```
Apply the changes by,
```bash
source ~/.bashrc 
# OR 
source ~/.bash_profile
```

You can verify the path list by command,

```bash
echo $PATH
```
If you see the path in the list, you are good to go.


16. The `Pintos` is now ready. To run a sample test let's run one from the threads.\
Go to threads directory. If you are in the utils, run,
```bash
cd ../threads
```
17. Build the project by running,
```bash
make
```
You will have a build directory. Inside the `build` directory there is a `test` directory containing another `threads` directory.\
This `threads` directory contains the tests you can run. For example, let's run `alarm-multiple` test. This is available in the `threads` directory.\
*Note: You can run the tests when you are in the build directory as it requires kernel for booting (**kernel** is in the build directory).*\
Run the command below:
```bash
pintos --qemu -- run alarm-single
```
This will open the qemu and print the output to console too. If you wanrt to quit after the completion use `-q` and `-v` to suppress the qemu window.
```bash
pintos --qemu -v -- -q run alarm-single
```
## Conclusion
Hope this helped you. One advice to you is to fork this repository and work on you own fork. This will help in isolating you code from mine. \
# Thank You
