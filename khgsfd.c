!/bin/bash
# Shell script to find whether an input number is palindrome or not
# -----------------------------------------------
# Copyright (c) 2006 nixCraft <http://cyberciti.biz/fb/>
# This script is licensed under GNU GPL version 2.0 or above
# -------------------------------------------------------------------------
# This script is part of nixCraft shell script collection (NSSC)
# Visit http://bash.cyberciti.biz/ for more information.
# -------------------------------------------------------------------------
 
echo -n "Enter number : "
read n
 
# store single digit
sd=0
 
# store number in reverse order
rev=""
 
# store original number
on=$n
 
while [ $n -gt 0 ]
do
    sd=$(( $n % 10 )) # get Remainder 
    n=$(( $n / 10 ))  # get next digit
    # store previous number and current digit in reverse 
    rev=$( echo ${rev}${sd} ) 
done
 
if [ $on -eq $rev ];
then
  echo "Number is palindrome"
else
  echo "Number is NOT palindrome"
fi

🐧 Get the latest tutorials on SysAdmin, Linux/Unix, Open Source, and DevOps topics via:
RSS feed or Weekly email newsletter
12 comments... add one ↓
🔎 To search, type & hit enter...

Related Shell Scripts:
Curl Shell Script To Purge Cache From Stackpath CDNCurl Shell Script To Purge Cache From Stackpath CDN
Shell script to monitor MariaDB replication and send email…Shell script to monitor MariaDB replication and send email…
Shell script too see Time-To-Live (TTL) for a DNS recordShell script too see Time-To-Live (TTL) for a DNS record
Category	List of Unix and Linux commands
Ansible	Check version • Fedora • FreeBSD • Linux • Ubuntu 18.04 • Ubuntu • macOS
Backup Management	Debian/Ubuntu • FreeBSD • RHEL
Database Server	Backup MySQL server • MariaDB Galera cluster • MariaDB TLS/SSL • MariaDB replication • MySQL Server • MySQL remote access
Download managers	wget
Driver Management	Linux Nvidia driver • lsmod
Documentation	help • mandb • man • pinfo
Disk Management	df • duf • ncdu • pydf
File Management	cat • cp • less • mkdir • more • tree
Firewall	Alpine Awall • CentOS 8 • OpenSUSE • RHEL 8 • Ubuntu 16.04 • Ubuntu 18.04 • Ubuntu 20.04 • Ubuntu 24.04
KVM Virtualization	CentOS/RHEL 7 • CentOS/RHEL 8 • Debian 9/10/11 • Ubuntu 20.04
Linux Desktop apps	Chrome • Chromium • GIMP • Skype • Spotify • VLC 3
LXD	Backups • CentOS/RHEL • Fedora • Mount dir • Ubuntu 20.04
Modern utilities	bat • exa
Network Management	Monitoring tools • Network services • RHEL static IP • Restart network interface • nmcli
Network Utilities	NetHogs • dig • host • ip • nmap • ping
OpenVPN	CentOS 7 • CentOS 8 • Debian 10 • Debian 11 • Debian 8/9 • Ubuntu 18.04 • Ubuntu 20.04
Power Management	upower
Package Manager	apk • apt-get • apt • yum
Processes Management	bg • chroot • cron • disown • fg • glances • gtop • iotop • jobs • killall • kill • pidof • pstree • pwdx • time • vtop
Searching	ag • egrep • grep • whereis • which
Shell builtins	compgen • echo • printf
System Management	reboot • shutdown
Terminal/ssh	sshpass • tty
Text processing	cut • rev
Text Editor	6 Text editors • Save and exit vim
User Environment	exit • who
User Information	groups • id • lastcomm • last • lid/libuser-lid • logname • members • users • whoami • w
User Management	/etc/group • /etc/passwd • /etc/shadow • chsh
Web Server	Apache • Let's Encrypt certificate • Lighttpd • Nginx Security • Nginx
WireGuard VPN	Alpine • Amazon Linux • CentOS 8 • Debian 10 • Firewall • Ubuntu 20.04 • qrencode

