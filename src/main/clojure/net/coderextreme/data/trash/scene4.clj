(import java.io.File)
(import java.net.URL)
(import java.net.URLClassLoader)

;; Path to your JAR file
(def jar-path "../../../../../../../pythonSAI/X3DJSAIL.4.0.full.jar")

;; Create a File object for the JAR
(def jar-file (File. jar-path))

;; Create a URL object for the JAR
(def jar-url (URL. (.toString (.toURI jar-file))))

;; Load the JAR into the classpath (with a custom class loader)
(let [class-loader (URLClassLoader. (into-array URL [jar-url]) (ClassLoader/getSystemClassLoader))]
  (let [current-thread (Thread/currentThread)]
    (.setContextClassLoader current-thread class-loader)
    ;; Now try to load the X3D class using the custom class loader
    (try
      (Class/forName "org.web3d.x3d.jsail.Core.X3D" true class-loader)
      (catch ClassNotFoundException e 
        (println "Class not found: " (.getMessage e))))))

;; Now you can import and use it
(ns foo
(:import [org.web3d.x3d.jsail.Core.X3D])
)

;; Access the X3D class 
(def X3D0 (-> org.web3d.x3d.jsail.Core.X3D))
