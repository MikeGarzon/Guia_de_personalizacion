call plug#begin('~/.config/nvim/plug-config')

Plug 'justinmk/vim-sneak'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'morhetz/gruvbox'
Plug 'norcalli/nvim-colorizer.lua'

source ~/.config/nvim/plug-config/sneak.vim
let g:airline_theme = 'base16_gruvbox_dark_hard'
let g:gruvbox_contrast_dark = 'hard'
"source ~/.config/nvim/lua/plug-colorizer.lua
"lua require'plug-colorizer'
call plug#end()

colorscheme gruvbox 
set number
syntax enable 
set mouse=a
set sw=3
set relativenumber

