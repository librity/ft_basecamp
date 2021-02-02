#! /bin/sh

decoded_with_escape_chars=`echo $FT_NBR1 | sed "s/'/0/g" | tr '\\\"?!' 1234 `
decoded_with_mrdoc=`echo $FT_NBR2 | tr mrdoc 01234 `

base_five_result=`echo "ibase=5 ; $decoded_with_escape_chars + $decoded_with_mrdoc" | bc`
base_thirteen_result=`echo "obase=13 ; $base_five_result" | bc`

echo $base_thirteen_result | tr "0123456789ABC" "gtaio luSnemf"
