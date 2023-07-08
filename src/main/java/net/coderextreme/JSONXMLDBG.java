import net.coderextreme.X3DJSONLD;
import org.w3c.dom.Document;
import javax.json.JsonObject;
import java.io.File;
import java.io.FileWriter;
import org.web3d.x3d.jsail.X3DLoaderDOM;
import org.web3d.x3d.jsail.Core.X3D;

class JSONXMLDBG {
	public static void main(String [] args) throws Exception {
		System.err.println("Creating X3DLoaderDOM.x3d");
		X3DJSONLD loader1 = new X3DJSONLD();
		X3DLoaderDOM xmlLoader1 = new X3DLoaderDOM();

                xmlLoader1.loadModelFromFileX3D("C:/x3d-code/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d");
		Document document1       = xmlLoader1.getDomDocument();
		FileWriter fw1 = new FileWriter("X3DLoaderDOM.x3d");
		fw1.write(loader1.serializeDOM("4.0", document1));
		fw1.close();
		System.err.println("Created X3DLoaderDOM.x3d");

		X3D X3D1 = (X3D)xmlLoader1.toX3dModelInstance(document1);
		System.err.println("Creating DONSELF.x3d");
		X3D1.toFileX3D("DONSELF.x3d");
		System.err.println("Created DONSELF.x3d");
		System.err.println("Creating DONSELF.json");
		X3D1.toFileJSON("DONSELF.json");
		System.err.println("Created DONSELF.json");
		System.err.println("Creating DONSELF.java");
		X3D1.toFileJava("DONSELF.java");
		System.err.println("Created DONSELF.java");

		System.err.println("Creating JSONLoaderDOM.x3d");
		X3DJSONLD loader = new X3DJSONLD();
		X3DLoaderDOM xmlLoader = new X3DLoaderDOM();
		JsonObject jsobj = loader.readJsonFile(new File("../../../data/HelloWorldProgramOutput.json"));
		Document document = loader.loadJsonIntoDocument(jsobj);
		FileWriter fw = new FileWriter("JSONLoaderDOM.x3d");
		fw.write(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
		fw.close();
		System.err.println("Created JSONLoaderDOM.x3d");

		X3D X3D0 = (X3D)xmlLoader.toX3dModelInstance(document);
		System.err.println("Creating JOHNDON.x3d");
		X3D0.toFileX3D("JOHNDON.x3d");
		System.err.println("Created JOHNDON.x3d");
		System.err.println("Creating JOHNDON.json");
		X3D0.toFileJSON("JOHNDON.json");
		System.err.println("Created JOHNDON.json");
		System.err.println("Creating JOHNDON.java");
		X3D0.toFileJava("JOHNDON.java");
		System.err.println("Created JOHNDON.java");

	}
}
