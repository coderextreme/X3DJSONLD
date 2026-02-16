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
public class flowers2 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new flowers2().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/flowers2.new.java.x3d");
    model.toFileJSON("../data/flowers2.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("Scripting")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("flowers2.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("23 January 2005")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("9 November 2024")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manually written")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/license.html"))))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription(new SFString("Two mathematical orbitals")).setPosition(new float[] {0f ,0f ,50f }))
        .addChild(new Group()
          .addChild(new DirectionalLight().setDirection(new float[] {1f ,1f ,1f }))
          .addChild(new ProtoDeclare().setName(new SFString("orbit"))
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType("SFVec3f").setName(new SFString("translation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("-8 0 0")))
              .addField(new field().setType("SFColor").setName(new SFString("diffuseColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("1 0.5 0")))
              .addField(new field().setType("SFColor").setName(new SFString("specularColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("1 0.5 0")))
              .addField(new field().setType("SFFloat").setName(new SFString("transparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.75"))))
            .setProtoBody(new ProtoBody()
              .addChild(new Group()
                .addChild(new TimeSensor().setDEF(new SFString("Clock")).setCycleInterval(16d).setLoop(true))
                .addChild(new OrientationInterpolator().setDEF(new SFString("OrbitPath")).setKey(new MFFloat0().getArray()).setKeyValue(new MFRotation1().getArray()))
                .addChild(new Transform().setDEF(new SFString("OrbitTransform"))
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("translation"))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField(new SFString("diffuseColor")).setProtoField(new SFString("diffuseColor")))
                          .addConnect(new connect().setNodeField(new SFString("specularColor")).setProtoField(new SFString("specularColor")))
                          .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("transparency"))))))
                    .addComments(new CommentsBlock("<IndexedFaceSet DEF=\"Orbit\">"))
                    .addComments(new CommentsBlock("<Coordinate DEF=\"OrbitCoordinates\"/>"))
                    .addComments(new CommentsBlock("</IndexedFaceSet>"))
                    .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(new MFInt322().getArray()).setDEF(new SFString("Orbit"))
                      .setCoord(new Coordinate().setDEF(new SFString("OrbitCoordinates")).setPoint(new MFVec3f3().getArray())))))
                .addChild(new Script().setDEF(new SFString("OrbitScript"))
                  .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                  .addField(new field().setType("MFVec3f").setName(new SFString("coordinates")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                  .addField(new field().setType("MFInt32").setName(new SFString("coordIndexes")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                  .addField(new field().setType("SFFloat").setName(new SFString("e")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
                  .addField(new field().setType("SFFloat").setName(new SFString("f")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
                  .addField(new field().setType("SFFloat").setName(new SFString("g")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
                  .addField(new field().setType("SFFloat").setName(new SFString("h")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
                  .addField(new field().setType("SFInt32").setName(new SFString("resolution")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("50")))
                  .setSourceCode("ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}"))
                .addChild(new ROUTE().setFromNode(new SFString("OrbitScript")).setFromField(new SFString("coordIndexes")).setToNode(new SFString("Orbit")).setToField(new SFString("set_coordIndex")))
                .addChild(new ROUTE().setFromNode(new SFString("OrbitScript")).setFromField(new SFString("coordinates")).setToNode(new SFString("OrbitCoordinates")).setToField(new SFString("point")))
                .addChild(new ROUTE().setFromNode(new SFString("Clock")).setFromField(new SFString("fraction_changed")).setToNode(new SFString("OrbitScript")).setToField(new SFString("set_fraction")))
                .addChild(new ROUTE().setFromNode(new SFString("OrbitPath")).setFromField(new SFString("value_changed")).setToNode(new SFString("OrbitTransform")).setToField(new SFString("rotation")))
                .addChild(new ROUTE().setFromNode(new SFString("Clock")).setFromField(new SFString("fraction_changed")).setToNode(new SFString("OrbitPath")).setToField(new SFString("set_fraction"))))))
          .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("orbit")))
          .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("orbit")))));
ProtoInstance0
            .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("-8 0 0")));
ProtoInstance0
            .addFieldValue(new fieldValue().setName(new SFString("diffuseColor")).setValue(new SFString("1 0.5 0")));
ProtoInstance0
            .addFieldValue(new fieldValue().setName(new SFString("specularColor")).setValue(new SFString("1 0.5 0")));
ProtoInstance0
            .addFieldValue(new fieldValue().setName(new SFString("transparency")).setValue(new SFString("0.75")));
ProtoInstance1
            .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("8 0 0")));
ProtoInstance1
            .addFieldValue(new fieldValue().setName(new SFString("diffuseColor")).setValue(new SFString("0 0.5 1")));
ProtoInstance1
            .addFieldValue(new fieldValue().setName(new SFString("specularColor")).setValue(new SFString("0 0.5 1")));
ProtoInstance1
            .addFieldValue(new fieldValue().setName(new SFString("transparency")).setValue(new SFString("0.5")));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation1 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,3.14f ,1f ,0f ,0f ,6.28f });
  }
}
private class MFInt322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1});
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f });
  }
}
}
