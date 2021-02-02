#! /bin/sh

# Puxa todas as interfaces de rede ativas
ifconfig | \
  # Pega so as linhas que contenham a palavra ether
  grep ether | \
  # Remove a string 'ether ' de cada linha
  sed "s/        ether //"