12 comments… add one
buggi Dec 13, 2009 @ 7:25
could you please help in providing me the sample code in printing all the prime numbers
in the given range ?

reply link
jyothi Nov 9, 2010 @ 9:45
Shell script to find whether an input number is palindrome or not

Simple script for the above is

echo "Enter the string:"
read s
rvs=`echo $s | rev`
if [ $s = $rvs ]
then
         echo "It is palindrome"
else
         echo "It is not"
fi
reply link
Anonymous Sep 18, 2011 @ 7:27
jyothi ji ki jai ho!!!

reply link
Sonu Yadav Sep 28, 2011 @ 5:41
What is rev in this program

reply link
madu Sep 30, 2021 @ 9:33
super mam

reply link
Krutika Modi Oct 9, 2011 @ 3:25
echo “enter any no:”
read no
no=`expr $no`
no1=`expr $no1`
rev=`expr 0`
while [ $no -gt 0 ]
do
temp=`expr $no % 10`
rev=`expr $temp + $rev \* 10`
no=`expr $no / 10`
done
if [ $no1 -eq $rev ];
then
echo “$no1 is a palindrom no”
else
echo “$no1 is not a palindrom no”
fi

reply link
arun May 2, 2012 @ 11:14
nhi chal raha

reply link
kritanta kr roy Jul 8, 2012 @ 23:26
jyothi you are ………. i have no word to express it ,,,u are great

reply link
santhu Aug 16, 2012 @ 5:37
hi
can you provide the code for n number of inputs and n number of outputs in shell scripting for verilog code and that code is generated in another file as like .v

i ll waiting for your reply and send me as soon as possible

reply link
Nitin Jul 22, 2013 @ 18:07
please give a program without using rev function….
use only while loop to write a program

reply link
anshul Aug 4, 2016 @ 5:52
#!/bin/bash
echo “Enter a String or number : ”
read string or number
if [ “$(echo $string | rev)” = “$string” ]
then
echo “\”$string\” IS a Palindrome”
else
echo “\”$strin\” IS NOT a Palindrome”

reply link
krishan chandra pandey Sep 4, 2017 @ 6:44
#check the no is palendrome or not
echo “enter the no to check palendrome”
read n
x=0
y=0
m=$n
while [ $n -ne 0 ]
do
x=$(( n % 10 ))
y=$(( y * 10 + x ))
n=$(( n / 10 ))
done
echo “y is $y”
echo “number is $m”
if [ $m -eq $y ]
then
echo “value is palendrome”
else
echo “value is not palendrome”
fi

reply link
Leave a Reply
Your email address will not be published. Required fields are marked *

Comment *

Name

Use HTML <pre>...</pre> for code samples. Still have questions? Post it on our forum
Next script: Shell Script that outputs the number of users with entries in the /etc/passwd file

Previous script: Shell program to read a number and find the sum of digits


Home
Blog
Howtos & FAQs
Linux Shell Scripting Tutorial
RSS
Linux shell scripting tutorial

➔What is Linux Shell?
➔What is a Shell Script or shell scripting?
➔Write a simple shell script - "Hello World!"
➔Variables in shell
➔Bash structured language constructs
➔See complete tutorial
FEATURED ARTICLES

130 Cool Open Source Software I Discovered in 2013
230 Handy Bash Shell Aliases For Linux / Unix / Mac OS X
3Top 32 Nmap Command Examples For Linux Sys/Network Admins
425 PHP Security Best Practices For Linux Sys Admins
530 Linux System Monitoring Tools Every SysAdmin Should Know
640 Linux Server Hardening Security Tips
7Linux: 25 Iptables Netfilter Firewall Examples For New SysAdmins
8Top 20 OpenSSH Server Best Security Practices
9Top 25 Nginx Web Server Best Security Practices
10My 10 UNIX Command Line Mistakes
SITE LINKS

➔Howtos & Tutorials
➔Linux shell scripting tutorial
➔RSS/Feed
➔About nixCraft
©2002-2023 nixCraft • Privacy • ToS • Contact/Email • Corporate patron Linode & Cloudflare
  
