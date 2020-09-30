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
public class flowers2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new flowers2().initialize().toFileJSON("../data/flowers2.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addMeta(new meta().setName("title").setContent("flowers2.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("transcriber").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("23 January 2005"))
        .addMeta(new meta().setName("modified").setContent("21 March 2018"))
        .addMeta(new meta().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"))
        .addMeta(new meta().setName("generator").setContent("manually written"))
        .addMeta(new meta().setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Two mathematical orbitals").setPosition(new float[] {0f,0f,50f}))
        .addChild(new Group().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new DirectionalLight().setDirection(new float[] {1f,1f,1f}))
          .addChild(new ProtoDeclare().setName("orbit")
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField(new field().setType("SFColor").setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType("SFColor").setName("specularColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType("SFFloat").setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody(new ProtoBody()
              .addChild(new Group().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
                .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(16d).setLoop(true))
                .addChild(new OrientationInterpolator().setDEF("OrbitPath").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat0().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation1().getArray())))
                .addChild(new Transform().setDEF("OrbitTransform").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
                  .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect(new connect().setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect(new connect().setNodeField("transparency").setProtoField("transparency")))))
                    .addComments(new CommentsBlock("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"))
                    .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt322().getArray())).setDEF("Orbit")
                      .setCoord(new Coordinate().setDEF("OrbitCoordinates").setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f3().getArray()))))))
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild(new ROUTE().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction"))
                .addX3DScript(new X3DScript().setDEF("OrbitScript")
                  .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
                  .addField(new field().setType("MFVec3f").setName("coordinates").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType("MFInt32").setName("coordIndexes").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType("SFFloat").setName("e").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFFloat").setName("f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFFloat").setName("g").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFFloat").setName("h").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType("SFInt32").setName("resolution").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))))))
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
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,3.14f,1f,0f,0f,6.28f});
  }
}
protected class MFInt322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,1f,0f,1f,0f,1f,0f,0f});
  }
}
}
