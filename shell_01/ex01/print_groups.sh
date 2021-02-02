#! /bin/sh

# Retorna uma lista com os grupos aos quais o usuario dentro da
# variavel $FT_USER pertence
groups $FT_USER | \
  # Substitui os espacos por virgulas
  tr ' ' ',' | \
  # Remove a quebra de linha
  tr -d '\n'
