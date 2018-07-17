import net.coderextreme.X3DJSONLD;
import org.w3c.dom.Document;
import javax.json.JsonObject;
import java.io.File;
import org.web3d.x3d.jsail.X3DLoaderObject;
import org.web3d.x3d.jsail.Core.X3DObject;

class Java {
	public static void main(String [] args) throws Exception {
		X3DJSONLD loader = new X3DJSONLD();
		JsonObject jsobj = loader.readJsonFile(new File("./nashorn/examples/HelloWorldProgramOutput.json"));
		Document document = loader.loadJsonIntoDocument(jsobj);
		System.out.print(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
		X3DLoaderObject xmlLoader = new X3DLoaderObject();
		X3DObject X3D0 = (X3DObject)xmlLoader.toX3dObjectTree(document);
		X3D0.toFileX3D("./nashorn/examples/Java.x3d");
	}
}
