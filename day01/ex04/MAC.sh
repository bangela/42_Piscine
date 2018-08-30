ifconfig -a link | grep ether | grep -o 'ether.*' | cut -f2- -d ' ' 
