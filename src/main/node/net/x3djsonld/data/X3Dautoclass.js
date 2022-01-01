var java = require('java');
java.options.push("-Djava.awt.headless=true");
java.options.push("-Xmx1000m");
//java.options.push("-agentlib:jdwp=transport=dt_socket,server=y,suspend=y,address=5005");
java.classpath.push("C:/Users/coderextreme/X3DJSONLD/pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("X3DJSAIL.4.0.full.jar");
java.classpath.push("pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../../pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../../../pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../../../../pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../../../../../pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../../../../../../pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../../../../../../../pythonSAI/X3DJSAIL.4.0.full.jar");
java.classpath.push("../classes");
java.classpath.push("../../classes");
java.classpath.push("jars/X3DJSAIL.4.0.full.jar");
java.classpath.push("../jars/X3DJSAIL.4.0.full.jar");
java.classpath.push("../../jars/X3DJSAIL.4.0.full.jar");
module.exports = {
ConfigurationProperties : java.import("org.web3d.x3d.jsail.ConfigurationProperties"),
CommentsBlock : java.import("org.web3d.x3d.jsail.Core.CommentsBlock")
}
