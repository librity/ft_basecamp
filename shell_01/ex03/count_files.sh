#! /bin/sh

# Procura dentro da pasta atual todos os arquivos
find . | \
  # e conta o numero de linhas
  wc -l
