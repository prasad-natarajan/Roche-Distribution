    sudo yum install php-devel
    cd /usr/share
    wget http://download.osgeo.org/geos/geos-3.3.6.tar.bz2  # Note this changes
    tar -xvjf geos-3.3.6.tar.bz2
    cd geos-3.3.6
    ./configure --enable-php && make clean && make
    sudo make install
    sudo ldconfig
    sudo vi /etc/ld.so.conf

Add the line:
    
    /usr/local/lib
    

Save (ESC -> :x) 

Run ldconfig:
    
    /sbin/ldconfig
    

create a /etc/php.d/geos.ini file with the following content:
    
    ; GEOS extension
    extension=geos.so
    
