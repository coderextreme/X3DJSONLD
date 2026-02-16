(defproject JinScaledV2L1LOA4Sites10h "1.0.0"
  :description "X3D Clojure Scene Access Interface Library"
  :url "http://example.com"
  :license {:name "Eclipse Public License"
            :url "http://www.eclipse.org/legal/epl-v10.html"}
  
  :dependencies [[org.clojure/clojure "1.12.0"]
                 ;; CORRECT WAY to add your local JAR:
                 [org.web3d.x3d/X3DJSAIL "4.0-full" :local/root "/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar"]]

  :source-paths ["src" "src/JinScaledV2L1LOA4Sites10h"]
  
  :main ^:skip-aot JinScaledV2L1LOA4Sites10h
  :target-path "target/%s"
  
  :jvm-opts ["-Xmx4g"])
