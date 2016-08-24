#!/bin/bash
#
#
declare -r T=0
declare -r F=1
isrootuser()
{
[ $(id -u) -eq 0 ] && return $T || return $F
}
isrootuser && echo "You are a root user" || echo "You are not a root user"
