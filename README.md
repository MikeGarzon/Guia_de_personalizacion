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

#### Arch

Instalar Xorg
```
sudo pacman -S xorg-server
```

Instalar i3, si se desea tambien puede instalar una barrera de status ligera de la misma familia instalando [`i3status`](https://github.com/Tazeg/i3status)

```
sudo pacman -S i3-gaps
```
Configurar el archivo `.xinitrc`, si el archivo no esta creado puede crearlo facilmete con `touch .xinitrc`, el cual va a ser el responsable de lanzar a traves de X el gestor de ventanas que acabamos de instalar.
```
  exec i3
```
Con estos pasos ya quedaria montado el arranque para que i3 se inicie al correr el servidor grafico X, solo basta con ejecutar `startx` una vez logueado.

Si se desea que al iniciar el equipo se inicie automaticamente el gestor de ventanas, puede usar diferentes formas de logueo a parte de TTY, una opcion excelente opcion  es [LightDM](https://wiki.archlinux.org/title/LightDM), la cual es sencilla y facil de configurar. En esta guia no se explica la configuracion de este puesto que se trata de hacer la instalacion mas ligera, y aunque LightDM es de lo mas livianos, puede a necesitar muchas dependencias.

Luego de tener instalado i3, comienza la parte divertida, ya podemos empezar a personalizarlo, la configuracion puede llegar a ser intimidante, pero existe mucha informacion sobre el tema y es facil acostumbrarse.

Para configurar la apariencia, comportamiento, atajos espacios de trabajo se modifica el archivo el archivo `config` dentro de la carpeta `~/.config/i3` de tu directorio home, si no se encuentra, crear la carpeta y el archivo. En este repositorio puedes tomar mi archivo de configuracion con informacion detallada de distintos parametros. 

Tambien encontraras el archivo de configuracion de `i3status` por si te animas a usarlo, ya que al ser de la misma familia no necesitaras dependecias adicionales teniendo una muy buena sinergia con i3. 

Una opcion liviana para poner un fondo de escritorio (y visualizar imagenes) es `feh`, y puede instalarlo usando `sudo pacman -S feh`. Para poner el wallpaper que deseas, usa el siguiente comando.
```
feh --bg-center ~/MiWallpaper
```
Si quieres poner un wallpaper por defecto, pon esto en tu archivo de configuarcion de i3
```
exec --no-startup-id feh --bg-center ~/MiWallpaper
```

#### Dmenu

Dmenu es el lanzador de aplicaciones mas liviano que puedes encontrar, su instalacion y configuracion es muy sencilla, inserta el siguiente comando en tu consola
```
sudo pacman -S dmenu
```
Y en tu archivo de configuracion de i3, agrega lo suiguiente 
```
#Con lo siguiente nombrar tus colores en una variable
set_from_resource $fg i3wm.color0 #689d6a
set_from_resource $bg i3wm.color8 #282828

#Con el comando mod+D ejecutas la el buscador de aplicaciones
bindsym $mod+d exec dmenu_run -nb "$fg" -nf "$bg" -sb "$bg" -sf "$fg" -b
```

Una vez ya instalado un gestor de ventanas, un lanzador de aplicaciones y una barra de informacion, ya tienes lo esecnial para poder usar tu PC consumuiendo muy pocos recursos cargando todo tu sistema operativo tomando al rededor de 200MB de RAM. Lo cual puede llegar a ser un salvavidas para maquinas con hardware limitado.

## Para mas placer 
Es posible personalizar otras partes de tu sistema operativo, con fin de tener una estetica similar en todas tus ventanas, uno de mis temas favoritos, creados por la comunidad es [Gruvbox](https://github.com/morhetz/gruvbox) y todo mi escritorio esta personalizado de su esquema de colores. A continuacion se presenta informacion adicional para cambiar la apariencia a tu gusto, se recomienda un conocimiento mas avanzado a partir de ahora.



#### Nvim  
Para añadir el tema a nvim, solo es necesario utilizar tu gestor de pluggins para instalarlo:
```
Plug 'morhetz/gruvbox'
...
colorscheme gruvbox 
```
Tambien puedes cambiar el color de la barra de estado

```
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
...
let g:airline_theme = 'base16_gruvbox_dark_hard'
let g:gruvbox_contrast_dark = 'hard'
```

#### Polybar 

Polybar esta disponible en AUR, lo puedes conseguir usando tu administrador de paquetes favorito
```
sudo yay -S polybar
```
Puedes configurarlo creando la carpeta `~/.config/polybar` y archivo de configuracion que se llamara `config`, en el repositorio encontraras un archivo del cual puedes guiarte.

Para ejecutar polybar es necesario crear un script `launch.sh` el cual sera que despliega la barra en la pantalla 
```
#!/usr/bin/env bash

# Primero eliminar si tienes alguna abierta
killall -q polybar

# Iniciando la barra (example) tener en cuenta que debe tener el mismo nombre que el archivo config
echo "---" | tee -a /tmp/polybar1.log /tmp/polybar2.log
polybar example 2>&1 | tee -a /tmp/polybar1.log & disown
```

Y para que se ejecute cada vez que inicies i3 debes agregar la siguiente linea al final del archivo de configuracion de i3
```
exec_always --no-startup-id ~/.config/polybar/launch.sh &
```
#### Alacritty 
Alacritty es un emulador de terminal OpenGL, rapido y facil de configurar, para instalarlo: ```
```
sudo pacman -S Alacritty
```
Puedes configurarlo creando la carpeta `~/.config/alacritty` y archivo de configuracion llamado `alacritty.yml`, en el repositorio encontraras un archivo del cual puedes guiarte donde defino los colores de la terminal y su fuente.

Para ejecutarlo siempre que preciones mod+enter puedes agregar este comando en tu archivo de configuracion i3.
```
bindsym $mod+Return exec /usr/bin/alacritty
```
---
#### Menciones especiales
- [Pywall](https://github.com/dylanaraps/pywal)
- [Ranger](https://github.com/ranger/ranger)
- [Tema Gruvbox para firefox](https://addons.mozilla.org/es/firefox/addon/humble-gruvbox/)
- [Scrot](https://github.com/dreamer/scrot)
---




