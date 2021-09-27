## Guia de personalizacion

La informacion de los programas usados en esta guia los encuentran en la siguiente tabla

| Program                             | Name                                                                                                                           |
| :---                                | :---                                                                                                                           |
| Distribuicion                       | [Arch Linux](https://www.archlinux.org/)                                                                                       |
| Gestor de ventanas                     | [i3-gaps](https://github.com/Airblader/i3)                                                                                  |
| Barra de informacion                                | [polybar](https://github.com/jaagr/polybar)                                                                                    |
| Lanzador de programas                    | [dmenu](https://github.com/stilvoid/dmenu)                                                                                  |
| Wallpaper Setter                    | [feh](https://github.com/derf/feh)                                                                                             |
| Navegador web                         | [Firefox](https://firefox.com)                                                                                                 |                                                                                   |
| Fuente                              | [JetBrains Mono](https://www.jetbrains.com/es-es/lp/mono/)                                                                                 |
| Editor de codigo                         | [Nvim](https://neovim.io/)                                                                                                     |                                                                          |
| Shell                               | [zsh](https://www.zsh.org/)                                                                                                    |
| Emulador de terminal                  | [Alacritty](https://github.com/alacritty/alacritty)                                                                                                 |

## Instalación

Todo los programas que se usaran a continuacion, necesitan de un sistema de ventanas X, en este caso se usara [Xorg](https://wiki.archlinux.org/title/xorg) un servidor de visualización popular entre los usuarios de Linux.

## Arch

Instalar Xorg
```
sudo pacman -S xorg-server
```

Instalar i3, si se desea tambien puede instalar una barrera de status ligera de la misma familia instalando `i3status`

```
sudo pacman -S i3-gaps
```
Configurar el archivo `.xinitrc`, si el archivo no esta creado puede crearlo facilmete con `touch .xinitrc`, el cual va a ser el responsable de lanzar a traves de X el gestor de ventanas que acabamos de instalar.
```
  exec i3
```
