(import java.io.File)
(import java.net.URL)
(import java.net.URLClassLoader)

;; Path to your JAR file
(def jar-path "../../../../../../../pythonSAI/X3DJSAIL.4.0.full.jar")

;; Create a File object for the JAR
(def jar-file (File. jar-path))

;; Create a URL object for the JAR
(def jar-url (URL. (.toString (.toURI jar-file)))) 

;; Load the JAR into the classpath
(let [class-loader (URLClassLoader. (into-array URL [jar-url]) (ClassLoader/getSystemClassLoader))]
  (let [current-thread (Thread/currentThread)]
    (.setContextClassLoader current-thread class-loader)))

(import '[org.web3d.x3d.jsail.Core X3D])
(def X3D0 (-> X3D. ))
