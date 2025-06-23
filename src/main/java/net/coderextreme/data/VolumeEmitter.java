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
public class VolumeEmitter implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new VolumeEmitter().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/VolumeEmitter.new.java.x3d");
    model.toFileJSON("../data/VolumeEmitter.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("ParticleSystems").setLevel(3))
        .addMeta(new meta().setName("comment").setContent("World of Titania"))
        .addMeta(new meta().setName("created").setContent("Sun, 01 May 2016 01:57:45 GMT"))
        .addMeta(new meta().setName("creator").setContent("holger"))
        .addMeta(new meta().setName("creator").setContent("Holger Seelig"))
        .addMeta(new meta().setName("generator").setContent("Titania V1.4.2, http://titania.create3000.de"))
        .addMeta(new meta().setName("generator").setContent("Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/"))
        .addMeta(new meta().setName("identifier").setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/VolumeEmitter.x3d"))
        .addMeta(new meta().setName("modified").setContent("Mon, 22 Apr 2024 19:55:06 GMT")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("VolumeEmitter")
          .setMetadata(new MetadataSet().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .addValue(new MetadataSet().setName("NavigationInfo").setDEF("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue(new MetadataString().setName("type").setDEF("type").setReference("http://titania.create3000.de").setValue(new MFString0().getArray())))
            .addValue(new MetadataSet().setName("Viewpoint").setDEF("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new MetadataDouble().setName("position").setDEF("position").setReference("http://titania.create3000.de").setValue(new MFDouble1().getArray()))
              .addValue(new MetadataDouble().setName("orientation").setDEF("orientation").setReference("http://titania.create3000.de").setValue(new MFDouble2().getArray()))
              .addValue(new MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation").setReference("http://titania.create3000.de").setValue(new MFDouble3().getArray())))
            .addValue(new MetadataSet().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .addValue(new MetadataSet().setName("previous").setDEF("previous").setReference("http://titania.create3000.de")))))
        .addChild(new Background().setDEF("Gray").setSkyColor(new MFColor4().getArray()))
        .addChild(new OrthoViewpoint().setDescription("OrthoViewpoint").setFieldOfView(new MFFloat5().getArray()))
        .addChild(new Viewpoint().setDescription("Viewpoint").setPosition(new double[] {0,0,8}))
        .addChild(new ParticleSystem().setGeometryType("POINT").setMaxParticles(100000).setParticleLifetime(60).setLifetimeVariation(0.01).setParticleSize(new double[] {0.1,0.1}).setColorKey(new MFFloat6().getArray())
          .setEmitter(new VolumeEmitter().setDirection(new double[] {0,0,0}).setMass(0.01).setSurfaceArea(0.01)
            .setCoord(new Coordinate().setPoint(new MFVec3f7().getArray().append(new MFVec3f8().getArray()))))
          .setAppearance(new Appearance()
            .setPointProperties(new PointProperties().setPointSizeScaleFactor(2).setPointSizeMaxValue(2))))
        .addChild(new ClipPlane().setPlane(new double[] {0,0,1,0.2}))
        .addChild(new ClipPlane().setPlane(new double[] {0,0,-1,0.2}))
        .addChild(new Transform().setDEF("IndexedLineSet")
          .addChild(new Shape()
            .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new MFInt329().getArray()).setCoordIndex(new MFInt3210().getArray())
              .setColor(new Color().setColor(new MFColor11().getArray()))
              .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"EXAMINE"});
  }
}
private class MFDouble1 {
  private org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {0,0,10});
  }
}
private class MFDouble2 {
  private org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {0,0,1,0});
  }
}
private class MFDouble3 {
  private org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {0,0,0});
  }
}
private class MFColor4 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.2,0.2,0.2});
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {-1.5,-1.5,1.5,1.5});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.1,0.4,1});
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0277709,-1,1,2.02777,-1,1,2.02777,1,1,0.0277709,1,1,0.0277709,-1,-1,2.02777,-1,-1,2.02777,1,-1,0.0277709,1,-1,-1.01983,1,0,-1.01983,0.974928,-0.222521,-1.06609,0.974928,-0.217658,-1.11034,0.974928,-0.203283,-1.15062,0.974928,-0.180023,-1.18519,0.974928,-0.148896,-1.21254,0.974928,-0.11126,-1.23146,0.974928,-0.0687627,-1.24113,0.974928,-0.0232598,-1.24113,0.974928,0.0232598,-1.23146,0.974928,0.0687627,-1.21254,0.974928,0.11126,-1.18519,0.974928,0.148896,-1.15062,0.974928,0.180023,-1.11034,0.974928,0.203283,-1.06609,0.974928,0.217658,-1.01983,0.974928,0.222521,-0.973561,0.974928,0.217658,-0.929318,0.974928,0.203283,-0.889031,0.974928,0.180023,-0.85446,0.974928,0.148896,-0.827116,0.974928,0.11126,-0.808195,0.974928,0.0687627,-0.798523,0.974928,0.0232598,-0.798523,0.974928,-0.0232598,-0.808195,0.974928,-0.0687627,-0.827116,0.974928,-0.11126,-0.85446,0.974928,-0.148896,-0.889031,0.974928,-0.180023,-0.929318,0.974928,-0.203283,-0.973561,0.974928,-0.217658,-1.01983,0.900969,-0.433884,-1.11004,0.900969,-0.424402,-1.19631,0.900969,-0.396373,-1.27486,0.900969,-0.351019,-1.34227,0.900969,-0.290325,-1.39558,0.900969,-0.216942,-1.43248,0.900969,-0.134077,-1.45134,0.900969,-0.0453532,-1.45134,0.900969,0.0453532,-1.43248,0.900969,0.134077,-1.39558,0.900969,0.216942,-1.34227,0.900969,0.290325,-1.27486,0.900969,0.351019,-1.19631,0.900969,0.396373,-1.11004,0.900969,0.424402,-1.01983,0.900969,0.433884,-0.929616,0.900969,0.424402,-0.843349,0.900969,0.396373,-0.764795,0.900969,0.351019,-0.697387,0.900969,0.290325,-0.644071,0.900969,0.216942,-0.607177,0.900969,0.134077,-0.588318,0.900969,0.0453532,-0.588318,0.900969,-0.0453532,-0.607177,0.900969,-0.134077,-0.644071,0.900969,-0.216942,-0.697387,0.900969,-0.290325,-0.764795,0.900969,-0.351019,-0.843349,0.900969,-0.396373,-0.929616,0.900969,-0.424402,-1.01983,0.781832,-0.62349,-1.14946,0.781832,-0.609865,-1.27343,0.781832,-0.569586,-1.38631,0.781832,-0.504414,-1.48317,0.781832,-0.417196,-1.55979,0.781832,-0.311745,-1.6128,0.781832,-0.192669,-1.6399,0.781832,-0.0651724,-1.6399,0.781832,0.0651724,-1.6128,0.781832,0.192669,-1.55979,0.781832,0.311745,-1.48317,0.781832,0.417196,-1.38631,0.781832,0.504414,-1.27343,0.781832,0.569586,-1.14946,0.781832,0.609865,-1.01983,0.781832,0.62349,-0.890194,0.781832,0.609865,-0.766229,0.781832,0.569586,-0.653347,0.781832,0.504414,-0.556482,0.781832,0.417196,-0.479867,0.781832,0.311745,-0.426851,0.781832,0.192669,-0.399751,0.781832,0.0651724,-0.399751,0.781832,-0.0651724,-0.426851,0.781832,-0.192669,-0.479867,0.781832,-0.311745,-0.556482,0.781832,-0.417196,-0.653347,0.781832,-0.504414,-0.766229,0.781832,-0.569586,-0.890194,0.781832,-0.609865,-1.01983,0.62349,-0.781832,-1.18238,0.62349,-0.764747,-1.33783,0.62349,-0.714239,-1.47938,0.62349,-0.632515,-1.60084,0.62349,-0.523147,-1.69692,0.62349,-0.390916,-1.7634,0.62349,-0.241599,-1.79738,0.62349,-0.0817236,-1.79738,0.62349,0.0817236,-1.7634,0.62349,0.241599,-1.69692,0.62349,0.390916,-1.60084,0.62349,0.523147,-1.47938,0.62349,0.632515,-1.33783,0.62349,0.714239,-1.18238,0.62349,0.764747,-1.01983,0.62349,0.781832,-0.857273,0.62349,0.764747,-0.701826,0.62349,0.714239,-0.560276,0.62349,0.632515,-0.438811,0.62349,0.523147,-0.342739,0.62349,0.390916,-0.276259,0.62349,0.241599,-0.242277,0.62349,0.0817236,-0.242277,0.62349,-0.0817236,-0.276259,0.62349,-0.241599,-0.342739,0.62349,-0.390916,-0.438811,0.62349,-0.523147,-0.560276,0.62349,-0.632515,-0.701826,0.62349,-0.714239,-0.857273,0.62349,-0.764747,-1.01983,0.433884,-0.900969,-1.20715,0.433884,-0.881281,-1.38629,0.433884,-0.823076,-1.54941,0.433884,-0.728899,-1.68938,0.433884,-0.602866,-1.80009,0.433884,-0.450484,-1.8767,0.433884,-0.278415,-1.91586,0.433884,-0.0941769,-1.91586,0.433884,0.0941769,-1.8767,0.433884,0.278415,-1.80009,0.433884,0.450484,-1.68938,0.433884,0.602866,-1.54941,0.433884,0.728899,-1.38629,0.433884,0.823076,-1.20715,0.433884,0.881281,-1.01983,0.433884,0.900969,-0.832503,0.433884,0.881281,-0.653368,0.433884,0.823076,-0.490249,0.433884,0.728899,-0.350275,0.433884,0.602866,-0.239563,0.433884,0.450484,-0.162953,0.433884,0.278415,-0.123792,0.433884,0.0941769,-0.123792,0.433884,-0.0941769,-0.162953,0.433884,-0.278415,-0.239563,0.433884,-0.450484,-0.350275,0.433884,-0.602866,-0.490249,0.433884,-0.728899,-0.653368,0.433884,-0.823076,-0.832503,0.433884,-0.881281,-1.01983,0.222521,-0.974928,-1.22253,0.222521,-0.953623,-1.41637,0.222521,-0.890641,-1.59288,0.222521,-0.788733,-1.74434,0.222521,-0.652354,-1.86414,0.222521,-0.487464,-1.94704,0.222521,-0.301269,-1.98942,0.222521,-0.101908,-1.98942,0.222521,0.101908,-1.94704,0.222521,0.301269,-1.86414,0.222521,0.487464,-1.74434,0.222521,0.652354,-1.59288,0.222521,0.788733,-1.41637,0.222521,0.890641,-1.22253,0.222521,0.953623,-1.01983,0.222521,0.974928,-0.817126,0.222521,0.953623,-0.623286,0.222521,0.890641,-0.446777,0.222521,0.788733,-0.295313,0.222521,0.652354,-0.175513,0.222521,0.487464,-0.0926139,0.222521,0.301269,-0.0502383,0.222521,0.101908,-0.0502383,0.222521,-0.101908,-0.0926139,0.222521,-0.301269,-0.175513,0.222521,-0.487464,-0.295313,0.222521,-0.652354,-0.446777,0.222521,-0.788733,-0.623286,0.222521,-0.890641,-0.817126,0.222521,-0.953623,-1.01983,6.12323e-17,-1,-1.22774,6.12323e-17,-0.978148,-1.42657,6.12323e-17,-0.913545,-1.60761,6.12323e-17,-0.809017,-1.76297,6.12323e-17,-0.669131,-1.88585,6.12323e-17,-0.5,-1.97089,6.12323e-17,-0.309017,-2.01435,6.12323e-17,-0.104528,-2.01435,6.12323e-17,0.104528,-1.97089,6.12323e-17,0.309017,-1.88585,6.12323e-17,0.5,-1.76297,6.12323e-17,0.669131,-1.60761,6.12323e-17,0.809017,-1.42657,6.12323e-17,0.913545,-1.22774,6.12323e-17,0.978148,-1.01983,6.12323e-17,1,-0.811914,6.12323e-17,0.978148,-0.613089,6.12323e-17,0.913545,-0.43204,6.12323e-17,0.809017,-0.27668,6.12323e-17,0.669131,-0.1538,6.12323e-17,0.5,-0.0687689,6.12323e-17,0.309017,-0.0253035,6.12323e-17,0.104528,-0.0253035,6.12323e-17,-0.104528,-0.0687689,6.12323e-17,-0.309017,-0.1538,6.12323e-17,-0.5,-0.27668,6.12323e-17,-0.669131,-0.43204,6.12323e-17,-0.809017,-0.613089,6.12323e-17,-0.913545,-0.811914,6.12323e-17,-0.978148,-1.01983,-0.222521,-0.974928,-1.22253,-0.222521,-0.953623,-1.41637,-0.222521,-0.890641,-1.59288,-0.222521,-0.788733,-1.74434,-0.222521,-0.652354,-1.86414,-0.222521,-0.487464,-1.94704,-0.222521,-0.301269,-1.98942,-0.222521,-0.101908,-1.98942,-0.222521,0.101908,-1.94704,-0.222521,0.301269,-1.86414,-0.222521,0.487464,-1.74434,-0.222521,0.652354,-1.59288,-0.222521,0.788733,-1.41637,-0.222521,0.890641,-1.22253,-0.222521,0.953623,-1.01983,-0.222521,0.974928,-0.817126,-0.222521,0.953623,-0.623286,-0.222521,0.890641,-0.446777,-0.222521,0.788733,-0.295313,-0.222521,0.652354,-0.175513,-0.222521,0.487464,-0.0926139,-0.222521,0.301269,-0.0502383,-0.222521,0.101908,-0.0502383,-0.222521,-0.101908,-0.0926139,-0.222521,-0.301269,-0.175513,-0.222521,-0.487464,-0.295313,-0.222521,-0.652354,-0.446777,-0.222521,-0.788733,-0.623286,-0.222521,-0.890641,-0.817126,-0.222521,-0.953623,-1.01983,-0.433884,-0.900969,-1.20715,-0.433884,-0.881281,-1.38629,-0.433884,-0.823076,-1.54941,-0.433884,-0.728899,-1.68938,-0.433884,-0.602866,-1.80009,-0.433884,-0.450484,-1.8767,-0.433884,-0.278415,-1.91586,-0.433884,-0.0941769,-1.91586,-0.433884,0.0941769,-1.8767,-0.433884,0.278415,-1.80009,-0.433884,0.450484,-1.68938,-0.433884,0.602866,-1.54941,-0.433884,0.728899,-1.38629,-0.433884,0.823076,-1.20715,-0.433884,0.881281,-1.01983,-0.433884,0.900969,-0.832503,-0.433884,0.881281,-0.653368,-0.433884,0.823076,-0.490249,-0.433884,0.728899,-0.350275,-0.433884,0.602866,-0.239563,-0.433884,0.450484,-0.162953,-0.433884,0.278415,-0.123792,-0.433884,0.0941769,-0.123792,-0.433884,-0.0941769,-0.162953,-0.433884,-0.278415,-0.239563,-0.433884,-0.450484,-0.350275,-0.433884,-0.602866,-0.490249,-0.433884,-0.728899,-0.653368,-0.433884,-0.823076,-0.832503,-0.433884,-0.881281,-1.01983,-0.62349,-0.781832});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-1.18238,-0.62349,-0.764747,-1.33783,-0.62349,-0.714239,-1.47938,-0.62349,-0.632515,-1.60084,-0.62349,-0.523147,-1.69692,-0.62349,-0.390916,-1.7634,-0.62349,-0.241599,-1.79738,-0.62349,-0.0817236,-1.79738,-0.62349,0.0817236,-1.7634,-0.62349,0.241599,-1.69692,-0.62349,0.390916,-1.60084,-0.62349,0.523147,-1.47938,-0.62349,0.632515,-1.33783,-0.62349,0.714239,-1.18238,-0.62349,0.764747,-1.01983,-0.62349,0.781832,-0.857273,-0.62349,0.764747,-0.701826,-0.62349,0.714239,-0.560276,-0.62349,0.632515,-0.438811,-0.62349,0.523147,-0.342739,-0.62349,0.390916,-0.276259,-0.62349,0.241599,-0.242277,-0.62349,0.0817236,-0.242277,-0.62349,-0.0817236,-0.276259,-0.62349,-0.241599,-0.342739,-0.62349,-0.390916,-0.438811,-0.62349,-0.523147,-0.560276,-0.62349,-0.632515,-0.701826,-0.62349,-0.714239,-0.857273,-0.62349,-0.764747,-1.01983,-0.781832,-0.62349,-1.14946,-0.781832,-0.609865,-1.27343,-0.781832,-0.569586,-1.38631,-0.781832,-0.504414,-1.48317,-0.781832,-0.417196,-1.55979,-0.781832,-0.311745,-1.6128,-0.781832,-0.192669,-1.6399,-0.781832,-0.0651724,-1.6399,-0.781832,0.0651724,-1.6128,-0.781832,0.192669,-1.55979,-0.781832,0.311745,-1.48317,-0.781832,0.417196,-1.38631,-0.781832,0.504414,-1.27343,-0.781832,0.569586,-1.14946,-0.781832,0.609865,-1.01983,-0.781832,0.62349,-0.890194,-0.781832,0.609865,-0.766229,-0.781832,0.569586,-0.653347,-0.781832,0.504414,-0.556482,-0.781832,0.417196,-0.479867,-0.781832,0.311745,-0.426851,-0.781832,0.192669,-0.399751,-0.781832,0.0651724,-0.399751,-0.781832,-0.0651724,-0.426851,-0.781832,-0.192669,-0.479867,-0.781832,-0.311745,-0.556482,-0.781832,-0.417196,-0.653347,-0.781832,-0.504414,-0.766229,-0.781832,-0.569586,-0.890194,-0.781832,-0.609865,-1.01983,-0.900969,-0.433884,-1.11004,-0.900969,-0.424402,-1.19631,-0.900969,-0.396373,-1.27486,-0.900969,-0.351019,-1.34227,-0.900969,-0.290325,-1.39558,-0.900969,-0.216942,-1.43248,-0.900969,-0.134077,-1.45134,-0.900969,-0.0453532,-1.45134,-0.900969,0.0453532,-1.43248,-0.900969,0.134077,-1.39558,-0.900969,0.216942,-1.34227,-0.900969,0.290325,-1.27486,-0.900969,0.351019,-1.19631,-0.900969,0.396373,-1.11004,-0.900969,0.424402,-1.01983,-0.900969,0.433884,-0.929616,-0.900969,0.424402,-0.843349,-0.900969,0.396373,-0.764795,-0.900969,0.351019,-0.697387,-0.900969,0.290325,-0.644071,-0.900969,0.216942,-0.607177,-0.900969,0.134077,-0.588318,-0.900969,0.0453532,-0.588318,-0.900969,-0.0453532,-0.607177,-0.900969,-0.134077,-0.644071,-0.900969,-0.216942,-0.697387,-0.900969,-0.290325,-0.764795,-0.900969,-0.351019,-0.843349,-0.900969,-0.396373,-0.929616,-0.900969,-0.424402,-1.01983,-0.974928,-0.222521,-1.06609,-0.974928,-0.217658,-1.11034,-0.974928,-0.203283,-1.15062,-0.974928,-0.180023,-1.18519,-0.974928,-0.148896,-1.21254,-0.974928,-0.11126,-1.23146,-0.974928,-0.0687627,-1.24113,-0.974928,-0.0232598,-1.24113,-0.974928,0.0232598,-1.23146,-0.974928,0.0687627,-1.21254,-0.974928,0.11126,-1.18519,-0.974928,0.148896,-1.15062,-0.974928,0.180023,-1.11034,-0.974928,0.203283,-1.06609,-0.974928,0.217658,-1.01983,-0.974928,0.222521,-0.973561,-0.974928,0.217658,-0.929318,-0.974928,0.203283,-0.889031,-0.974928,0.180023,-0.85446,-0.974928,0.148896,-0.827116,-0.974928,0.11126,-0.808195,-0.974928,0.0687627,-0.798523,-0.974928,0.0232598,-0.798523,-0.974928,-0.0232598,-0.808195,-0.974928,-0.0687627,-0.827116,-0.974928,-0.11126,-0.85446,-0.974928,-0.148896,-0.889031,-0.974928,-0.180023,-0.929318,-0.974928,-0.203283,-0.973561,-0.974928,-0.217658,-1.01983,-1,0});
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,2,3,-1,4,5,-1});
  }
}
private class MFColor11 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1,0,0,0,1,0,0,0,1});
  }
}
private class MFVec3f12 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1});
  }
}
}
