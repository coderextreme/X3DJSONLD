import net.coderextreme.X3DJSONLD;
import org.w3c.dom.Document;
import javax.json.JsonObject;
import java.io.File;
import org.web3d.x3d.jsail.X3DLoaderDOM;
import org.web3d.x3d.jsail.Core.X3DObject;

class Java {
	public static void main(String [] args) throws Exception {
		X3DJSONLD loader = new X3DJSONLD();
		JsonObject jsobj = loader.readJsonFile(new File("./examples/HelloWorldProgramOutput.json"));
		Document document = loader.loadJsonIntoDocument(jsobj);
		System.out.print(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
		X3DLoaderDOM xmlLoader = new X3DLoaderDOM();
		X3DObject X3D0 = (X3DObject)xmlLoader.toX3dObjectTree(document);
		X3D0.toFileX3D("./examples/Java.x3d");
	}
}
