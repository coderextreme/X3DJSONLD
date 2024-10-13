(defproject x3dclsail "1.0.0"
  :description "X3D Clojure Scene Access Interface Library"
  :url "http://example.com"
  :license {:name "Eclipse Public License"
            :url "http://www.eclipse.org/legal/epl-v10.html"}
  :dependencies [[org.clojure/clojure "1.12.0"]
                 ;; ... other dependencies ...
                 ;; Use this line if you want to use :local/root to include the JAR:
                 ;; [your-project/your-jar-name "1.0.0" :local/root "path/to/your/jar/directory"]
                 ;; Or use this line to add the JAR directly to the classpath:
                 ;; [org.web3d.x3d/X3DJSAIL "4.0"]
                 ]
  :main x3dclsail.ArtDecoPrototypes
  :target-path "target/%s"
  :jvm-opts ["-cp" "/usr/local/lib/clojure/libexec/clojure-tools-1.12.0.1479.jar:/Users/jcarl/.m2/repository/org/clojure/clojure/1.12.0/clojure-1.12.0.jar:/Users/jcarl/.m2/repository/org/clojure/core.specs.alpha/0.4.74/core.specs.alpha-0.4.74.jar:/Users/jcarl/.m2/repository/org/clojure/spec.alpha/0.5.238/spec.alpha-0.5.238.jar:.:/Users/jcarl/pythonSAI/X3DJSAIL.4.0.full.jar"]

  :profiles {:uberjar {:aot :all
                       :uberjar-name "x3dclsail.jar"
                       :main x3dclsail.ArtDecoPrototypes
                       }})
