#!/bin/bash

function run {
  if ! pgrep $1 ;
  then
    $@&
  fi
}


# set wallpaper
#wal -i ~/.config/bspwm/wallpapers/
#wal -i ~/.config/bspwm/wallpapers/wallhaven-kw51d1.jpg
sh ~/.fehbg &
# set polybar
$HOME/.config/polybar/launch_bspwm.sh
#$HOME/.conky/conky-pywal/./start_conky.sh &
xsetroot -cursor_name left_ptr &
#$HOME/.config/bspwm/scripts/dualscreen.sh &
$HOME/.config/dunst/dunst_with_pywal.sh &
run sxhkd -c ~/.config/bspwm/sxhkd/sxhkdrc &
#run plank &
run glava &
run picom &
run nm-applet &
run pamac-tray &
run xfce4-power-manager &
numlockx on &
#picom --config $HOME/.config/bspwm/picom.conf &
/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
/usr/lib/xfce4/notifyd/xfce4-notifyd &
#run volumeicon &

