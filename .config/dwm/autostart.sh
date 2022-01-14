#!/bin/sh

# start dwmblocks

pidof -s dwmblocks > /dev/null || dwmblocks &

# start redshif

pidof -s redshift > /dev/null || redshift -l $(curl -s "https://location.services.mozilla.com/v1/geolocate?key=geoclue" | awk 'OFS=":" {print $3,$5}' | tr -d ',}') -t 6000:3500
