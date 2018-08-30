cat /etc/passwd |  grep -v '#' | sed '1d; n; d' | cut -d ":" -f 1 | rev |sort -r | awk "NR>=$FT_LINE1 &&NR<=$FT_LINE2" | tr  '\n' "," | rev | sed 's/,/./' | rev | sed -e 's/,/, /g'
