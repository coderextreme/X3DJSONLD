rem Create a self-signed server certificate
set truststore="C:\Program Files\Openfire\resources\security\truststore"
copy %truststore% truststore.backup
set keystore="C:\Program Files\Openfire\resources\security\keystore"
copy %keystore% keystore.backup
set alias="noeticaldesign-tim.modem"
rem the default password is changeit
set storepasswd="changeit"
rem get this from let's encrypt/certbot
set signedcertificatefile="C:/ FILL THIS IN "
keytool -delete -noprompt -alias %alias% -keystore %keystore%
keytool -genkey -keystore %keystore% -alias %alias% -keyalg RSA
rem change the store password
rem keytool -storepasswd -keystore %truststore%
keytool -import -keystore %truststore% -alias %alias% -file %signedcertificatefile% -storepasswd %storepasswd%

rem 7. Configure Openfire
rem Open the Openfire Admin Console in your favorite browser and add or change the following system properties:
rem 
rem xmpp.socket.ssl.active -- set to 'true' to active SSL
rem xmpp.socket.ssl.port -- the port to use for SSL (default is 5223 for XMPP)
rem xmpp.socket.ssl.storeType -- the store type used ("JKS" is the Sun Java Keystore format used by the JDK keytool). If this property is not defined, Openfire will assume a value of "jks".
rem xmpp.socket.ssl.keystore -- the location of the keystore file relative to your Openfire installation root directory. You can leave this property blank to use the default keystore.
rem xmpp.socket.ssl.keypass -- the keystore/key password you changed in step 2.
rem xmpp.socket.ssl.truststore -- leave blank to not use a truststore, otherwise the location of the truststore file relative to your Openfire installation root directory.
rem xmpp.socket.ssl.trustpass -- the truststore/key password you changed in step 6.
rem You will need to restart the server after you have modified any of the above system properties.
