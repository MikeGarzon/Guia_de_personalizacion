## Guia de personalizacion


| Program                             | Name                                                                                                                           |
| :---                                | :---                                                                                                                           |
| Linux Distribution                  | [Arch Linux](https://www.archlinux.org/)                                                                                       |
| Window Manager                      | [bspwm](https://github.com/baskerville/bspwm)                                                                                  |
| Bar                                 | [polybar](https://github.com/jaagr/polybar)                                                                                    |
| Program Launcher                    | [rofi](https://github.com/DaveDavenport/rofi)                                                                                  |
| Wallpaper Setter                    | [feh](https://github.com/derf/feh)                                                                                             |
| Web Browser                         | [Firefox](https://firefox.com)                                                                                                 |
| Icon theme                          | [Flatery](https://www.pling.com/p/1332404)                                                                                     |
| Text editors/IDE's and Gtk/Qt theme | [Serenade](https://github.com/b4skyx/serenade)                                                                                 |
| Code Editor                         | [Nvim](https://neovim.io/)                                                                                                     |
| Text editors/Terminal font          | [Sarasa](https://github.com/be5invis/Sarasa-Gothic)                                                                            |
| Shell                               | [zsh](https://www.zsh.org/)                                                                                                    |
| Terminal Emulator                   | [st](https://st.suckless.org/)                                                                                                 |
| Document Viewer                     | [Zathura](https://pwmt.org/projects/zathura/)                                                                                  |
| Music Player                        | [ncmpcpp/mpd](https://github.com/ncmpcpp/ncmpcpp)                                                                              |
| GTK Theme                           | [Serenade (Oomox Generated)](https://cdn.discordapp.com/attachments/792698625011482677/813491937041448970/serenade.zip)                                                      |
| Lockscreen                          | [i3lock-color(v2.13c2+)](https://github.com/Raymo111/i3lock-color)                                                                                                                  |


## Instalación

Todo los programas que se usaran a continuacion, necesitan de un sistema de ventanas X, en este caso se usara [Xorg](https://wiki.archlinux.org/title/xorg) un servidor de visualización popular entre los usuarios de Linux.

## Arch

Instalar Xorg
```
sudo pacman -S xorg-server
```
Instalar i3
```
sudo pacman -S i3-gaps
```
Si se desea tambien puede instalar una barrera de status ligera de la misma familia 
```
sudo pacman -S i3status
```

Crear el archivo .xinit (usar el editor de texto que prefiera)
```
  nvim .xinit
```
