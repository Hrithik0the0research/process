echo "enter your string"
read n1
case "$n1" in
	"hrithik") printf "hi there %s"$n1
	;;
	"sayani") printf "love you re %s"$n1
	;;
	"rinku") printf "love you ma %s"$n1
	;;
	*)
	echo "nothing is tere for you"
	;;	
esac

