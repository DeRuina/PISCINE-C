cat /etc/passwd | grep -v '^#' | cut -f1 -d ":" |  sed -n 'n;p'| rev | sort -r | awk -v i=$test -v l=$test1 'NR==i,NR==l' |  sed "s/$/ ,/ " |  tr '\n' ' ,' | sed "s/$/./ "
