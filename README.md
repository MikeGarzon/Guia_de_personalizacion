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

#### Polybar 






