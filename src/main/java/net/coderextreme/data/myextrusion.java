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
public class myextrusion implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new myextrusion().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/myextrusion.new.java.x3d");
    model.toFileJSON("../data/myextrusion.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John W Carlson")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("December 13 2015")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("November 9 2024")))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("myextrusion.x3d")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("beginnings of a force directed graph in 3D")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"))))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new Extrusion().setDEF(new SFString("myextrusion")).setSpine(new MFVec3f0().getArray()).setCreaseAngle(0.785f ).setCrossSection(new MFVec2f1().getArray()))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f ,1f ,0f }))))
          .addChild(new TimeSensor().setDEF(new SFString("TourTime")).setLoop(true))
          .addChild(new Script().setDEF(new SFString("MoveCylinder"))
            .addField(new field().setType("SFTime").setName(new SFString("set_cycle")).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFVec3f").setName(new SFString("spine")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("-50 -50 0 50 50 0")))
            .setSourceCode("ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"                        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = endA;\n"+
"			tmpspine[1] = endB;\n"+
"                        spine = tmpspine;\n"+
"                }"))
          .addChild(new ROUTE().setFromNode(new SFString("TourTime")).setFromField(new SFString("cycleTime")).setToNode(new SFString("MoveCylinder")).setToField(new SFString("set_cycle")))
          .addChild(new ROUTE().setFromNode(new SFString("MoveCylinder")).setFromField(new SFString("spine_changed")).setToNode(new SFString("myextrusion")).setToField(new SFString("set_spine")))));
    return X3D0;
    }
private class MFVec3f0 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-50f ,-50f ,0f ,50f ,50f ,0f });
  }
}
private class MFVec2f1 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
}
