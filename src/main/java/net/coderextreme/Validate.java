import org.w3c.dom.Document;
import javax.json.JsonObject;
import java.io.File;
import org.web3d.x3d.jsail.X3DLoaderDOM;
import org.web3d.x3d.jsail.Core.X3D;

public class Validate {
	public static void main(String [] args) throws Exception {
		for (int i = 0; i < args.length; i++) {
			try {
				System.out.println("Validating "+args[i]);
				X3DJSONLD loader = new X3DJSONLD();
				X3DLoaderDOM xmlLoader = new X3DLoaderDOM();

				JsonObject jsobj = loader.readJsonFile(new File(args[i]));
				Document document = loader.loadJsonIntoDocument(jsobj);

				X3D X3D0 = (X3D)xmlLoader.toX3dModelInstance(document);
				String validationResults = X3D0.validationReport();
				if (validationResults.startsWith("\n")) {
					System.out.println();
					System.out.println(validationResults.trim());
				}
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
}
