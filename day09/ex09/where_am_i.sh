a=$(ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d\  -f2)
if test -z "$a"
	then 
		echo "Je suis perdu!\n"
	else
		echo $a
fi
