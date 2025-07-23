(defproject LOA1_KneelAnimation "1.0.0"
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
  :main ^:skip-aot LOA1_KneelAnimation
  :target-path "target/%s"
  ;; :jvm-opts ["-cp" "/usr/share/clojure/libexec/clojure-tools-1.12.1.1550.jar:/Users/jcarl/.m2/repository/org/clojure/clojure/1.12.0/clojure-1.12.0.jar:/Users/jcarl/.m2/repository/org/clojure/core.specs.alpha/0.4.74/core.specs.alpha-0.4.74.jar:/Users/jcarl/.m2/repository/org/clojure/spec.alpha/0.5.238/spec.alpha-0.5.238.jar:.:/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar"]
  :jvm-opts ["-cp" "src/LOA1_KneelAnimation:/usr/share/clojure/libexec/clojure-tools-1.12.1.1550.jar:.:/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar"]

  :profiles {:uberjar {:aot :all
                       :uberjar-name "LOA1_KneelAnimation.jar"
                       :main LOA1_KneelAnimation
                       }})
