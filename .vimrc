" [color settings]
colorscheme slate
highlight Comment ctermfg=brown " yellow 
highlight OverLength ctermbg=blue ctermfg=white
match OverLength /\%81v.\+/

" [backup/swap settings]
set swapfile
set backupdir=~/tmp/vim
set directory^=~/tmp/vim

" [tabstop settings]
" set tabstop=4
" set softtabstop=0 noexpandtab
" set shiftwidth=4

" [tab navigation settings]
map tp :tabp<CR>
map tn :tabn<CR>

" [saving settings]
map s :w<CR>

