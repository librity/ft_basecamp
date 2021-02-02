#! /bin/sh

# Retorna o conteudo do arquivo
cat /etc/passwd | \
  # Com delimitador :, seleciona apenas a primeira coluna (a de login)
  cut -d ':' -f 1 | \
  # So coloca as linhas multiplas de 2 (linhas pares)
  awk 'NR % 2 == 0' | \
  # Inverte os characteres de cada linha: lpaulo-m -> m-oluapl
  rev | \
  # Ordena por ordem alfabetica inversa
  sort -r | \
  # Pega as linhas de numero $FT_LINE1 ate $FT_LINE2
  awk -v from_line=$FT_LINE1 -v to_line=$FT_LINE2 'NR >= from_line && NR <= to_line' | \
  # Substitui todas as quebras de linha por virgulas
  tr "\n" "," | \
  # Substitui a ultima virgula por um ponto
  sed "s/,$/./" | \
  # Adiciona um espaco apos cada virgula; o parametro 'g' substitui todas as ocorrencias
  sed "s/,/, /g"
