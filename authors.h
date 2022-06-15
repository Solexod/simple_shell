#!/usr/bin/env bash                                                                                   
set -e                                                                                                
#see also ".mailmap" for how email addresses and names are duplicated                                 
{cat <<- 'EOH'                                                                                        
#This file lists all individuals contributed content to the repository.                               
#For how it is generated see 'root/authors.sh'.
	EOH        
		echo 
		git log --format = %aN <%aE>' | LC_ALL=C.UTF -8 SORT -UTF
} > AUTHORS  
