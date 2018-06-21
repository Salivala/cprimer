colorscheme neodark
let g:neodark#terminal_transparent = 1
call plug#begin('~/.local/share/nvim/plugged')

Plug 'vim-syntastic/syntastic'
Plug 'nathanaelkane/vim-indent-guides'
Plug 'cohama/lexima.vim'
call plug#end()


filetype off
filetype plugin indent on
set tabstop=4
set shiftwidth=4
set expandtab
syntax on

set relativenumber

set autowrite
nnoremap <C-c> :! g++ % -o %.out ; ./%.out <CR>
