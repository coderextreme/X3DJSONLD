package net.coderextreme.personal;
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
    model.toFileX3D("../personal/flowers2.new.java.x3d");
    model.toFileJSON("../personal/flowers2.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addMeta(new meta().setName("title").setContent("flowers2.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("transcriber").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("23 January 2005"))
        .addMeta(new meta().setName("modified").setContent("21 March 2018"))
        .addMeta(new meta().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/flowers2.x3d"))
        .addMeta(new meta().setName("generator").setContent("manually written"))
        .addMeta(new meta().setName("license").setContent("https://coderextreme.net/X3DJSONLD/LICENSE")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Two mathematical orbitals").setPosition(new double[] {0,0,50}))
        .addChild(new Group()
          .addChild(new DirectionalLight().setDirection(new double[] {1,1,1}))
          .addChild(new ProtoDeclare().setName("orbit")
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField(new field().setType("SFColor").setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType("SFColor").setName("specularColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType("SFFloat").setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody(new ProtoBody()
              .addChild(new Group()
                .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(16).setLoop(true))
                .addChild(new OrientationInterpolator().setDEF("OrbitPath").setKey(new MFFloat0().getArray()).setKeyValue(new MFRotation1().getArray()))
                .addChild(new Transform().setDEF("OrbitTransform")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect(new connect().setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect(new connect().setNodeField("transparency").setProtoField("transparency")))))
                    .addComments("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>")
                    .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(new MFInt322().getArray()).setDEF("Orbit")
                      .setCoord(new Coordinate().setDEF("OrbitCoordinates").setPoint(new MFVec3f3().getArray())))))
                .addChild(new Script().setDEF("OrbitScript")
                  .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
                  .addField(new field().setType("MFVec3f").setName("coordinates").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                  .addField(new field().setType("MFInt32").setName("coordIndexes").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                  .addField(new field().setType("SFFloat").setName("e").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFFloat").setName("f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFFloat").setName("g").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFFloat").setName("h").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFInt32").setName("resolution").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))
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
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild(new ROUTE().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction")))))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("orbit"))
          .addChild(ProtoInstance1 = new ProtoInstance().setName("orbit"))))      ;
ProtoInstance0
            .addFieldValue(new fieldValue().setName("translation").setValue("-8 0 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("specularColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("transparency").setValue("0.75"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("translation").setValue("8 0 0"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("specularColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("transparency").setValue("0.5"));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation1 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,0,1,0,0,3.14,1,0,0,6.28});
  }
}
private class MFInt322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1});
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,1,0,1,0,1,0,0});
  }
}
}
