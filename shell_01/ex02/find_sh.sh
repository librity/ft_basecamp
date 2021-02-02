#! /bin/sh

# Procura dentro da pasta atual todos os arquivos que terminam com .sh
find . -type f -name '*.sh' -execdir basename {} .sh \;
# e executa o commando basename, que retorna o nome do arquivo sem o .sh
