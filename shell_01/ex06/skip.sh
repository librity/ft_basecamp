#! /bin/sh

# Lista todos os arquivos dentro da pasta atual
ls -l | \
  # So mostra as linhas que nao sao multiplas de 2 (linhas impares)
  awk 'NR % 2 != 0'
