package net.coderextreme.data;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class flower3 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new flower3().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/flower3.new.java.x3d");
    model.toFileJSON("../data/flower3.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("flower3.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manual")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("a flower"))))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new DirectionalLight().setDirection(new float[] {0f ,-0.8f ,-0.2f }).setIntensity(0.5f ))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setDescription(new SFString("One mathematical orbital")).setPosition(new float[] {0f ,0f ,50f }))
        .addChild(new Transform().setDEF(new SFString("OrbitTransform")).setTranslation(new float[] {8f ,0f ,0f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0.5f ,1f }).setSpecularColor(new float[] {0f ,0.5f ,1f })))
            .setGeometry(new IndexedFaceSet().setConvex(false).setDEF(new SFString("Orbit"))
              .setCoord(new Coordinate().setDEF(new SFString("OrbitCoordinates"))))))
        .addChild(new Script().setDEF(new SFString("OrbitScript"))
          .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("MFVec3f").setName(new SFString("coordinates")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("MFInt32").setName(new SFString("coordIndexes")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addComments(new CommentsBlock("<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("<field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("<field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("<field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/>"))
          .addComments(new CommentsBlock("<field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/>"))
          .addComments(new CommentsBlock("<field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/>"))
          .addComments(new CommentsBlock("<field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>"))
          .setSourceCode("ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = new MFInt32();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution-1; i++) {\n"+
"     	for (var j = 0; j < resolution-1; j++) {\n"+
"	     localci[arrIndex++] = i*resolution+j;\n"+
"	     localci[arrIndex++] = i*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j;\n"+
"	     localci[arrIndex++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     var arrIndex = 0;\n"+
"     for (var  i = 0; i < resolution; i++) {\n"+
"     	for (var  j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[arrIndex++] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	generateCoordinates(resolution);\n"+
"}"))
        .addChild(new TimeSensor().setDEF(new SFString("Clock")).setCycleInterval(16d).setLoop(true))
        .addChild(new ROUTE().setFromNode(new SFString("OrbitScript")).setFromField(new SFString("coordIndexes")).setToNode(new SFString("Orbit")).setToField(new SFString("set_coordIndex")))
        .addChild(new ROUTE().setFromNode(new SFString("OrbitScript")).setFromField(new SFString("coordinates")).setToNode(new SFString("OrbitCoordinates")).setToField(new SFString("point")))
        .addChild(new ROUTE().setFromNode(new SFString("Clock")).setFromField(new SFString("fraction_changed")).setToNode(new SFString("OrbitScript")).setToField(new SFString("set_fraction"))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,1f ,1f });
  }
}
}
