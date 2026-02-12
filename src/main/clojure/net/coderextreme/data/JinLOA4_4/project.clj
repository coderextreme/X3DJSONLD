(defproject JinLOA4_4 "1.0.0"
  :description "X3D Clojure Scene Access Interface Library"
  :url "http://example.com"
  :license {:name "Eclipse Public License"
            :url "http://www.eclipse.org/legal/epl-v10.html"}
  
  :dependencies [[org.clojure/clojure "1.12.0"]
                 ;; CORRECT WAY to add your local JAR:
                 [org.web3d.x3d/X3DJSAIL "4.0-full" :local/root "/mnt/c/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar"]]

  :source-paths ["src" "src/JinLOA4_4"]
  
  :main ^:skip-aot JinLOA4_4
  :target-path "target/%s"
  
  :jvm-opts ["-Xmx4g"])
