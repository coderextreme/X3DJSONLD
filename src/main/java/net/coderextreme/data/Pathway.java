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
public class Pathway {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Pathway().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/Pathway.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Pathway.x3d"))
        .addMeta(new meta().setName("description").setContent("Pathway for HAnim scene Winter and Spring."))
        .addMeta(new meta().setName("creator").setContent("Carol McDonald"))
        .addMeta(new meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("27 May 2023"))
        .addMeta(new meta().setName("modified").setContent("27 May 2023"))
        .addMeta(new meta().setName("Image").setContent("images/PathwayX3domOriginal.png"))
        .addMeta(new meta().setName("TODO").setContent("add viewpoints"))
        .addMeta(new meta().setName("TODO").setContent("DEF/USE for all duplicated nodes to ensure consistency"))
        .addMeta(new meta().setName("reference").setContent("originals/pathway.x3dv"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/Pathway.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Pathway.x3d"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt320().getArray()).setCoordIndex(new MFInt321().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt323().getArray()).setCoordIndex(new MFInt324().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt326().getArray()).setCoordIndex(new MFInt327().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt329().getArray()).setCoordIndex(new MFInt3210().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3212().getArray()).setCoordIndex(new MFInt3213().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3215().getArray()).setCoordIndex(new MFInt3216().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3218().getArray()).setCoordIndex(new MFInt3219().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3221().getArray()).setCoordIndex(new MFInt3222().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3224().getArray()).setCoordIndex(new MFInt3225().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3227().getArray()).setCoordIndex(new MFInt3228().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3230().getArray()).setCoordIndex(new MFInt3231().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3233().getArray()).setCoordIndex(new MFInt3234().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3236().getArray()).setCoordIndex(new MFInt3237().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3239().getArray()).setCoordIndex(new MFInt3240().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3242().getArray()).setCoordIndex(new MFInt3243().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3245().getArray()).setCoordIndex(new MFInt3246().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3248().getArray()).setCoordIndex(new MFInt3249().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3251().getArray()).setCoordIndex(new MFInt3252().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3254().getArray()).setCoordIndex(new MFInt3255().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3257().getArray()).setCoordIndex(new MFInt3258().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3260().getArray()).setCoordIndex(new MFInt3261().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3263().getArray()).setCoordIndex(new MFInt3264().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3266().getArray()).setCoordIndex(new MFInt3267().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3269().getArray()).setCoordIndex(new MFInt3270().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3272().getArray()).setCoordIndex(new MFInt3273().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3275().getArray()).setCoordIndex(new MFInt3276().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3278().getArray()).setCoordIndex(new MFInt3279().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3281().getArray()).setCoordIndex(new MFInt3282().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3284().getArray()).setCoordIndex(new MFInt3285().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3287().getArray()).setCoordIndex(new MFInt3288().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3290().getArray()).setCoordIndex(new MFInt3291().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3293().getArray()).setCoordIndex(new MFInt3294().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3296().getArray()).setCoordIndex(new MFInt3297().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3299().getArray()).setCoordIndex(new MFInt32100().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32102().getArray()).setCoordIndex(new MFInt32103().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32105().getArray()).setCoordIndex(new MFInt32106().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32108().getArray()).setCoordIndex(new MFInt32109().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32111().getArray()).setCoordIndex(new MFInt32112().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32114().getArray()).setCoordIndex(new MFInt32115().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32117().getArray()).setCoordIndex(new MFInt32118().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32120().getArray()).setCoordIndex(new MFInt32121().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32123().getArray()).setCoordIndex(new MFInt32124().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32126().getArray()).setCoordIndex(new MFInt32127().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32129().getArray()).setCoordIndex(new MFInt32130().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f131().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32132().getArray()).setCoordIndex(new MFInt32133().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32135().getArray()).setCoordIndex(new MFInt32136().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32138().getArray()).setCoordIndex(new MFInt32139().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32141().getArray()).setCoordIndex(new MFInt32142().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32144().getArray()).setCoordIndex(new MFInt32145().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32147().getArray()).setCoordIndex(new MFInt32148().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32150().getArray()).setCoordIndex(new MFInt32151().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32153().getArray()).setCoordIndex(new MFInt32154().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f155().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32156().getArray()).setCoordIndex(new MFInt32157().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32159().getArray()).setCoordIndex(new MFInt32160().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32162().getArray()).setCoordIndex(new MFInt32163().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32165().getArray()).setCoordIndex(new MFInt32166().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f167().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32168().getArray()).setCoordIndex(new MFInt32169().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32171().getArray()).setCoordIndex(new MFInt32172().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f173().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32174().getArray()).setCoordIndex(new MFInt32175().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32177().getArray()).setCoordIndex(new MFInt32178().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f179().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32180().getArray()).setCoordIndex(new MFInt32181().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32183().getArray()).setCoordIndex(new MFInt32184().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f185().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32186().getArray()).setCoordIndex(new MFInt32187().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32189().getArray()).setCoordIndex(new MFInt32190().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f191().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32192().getArray()).setCoordIndex(new MFInt32193().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32195().getArray()).setCoordIndex(new MFInt32196().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32198().getArray()).setCoordIndex(new MFInt32199().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32201().getArray()).setCoordIndex(new MFInt32202().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f203().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32204().getArray()).setCoordIndex(new MFInt32205().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32207().getArray()).setCoordIndex(new MFInt32208().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32210().getArray()).setCoordIndex(new MFInt32211().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32213().getArray()).setCoordIndex(new MFInt32214().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f215().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32216().getArray()).setCoordIndex(new MFInt32217().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32219().getArray()).setCoordIndex(new MFInt32220().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32222().getArray()).setCoordIndex(new MFInt32223().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32225().getArray()).setCoordIndex(new MFInt32226().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f227().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32228().getArray()).setCoordIndex(new MFInt32229().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32231().getArray()).setCoordIndex(new MFInt32232().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32234().getArray()).setCoordIndex(new MFInt32235().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32237().getArray()).setCoordIndex(new MFInt32238().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32240().getArray()).setCoordIndex(new MFInt32241().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32243().getArray()).setCoordIndex(new MFInt32244().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32246().getArray()).setCoordIndex(new MFInt32247().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32249().getArray()).setCoordIndex(new MFInt32250().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32252().getArray()).setCoordIndex(new MFInt32253().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32255().getArray()).setCoordIndex(new MFInt32256().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f257().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32258().getArray()).setCoordIndex(new MFInt32259().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32261().getArray()).setCoordIndex(new MFInt32262().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32264().getArray()).setCoordIndex(new MFInt32265().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32267().getArray()).setCoordIndex(new MFInt32268().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f269().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32270().getArray()).setCoordIndex(new MFInt32271().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32273().getArray()).setCoordIndex(new MFInt32274().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32276().getArray()).setCoordIndex(new MFInt32277().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32279().getArray()).setCoordIndex(new MFInt32280().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f281().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32282().getArray()).setCoordIndex(new MFInt32283().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32285().getArray()).setCoordIndex(new MFInt32286().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f287().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32288().getArray()).setCoordIndex(new MFInt32289().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32291().getArray()).setCoordIndex(new MFInt32292().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f293().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32294().getArray()).setCoordIndex(new MFInt32295().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32297().getArray()).setCoordIndex(new MFInt32298().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f299().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32300().getArray()).setCoordIndex(new MFInt32301().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32303().getArray()).setCoordIndex(new MFInt32304().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32306().getArray()).setCoordIndex(new MFInt32307().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32309().getArray()).setCoordIndex(new MFInt32310().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f311().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32312().getArray()).setCoordIndex(new MFInt32313().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32315().getArray()).setCoordIndex(new MFInt32316().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f317().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32318().getArray()).setCoordIndex(new MFInt32319().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32321().getArray()).setCoordIndex(new MFInt32322().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f323().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32324().getArray()).setCoordIndex(new MFInt32325().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32327().getArray()).setCoordIndex(new MFInt32328().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32330().getArray()).setCoordIndex(new MFInt32331().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f332().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32333().getArray()).setCoordIndex(new MFInt32334().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32336().getArray()).setCoordIndex(new MFInt32337().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32339().getArray()).setCoordIndex(new MFInt32340().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32342().getArray()).setCoordIndex(new MFInt32343().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f344().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32345().getArray()).setCoordIndex(new MFInt32346().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32348().getArray()).setCoordIndex(new MFInt32349().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f350().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32351().getArray()).setCoordIndex(new MFInt32352().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32354().getArray()).setCoordIndex(new MFInt32355().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32357().getArray()).setCoordIndex(new MFInt32358().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32360().getArray()).setCoordIndex(new MFInt32361().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f362().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32363().getArray()).setCoordIndex(new MFInt32364().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32366().getArray()).setCoordIndex(new MFInt32367().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32369().getArray()).setCoordIndex(new MFInt32370().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32372().getArray()).setCoordIndex(new MFInt32373().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f374().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32375().getArray()).setCoordIndex(new MFInt32376().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32378().getArray()).setCoordIndex(new MFInt32379().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32381().getArray()).setCoordIndex(new MFInt32382().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32384().getArray()).setCoordIndex(new MFInt32385().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f386().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32387().getArray()).setCoordIndex(new MFInt32388().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32390().getArray()).setCoordIndex(new MFInt32391().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32393().getArray()).setCoordIndex(new MFInt32394().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32396().getArray()).setCoordIndex(new MFInt32397().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32399().getArray()).setCoordIndex(new MFInt32400().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f401().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32402().getArray()).setCoordIndex(new MFInt32403().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f404().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32405().getArray()).setCoordIndex(new MFInt32406().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f407().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32408().getArray()).setCoordIndex(new MFInt32409().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f410().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32411().getArray()).setCoordIndex(new MFInt32412().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f413().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32414().getArray()).setCoordIndex(new MFInt32415().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32417().getArray()).setCoordIndex(new MFInt32418().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f419().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32420().getArray()).setCoordIndex(new MFInt32421().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f422().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32423().getArray()).setCoordIndex(new MFInt32424().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f425().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32426().getArray()).setCoordIndex(new MFInt32427().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32429().getArray()).setCoordIndex(new MFInt32430().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f431().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32432().getArray()).setCoordIndex(new MFInt32433().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f434().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32435().getArray()).setCoordIndex(new MFInt32436().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f437().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32438().getArray()).setCoordIndex(new MFInt32439().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32441().getArray()).setCoordIndex(new MFInt32442().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f443().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32444().getArray()).setCoordIndex(new MFInt32445().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32447().getArray()).setCoordIndex(new MFInt32448().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32450().getArray()).setCoordIndex(new MFInt32451().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32453().getArray()).setCoordIndex(new MFInt32454().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f455().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32456().getArray()).setCoordIndex(new MFInt32457().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32459().getArray()).setCoordIndex(new MFInt32460().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f461().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32462().getArray()).setCoordIndex(new MFInt32463().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f464().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32465().getArray()).setCoordIndex(new MFInt32466().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f467().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32468().getArray()).setCoordIndex(new MFInt32469().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f470().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32471().getArray()).setCoordIndex(new MFInt32472().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f473().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32474().getArray()).setCoordIndex(new MFInt32475().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32477().getArray()).setCoordIndex(new MFInt32478().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f479().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32480().getArray()).setCoordIndex(new MFInt32481().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f482().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32483().getArray()).setCoordIndex(new MFInt32484().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f485().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32486().getArray()).setCoordIndex(new MFInt32487().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32489().getArray()).setCoordIndex(new MFInt32490().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f491().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32492().getArray()).setCoordIndex(new MFInt32493().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32495().getArray()).setCoordIndex(new MFInt32496().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f497().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32498().getArray()).setCoordIndex(new MFInt32499().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f500().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32501().getArray()).setCoordIndex(new MFInt32502().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f503().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32504().getArray()).setCoordIndex(new MFInt32505().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32507().getArray()).setCoordIndex(new MFInt32508().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f509().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32510().getArray()).setCoordIndex(new MFInt32511().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f512().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32513().getArray()).setCoordIndex(new MFInt32514().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f515().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32516().getArray()).setCoordIndex(new MFInt32517().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f518().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32519().getArray()).setCoordIndex(new MFInt32520().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f521().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32522().getArray()).setCoordIndex(new MFInt32523().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f524().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32525().getArray()).setCoordIndex(new MFInt32526().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f527().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32528().getArray()).setCoordIndex(new MFInt32529().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f530().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32531().getArray()).setCoordIndex(new MFInt32532().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f533().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32534().getArray()).setCoordIndex(new MFInt32535().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f536().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32537().getArray()).setCoordIndex(new MFInt32538().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f539().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32540().getArray()).setCoordIndex(new MFInt32541().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f542().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32543().getArray()).setCoordIndex(new MFInt32544().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f545().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32546().getArray()).setCoordIndex(new MFInt32547().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f548().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32549().getArray()).setCoordIndex(new MFInt32550().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f551().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32552().getArray()).setCoordIndex(new MFInt32553().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f554().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32555().getArray()).setCoordIndex(new MFInt32556().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f557().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32558().getArray()).setCoordIndex(new MFInt32559().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f560().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32561().getArray()).setCoordIndex(new MFInt32562().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f563().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32564().getArray()).setCoordIndex(new MFInt32565().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f566().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32567().getArray()).setCoordIndex(new MFInt32568().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f569().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32570().getArray()).setCoordIndex(new MFInt32571().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f572().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32573().getArray()).setCoordIndex(new MFInt32574().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f575().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32576().getArray()).setCoordIndex(new MFInt32577().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f578().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32579().getArray()).setCoordIndex(new MFInt32580().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f581().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32582().getArray()).setCoordIndex(new MFInt32583().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f584().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32585().getArray()).setCoordIndex(new MFInt32586().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f587().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32588().getArray()).setCoordIndex(new MFInt32589().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f590().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32591().getArray()).setCoordIndex(new MFInt32592().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f593().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32594().getArray()).setCoordIndex(new MFInt32595().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f596().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32597().getArray()).setCoordIndex(new MFInt32598().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f599().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32600().getArray()).setCoordIndex(new MFInt32601().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f602().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32603().getArray()).setCoordIndex(new MFInt32604().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f605().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32606().getArray()).setCoordIndex(new MFInt32607().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f608().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32609().getArray()).setCoordIndex(new MFInt32610().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f611().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32612().getArray()).setCoordIndex(new MFInt32613().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f614().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32615().getArray()).setCoordIndex(new MFInt32616().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f617().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32618().getArray()).setCoordIndex(new MFInt32619().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f620().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32621().getArray()).setCoordIndex(new MFInt32622().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f623().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32624().getArray()).setCoordIndex(new MFInt32625().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f626().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32627().getArray()).setCoordIndex(new MFInt32628().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f629().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32630().getArray()).setCoordIndex(new MFInt32631().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f632().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32633().getArray()).setCoordIndex(new MFInt32634().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f635().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32636().getArray()).setCoordIndex(new MFInt32637().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f638().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32639().getArray()).setCoordIndex(new MFInt32640().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f641().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32642().getArray()).setCoordIndex(new MFInt32643().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f644().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32645().getArray()).setCoordIndex(new MFInt32646().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f647().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32648().getArray()).setCoordIndex(new MFInt32649().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f650().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32651().getArray()).setCoordIndex(new MFInt32652().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f653().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32654().getArray()).setCoordIndex(new MFInt32655().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f656().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32657().getArray()).setCoordIndex(new MFInt32658().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f659().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32660().getArray()).setCoordIndex(new MFInt32661().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f662().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32663().getArray()).setCoordIndex(new MFInt32664().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f665().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32666().getArray()).setCoordIndex(new MFInt32667().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f668().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32669().getArray()).setCoordIndex(new MFInt32670().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f671().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32672().getArray()).setCoordIndex(new MFInt32673().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f674().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32675().getArray()).setCoordIndex(new MFInt32676().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f677().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32678().getArray()).setCoordIndex(new MFInt32679().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f680().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32681().getArray()).setCoordIndex(new MFInt32682().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f683().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32684().getArray()).setCoordIndex(new MFInt32685().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f686().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32687().getArray()).setCoordIndex(new MFInt32688().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f689().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32690().getArray()).setCoordIndex(new MFInt32691().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f692().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32693().getArray()).setCoordIndex(new MFInt32694().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f695().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32696().getArray()).setCoordIndex(new MFInt32697().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f698().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32699().getArray()).setCoordIndex(new MFInt32700().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f701().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32702().getArray()).setCoordIndex(new MFInt32703().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f704().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32705().getArray()).setCoordIndex(new MFInt32706().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f707().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32708().getArray()).setCoordIndex(new MFInt32709().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f710().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32711().getArray()).setCoordIndex(new MFInt32712().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f713().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32714().getArray()).setCoordIndex(new MFInt32715().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f716().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32717().getArray()).setCoordIndex(new MFInt32718().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f719().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32720().getArray()).setCoordIndex(new MFInt32721().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f722().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32723().getArray()).setCoordIndex(new MFInt32724().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f725().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32726().getArray()).setCoordIndex(new MFInt32727().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f728().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32729().getArray()).setCoordIndex(new MFInt32730().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f731().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32732().getArray()).setCoordIndex(new MFInt32733().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f734().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32735().getArray()).setCoordIndex(new MFInt32736().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f737().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32738().getArray()).setCoordIndex(new MFInt32739().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f740().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32741().getArray()).setCoordIndex(new MFInt32742().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f743().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32744().getArray()).setCoordIndex(new MFInt32745().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f746().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32747().getArray()).setCoordIndex(new MFInt32748().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f749().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32750().getArray()).setCoordIndex(new MFInt32751().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f752().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32753().getArray()).setCoordIndex(new MFInt32754().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f755().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32756().getArray()).setCoordIndex(new MFInt32757().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f758().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32759().getArray()).setCoordIndex(new MFInt32760().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f761().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32762().getArray()).setCoordIndex(new MFInt32763().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f764().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32765().getArray()).setCoordIndex(new MFInt32766().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f767().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32768().getArray()).setCoordIndex(new MFInt32769().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f770().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32771().getArray()).setCoordIndex(new MFInt32772().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f773().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32774().getArray()).setCoordIndex(new MFInt32775().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f776().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32777().getArray()).setCoordIndex(new MFInt32778().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f779().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32780().getArray()).setCoordIndex(new MFInt32781().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f782().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32783().getArray()).setCoordIndex(new MFInt32784().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f785().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32786().getArray()).setCoordIndex(new MFInt32787().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f788().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32789().getArray()).setCoordIndex(new MFInt32790().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f791().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32792().getArray()).setCoordIndex(new MFInt32793().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f794().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32795().getArray()).setCoordIndex(new MFInt32796().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f797().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32798().getArray()).setCoordIndex(new MFInt32799().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f800().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32801().getArray()).setCoordIndex(new MFInt32802().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f803().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32804().getArray()).setCoordIndex(new MFInt32805().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f806().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32807().getArray()).setCoordIndex(new MFInt32808().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f809().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32810().getArray()).setCoordIndex(new MFInt32811().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f812().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32813().getArray()).setCoordIndex(new MFInt32814().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f815().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32816().getArray()).setCoordIndex(new MFInt32817().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f818().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32819().getArray()).setCoordIndex(new MFInt32820().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f821().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32822().getArray()).setCoordIndex(new MFInt32823().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f824().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32825().getArray()).setCoordIndex(new MFInt32826().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f827().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32828().getArray()).setCoordIndex(new MFInt32829().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f830().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32831().getArray()).setCoordIndex(new MFInt32832().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f833().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32834().getArray()).setCoordIndex(new MFInt32835().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f836().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32837().getArray()).setCoordIndex(new MFInt32838().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f839().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32840().getArray()).setCoordIndex(new MFInt32841().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f842().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32843().getArray()).setCoordIndex(new MFInt32844().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f845().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32846().getArray()).setCoordIndex(new MFInt32847().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f848().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32849().getArray()).setCoordIndex(new MFInt32850().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f851().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32852().getArray()).setCoordIndex(new MFInt32853().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f854().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32855().getArray()).setCoordIndex(new MFInt32856().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f857().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32858().getArray()).setCoordIndex(new MFInt32859().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f860().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32861().getArray()).setCoordIndex(new MFInt32862().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f863().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32864().getArray()).setCoordIndex(new MFInt32865().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f866().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32867().getArray()).setCoordIndex(new MFInt32868().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f869().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32870().getArray()).setCoordIndex(new MFInt32871().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f872().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32873().getArray()).setCoordIndex(new MFInt32874().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f875().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32876().getArray()).setCoordIndex(new MFInt32877().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f878().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32879().getArray()).setCoordIndex(new MFInt32880().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f881().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32882().getArray()).setCoordIndex(new MFInt32883().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f884().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32885().getArray()).setCoordIndex(new MFInt32886().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f887().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32888().getArray()).setCoordIndex(new MFInt32889().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f890().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32891().getArray()).setCoordIndex(new MFInt32892().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f893().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32894().getArray()).setCoordIndex(new MFInt32895().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f896().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32897().getArray()).setCoordIndex(new MFInt32898().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f899().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32900().getArray()).setCoordIndex(new MFInt32901().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f902().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32903().getArray()).setCoordIndex(new MFInt32904().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f905().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32906().getArray()).setCoordIndex(new MFInt32907().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f908().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32909().getArray()).setCoordIndex(new MFInt32910().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f911().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32912().getArray()).setCoordIndex(new MFInt32913().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f914().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32915().getArray()).setCoordIndex(new MFInt32916().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f917().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32918().getArray()).setCoordIndex(new MFInt32919().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f920().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32921().getArray()).setCoordIndex(new MFInt32922().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f923().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32924().getArray()).setCoordIndex(new MFInt32925().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f926().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32927().getArray()).setCoordIndex(new MFInt32928().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f929().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32930().getArray()).setCoordIndex(new MFInt32931().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f932().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32933().getArray()).setCoordIndex(new MFInt32934().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f935().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32936().getArray()).setCoordIndex(new MFInt32937().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f938().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32939().getArray()).setCoordIndex(new MFInt32940().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f941().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32942().getArray()).setCoordIndex(new MFInt32943().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f944().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32945().getArray()).setCoordIndex(new MFInt32946().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f947().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32948().getArray()).setCoordIndex(new MFInt32949().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f950().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32951().getArray()).setCoordIndex(new MFInt32952().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f953().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32954().getArray()).setCoordIndex(new MFInt32955().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f956().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32957().getArray()).setCoordIndex(new MFInt32958().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f959().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32960().getArray()).setCoordIndex(new MFInt32961().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f962().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32963().getArray()).setCoordIndex(new MFInt32964().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f965().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32966().getArray()).setCoordIndex(new MFInt32967().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f968().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32969().getArray()).setCoordIndex(new MFInt32970().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f971().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32972().getArray()).setCoordIndex(new MFInt32973().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f974().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32975().getArray()).setCoordIndex(new MFInt32976().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f977().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32978().getArray()).setCoordIndex(new MFInt32979().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f980().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32981().getArray()).setCoordIndex(new MFInt32982().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f983().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32984().getArray()).setCoordIndex(new MFInt32985().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f986().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32987().getArray()).setCoordIndex(new MFInt32988().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f989().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32990().getArray()).setCoordIndex(new MFInt32991().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f992().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32993().getArray()).setCoordIndex(new MFInt32994().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f995().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32996().getArray()).setCoordIndex(new MFInt32997().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f998().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32999().getArray()).setCoordIndex(new MFInt321000().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1001().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321002().getArray()).setCoordIndex(new MFInt321003().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1004().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321005().getArray()).setCoordIndex(new MFInt321006().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1007().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321008().getArray()).setCoordIndex(new MFInt321009().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1010().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321011().getArray()).setCoordIndex(new MFInt321012().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1013().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321014().getArray()).setCoordIndex(new MFInt321015().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1016().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321017().getArray()).setCoordIndex(new MFInt321018().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1019().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321020().getArray()).setCoordIndex(new MFInt321021().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1022().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321023().getArray()).setCoordIndex(new MFInt321024().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1025().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321026().getArray()).setCoordIndex(new MFInt321027().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1028().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321029().getArray()).setCoordIndex(new MFInt321030().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1031().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321032().getArray()).setCoordIndex(new MFInt321033().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1034().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321035().getArray()).setCoordIndex(new MFInt321036().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1037().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321038().getArray()).setCoordIndex(new MFInt321039().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1040().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321041().getArray()).setCoordIndex(new MFInt321042().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1043().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321044().getArray()).setCoordIndex(new MFInt321045().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1046().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321047().getArray()).setCoordIndex(new MFInt321048().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1049().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321050().getArray()).setCoordIndex(new MFInt321051().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1052().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321053().getArray()).setCoordIndex(new MFInt321054().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1055().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321056().getArray()).setCoordIndex(new MFInt321057().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1058().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321059().getArray()).setCoordIndex(new MFInt321060().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1061().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321062().getArray()).setCoordIndex(new MFInt321063().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1064().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321065().getArray()).setCoordIndex(new MFInt321066().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1067().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321068().getArray()).setCoordIndex(new MFInt321069().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1070().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321071().getArray()).setCoordIndex(new MFInt321072().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1073().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321074().getArray()).setCoordIndex(new MFInt321075().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1076().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321077().getArray()).setCoordIndex(new MFInt321078().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1079().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321080().getArray()).setCoordIndex(new MFInt321081().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1082().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321083().getArray()).setCoordIndex(new MFInt321084().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1085().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321086().getArray()).setCoordIndex(new MFInt321087().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1088().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321089().getArray()).setCoordIndex(new MFInt321090().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1091().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321092().getArray()).setCoordIndex(new MFInt321093().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1094().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321095().getArray()).setCoordIndex(new MFInt321096().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1097().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321098().getArray()).setCoordIndex(new MFInt321099().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1100().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321101().getArray()).setCoordIndex(new MFInt321102().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1103().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321104().getArray()).setCoordIndex(new MFInt321105().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1106().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321107().getArray()).setCoordIndex(new MFInt321108().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1109().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321110().getArray()).setCoordIndex(new MFInt321111().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1112().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321113().getArray()).setCoordIndex(new MFInt321114().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1115().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321116().getArray()).setCoordIndex(new MFInt321117().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1118().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321119().getArray()).setCoordIndex(new MFInt321120().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1121().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321122().getArray()).setCoordIndex(new MFInt321123().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1124().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321125().getArray()).setCoordIndex(new MFInt321126().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1127().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321128().getArray()).setCoordIndex(new MFInt321129().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1130().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321131().getArray()).setCoordIndex(new MFInt321132().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1133().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321134().getArray()).setCoordIndex(new MFInt321135().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1136().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321137().getArray()).setCoordIndex(new MFInt321138().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1139().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321140().getArray()).setCoordIndex(new MFInt321141().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1142().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321143().getArray()).setCoordIndex(new MFInt321144().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1145().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321146().getArray()).setCoordIndex(new MFInt321147().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1148().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321149().getArray()).setCoordIndex(new MFInt321150().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1151().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321152().getArray()).setCoordIndex(new MFInt321153().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1154().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321155().getArray()).setCoordIndex(new MFInt321156().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1157().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321158().getArray()).setCoordIndex(new MFInt321159().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1160().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321161().getArray()).setCoordIndex(new MFInt321162().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1163().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321164().getArray()).setCoordIndex(new MFInt321165().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1166().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321167().getArray()).setCoordIndex(new MFInt321168().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1169().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321170().getArray()).setCoordIndex(new MFInt321171().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1172().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321173().getArray()).setCoordIndex(new MFInt321174().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1175().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321176().getArray()).setCoordIndex(new MFInt321177().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1178().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321179().getArray()).setCoordIndex(new MFInt321180().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1181().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321182().getArray()).setCoordIndex(new MFInt321183().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1184().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321185().getArray()).setCoordIndex(new MFInt321186().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1187().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321188().getArray()).setCoordIndex(new MFInt321189().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1190().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321191().getArray()).setCoordIndex(new MFInt321192().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1193().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321194().getArray()).setCoordIndex(new MFInt321195().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1196().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321197().getArray()).setCoordIndex(new MFInt321198().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1199().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321200().getArray()).setCoordIndex(new MFInt321201().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1202().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321203().getArray()).setCoordIndex(new MFInt321204().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1205().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321206().getArray()).setCoordIndex(new MFInt321207().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1208().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321209().getArray()).setCoordIndex(new MFInt321210().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1211().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321212().getArray()).setCoordIndex(new MFInt321213().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1214().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321215().getArray()).setCoordIndex(new MFInt321216().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1217().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321218().getArray()).setCoordIndex(new MFInt321219().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1220().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321221().getArray()).setCoordIndex(new MFInt321222().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1223().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321224().getArray()).setCoordIndex(new MFInt321225().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1226().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321227().getArray()).setCoordIndex(new MFInt321228().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1229().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321230().getArray()).setCoordIndex(new MFInt321231().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1232().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321233().getArray()).setCoordIndex(new MFInt321234().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1235().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321236().getArray()).setCoordIndex(new MFInt321237().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1238().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321239().getArray()).setCoordIndex(new MFInt321240().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1241().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321242().getArray()).setCoordIndex(new MFInt321243().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1244().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321245().getArray()).setCoordIndex(new MFInt321246().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1247().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321248().getArray()).setCoordIndex(new MFInt321249().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1250().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321251().getArray()).setCoordIndex(new MFInt321252().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1253().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321254().getArray()).setCoordIndex(new MFInt321255().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1256().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321257().getArray()).setCoordIndex(new MFInt321258().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1259().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321260().getArray()).setCoordIndex(new MFInt321261().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1262().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321263().getArray()).setCoordIndex(new MFInt321264().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1265().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321266().getArray()).setCoordIndex(new MFInt321267().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1268().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321269().getArray()).setCoordIndex(new MFInt321270().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1271().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321272().getArray()).setCoordIndex(new MFInt321273().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1274().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321275().getArray()).setCoordIndex(new MFInt321276().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1277().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321278().getArray()).setCoordIndex(new MFInt321279().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1280().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321281().getArray()).setCoordIndex(new MFInt321282().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1283().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321284().getArray()).setCoordIndex(new MFInt321285().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1286().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321287().getArray()).setCoordIndex(new MFInt321288().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1289().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321290().getArray()).setCoordIndex(new MFInt321291().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1292().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321293().getArray()).setCoordIndex(new MFInt321294().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1295().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321296().getArray()).setCoordIndex(new MFInt321297().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1298().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321299().getArray()).setCoordIndex(new MFInt321300().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1301().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321302().getArray()).setCoordIndex(new MFInt321303().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1304().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321305().getArray()).setCoordIndex(new MFInt321306().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1307().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321308().getArray()).setCoordIndex(new MFInt321309().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1310().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321311().getArray()).setCoordIndex(new MFInt321312().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1313().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321314().getArray()).setCoordIndex(new MFInt321315().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1316().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321317().getArray()).setCoordIndex(new MFInt321318().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1319().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321320().getArray()).setCoordIndex(new MFInt321321().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1322().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0.7843137f,0f,0f}).setShininess(1f)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321323().getArray()).setCoordIndex(new MFInt321324().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1325().getArray())))))      ;
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.1237f,0f,24.33916f,25.72972f,0f,24.41947f,26.1237f,0.075f,24.33916f,25.72972f,0.075f,24.41947f,25.72972f,0f,24.41947f,26.00195f,0f,25.75502f,25.72972f,0.075f,24.41947f,26.00195f,0.075f,25.75502f,26.00195f,0f,25.75502f,26.39594f,0f,25.67472f,26.00195f,0.075f,25.75502f,26.39594f,0.075f,25.67472f,26.39594f,0f,25.67472f,26.25982f,0f,25.00694f,26.1237f,0f,24.33916f,26.39594f,0.075f,25.67472f,26.25982f,0.075f,25.00694f,26.1237f,0.075f,24.33916f,26.32788f,0.075f,25.34083f,26.25982f,0.0375f,25.00694f,26.32788f,0f,25.34083f,26.32788f,0.0375f,25.34083f,26.36191f,0.0375f,25.50777f,26.32788f,0.01875f,25.34083f,26.36191f,0f,25.50777f,26.36191f,0.01875f,25.50777f,26.36191f,0.075f,25.50777f,26.32788f,0.05625f,25.34083f,26.36191f,0.05625f,25.50777f,26.19176f,0.075f,24.67305f,26.19176f,0f,24.67305f,26.19176f,0.0375f,24.67305f,26.15773f,0.075f,24.5061f,26.15773f,0.0375f,24.5061f,26.19176f,0.05625f,24.67305f,26.15773f,0.05625f,24.5061f,26.15773f,0f,24.5061f,26.19176f,0.01875f,24.67305f,26.15773f,0.01875f,24.5061f});
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.39918f,0f,23.57728f,25.5916f,0f,23.74189f,26.39918f,0.075f,23.57728f,25.5916f,0.075f,23.74189f,25.5916f,0f,23.74189f,25.72572f,0f,24.39987f,25.5916f,0.075f,23.74189f,25.72572f,0.075f,24.39987f,25.72572f,0f,24.39987f,26.53329f,0f,24.23526f,25.72572f,0.075f,24.39987f,26.53329f,0.075f,24.23526f,26.53329f,0f,24.23526f,26.39918f,0f,23.57728f,26.53329f,0.075f,24.23526f,26.39918f,0.075f,23.57728f});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.26106f,0f,22.8997f,25.45349f,0f,23.06431f,26.26106f,0.075f,22.8997f,25.45349f,0.075f,23.06431f,25.45349f,0f,23.06431f,25.58761f,0f,23.72229f,25.45349f,0.075f,23.06431f,25.58761f,0.075f,23.72229f,25.58761f,0f,23.72229f,26.39518f,0f,23.55768f,25.58761f,0.075f,23.72229f,26.39518f,0.075f,23.55768f,26.39518f,0f,23.55768f,26.26106f,0f,22.8997f,26.39518f,0.075f,23.55768f,26.26106f,0.075f,22.8997f});
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f11 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.57125f,0f,21.62885f,25.17726f,0f,21.70916f,25.57125f,0.075f,21.62885f,25.17726f,0.075f,21.70916f,25.17726f,0f,21.70916f,25.31338f,0f,22.37694f,25.4495f,0f,23.04472f,25.17726f,0.075f,21.70916f,25.31338f,0.075f,22.37694f,25.4495f,0.075f,23.04472f,25.24532f,0.075f,22.04305f,25.31338f,0.0375f,22.37694f,25.24532f,0f,22.04305f,25.24532f,0.0375f,22.04305f,25.21129f,0.0375f,21.87611f,25.24532f,0.01875f,22.04305f,25.21129f,0f,21.87611f,25.21129f,0.01875f,21.87611f,25.21129f,0.075f,21.87611f,25.24532f,0.05625f,22.04305f,25.21129f,0.05625f,21.87611f,25.38144f,0.075f,22.71083f,25.38144f,0f,22.71083f,25.38144f,0.0375f,22.71083f,25.41547f,0.075f,22.87777f,25.41547f,0.0375f,22.87777f,25.38144f,0.05625f,22.71083f,25.41547f,0.05625f,22.87777f,25.41547f,0f,22.87777f,25.38144f,0.01875f,22.71083f,25.41547f,0.01875f,22.87777f,25.4495f,0f,23.04472f,25.84348f,0f,22.96441f,25.4495f,0.075f,23.04472f,25.84348f,0.075f,22.96441f,25.84348f,0f,22.96441f,25.57125f,0f,21.62885f,25.84348f,0.075f,22.96441f,25.57125f,0.075f,21.62885f});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.40069f,0f,27.81134f,25.59312f,0f,27.97596f,26.40069f,0.075f,27.81134f,25.59312f,0.075f,27.97596f,25.59312f,0f,27.97596f,25.72724f,0f,28.63393f,25.59312f,0.075f,27.97596f,25.72724f,0.075f,28.63393f,25.72724f,0f,28.63393f,26.53481f,0f,28.46932f,25.72724f,0.075f,28.63393f,26.53481f,0.075f,28.46932f,26.53481f,0f,28.46932f,26.40069f,0f,27.81134f,26.53481f,0.075f,28.46932f,26.40069f,0.075f,27.81134f});
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.26258f,0f,27.13377f,25.85879f,0f,27.21607f,25.45501f,0f,27.29838f,26.26258f,0.075f,27.13377f,25.85879f,0.075f,27.21607f,25.45501f,0.075f,27.29838f,25.6569f,0.075f,27.25723f,25.6569f,0f,27.25723f,25.85879f,0.0375f,27.21607f,25.6569f,0.0375f,27.25723f,26.06068f,0.075f,27.17492f,26.06068f,0f,27.17492f,26.06068f,0.0375f,27.17492f,25.45501f,0f,27.29838f,25.58913f,0f,27.95636f,25.45501f,0.075f,27.29838f,25.58913f,0.075f,27.95636f,25.58913f,0f,27.95636f,26.3967f,0f,27.79175f,25.58913f,0.075f,27.95636f,26.3967f,0.075f,27.79175f,26.3967f,0f,27.79175f,26.26258f,0f,27.13377f,26.3967f,0.075f,27.79175f,26.26258f,0.075f,27.13377f});
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.98635f,0f,25.77861f,25.59236f,0f,25.85892f,25.98635f,0.075f,25.77861f,25.59236f,0.075f,25.85892f,25.59236f,0f,25.85892f,25.72848f,0f,26.5267f,25.8646f,0f,27.19448f,25.59236f,0.075f,25.85892f,25.72848f,0.075f,26.5267f,25.8646f,0.075f,27.19448f,25.66042f,0.075f,26.19281f,25.72848f,0.0375f,26.5267f,25.66042f,0f,26.19281f,25.66042f,0.0375f,26.19281f,25.62639f,0.0375f,26.02587f,25.66042f,0.01875f,26.19281f,25.62639f,0f,26.02587f,25.62639f,0.01875f,26.02587f,25.62639f,0.075f,26.02587f,25.66042f,0.05625f,26.19281f,25.62639f,0.05625f,26.02587f,25.79654f,0.075f,26.86059f,25.79654f,0f,26.86059f,25.79654f,0.0375f,26.86059f,25.83057f,0.075f,27.02753f,25.83057f,0.0375f,27.02753f,25.79654f,0.05625f,26.86059f,25.83057f,0.05625f,27.02753f,25.83057f,0f,27.02753f,25.79654f,0.01875f,26.86059f,25.83057f,0.01875f,27.02753f,25.8646f,0f,27.19448f,26.25858f,0f,27.11417f,25.8646f,0.075f,27.19448f,26.25858f,0.075f,27.11417f,26.25858f,0f,27.11417f,26.12247f,0f,26.44639f,25.98635f,0f,25.77861f,26.25858f,0.075f,27.11417f,26.12247f,0.075f,26.44639f,25.98635f,0.075f,25.77861f,26.19053f,0.075f,26.78028f,26.12247f,0.0375f,26.44639f,26.19053f,0f,26.78028f,26.19053f,0.0375f,26.78028f,26.22455f,0.0375f,26.94723f,26.19053f,0.01875f,26.78028f,26.22455f,0f,26.94723f,26.22455f,0.01875f,26.94723f,26.22455f,0.075f,26.94723f,26.19053f,0.05625f,26.78028f,26.22455f,0.05625f,26.94723f,26.05441f,0.075f,26.1125f,26.05441f,0f,26.1125f,26.05441f,0.0375f,26.1125f,26.02038f,0.075f,25.94556f,26.02038f,0.0375f,25.94556f,26.05441f,0.05625f,26.1125f,26.02038f,0.05625f,25.94556f,26.02038f,0f,25.94556f,26.05441f,0.01875f,26.1125f,26.02038f,0.01875f,25.94556f});
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFVec3f23 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.57277f,0f,25.86292f,25.37577f,0f,25.90307f,25.17878f,0f,25.94323f,25.57277f,0.075f,25.86292f,25.37577f,0.075f,25.90307f,25.17878f,0.075f,25.94323f,25.17878f,0f,25.94323f,25.3149f,0f,26.611f,25.45101f,0f,27.27878f,25.17878f,0.075f,25.94323f,25.3149f,0.075f,26.611f,25.45101f,0.075f,27.27878f,25.24684f,0.075f,26.27711f,25.3149f,0.0375f,26.611f,25.24684f,0f,26.27711f,25.24684f,0.0375f,26.27711f,25.21281f,0.0375f,26.11017f,25.24684f,0.01875f,26.27711f,25.21281f,0f,26.11017f,25.21281f,0.01875f,26.11017f,25.21281f,0.075f,26.11017f,25.24684f,0.05625f,26.27711f,25.21281f,0.05625f,26.11017f,25.38295f,0.075f,26.94489f,25.38295f,0f,26.94489f,25.38295f,0.0375f,26.94489f,25.41698f,0.075f,27.11184f,25.41698f,0.0375f,27.11184f,25.38295f,0.05625f,26.94489f,25.41698f,0.05625f,27.11184f,25.41698f,0f,27.11184f,25.38295f,0.01875f,26.94489f,25.41698f,0.01875f,27.11184f,25.45101f,0f,27.27878f,25.64801f,0f,27.23863f,25.845f,0f,27.19847f,25.45101f,0.075f,27.27878f,25.64801f,0.075f,27.23863f,25.845f,0.075f,27.19847f,25.845f,0f,27.19847f,25.70888f,0f,26.53069f,25.57277f,0f,25.86292f,25.845f,0.075f,27.19847f,25.70888f,0.075f,26.53069f,25.57277f,0.075f,25.86292f,25.77694f,0.075f,26.86458f,25.70888f,0.0375f,26.53069f,25.77694f,0f,26.86458f,25.77694f,0.0375f,26.86458f,25.81097f,0.0375f,27.03153f,25.77694f,0.01875f,26.86458f,25.81097f,0f,27.03153f,25.81097f,0.01875f,27.03153f,25.81097f,0.075f,27.03153f,25.77694f,0.05625f,26.86458f,25.81097f,0.05625f,27.03153f,25.64082f,0.075f,26.19681f,25.64082f,0f,26.19681f,25.64082f,0.0375f,26.19681f,25.60679f,0.075f,26.02986f,25.60679f,0.0375f,26.02986f,25.64082f,0.05625f,26.19681f,25.60679f,0.05625f,26.02986f,25.60679f,0f,26.02986f,25.64082f,0.01875f,26.19681f,25.60679f,0.01875f,26.02986f});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.84824f,0f,25.10104f,25.44445f,0f,25.18334f,25.04066f,0f,25.26565f,25.84824f,0.075f,25.10104f,25.44445f,0.075f,25.18334f,25.04066f,0.075f,25.26565f,25.24256f,0.075f,25.2245f,25.24256f,0f,25.2245f,25.44445f,0.0375f,25.18334f,25.24256f,0.0375f,25.2245f,25.64634f,0.075f,25.14219f,25.64634f,0f,25.14219f,25.64634f,0.0375f,25.14219f,25.04066f,0f,25.26565f,25.17478f,0f,25.92363f,25.04066f,0.075f,25.26565f,25.17478f,0.075f,25.92363f,25.17478f,0f,25.92363f,25.57857f,0f,25.84132f,25.98236f,0f,25.75902f,25.17478f,0.075f,25.92363f,25.57857f,0.075f,25.84132f,25.98236f,0.075f,25.75902f,25.37668f,0.075f,25.88248f,25.57857f,0.0375f,25.84132f,25.37668f,0f,25.88248f,25.37668f,0.0375f,25.88248f,25.78046f,0.075f,25.80017f,25.78046f,0f,25.80017f,25.78046f,0.0375f,25.80017f,25.98236f,0f,25.75902f,25.84824f,0f,25.10104f,25.98236f,0.075f,25.75902f,25.84824f,0.075f,25.10104f});
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f29 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.71012f,0f,24.42346f,24.90255f,0f,24.58807f,25.71012f,0.075f,24.42346f,24.90255f,0.075f,24.58807f,24.90255f,0f,24.58807f,25.03667f,0f,25.24605f,24.90255f,0.075f,24.58807f,25.03667f,0.075f,25.24605f,25.03667f,0f,25.24605f,25.44046f,0f,25.16375f,25.84424f,0f,25.08144f,25.03667f,0.075f,25.24605f,25.44046f,0.075f,25.16375f,25.84424f,0.075f,25.08144f,25.23856f,0.075f,25.2049f,25.44046f,0.0375f,25.16375f,25.23856f,0f,25.2049f,25.23856f,0.0375f,25.2049f,25.64235f,0.075f,25.12259f,25.64235f,0f,25.12259f,25.64235f,0.0375f,25.12259f,25.84424f,0f,25.08144f,25.71012f,0f,24.42346f,25.84424f,0.075f,25.08144f,25.71012f,0.075f,24.42346f});
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.43389f,0f,23.06831f,25.03991f,0f,23.14862f,25.43389f,0.075f,23.06831f,25.03991f,0.075f,23.14862f,25.03991f,0f,23.14862f,25.17602f,0f,23.81639f,25.31214f,0f,24.48417f,25.03991f,0.075f,23.14862f,25.17602f,0.075f,23.81639f,25.31214f,0.075f,24.48417f,25.10797f,0.075f,23.48251f,25.17602f,0.0375f,23.81639f,25.10797f,0f,23.48251f,25.10797f,0.0375f,23.48251f,25.07394f,0.0375f,23.31556f,25.10797f,0.01875f,23.48251f,25.07394f,0f,23.31556f,25.07394f,0.01875f,23.31556f,25.07394f,0.075f,23.31556f,25.10797f,0.05625f,23.48251f,25.07394f,0.05625f,23.31556f,25.24408f,0.075f,24.15028f,25.24408f,0f,24.15028f,25.24408f,0.0375f,24.15028f,25.27811f,0.075f,24.31723f,25.27811f,0.0375f,24.31723f,25.24408f,0.05625f,24.15028f,25.27811f,0.05625f,24.31723f,25.27811f,0f,24.31723f,25.24408f,0.01875f,24.15028f,25.27811f,0.01875f,24.31723f,25.31214f,0f,24.48417f,25.70613f,0f,24.40386f,25.31214f,0.075f,24.48417f,25.70613f,0.075f,24.40386f,25.70613f,0f,24.40386f,25.57001f,0f,23.73609f,25.43389f,0f,23.06831f,25.70613f,0.075f,24.40386f,25.57001f,0.075f,23.73609f,25.43389f,0.075f,23.06831f,25.63807f,0.075f,24.06997f,25.57001f,0.0375f,23.73609f,25.63807f,0f,24.06997f,25.63807f,0.0375f,24.06997f,25.6721f,0.0375f,24.23692f,25.63807f,0.01875f,24.06997f,25.6721f,0f,24.23692f,25.6721f,0.01875f,24.23692f,25.6721f,0.075f,24.23692f,25.63807f,0.05625f,24.06997f,25.6721f,0.05625f,24.23692f,25.50195f,0.075f,23.4022f,25.50195f,0f,23.4022f,25.50195f,0.0375f,23.4022f,25.46792f,0.075f,23.23525f,25.46792f,0.0375f,23.23525f,25.50195f,0.05625f,23.4022f,25.46792f,0.05625f,23.23525f,25.46792f,0f,23.23525f,25.50195f,0.01875f,23.4022f,25.46792f,0.01875f,23.23525f});
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f35 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.02031f,0f,23.15261f,24.62632f,0f,23.23292f,25.02031f,0.075f,23.15261f,24.62632f,0.075f,23.23292f,24.62632f,0f,23.23292f,24.76244f,0f,23.9007f,24.89856f,0f,24.56848f,24.62632f,0.075f,23.23292f,24.76244f,0.075f,23.9007f,24.89856f,0.075f,24.56848f,24.69438f,0.075f,23.56681f,24.76244f,0.0375f,23.9007f,24.69438f,0f,23.56681f,24.69438f,0.0375f,23.56681f,24.66035f,0.0375f,23.39986f,24.69438f,0.01875f,23.56681f,24.66035f,0f,23.39986f,24.66035f,0.01875f,23.39986f,24.66035f,0.075f,23.39986f,24.69438f,0.05625f,23.56681f,24.66035f,0.05625f,23.39986f,24.8305f,0.075f,24.23459f,24.8305f,0f,24.23459f,24.8305f,0.0375f,24.23459f,24.86453f,0.075f,24.40153f,24.86453f,0.0375f,24.40153f,24.8305f,0.05625f,24.23459f,24.86453f,0.05625f,24.40153f,24.86453f,0f,24.40153f,24.8305f,0.01875f,24.23459f,24.86453f,0.01875f,24.40153f,24.89856f,0f,24.56848f,25.29254f,0f,24.48817f,24.89856f,0.075f,24.56848f,25.29254f,0.075f,24.48817f,25.29254f,0f,24.48817f,25.15643f,0f,23.82039f,25.02031f,0f,23.15261f,25.29254f,0.075f,24.48817f,25.15643f,0.075f,23.82039f,25.02031f,0.075f,23.15261f,25.22449f,0.075f,24.15428f,25.15643f,0.0375f,23.82039f,25.22449f,0f,24.15428f,25.22449f,0.0375f,24.15428f,25.25851f,0.0375f,24.32122f,25.22449f,0.01875f,24.15428f,25.25851f,0f,24.32122f,25.25851f,0.01875f,24.32122f,25.25851f,0.075f,24.32122f,25.22449f,0.05625f,24.15428f,25.25851f,0.05625f,24.32122f,25.08837f,0.075f,23.4865f,25.08837f,0f,23.4865f,25.08837f,0.0375f,23.4865f,25.05434f,0.075f,23.31956f,25.05434f,0.0375f,23.31956f,25.08837f,0.05625f,23.4865f,25.05434f,0.05625f,23.31956f,25.05434f,0f,23.31956f,25.08837f,0.01875f,23.4865f,25.05434f,0.01875f,23.31956f});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.29578f,0f,22.39073f,24.48821f,0f,22.55534f,25.29578f,0.075f,22.39073f,24.48821f,0.075f,22.55534f,24.48821f,0f,22.55534f,24.62233f,0f,23.21332f,24.48821f,0.075f,22.55534f,24.62233f,0.075f,23.21332f,24.62233f,0f,23.21332f,25.4299f,0f,23.04871f,24.62233f,0.075f,23.21332f,25.4299f,0.075f,23.04871f,25.4299f,0f,23.04871f,25.29578f,0f,22.39073f,25.4299f,0.075f,23.04871f,25.29578f,0.075f,22.39073f});
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.15767f,0f,21.71316f,24.3501f,0f,21.87777f,25.15767f,0.075f,21.71316f,24.3501f,0.075f,21.87777f,24.3501f,0f,21.87777f,24.48421f,0f,22.53575f,24.3501f,0.075f,21.87777f,24.48421f,0.075f,22.53575f,24.48421f,0f,22.53575f,25.29178f,0f,22.37114f,24.48421f,0.075f,22.53575f,25.29178f,0.075f,22.37114f,25.29178f,0f,22.37114f,25.15767f,0f,21.71316f,25.29178f,0.075f,22.37114f,25.15767f,0.075f,21.71316f});
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.88144f,0f,20.358f,24.48745f,0f,20.43831f,24.88144f,0.075f,20.358f,24.48745f,0.075f,20.43831f,24.48745f,0f,20.43831f,24.75968f,0f,21.77387f,24.48745f,0.075f,20.43831f,24.75968f,0.075f,21.77387f,24.75968f,0f,21.77387f,25.15367f,0f,21.69356f,24.75968f,0.075f,21.77387f,25.15367f,0.075f,21.69356f,25.15367f,0f,21.69356f,24.88144f,0f,20.358f,25.15367f,0.075f,21.69356f,24.88144f,0.075f,20.358f});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f47 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.46785f,0f,20.44231f,24.27086f,0f,20.48246f,24.07387f,0f,20.52261f,24.46785f,0.075f,20.44231f,24.27086f,0.075f,20.48246f,24.07387f,0.075f,20.52261f,24.07387f,0f,20.52261f,24.20998f,0f,21.19039f,24.3461f,0f,21.85817f,24.07387f,0.075f,20.52261f,24.20998f,0.075f,21.19039f,24.3461f,0.075f,21.85817f,24.14193f,0.075f,20.8565f,24.20998f,0.0375f,21.19039f,24.14193f,0f,20.8565f,24.14193f,0.0375f,20.8565f,24.1079f,0.0375f,20.68956f,24.14193f,0.01875f,20.8565f,24.1079f,0f,20.68956f,24.1079f,0.01875f,20.68956f,24.1079f,0.075f,20.68956f,24.14193f,0.05625f,20.8565f,24.1079f,0.05625f,20.68956f,24.27804f,0.075f,21.52428f,24.27804f,0f,21.52428f,24.27804f,0.0375f,21.52428f,24.31207f,0.075f,21.69123f,24.31207f,0.0375f,21.69123f,24.27804f,0.05625f,21.52428f,24.31207f,0.05625f,21.69123f,24.31207f,0f,21.69123f,24.27804f,0.01875f,21.52428f,24.31207f,0.01875f,21.69123f,24.3461f,0f,21.85817f,24.74009f,0f,21.77786f,24.3461f,0.075f,21.85817f,24.74009f,0.075f,21.77786f,24.74009f,0f,21.77786f,24.46785f,0f,20.44231f,24.74009f,0.075f,21.77786f,24.46785f,0.075f,20.44231f});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.84975f,0f,29.3351f,25.44597f,0f,29.41741f,25.04218f,0f,29.49971f,25.84975f,0.075f,29.3351f,25.44597f,0.075f,29.41741f,25.04218f,0.075f,29.49971f,25.24407f,0.075f,29.45856f,25.24407f,0f,29.45856f,25.44597f,0.0375f,29.41741f,25.24407f,0.0375f,29.45856f,25.64786f,0.075f,29.37626f,25.64786f,0f,29.37626f,25.64786f,0.0375f,29.37626f,25.04218f,0f,29.49971f,25.1763f,0f,30.15769f,25.04218f,0.075f,29.49971f,25.1763f,0.075f,30.15769f,25.1763f,0f,30.15769f,25.58009f,0f,30.07539f,25.98387f,0f,29.99308f,25.1763f,0.075f,30.15769f,25.58009f,0.075f,30.07539f,25.98387f,0.075f,29.99308f,25.37819f,0.075f,30.11654f,25.58009f,0.0375f,30.07539f,25.37819f,0f,30.11654f,25.37819f,0.0375f,30.11654f,25.78198f,0.075f,30.03424f,25.78198f,0f,30.03424f,25.78198f,0.0375f,30.03424f,25.98387f,0f,29.99308f,25.84975f,0f,29.3351f,25.98387f,0.075f,29.99308f,25.84975f,0.075f,29.3351f});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.71164f,0f,28.65753f,24.90407f,0f,28.82214f,25.71164f,0.075f,28.65753f,24.90407f,0.075f,28.82214f,24.90407f,0f,28.82214f,25.03819f,0f,29.48012f,24.90407f,0.075f,28.82214f,25.03819f,0.075f,29.48012f,25.03819f,0f,29.48012f,25.44197f,0f,29.39781f,25.84576f,0f,29.31551f,25.03819f,0.075f,29.48012f,25.44197f,0.075f,29.39781f,25.84576f,0.075f,29.31551f,25.24008f,0.075f,29.43896f,25.44197f,0.0375f,29.39781f,25.24008f,0f,29.43896f,25.24008f,0.0375f,29.43896f,25.64386f,0.075f,29.35666f,25.64386f,0f,29.35666f,25.64386f,0.0375f,29.35666f,25.84576f,0f,29.31551f,25.71164f,0f,28.65753f,25.84576f,0.075f,29.31551f,25.71164f,0.075f,28.65753f});
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.43541f,0f,27.30237f,25.04142f,0f,27.38268f,25.43541f,0.075f,27.30237f,25.04142f,0.075f,27.38268f,25.04142f,0f,27.38268f,25.31366f,0f,28.71824f,25.04142f,0.075f,27.38268f,25.31366f,0.075f,28.71824f,25.31366f,0f,28.71824f,25.70764f,0f,28.63793f,25.31366f,0.075f,28.71824f,25.70764f,0.075f,28.63793f,25.70764f,0f,28.63793f,25.43541f,0f,27.30237f,25.70764f,0.075f,28.63793f,25.43541f,0.075f,27.30237f});
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.02183f,0f,27.38668f,24.62784f,0f,27.46698f,25.02183f,0.075f,27.38668f,24.62784f,0.075f,27.46698f,24.62784f,0f,27.46698f,24.76396f,0f,28.13476f,24.90007f,0f,28.80254f,24.62784f,0.075f,27.46698f,24.76396f,0.075f,28.13476f,24.90007f,0.075f,28.80254f,24.6959f,0.075f,27.80087f,24.76396f,0.0375f,28.13476f,24.6959f,0f,27.80087f,24.6959f,0.0375f,27.80087f,24.66187f,0.0375f,27.63393f,24.6959f,0.01875f,27.80087f,24.66187f,0f,27.63393f,24.66187f,0.01875f,27.63393f,24.66187f,0.075f,27.63393f,24.6959f,0.05625f,27.80087f,24.66187f,0.05625f,27.63393f,24.83201f,0.075f,28.46865f,24.83201f,0f,28.46865f,24.83201f,0.0375f,28.46865f,24.86604f,0.075f,28.6356f,24.86604f,0.0375f,28.6356f,24.83201f,0.05625f,28.46865f,24.86604f,0.05625f,28.6356f,24.86604f,0f,28.6356f,24.83201f,0.01875f,28.46865f,24.86604f,0.01875f,28.6356f,24.90007f,0f,28.80254f,25.29406f,0f,28.72223f,24.90007f,0.075f,28.80254f,25.29406f,0.075f,28.72223f,25.29406f,0f,28.72223f,25.02183f,0f,27.38668f,25.29406f,0.075f,28.72223f,25.02183f,0.075f,27.38668f});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.2973f,0f,26.6248f,24.48973f,0f,26.78941f,25.2973f,0.075f,26.6248f,24.48973f,0.075f,26.78941f,24.48973f,0f,26.78941f,24.62384f,0f,27.44739f,24.48973f,0.075f,26.78941f,24.62384f,0.075f,27.44739f,24.62384f,0f,27.44739f,25.43142f,0f,27.28278f,24.62384f,0.075f,27.44739f,25.43142f,0.075f,27.28278f,25.43142f,0f,27.28278f,25.2973f,0f,26.6248f,25.43142f,0.075f,27.28278f,25.2973f,0.075f,26.6248f});
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.15918f,0f,25.94722f,24.35161f,0f,26.11183f,25.15918f,0.075f,25.94722f,24.35161f,0.075f,26.11183f,24.35161f,0f,26.11183f,24.48573f,0f,26.76981f,24.35161f,0.075f,26.11183f,24.48573f,0.075f,26.76981f,24.48573f,0f,26.76981f,25.2933f,0f,26.6052f,24.48573f,0.075f,26.76981f,25.2933f,0.075f,26.6052f,25.2933f,0f,26.6052f,25.15918f,0f,25.94722f,25.2933f,0.075f,26.6052f,25.15918f,0.075f,25.94722f});
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.88295f,0f,24.59207f,24.48897f,0f,24.67238f,24.88295f,0.075f,24.59207f,24.48897f,0.075f,24.67238f,24.48897f,0f,24.67238f,24.7612f,0f,26.00793f,24.48897f,0.075f,24.67238f,24.7612f,0.075f,26.00793f,24.7612f,0f,26.00793f,25.15519f,0f,25.92762f,24.7612f,0.075f,26.00793f,25.15519f,0.075f,25.92762f,25.15519f,0f,25.92762f,24.88295f,0f,24.59207f,25.15519f,0.075f,25.92762f,24.88295f,0.075f,24.59207f});
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.46937f,0f,24.67637f,24.07538f,0f,24.75668f,24.46937f,0.075f,24.67637f,24.07538f,0.075f,24.75668f,24.07538f,0f,24.75668f,24.34762f,0f,26.09224f,24.07538f,0.075f,24.75668f,24.34762f,0.075f,26.09224f,24.34762f,0f,26.09224f,24.7416f,0f,26.01193f,24.34762f,0.075f,26.09224f,24.7416f,0.075f,26.01193f,24.7416f,0f,26.01193f,24.46937f,0f,24.67637f,24.7416f,0.075f,26.01193f,24.46937f,0.075f,24.67637f});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.74484f,0f,23.91449f,23.93727f,0f,24.0791f,24.74484f,0.075f,23.91449f,23.93727f,0.075f,24.0791f,23.93727f,0f,24.0791f,24.07139f,0f,24.73708f,23.93727f,0.075f,24.0791f,24.07139f,0.075f,24.73708f,24.07139f,0f,24.73708f,24.47517f,0f,24.65478f,24.87896f,0f,24.57247f,24.07139f,0.075f,24.73708f,24.47517f,0.075f,24.65478f,24.87896f,0.075f,24.57247f,24.27328f,0.075f,24.69593f,24.47517f,0.0375f,24.65478f,24.27328f,0f,24.69593f,24.27328f,0.0375f,24.69593f,24.67707f,0.075f,24.61362f,24.67707f,0f,24.61362f,24.67707f,0.0375f,24.61362f,24.87896f,0f,24.57247f,24.74484f,0f,23.91449f,24.87896f,0.075f,24.57247f,24.74484f,0.075f,23.91449f});
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.60673f,0f,23.23692f,24.20294f,0f,23.31922f,23.79915f,0f,23.40153f,24.60673f,0.075f,23.23692f,24.20294f,0.075f,23.31922f,23.79915f,0.075f,23.40153f,24.00105f,0.075f,23.36037f,24.00105f,0f,23.36037f,24.20294f,0.0375f,23.31922f,24.00105f,0.0375f,23.36037f,24.40483f,0.075f,23.27807f,24.40483f,0f,23.27807f,24.40483f,0.0375f,23.27807f,23.79915f,0f,23.40153f,23.93328f,0f,24.05951f,23.79915f,0.075f,23.40153f,23.93328f,0.075f,24.05951f,23.93328f,0f,24.05951f,24.74084f,0f,23.89489f,23.93328f,0.075f,24.05951f,24.74084f,0.075f,23.89489f,24.74084f,0f,23.89489f,24.60673f,0f,23.23692f,24.74084f,0.075f,23.89489f,24.60673f,0.075f,23.23692f});
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.3305f,0f,21.88176f,23.93651f,0f,21.96207f,24.3305f,0.075f,21.88176f,23.93651f,0.075f,21.96207f,23.93651f,0f,21.96207f,24.20874f,0f,23.29763f,23.93651f,0.075f,21.96207f,24.20874f,0.075f,23.29763f,24.20874f,0f,23.29763f,24.40574f,0f,23.25747f,24.60273f,0f,23.21732f,24.20874f,0.075f,23.29763f,24.40574f,0.075f,23.25747f,24.60273f,0.075f,23.21732f,24.60273f,0f,23.21732f,24.46661f,0f,22.54954f,24.3305f,0f,21.88176f,24.60273f,0.075f,23.21732f,24.46661f,0.075f,22.54954f,24.3305f,0.075f,21.88176f,24.53467f,0.075f,22.88343f,24.46661f,0.0375f,22.54954f,24.53467f,0f,22.88343f,24.53467f,0.0375f,22.88343f,24.5687f,0.0375f,23.05037f,24.53467f,0.01875f,22.88343f,24.5687f,0f,23.05037f,24.5687f,0.01875f,23.05037f,24.5687f,0.075f,23.05037f,24.53467f,0.05625f,22.88343f,24.5687f,0.05625f,23.05037f,24.39856f,0.075f,22.21565f,24.39856f,0f,22.21565f,24.39856f,0.0375f,22.21565f,24.36453f,0.075f,22.04871f,24.36453f,0.0375f,22.04871f,24.39856f,0.05625f,22.21565f,24.36453f,0.05625f,22.04871f,24.36453f,0f,22.04871f,24.39856f,0.01875f,22.21565f,24.36453f,0.01875f,22.04871f});
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f83 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.91691f,0f,21.96606f,23.52293f,0f,22.04637f,23.91691f,0.075f,21.96606f,23.52293f,0.075f,22.04637f,23.52293f,0f,22.04637f,23.65904f,0f,22.71415f,23.79516f,0f,23.38193f,23.52293f,0.075f,22.04637f,23.65904f,0.075f,22.71415f,23.79516f,0.075f,23.38193f,23.59099f,0.075f,22.38026f,23.65904f,0.0375f,22.71415f,23.59099f,0f,22.38026f,23.59099f,0.0375f,22.38026f,23.55696f,0.0375f,22.21332f,23.59099f,0.01875f,22.38026f,23.55696f,0f,22.21332f,23.55696f,0.01875f,22.21332f,23.55696f,0.075f,22.21332f,23.59099f,0.05625f,22.38026f,23.55696f,0.05625f,22.21332f,23.7271f,0.075f,23.04804f,23.7271f,0f,23.04804f,23.7271f,0.0375f,23.04804f,23.76113f,0.075f,23.21498f,23.76113f,0.0375f,23.21498f,23.7271f,0.05625f,23.04804f,23.76113f,0.05625f,23.21498f,23.76113f,0f,23.21498f,23.7271f,0.01875f,23.04804f,23.76113f,0.01875f,23.21498f,23.79516f,0f,23.38193f,24.18915f,0f,23.30162f,23.79516f,0.075f,23.38193f,24.18915f,0.075f,23.30162f,24.18915f,0f,23.30162f,23.91691f,0f,21.96606f,24.18915f,0.075f,23.30162f,23.91691f,0.075f,21.96606f});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.19238f,0f,21.20419f,23.38481f,0f,21.3688f,24.19238f,0.075f,21.20419f,23.38481f,0.075f,21.3688f,23.38481f,0f,21.3688f,23.51893f,0f,22.02678f,23.38481f,0.075f,21.3688f,23.51893f,0.075f,22.02678f,23.51893f,0f,22.02678f,23.92272f,0f,21.94447f,24.3265f,0f,21.86217f,23.51893f,0.075f,22.02678f,23.92272f,0.075f,21.94447f,24.3265f,0.075f,21.86217f,23.72083f,0.075f,21.98562f,23.92272f,0.0375f,21.94447f,23.72083f,0f,21.98562f,23.72083f,0.0375f,21.98562f,24.12461f,0.075f,21.90332f,24.12461f,0f,21.90332f,24.12461f,0.0375f,21.90332f,24.3265f,0f,21.86217f,24.19238f,0f,21.20419f,24.3265f,0.075f,21.86217f,24.19238f,0.075f,21.20419f});
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f89 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.05427f,0f,20.52661f,23.2467f,0f,20.69122f,24.05427f,0.075f,20.52661f,23.2467f,0.075f,20.69122f,23.2467f,0f,20.69122f,23.38082f,0f,21.3492f,23.2467f,0.075f,20.69122f,23.38082f,0.075f,21.3492f,23.38082f,0f,21.3492f,24.18839f,0f,21.18459f,23.38082f,0.075f,21.3492f,24.18839f,0.075f,21.18459f,24.18839f,0f,21.18459f,24.05427f,0f,20.52661f,24.18839f,0.075f,21.18459f,24.05427f,0.075f,20.52661f});
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.77804f,0f,19.17146f,23.38405f,0f,19.25176f,23.77804f,0.075f,19.17146f,23.38405f,0.075f,19.25176f,23.38405f,0f,19.25176f,23.65629f,0f,20.58732f,23.38405f,0.075f,19.25176f,23.65629f,0.075f,20.58732f,23.65629f,0f,20.58732f,24.05028f,0f,20.50701f,23.65629f,0.075f,20.58732f,24.05028f,0.075f,20.50701f,24.05028f,0f,20.50701f,23.91416f,0f,19.83923f,23.77804f,0f,19.17146f,24.05028f,0.075f,20.50701f,23.91416f,0.075f,19.83923f,23.77804f,0.075f,19.17146f,23.98222f,0.075f,20.17312f,23.91416f,0.0375f,19.83923f,23.98222f,0f,20.17312f,23.98222f,0.0375f,20.17312f,24.01625f,0.0375f,20.34007f,23.98222f,0.01875f,20.17312f,24.01625f,0f,20.34007f,24.01625f,0.01875f,20.34007f,24.01625f,0.075f,20.34007f,23.98222f,0.05625f,20.17312f,24.01625f,0.05625f,20.34007f,23.8461f,0.075f,19.50534f,23.8461f,0f,19.50534f,23.8461f,0.0375f,19.50534f,23.81207f,0.075f,19.3384f,23.81207f,0.0375f,19.3384f,23.8461f,0.05625f,19.50534f,23.81207f,0.05625f,19.3384f,23.81207f,0f,19.3384f,23.8461f,0.01875f,19.50534f,23.81207f,0.01875f,19.3384f});
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f95 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.36446f,0f,19.25576f,22.97047f,0f,19.33607f,23.36446f,0.075f,19.25576f,22.97047f,0.075f,19.33607f,22.97047f,0f,19.33607f,23.10659f,0f,20.00385f,23.2427f,0f,20.67162f,22.97047f,0.075f,19.33607f,23.10659f,0.075f,20.00385f,23.2427f,0.075f,20.67162f,23.03853f,0.075f,19.66996f,23.10659f,0.0375f,20.00385f,23.03853f,0f,19.66996f,23.03853f,0.0375f,19.66996f,23.0045f,0.0375f,19.50301f,23.03853f,0.01875f,19.66996f,23.0045f,0f,19.50301f,23.0045f,0.01875f,19.50301f,23.0045f,0.075f,19.50301f,23.03853f,0.05625f,19.66996f,23.0045f,0.05625f,19.50301f,23.17465f,0.075f,20.33773f,23.17465f,0f,20.33773f,23.17465f,0.0375f,20.33773f,23.20868f,0.075f,20.50468f,23.20868f,0.0375f,20.50468f,23.17465f,0.05625f,20.33773f,23.20868f,0.05625f,20.50468f,23.20868f,0f,20.50468f,23.17465f,0.01875f,20.33773f,23.20868f,0.01875f,20.50468f,23.2427f,0f,20.67162f,23.63669f,0f,20.59131f,23.2427f,0.075f,20.67162f,23.63669f,0.075f,20.59131f,23.63669f,0f,20.59131f,23.36446f,0f,19.25576f,23.63669f,0.075f,20.59131f,23.36446f,0.075f,19.25576f});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.88447f,0f,28.82613f,24.49048f,0f,28.90644f,24.88447f,0.075f,28.82613f,24.49048f,0.075f,28.90644f,24.49048f,0f,28.90644f,24.76272f,0f,30.242f,24.49048f,0.075f,28.90644f,24.76272f,0.075f,30.242f,24.76272f,0f,30.242f,25.1567f,0f,30.16169f,24.76272f,0.075f,30.242f,25.1567f,0.075f,30.16169f,25.1567f,0f,30.16169f,24.88447f,0f,28.82613f,25.1567f,0.075f,30.16169f,24.88447f,0.075f,28.82613f});
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f101 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.47089f,0f,28.91043f,24.0769f,0f,28.99074f,24.47089f,0.075f,28.91043f,24.0769f,0.075f,28.99074f,24.0769f,0f,28.99074f,24.34913f,0f,30.3263f,24.0769f,0.075f,28.99074f,24.34913f,0.075f,30.3263f,24.34913f,0f,30.3263f,24.74312f,0f,30.24599f,24.34913f,0.075f,30.3263f,24.74312f,0.075f,30.24599f,24.74312f,0f,30.24599f,24.47089f,0f,28.91043f,24.74312f,0.075f,30.24599f,24.47089f,0.075f,28.91043f});
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.74636f,0f,28.14856f,23.93879f,0f,28.31317f,24.74636f,0.075f,28.14856f,23.93879f,0.075f,28.31317f,23.93879f,0f,28.31317f,24.0729f,0f,28.97115f,23.93879f,0.075f,28.31317f,24.0729f,0.075f,28.97115f,24.0729f,0f,28.97115f,24.88048f,0f,28.80654f,24.0729f,0.075f,28.97115f,24.88048f,0.075f,28.80654f,24.88048f,0f,28.80654f,24.74636f,0f,28.14856f,24.88048f,0.075f,28.80654f,24.74636f,0.075f,28.14856f});
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f107 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.60824f,0f,27.47098f,23.80067f,0f,27.63559f,24.60824f,0.075f,27.47098f,23.80067f,0.075f,27.63559f,23.80067f,0f,27.63559f,23.93479f,0f,28.29357f,23.80067f,0.075f,27.63559f,23.93479f,0.075f,28.29357f,23.93479f,0f,28.29357f,24.74236f,0f,28.12896f,23.93479f,0.075f,28.29357f,24.74236f,0.075f,28.12896f,24.74236f,0f,28.12896f,24.60824f,0f,27.47098f,24.74236f,0.075f,28.12896f,24.60824f,0.075f,27.47098f});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.33201f,0f,26.11583f,23.93803f,0f,26.19613f,24.33201f,0.075f,26.11583f,23.93803f,0.075f,26.19613f,23.93803f,0f,26.19613f,24.21026f,0f,27.53169f,23.93803f,0.075f,26.19613f,24.21026f,0.075f,27.53169f,24.21026f,0f,27.53169f,24.60425f,0f,27.45138f,24.21026f,0.075f,27.53169f,24.60425f,0.075f,27.45138f,24.60425f,0f,27.45138f,24.33201f,0f,26.11583f,24.60425f,0.075f,27.45138f,24.33201f,0.075f,26.11583f});
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f113 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.91843f,0f,26.20013f,23.52444f,0f,26.28044f,23.91843f,0.075f,26.20013f,23.52444f,0.075f,26.28044f,23.52444f,0f,26.28044f,23.79668f,0f,27.61599f,23.52444f,0.075f,26.28044f,23.79668f,0.075f,27.61599f,23.79668f,0f,27.61599f,24.19066f,0f,27.53568f,23.79668f,0.075f,27.61599f,24.19066f,0.075f,27.53568f,24.19066f,0f,27.53568f,23.91843f,0f,26.20013f,24.19066f,0.075f,27.53568f,23.91843f,0.075f,26.20013f});
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.1939f,0f,25.43825f,23.38633f,0f,25.60286f,24.1939f,0.075f,25.43825f,23.38633f,0.075f,25.60286f,23.38633f,0f,25.60286f,23.52045f,0f,26.26084f,23.38633f,0.075f,25.60286f,23.52045f,0.075f,26.26084f,23.52045f,0f,26.26084f,24.32802f,0f,26.09623f,23.52045f,0.075f,26.26084f,24.32802f,0.075f,26.09623f,24.32802f,0f,26.09623f,24.1939f,0f,25.43825f,24.32802f,0.075f,26.09623f,24.1939f,0.075f,25.43825f});
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f119 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.05579f,0f,24.76067f,23.24821f,0f,24.92529f,24.05579f,0.075f,24.76067f,23.24821f,0.075f,24.92529f,23.24821f,0f,24.92529f,23.38233f,0f,25.58327f,23.24821f,0.075f,24.92529f,23.38233f,0.075f,25.58327f,23.38233f,0f,25.58327f,24.18991f,0f,25.41865f,23.38233f,0.075f,25.58327f,24.18991f,0.075f,25.41865f,24.18991f,0f,25.41865f,24.05579f,0f,24.76067f,24.18991f,0.075f,25.41865f,24.05579f,0.075f,24.76067f});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.77956f,0f,23.40552f,23.38557f,0f,23.48583f,23.77956f,0.075f,23.40552f,23.38557f,0.075f,23.48583f,23.38557f,0f,23.48583f,23.52169f,0f,24.15361f,23.6578f,0f,24.82138f,23.38557f,0.075f,23.48583f,23.52169f,0.075f,24.15361f,23.6578f,0.075f,24.82138f,23.45363f,0.075f,23.81972f,23.52169f,0.0375f,24.15361f,23.45363f,0f,23.81972f,23.45363f,0.0375f,23.81972f,23.4196f,0.0375f,23.65277f,23.45363f,0.01875f,23.81972f,23.4196f,0f,23.65277f,23.4196f,0.01875f,23.65277f,23.4196f,0.075f,23.65277f,23.45363f,0.05625f,23.81972f,23.4196f,0.05625f,23.65277f,23.58975f,0.075f,24.4875f,23.58975f,0f,24.4875f,23.58975f,0.0375f,24.4875f,23.62378f,0.075f,24.65444f,23.62378f,0.0375f,24.65444f,23.58975f,0.05625f,24.4875f,23.62378f,0.05625f,24.65444f,23.62378f,0f,24.65444f,23.58975f,0.01875f,24.4875f,23.62378f,0.01875f,24.65444f,23.6578f,0f,24.82138f,24.05179f,0f,24.74108f,23.6578f,0.075f,24.82138f,24.05179f,0.075f,24.74108f,24.05179f,0f,24.74108f,23.91567f,0f,24.0733f,23.77956f,0f,23.40552f,24.05179f,0.075f,24.74108f,23.91567f,0.075f,24.0733f,23.77956f,0.075f,23.40552f,23.98373f,0.075f,24.40719f,23.91567f,0.0375f,24.0733f,23.98373f,0f,24.40719f,23.98373f,0.0375f,24.40719f,24.01776f,0.0375f,24.57413f,23.98373f,0.01875f,24.40719f,24.01776f,0f,24.57413f,24.01776f,0.01875f,24.57413f,24.01776f,0.075f,24.57413f,23.98373f,0.05625f,24.40719f,24.01776f,0.05625f,24.57413f,23.84762f,0.075f,23.73941f,23.84762f,0f,23.73941f,23.84762f,0.0375f,23.73941f,23.81359f,0.075f,23.57247f,23.81359f,0.0375f,23.57247f,23.84762f,0.05625f,23.73941f,23.81359f,0.05625f,23.57247f,23.81359f,0f,23.57247f,23.84762f,0.01875f,23.73941f,23.81359f,0.01875f,23.57247f});
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f125 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.36597f,0f,23.48982f,22.97199f,0f,23.57013f,23.36597f,0.075f,23.48982f,22.97199f,0.075f,23.57013f,22.97199f,0f,23.57013f,23.1081f,0f,24.23791f,23.24422f,0f,24.90569f,22.97199f,0.075f,23.57013f,23.1081f,0.075f,24.23791f,23.24422f,0.075f,24.90569f,23.04004f,0.075f,23.90402f,23.1081f,0.0375f,24.23791f,23.04004f,0f,23.90402f,23.04004f,0.0375f,23.90402f,23.00602f,0.0375f,23.73708f,23.04004f,0.01875f,23.90402f,23.00602f,0f,23.73708f,23.00602f,0.01875f,23.73708f,23.00602f,0.075f,23.73708f,23.04004f,0.05625f,23.90402f,23.00602f,0.05625f,23.73708f,23.17616f,0.075f,24.5718f,23.17616f,0f,24.5718f,23.17616f,0.0375f,24.5718f,23.21019f,0.075f,24.73874f,23.21019f,0.0375f,24.73874f,23.17616f,0.05625f,24.5718f,23.21019f,0.05625f,24.73874f,23.21019f,0f,24.73874f,23.17616f,0.01875f,24.5718f,23.21019f,0.01875f,24.73874f,23.24422f,0f,24.90569f,23.63821f,0f,24.82538f,23.24422f,0.075f,24.90569f,23.63821f,0.075f,24.82538f,23.63821f,0f,24.82538f,23.50209f,0f,24.1576f,23.36597f,0f,23.48982f,23.63821f,0.075f,24.82538f,23.50209f,0.075f,24.1576f,23.36597f,0.075f,23.48982f,23.57015f,0.075f,24.49149f,23.50209f,0.0375f,24.1576f,23.57015f,0f,24.49149f,23.57015f,0.0375f,24.49149f,23.60418f,0.0375f,24.65844f,23.57015f,0.01875f,24.49149f,23.60418f,0f,24.65844f,23.60418f,0.01875f,24.65844f,23.60418f,0.075f,24.65844f,23.57015f,0.05625f,24.49149f,23.60418f,0.05625f,24.65844f,23.43403f,0.075f,23.82371f,23.43403f,0f,23.82371f,23.43403f,0.0375f,23.82371f,23.4f,0.075f,23.65677f,23.4f,0.0375f,23.65677f,23.43403f,0.05625f,23.82371f,23.4f,0.05625f,23.65677f,23.4f,0f,23.65677f,23.43403f,0.01875f,23.82371f,23.4f,0.01875f,23.65677f});
  }
}
private class MFInt32126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.64144f,0f,22.72794f,22.83387f,0f,22.89256f,23.64144f,0.075f,22.72794f,22.83387f,0.075f,22.89256f,22.83387f,0f,22.89256f,22.96799f,0f,23.55054f,22.83387f,0.075f,22.89256f,22.96799f,0.075f,23.55054f,22.96799f,0f,23.55054f,23.77556f,0f,23.38592f,22.96799f,0.075f,23.55054f,23.77556f,0.075f,23.38592f,23.77556f,0f,23.38592f,23.64144f,0f,22.72794f,23.77556f,0.075f,23.38592f,23.64144f,0.075f,22.72794f});
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f131 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.50333f,0f,22.05037f,22.69576f,0f,22.21498f,23.50333f,0.075f,22.05037f,22.69576f,0.075f,22.21498f,22.69576f,0f,22.21498f,22.82988f,0f,22.87296f,22.69576f,0.075f,22.21498f,22.82988f,0.075f,22.87296f,22.82988f,0f,22.87296f,23.63745f,0f,22.70835f,22.82988f,0.075f,22.87296f,23.63745f,0.075f,22.70835f,23.63745f,0f,22.70835f,23.50333f,0f,22.05037f,23.63745f,0.075f,22.70835f,23.50333f,0.075f,22.05037f});
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.2271f,0f,20.69522f,22.83311f,0f,20.77552f,23.2271f,0.075f,20.69522f,22.83311f,0.075f,20.77552f,22.83311f,0f,20.77552f,23.10535f,0f,22.11108f,22.83311f,0.075f,20.77552f,23.10535f,0.075f,22.11108f,23.10535f,0f,22.11108f,23.49934f,0f,22.03077f,23.10535f,0.075f,22.11108f,23.49934f,0.075f,22.03077f,23.49934f,0f,22.03077f,23.2271f,0f,20.69522f,23.49934f,0.075f,22.03077f,23.2271f,0.075f,20.69522f});
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f137 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.81352f,0f,20.77952f,22.41953f,0f,20.85983f,22.81352f,0.075f,20.77952f,22.41953f,0.075f,20.85983f,22.41953f,0f,20.85983f,22.69176f,0f,22.19538f,22.41953f,0.075f,20.85983f,22.69176f,0.075f,22.19538f,22.69176f,0f,22.19538f,23.08575f,0f,22.11507f,22.69176f,0.075f,22.19538f,23.08575f,0.075f,22.11507f,23.08575f,0f,22.11507f,22.81352f,0f,20.77952f,23.08575f,0.075f,22.11507f,22.81352f,0.075f,20.77952f});
  }
}
private class MFInt32138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f140 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.08899f,0f,20.01764f,22.28142f,0f,20.18225f,23.08899f,0.075f,20.01764f,22.28142f,0.075f,20.18225f,22.28142f,0f,20.18225f,22.41554f,0f,20.84023f,22.28142f,0.075f,20.18225f,22.41554f,0.075f,20.84023f,22.41554f,0f,20.84023f,23.22311f,0f,20.67562f,22.41554f,0.075f,20.84023f,23.22311f,0.075f,20.67562f,23.22311f,0f,20.67562f,23.08899f,0f,20.01764f,23.22311f,0.075f,20.67562f,23.08899f,0.075f,20.01764f});
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f143 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.95087f,0f,19.34006f,22.1433f,0f,19.50467f,22.95087f,0.075f,19.34006f,22.1433f,0.075f,19.50467f,22.1433f,0f,19.50467f,22.27742f,0f,20.16265f,22.1433f,0.075f,19.50467f,22.27742f,0.075f,20.16265f,22.27742f,0f,20.16265f,23.08499f,0f,19.99804f,22.27742f,0.075f,20.16265f,23.08499f,0.075f,19.99804f,23.08499f,0f,19.99804f,22.95087f,0f,19.34006f,23.08499f,0.075f,19.99804f,22.95087f,0.075f,19.34006f});
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.67465f,0f,17.98491f,22.28066f,0f,18.06522f,22.67465f,0.075f,17.98491f,22.28066f,0.075f,18.06522f,22.28066f,0f,18.06522f,22.41678f,0f,18.733f,22.55289f,0f,19.40077f,22.28066f,0.075f,18.06522f,22.41678f,0.075f,18.733f,22.55289f,0.075f,19.40077f,22.34872f,0.075f,18.39911f,22.41678f,0.0375f,18.733f,22.34872f,0f,18.39911f,22.34872f,0.0375f,18.39911f,22.31469f,0.0375f,18.23216f,22.34872f,0.01875f,18.39911f,22.31469f,0f,18.23216f,22.31469f,0.01875f,18.23216f,22.31469f,0.075f,18.23216f,22.34872f,0.05625f,18.39911f,22.31469f,0.05625f,18.23216f,22.48483f,0.075f,19.06688f,22.48483f,0f,19.06688f,22.48483f,0.0375f,19.06688f,22.51886f,0.075f,19.23383f,22.51886f,0.0375f,19.23383f,22.48483f,0.05625f,19.06688f,22.51886f,0.05625f,19.23383f,22.51886f,0f,19.23383f,22.48483f,0.01875f,19.06688f,22.51886f,0.01875f,19.23383f,22.55289f,0f,19.40077f,22.94688f,0f,19.32047f,22.55289f,0.075f,19.40077f,22.94688f,0.075f,19.32047f,22.94688f,0f,19.32047f,22.81076f,0f,18.65269f,22.67465f,0f,17.98491f,22.94688f,0.075f,19.32047f,22.81076f,0.075f,18.65269f,22.67465f,0.075f,17.98491f,22.87882f,0.075f,18.98658f,22.81076f,0.0375f,18.65269f,22.87882f,0f,18.98658f,22.87882f,0.0375f,18.98658f,22.91285f,0.0375f,19.15352f,22.87882f,0.01875f,18.98658f,22.91285f,0f,19.15352f,22.91285f,0.01875f,19.15352f,22.91285f,0.075f,19.15352f,22.87882f,0.05625f,18.98658f,22.91285f,0.05625f,19.15352f,22.7427f,0.075f,18.3188f,22.7427f,0f,18.3188f,22.7427f,0.0375f,18.3188f,22.70868f,0.075f,18.15185f,22.70868f,0.0375f,18.15185f,22.7427f,0.05625f,18.3188f,22.70868f,0.05625f,18.15185f,22.70868f,0f,18.15185f,22.7427f,0.01875f,18.3188f,22.70868f,0.01875f,18.15185f});
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f149 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.26106f,0f,18.06921f,21.86707f,0f,18.14952f,22.26106f,0.075f,18.06921f,21.86707f,0.075f,18.14952f,21.86707f,0f,18.14952f,22.00319f,0f,18.8173f,22.13931f,0f,19.48508f,21.86707f,0.075f,18.14952f,22.00319f,0.075f,18.8173f,22.13931f,0.075f,19.48508f,21.93513f,0.075f,18.48341f,22.00319f,0.0375f,18.8173f,21.93513f,0f,18.48341f,21.93513f,0.0375f,18.48341f,21.9011f,0.0375f,18.31647f,21.93513f,0.01875f,18.48341f,21.9011f,0f,18.31647f,21.9011f,0.01875f,18.31647f,21.9011f,0.075f,18.31647f,21.93513f,0.05625f,18.48341f,21.9011f,0.05625f,18.31647f,22.07125f,0.075f,19.15119f,22.07125f,0f,19.15119f,22.07125f,0.0375f,19.15119f,22.10528f,0.075f,19.31813f,22.10528f,0.0375f,19.31813f,22.07125f,0.05625f,19.15119f,22.10528f,0.05625f,19.31813f,22.10528f,0f,19.31813f,22.07125f,0.01875f,19.15119f,22.10528f,0.01875f,19.31813f,22.13931f,0f,19.48508f,22.53329f,0f,19.40477f,22.13931f,0.075f,19.48508f,22.53329f,0.075f,19.40477f,22.53329f,0f,19.40477f,22.39718f,0f,18.73699f,22.26106f,0f,18.06921f,22.53329f,0.075f,19.40477f,22.39718f,0.075f,18.73699f,22.26106f,0.075f,18.06921f,22.46524f,0.075f,19.07088f,22.39718f,0.0375f,18.73699f,22.46524f,0f,19.07088f,22.46524f,0.0375f,19.07088f,22.49927f,0.0375f,19.23782f,22.46524f,0.01875f,19.07088f,22.49927f,0f,19.23782f,22.49927f,0.01875f,19.23782f,22.49927f,0.075f,19.23782f,22.46524f,0.05625f,19.07088f,22.49927f,0.05625f,19.23782f,22.32912f,0.075f,18.4031f,22.32912f,0f,18.4031f,22.32912f,0.0375f,18.4031f,22.29509f,0.075f,18.23616f,22.29509f,0.0375f,18.23616f,22.32912f,0.05625f,18.4031f,22.29509f,0.05625f,18.23616f,22.29509f,0f,18.23616f,22.32912f,0.01875f,18.4031f,22.29509f,0.01875f,18.23616f});
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.0573f,0f,28.99474f,23.24973f,0f,29.15935f,24.0573f,0.075f,28.99474f,23.24973f,0.075f,29.15935f,23.24973f,0f,29.15935f,23.38385f,0f,29.81733f,23.24973f,0.075f,29.15935f,23.38385f,0.075f,29.81733f,23.38385f,0f,29.81733f,24.19142f,0f,29.65272f,23.38385f,0.075f,29.81733f,24.19142f,0.075f,29.65272f,24.19142f,0f,29.65272f,24.0573f,0f,28.99474f,24.19142f,0.075f,29.65272f,24.0573f,0.075f,28.99474f});
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32154 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f155 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.78107f,0f,27.63959f,23.38709f,0f,27.71989f,23.78107f,0.075f,27.63959f,23.38709f,0.075f,27.71989f,23.38709f,0f,27.71989f,23.65932f,0f,29.05545f,23.38709f,0.075f,27.71989f,23.65932f,0.075f,29.05545f,23.65932f,0f,29.05545f,24.05331f,0f,28.97514f,23.65932f,0.075f,29.05545f,24.05331f,0.075f,28.97514f,24.05331f,0f,28.97514f,23.91719f,0f,28.30736f,23.78107f,0f,27.63959f,24.05331f,0.075f,28.97514f,23.91719f,0.075f,28.30736f,23.78107f,0.075f,27.63959f,23.98525f,0.075f,28.64125f,23.91719f,0.0375f,28.30736f,23.98525f,0f,28.64125f,23.98525f,0.0375f,28.64125f,24.01928f,0.0375f,28.8082f,23.98525f,0.01875f,28.64125f,24.01928f,0f,28.8082f,24.01928f,0.01875f,28.8082f,24.01928f,0.075f,28.8082f,23.98525f,0.05625f,28.64125f,24.01928f,0.05625f,28.8082f,23.84913f,0.075f,27.97347f,23.84913f,0f,27.97347f,23.84913f,0.0375f,27.97347f,23.8151f,0.075f,27.80653f,23.8151f,0.0375f,27.80653f,23.84913f,0.05625f,27.97347f,23.8151f,0.05625f,27.80653f,23.8151f,0f,27.80653f,23.84913f,0.01875f,27.97347f,23.8151f,0.01875f,27.80653f});
  }
}
private class MFInt32156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.36749f,0f,27.72389f,22.9735f,0f,27.8042f,23.36749f,0.075f,27.72389f,22.9735f,0.075f,27.8042f,22.9735f,0f,27.8042f,23.24574f,0f,29.13975f,22.9735f,0.075f,27.8042f,23.24574f,0.075f,29.13975f,23.24574f,0f,29.13975f,23.63972f,0f,29.05944f,23.24574f,0.075f,29.13975f,23.63972f,0.075f,29.05944f,23.63972f,0f,29.05944f,23.36749f,0f,27.72389f,23.63972f,0.075f,29.05944f,23.36749f,0.075f,27.72389f});
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f161 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.64296f,0f,26.96201f,22.83539f,0f,27.12662f,23.64296f,0.075f,26.96201f,22.83539f,0.075f,27.12662f,22.83539f,0f,27.12662f,22.96951f,0f,27.7846f,22.83539f,0.075f,27.12662f,22.96951f,0.075f,27.7846f,22.96951f,0f,27.7846f,23.77708f,0f,27.61999f,22.96951f,0.075f,27.7846f,23.77708f,0.075f,27.61999f,23.77708f,0f,27.61999f,23.64296f,0f,26.96201f,23.77708f,0.075f,27.61999f,23.64296f,0.075f,26.96201f});
  }
}
private class MFInt32162 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f164 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.50485f,0f,26.28443f,22.69728f,0f,26.44904f,23.50485f,0.075f,26.28443f,22.69728f,0.075f,26.44904f,22.69728f,0f,26.44904f,22.83139f,0f,27.10702f,22.69728f,0.075f,26.44904f,22.83139f,0.075f,27.10702f,22.83139f,0f,27.10702f,23.63897f,0f,26.94241f,22.83139f,0.075f,27.10702f,23.63897f,0.075f,26.94241f,23.63897f,0f,26.94241f,23.50485f,0f,26.28443f,23.63897f,0.075f,26.94241f,23.50485f,0.075f,26.28443f});
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32166 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f167 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.22862f,0f,24.92928f,22.83463f,0f,25.00959f,23.22862f,0.075f,24.92928f,22.83463f,0.075f,25.00959f,22.83463f,0f,25.00959f,22.97075f,0f,25.67737f,23.10686f,0f,26.34514f,22.83463f,0.075f,25.00959f,22.97075f,0.075f,25.67737f,23.10686f,0.075f,26.34514f,22.90269f,0.075f,25.34348f,22.97075f,0.0375f,25.67737f,22.90269f,0f,25.34348f,22.90269f,0.0375f,25.34348f,22.86866f,0.0375f,25.17653f,22.90269f,0.01875f,25.34348f,22.86866f,0f,25.17653f,22.86866f,0.01875f,25.17653f,22.86866f,0.075f,25.17653f,22.90269f,0.05625f,25.34348f,22.86866f,0.05625f,25.17653f,23.03881f,0.075f,26.01126f,23.03881f,0f,26.01126f,23.03881f,0.0375f,26.01126f,23.07284f,0.075f,26.1782f,23.07284f,0.0375f,26.1782f,23.03881f,0.05625f,26.01126f,23.07284f,0.05625f,26.1782f,23.07284f,0f,26.1782f,23.03881f,0.01875f,26.01126f,23.07284f,0.01875f,26.1782f,23.10686f,0f,26.34514f,23.50085f,0f,26.26484f,23.10686f,0.075f,26.34514f,23.50085f,0.075f,26.26484f,23.50085f,0f,26.26484f,23.22862f,0f,24.92928f,23.50085f,0.075f,26.26484f,23.22862f,0.075f,24.92928f});
  }
}
private class MFInt32168 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.81503f,0f,25.01358f,22.42105f,0f,25.09389f,22.81503f,0.075f,25.01358f,22.42105f,0.075f,25.09389f,22.42105f,0f,25.09389f,22.69328f,0f,26.42945f,22.42105f,0.075f,25.09389f,22.69328f,0.075f,26.42945f,22.69328f,0f,26.42945f,23.08727f,0f,26.34914f,22.69328f,0.075f,26.42945f,23.08727f,0.075f,26.34914f,23.08727f,0f,26.34914f,22.95115f,0f,25.68136f,22.81503f,0f,25.01358f,23.08727f,0.075f,26.34914f,22.95115f,0.075f,25.68136f,22.81503f,0.075f,25.01358f,23.01921f,0.075f,26.01525f,22.95115f,0.0375f,25.68136f,23.01921f,0f,26.01525f,23.01921f,0.0375f,26.01525f,23.05324f,0.0375f,26.18219f,23.01921f,0.01875f,26.01525f,23.05324f,0f,26.18219f,23.05324f,0.01875f,26.18219f,23.05324f,0.075f,26.18219f,23.01921f,0.05625f,26.01525f,23.05324f,0.05625f,26.18219f,22.88309f,0.075f,25.34747f,22.88309f,0f,25.34747f,22.88309f,0.0375f,25.34747f,22.84906f,0.075f,25.18053f,22.84906f,0.0375f,25.18053f,22.88309f,0.05625f,25.34747f,22.84906f,0.05625f,25.18053f,22.84906f,0f,25.18053f,22.88309f,0.01875f,25.34747f,22.84906f,0.01875f,25.18053f});
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32172 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f173 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.0905f,0f,24.2517f,22.28293f,0f,24.41632f,23.0905f,0.075f,24.2517f,22.28293f,0.075f,24.41632f,22.28293f,0f,24.41632f,22.41705f,0f,25.07429f,22.28293f,0.075f,24.41632f,22.41705f,0.075f,25.07429f,22.41705f,0f,25.07429f,23.22462f,0f,24.90968f,22.41705f,0.075f,25.07429f,23.22462f,0.075f,24.90968f,23.22462f,0f,24.90968f,23.0905f,0f,24.2517f,23.22462f,0.075f,24.90968f,23.0905f,0.075f,24.2517f});
  }
}
private class MFInt32174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f176 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.95239f,0f,23.57413f,22.14482f,0f,23.73874f,22.95239f,0.075f,23.57413f,22.14482f,0.075f,23.73874f,22.14482f,0f,23.73874f,22.27894f,0f,24.39672f,22.14482f,0.075f,23.73874f,22.27894f,0.075f,24.39672f,22.27894f,0f,24.39672f,23.08651f,0f,24.23211f,22.27894f,0.075f,24.39672f,23.08651f,0.075f,24.23211f,23.08651f,0f,24.23211f,22.95239f,0f,23.57413f,23.08651f,0.075f,24.23211f,22.95239f,0.075f,23.57413f});
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32178 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f179 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.67616f,0f,22.21897f,22.28218f,0f,22.29928f,22.67616f,0.075f,22.21897f,22.28218f,0.075f,22.29928f,22.28218f,0f,22.29928f,22.55441f,0f,23.63484f,22.28218f,0.075f,22.29928f,22.55441f,0.075f,23.63484f,22.55441f,0f,23.63484f,22.94839f,0f,23.55453f,22.55441f,0.075f,23.63484f,22.94839f,0.075f,23.55453f,22.94839f,0f,23.55453f,22.81228f,0f,22.88675f,22.67616f,0f,22.21897f,22.94839f,0.075f,23.55453f,22.81228f,0.075f,22.88675f,22.67616f,0.075f,22.21897f,22.88034f,0.075f,23.22064f,22.81228f,0.0375f,22.88675f,22.88034f,0f,23.22064f,22.88034f,0.0375f,23.22064f,22.91437f,0.0375f,23.38758f,22.88034f,0.01875f,23.22064f,22.91437f,0f,23.38758f,22.91437f,0.01875f,23.38758f,22.91437f,0.075f,23.38758f,22.88034f,0.05625f,23.22064f,22.91437f,0.05625f,23.38758f,22.74422f,0.075f,22.55286f,22.74422f,0f,22.55286f,22.74422f,0.0375f,22.55286f,22.71019f,0.075f,22.38592f,22.71019f,0.0375f,22.38592f,22.74422f,0.05625f,22.55286f,22.71019f,0.05625f,22.38592f,22.71019f,0f,22.38592f,22.74422f,0.01875f,22.55286f,22.71019f,0.01875f,22.38592f});
  }
}
private class MFInt32180 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.26258f,0f,22.30328f,21.86859f,0f,22.38358f,22.26258f,0.075f,22.30328f,21.86859f,0.075f,22.38358f,21.86859f,0f,22.38358f,22.00471f,0f,23.05136f,22.14083f,0f,23.71914f,21.86859f,0.075f,22.38358f,22.00471f,0.075f,23.05136f,22.14083f,0.075f,23.71914f,21.93665f,0.075f,22.71747f,22.00471f,0.0375f,23.05136f,21.93665f,0f,22.71747f,21.93665f,0.0375f,22.71747f,21.90262f,0.0375f,22.55053f,21.93665f,0.01875f,22.71747f,21.90262f,0f,22.55053f,21.90262f,0.01875f,22.55053f,21.90262f,0.075f,22.55053f,21.93665f,0.05625f,22.71747f,21.90262f,0.05625f,22.55053f,22.07277f,0.075f,23.38525f,22.07277f,0f,23.38525f,22.07277f,0.0375f,23.38525f,22.1068f,0.075f,23.5522f,22.1068f,0.0375f,23.5522f,22.07277f,0.05625f,23.38525f,22.1068f,0.05625f,23.5522f,22.1068f,0f,23.5522f,22.07277f,0.01875f,23.38525f,22.1068f,0.01875f,23.5522f,22.14083f,0f,23.71914f,22.53481f,0f,23.63883f,22.14083f,0.075f,23.71914f,22.53481f,0.075f,23.63883f,22.53481f,0f,23.63883f,22.26258f,0f,22.30328f,22.53481f,0.075f,23.63883f,22.26258f,0.075f,22.30328f});
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32184 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f185 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.53805f,0f,21.5414f,21.73048f,0f,21.70601f,22.53805f,0.075f,21.5414f,21.73048f,0.075f,21.70601f,21.73048f,0f,21.70601f,21.8646f,0f,22.36399f,21.73048f,0.075f,21.70601f,21.8646f,0.075f,22.36399f,21.8646f,0f,22.36399f,22.67217f,0f,22.19938f,21.8646f,0.075f,22.36399f,22.67217f,0.075f,22.19938f,22.67217f,0f,22.19938f,22.53805f,0f,21.5414f,22.67217f,0.075f,22.19938f,22.53805f,0.075f,21.5414f});
  }
}
private class MFInt32186 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.39993f,0f,20.86382f,21.59236f,0f,21.02843f,22.39993f,0.075f,20.86382f,21.59236f,0.075f,21.02843f,21.59236f,0f,21.02843f,21.72648f,0f,21.68641f,21.59236f,0.075f,21.02843f,21.72648f,0.075f,21.68641f,21.72648f,0f,21.68641f,22.53405f,0f,21.5218f,21.72648f,0.075f,21.68641f,22.53405f,0.075f,21.5218f,22.53405f,0f,21.5218f,22.39993f,0f,20.86382f,22.53405f,0.075f,21.5218f,22.39993f,0.075f,20.86382f});
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32190 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f191 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.12371f,0f,19.50867f,21.72972f,0f,19.58898f,22.12371f,0.075f,19.50867f,21.72972f,0.075f,19.58898f,21.72972f,0f,19.58898f,22.00195f,0f,20.92453f,21.72972f,0.075f,19.58898f,22.00195f,0.075f,20.92453f,22.00195f,0f,20.92453f,22.39594f,0f,20.84422f,22.00195f,0.075f,20.92453f,22.39594f,0.075f,20.84422f,22.39594f,0f,20.84422f,22.25982f,0f,20.17645f,22.12371f,0f,19.50867f,22.39594f,0.075f,20.84422f,22.25982f,0.075f,20.17645f,22.12371f,0.075f,19.50867f,22.32788f,0.075f,20.51034f,22.25982f,0.0375f,20.17645f,22.32788f,0f,20.51034f,22.32788f,0.0375f,20.51034f,22.36191f,0.0375f,20.67728f,22.32788f,0.01875f,20.51034f,22.36191f,0f,20.67728f,22.36191f,0.01875f,20.67728f,22.36191f,0.075f,20.67728f,22.32788f,0.05625f,20.51034f,22.36191f,0.05625f,20.67728f,22.19176f,0.075f,19.84256f,22.19176f,0f,19.84256f,22.19176f,0.0375f,19.84256f,22.15774f,0.075f,19.67561f,22.15774f,0.0375f,19.67561f,22.19176f,0.05625f,19.84256f,22.15774f,0.05625f,19.67561f,22.15774f,0f,19.67561f,22.19176f,0.01875f,19.84256f,22.15774f,0.01875f,19.67561f});
  }
}
private class MFInt32192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.71012f,0f,19.59297f,21.31614f,0f,19.67328f,21.71012f,0.075f,19.59297f,21.31614f,0.075f,19.67328f,21.31614f,0f,19.67328f,21.45225f,0f,20.34106f,21.58837f,0f,21.00883f,21.31614f,0.075f,19.67328f,21.45225f,0.075f,20.34106f,21.58837f,0.075f,21.00883f,21.38419f,0.075f,20.00717f,21.45225f,0.0375f,20.34106f,21.38419f,0f,20.00717f,21.38419f,0.0375f,20.00717f,21.35016f,0.0375f,19.84022f,21.38419f,0.01875f,20.00717f,21.35016f,0f,19.84022f,21.35016f,0.01875f,19.84022f,21.35016f,0.075f,19.84022f,21.38419f,0.05625f,20.00717f,21.35016f,0.05625f,19.84022f,21.52031f,0.075f,20.67495f,21.52031f,0f,20.67495f,21.52031f,0.0375f,20.67495f,21.55434f,0.075f,20.84189f,21.55434f,0.0375f,20.84189f,21.52031f,0.05625f,20.67495f,21.55434f,0.05625f,20.84189f,21.55434f,0f,20.84189f,21.52031f,0.01875f,20.67495f,21.55434f,0.01875f,20.84189f,21.58837f,0f,21.00883f,21.98236f,0f,20.92853f,21.58837f,0.075f,21.00883f,21.98236f,0.075f,20.92853f,21.98236f,0f,20.92853f,21.71012f,0f,19.59297f,21.98236f,0.075f,20.92853f,21.71012f,0.075f,19.59297f});
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32196 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f197 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.98559f,0f,18.83109f,21.17802f,0f,18.9957f,21.98559f,0.075f,18.83109f,21.17802f,0.075f,18.9957f,21.17802f,0f,18.9957f,21.31214f,0f,19.65368f,21.17802f,0.075f,18.9957f,21.31214f,0.075f,19.65368f,21.31214f,0f,19.65368f,22.11971f,0f,19.48907f,21.31214f,0.075f,19.65368f,22.11971f,0.075f,19.48907f,22.11971f,0f,19.48907f,21.98559f,0f,18.83109f,22.11971f,0.075f,19.48907f,21.98559f,0.075f,18.83109f});
  }
}
private class MFInt32198 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f200 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.84748f,0f,18.15351f,21.03991f,0f,18.31813f,21.84748f,0.075f,18.15351f,21.03991f,0.075f,18.31813f,21.03991f,0f,18.31813f,21.17403f,0f,18.97611f,21.03991f,0.075f,18.31813f,21.17403f,0.075f,18.97611f,21.17403f,0f,18.97611f,21.9816f,0f,18.81149f,21.17403f,0.075f,18.97611f,21.9816f,0.075f,18.81149f,21.9816f,0f,18.81149f,21.84748f,0f,18.15351f,21.9816f,0.075f,18.81149f,21.84748f,0.075f,18.15351f});
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32202 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f203 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.57125f,0f,16.79836f,21.17726f,0f,16.87867f,21.57125f,0.075f,16.79836f,21.17726f,0.075f,16.87867f,21.17726f,0f,16.87867f,21.4495f,0f,18.21423f,21.17726f,0.075f,16.87867f,21.4495f,0.075f,18.21423f,21.4495f,0f,18.21423f,21.84348f,0f,18.13392f,21.4495f,0.075f,18.21423f,21.84348f,0.075f,18.13392f,21.84348f,0f,18.13392f,21.57125f,0f,16.79836f,21.84348f,0.075f,18.13392f,21.57125f,0.075f,16.79836f});
  }
}
private class MFInt32204 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.15767f,0f,16.88267f,20.76368f,0f,16.96297f,21.15767f,0.075f,16.88267f,20.76368f,0.075f,16.96297f,20.76368f,0f,16.96297f,20.8998f,0f,17.63075f,21.03591f,0f,18.29853f,20.76368f,0.075f,16.96297f,20.8998f,0.075f,17.63075f,21.03591f,0.075f,18.29853f,20.83174f,0.075f,17.29686f,20.8998f,0.0375f,17.63075f,20.83174f,0f,17.29686f,20.83174f,0.0375f,17.29686f,20.79771f,0.0375f,17.12992f,20.83174f,0.01875f,17.29686f,20.79771f,0f,17.12992f,20.79771f,0.01875f,17.12992f,20.79771f,0.075f,17.12992f,20.83174f,0.05625f,17.29686f,20.79771f,0.05625f,17.12992f,20.96785f,0.075f,17.96464f,20.96785f,0f,17.96464f,20.96785f,0.0375f,17.96464f,21.00188f,0.075f,18.13159f,21.00188f,0.0375f,18.13159f,20.96785f,0.05625f,17.96464f,21.00188f,0.05625f,18.13159f,21.00188f,0f,18.13159f,20.96785f,0.01875f,17.96464f,21.00188f,0.01875f,18.13159f,21.03591f,0f,18.29853f,21.4299f,0f,18.21822f,21.03591f,0.075f,18.29853f,21.4299f,0.075f,18.21822f,21.4299f,0f,18.21822f,21.15767f,0f,16.88267f,21.4299f,0.075f,18.21822f,21.15767f,0.075f,16.88267f});
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32208 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f209 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.05275f,0f,11.46205f,19.85576f,0f,11.50221f,19.65877f,0f,11.54236f,20.05275f,0.075f,11.46205f,19.85576f,0.075f,11.50221f,19.65877f,0.075f,11.54236f,19.65877f,0f,11.54236f,19.931f,0f,12.87792f,19.65877f,0.075f,11.54236f,19.931f,0.075f,12.87792f,19.931f,0f,12.87792f,20.32499f,0f,12.79761f,19.931f,0.075f,12.87792f,20.32499f,0.075f,12.79761f,20.32499f,0f,12.79761f,20.05275f,0f,11.46205f,20.32499f,0.075f,12.79761f,20.05275f,0.075f,11.46205f});
  }
}
private class MFInt32210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.32822f,0f,10.70017f,19.52065f,0f,10.86479f,20.32822f,0.075f,10.70017f,19.52065f,0.075f,10.86479f,19.52065f,0f,10.86479f,19.65477f,0f,11.52277f,19.52065f,0.075f,10.86479f,19.65477f,0.075f,11.52277f,19.65477f,0f,11.52277f,20.05856f,0f,11.44046f,20.46234f,0f,11.35815f,19.65477f,0.075f,11.52277f,20.05856f,0.075f,11.44046f,20.46234f,0.075f,11.35815f,19.85666f,0.075f,11.48161f,20.05856f,0.0375f,11.44046f,19.85666f,0f,11.48161f,19.85666f,0.0375f,11.48161f,20.26045f,0.075f,11.39931f,20.26045f,0f,11.39931f,20.26045f,0.0375f,11.39931f,20.46234f,0f,11.35815f,20.32822f,0f,10.70017f,20.46234f,0.075f,11.35815f,20.32822f,0.075f,10.70017f});
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f215 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.19011f,0f,10.0226f,19.38254f,0f,10.18721f,20.19011f,0.075f,10.0226f,19.38254f,0.075f,10.18721f,19.38254f,0f,10.18721f,19.51666f,0f,10.84519f,19.38254f,0.075f,10.18721f,19.51666f,0.075f,10.84519f,19.51666f,0f,10.84519f,19.92044f,0f,10.76288f,20.32423f,0f,10.68058f,19.51666f,0.075f,10.84519f,19.92044f,0.075f,10.76288f,20.32423f,0.075f,10.68058f,19.71855f,0.075f,10.80404f,19.92044f,0.0375f,10.76288f,19.71855f,0f,10.80404f,19.71855f,0.0375f,10.80404f,20.12234f,0.075f,10.72173f,20.12234f,0f,10.72173f,20.12234f,0.0375f,10.72173f,20.32423f,0f,10.68058f,20.19011f,0f,10.0226f,20.32423f,0.075f,10.68058f,20.19011f,0.075f,10.0226f});
  }
}
private class MFInt32216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f218 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.91388f,0f,8.667445f,19.71689f,0f,8.7076f,19.5199f,0f,8.747754f,19.91388f,0.075f,8.667445f,19.71689f,0.075f,8.7076f,19.5199f,0.075f,8.747754f,19.5199f,0f,8.747754f,19.79213f,0f,10.08331f,19.5199f,0.075f,8.747754f,19.79213f,0.075f,10.08331f,19.79213f,0f,10.08331f,19.98912f,0f,10.04316f,20.18612f,0f,10.003f,19.79213f,0.075f,10.08331f,19.98912f,0.075f,10.04316f,20.18612f,0.075f,10.003f,20.18612f,0f,10.003f,19.91388f,0f,8.667445f,20.18612f,0.075f,10.003f,19.91388f,0.075f,8.667445f});
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f221 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.5003f,0f,8.751748f,19.10631f,0f,8.832057f,19.5003f,0.075f,8.751748f,19.10631f,0.075f,8.832057f,19.10631f,0f,8.832057f,19.37854f,0f,10.16761f,19.10631f,0.075f,8.832057f,19.37854f,0.075f,10.16761f,19.37854f,0f,10.16761f,19.57554f,0f,10.12746f,19.77253f,0f,10.0873f,19.37854f,0.075f,10.16761f,19.57554f,0.075f,10.12746f,19.77253f,0.075f,10.0873f,19.77253f,0f,10.0873f,19.5003f,0f,8.751748f,19.77253f,0.075f,10.0873f,19.5003f,0.075f,8.751748f});
  }
}
private class MFInt32222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f224 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.77577f,0f,7.989869f,18.9682f,0f,8.15448f,19.77577f,0.075f,7.989869f,18.9682f,0.075f,8.15448f,18.9682f,0f,8.15448f,19.10232f,0f,8.81246f,18.9682f,0.075f,8.15448f,19.10232f,0.075f,8.81246f,19.10232f,0f,8.81246f,19.5061f,0f,8.730154f,19.90989f,0f,8.647848f,19.10232f,0.075f,8.81246f,19.5061f,0.075f,8.730154f,19.90989f,0.075f,8.647848f,19.30421f,0.075f,8.771307f,19.5061f,0.0375f,8.730154f,19.30421f,0f,8.771307f,19.30421f,0.0375f,8.771307f,19.70799f,0.075f,8.689001f,19.70799f,0f,8.689001f,19.70799f,0.0375f,8.689001f,19.90989f,0f,8.647848f,19.77577f,0f,7.989869f,19.90989f,0.075f,8.647848f,19.77577f,0.075f,7.989869f});
  }
}
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f227 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.63765f,0f,7.312293f,19.23387f,0f,7.394598f,18.83008f,0f,7.476904f,19.63765f,0.075f,7.312293f,19.23387f,0.075f,7.394598f,18.83008f,0.075f,7.476904f,19.03198f,0.075f,7.435751f,19.03198f,0f,7.435751f,19.23387f,0.0375f,7.394598f,19.03198f,0.0375f,7.435751f,19.43576f,0.075f,7.353445f,19.43576f,0f,7.353445f,19.43576f,0.0375f,7.353445f,18.83008f,0f,7.476904f,18.9642f,0f,8.134883f,18.83008f,0.075f,7.476904f,18.9642f,0.075f,8.134883f,18.9642f,0f,8.134883f,19.77177f,0f,7.970272f,18.9642f,0.075f,8.134883f,19.77177f,0.075f,7.970272f,19.77177f,0f,7.970272f,19.63765f,0f,7.312293f,19.77177f,0.075f,7.970272f,19.63765f,0.075f,7.312293f});
  }
}
private class MFInt32228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f230 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.36143f,0f,5.957139f,18.96744f,0f,6.037448f,19.36143f,0.075f,5.957139f,18.96744f,0.075f,6.037448f,18.96744f,0f,6.037448f,19.23967f,0f,7.373004f,18.96744f,0.075f,6.037448f,19.23967f,0.075f,7.373004f,19.23967f,0f,7.373004f,19.63366f,0f,7.292696f,19.23967f,0.075f,7.373004f,19.63366f,0.075f,7.292696f,19.63366f,0f,7.292696f,19.36143f,0f,5.957139f,19.63366f,0.075f,7.292696f,19.36143f,0.075f,5.957139f});
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt32232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f233 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.94784f,0f,6.041442f,18.55386f,0f,6.121751f,18.94784f,0.075f,6.041442f,18.55386f,0.075f,6.121751f,18.55386f,0f,6.121751f,18.82609f,0f,7.457307f,18.55386f,0.075f,6.121751f,18.82609f,0.075f,7.457307f,18.82609f,0f,7.457307f,19.02308f,0f,7.417152f,19.22008f,0f,7.376998f,18.82609f,0.075f,7.457307f,19.02308f,0.075f,7.417152f,19.22008f,0.075f,7.376998f,19.22008f,0f,7.376998f,19.08396f,0f,6.70922f,18.94784f,0f,6.041442f,19.22008f,0.075f,7.376998f,19.08396f,0.075f,6.70922f,18.94784f,0.075f,6.041442f,19.15202f,0.075f,7.043109f,19.08396f,0.0375f,6.70922f,19.15202f,0f,7.043109f,19.15202f,0.0375f,7.043109f,19.18605f,0.0375f,7.210054f,19.15202f,0.01875f,7.043109f,19.18605f,0f,7.210054f,19.18605f,0.01875f,7.210054f,19.18605f,0.075f,7.210054f,19.15202f,0.05625f,7.043109f,19.18605f,0.05625f,7.210054f,19.0159f,0.075f,6.375331f,19.0159f,0f,6.375331f,19.0159f,0.0375f,6.375331f,18.98187f,0.075f,6.208387f,18.98187f,0.0375f,6.208387f,19.0159f,0.05625f,6.375331f,18.98187f,0.05625f,6.208387f,18.98187f,0f,6.208387f,19.0159f,0.01875f,6.375331f,18.98187f,0.01875f,6.208387f});
  }
}
private class MFInt32234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.22331f,0f,5.279563f,18.41574f,0f,5.444175f,19.22331f,0.075f,5.279563f,18.41574f,0.075f,5.444175f,18.41574f,0f,5.444175f,18.54986f,0f,6.102154f,18.41574f,0.075f,5.444175f,18.54986f,0.075f,6.102154f,18.54986f,0f,6.102154f,18.95365f,0f,6.019848f,19.35743f,0f,5.937542f,18.54986f,0.075f,6.102154f,18.95365f,0.075f,6.019848f,19.35743f,0.075f,5.937542f,18.75175f,0.075f,6.061001f,18.95365f,0.0375f,6.019848f,18.75175f,0f,6.061001f,18.75175f,0.0375f,6.061001f,19.15554f,0.075f,5.978695f,19.15554f,0f,5.978695f,19.15554f,0.0375f,5.978695f,19.35743f,0f,5.937542f,19.22331f,0f,5.279563f,19.35743f,0.075f,5.937542f,19.22331f,0.075f,5.279563f});
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f239 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.23013f,0f,29.16334f,22.83615f,0f,29.24365f,23.23013f,0.075f,29.16334f,22.83615f,0.075f,29.24365f,22.83615f,0f,29.24365f,22.97226f,0f,29.91143f,23.10838f,0f,30.57921f,22.83615f,0.075f,29.24365f,22.97226f,0.075f,29.91143f,23.10838f,0.075f,30.57921f,22.90421f,0.075f,29.57754f,22.97226f,0.0375f,29.91143f,22.90421f,0f,29.57754f,22.90421f,0.0375f,29.57754f,22.87018f,0.0375f,29.4106f,22.90421f,0.01875f,29.57754f,22.87018f,0f,29.4106f,22.87018f,0.01875f,29.4106f,22.87018f,0.075f,29.4106f,22.90421f,0.05625f,29.57754f,22.87018f,0.05625f,29.4106f,23.04032f,0.075f,30.24532f,23.04032f,0f,30.24532f,23.04032f,0.0375f,30.24532f,23.07435f,0.075f,30.41226f,23.07435f,0.0375f,30.41226f,23.04032f,0.05625f,30.24532f,23.07435f,0.05625f,30.41226f,23.07435f,0f,30.41226f,23.04032f,0.01875f,30.24532f,23.07435f,0.01875f,30.41226f,23.10838f,0f,30.57921f,23.50237f,0f,30.4989f,23.10838f,0.075f,30.57921f,23.50237f,0.075f,30.4989f,23.50237f,0f,30.4989f,23.36625f,0f,29.83112f,23.23013f,0f,29.16334f,23.50237f,0.075f,30.4989f,23.36625f,0.075f,29.83112f,23.23013f,0.075f,29.16334f,23.43431f,0.075f,30.16501f,23.36625f,0.0375f,29.83112f,23.43431f,0f,30.16501f,23.43431f,0.0375f,30.16501f,23.46834f,0.0375f,30.33195f,23.43431f,0.01875f,30.16501f,23.46834f,0f,30.33195f,23.46834f,0.01875f,30.33195f,23.46834f,0.075f,30.33195f,23.43431f,0.05625f,30.16501f,23.46834f,0.05625f,30.33195f,23.29819f,0.075f,29.49723f,23.29819f,0f,29.49723f,23.29819f,0.0375f,29.49723f,23.26416f,0.075f,29.33029f,23.26416f,0.0375f,29.33029f,23.29819f,0.05625f,29.49723f,23.26416f,0.05625f,29.33029f,23.26416f,0f,29.33029f,23.29819f,0.01875f,29.49723f,23.26416f,0.01875f,29.33029f});
  }
}
private class MFInt32240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt32241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f242 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.81655f,0f,29.24765f,22.61956f,0f,29.2878f,22.42256f,0f,29.32796f,22.81655f,0.075f,29.24765f,22.61956f,0.075f,29.2878f,22.42256f,0.075f,29.32796f,22.42256f,0f,29.32796f,22.6948f,0f,30.66351f,22.42256f,0.075f,29.32796f,22.6948f,0.075f,30.66351f,22.6948f,0f,30.66351f,23.08878f,0f,30.5832f,22.6948f,0.075f,30.66351f,23.08878f,0.075f,30.5832f,23.08878f,0f,30.5832f,22.95267f,0f,29.91542f,22.81655f,0f,29.24765f,23.08878f,0.075f,30.5832f,22.95267f,0.075f,29.91542f,22.81655f,0.075f,29.24765f,23.02073f,0.075f,30.24931f,22.95267f,0.0375f,29.91542f,23.02073f,0f,30.24931f,23.02073f,0.0375f,30.24931f,23.05475f,0.0375f,30.41626f,23.02073f,0.01875f,30.24931f,23.05475f,0f,30.41626f,23.05475f,0.01875f,30.41626f,23.05475f,0.075f,30.41626f,23.02073f,0.05625f,30.24931f,23.05475f,0.05625f,30.41626f,22.88461f,0.075f,29.58154f,22.88461f,0f,29.58154f,22.88461f,0.0375f,29.58154f,22.85058f,0.075f,29.41459f,22.85058f,0.0375f,29.41459f,22.88461f,0.05625f,29.58154f,22.85058f,0.05625f,29.41459f,22.85058f,0f,29.41459f,22.88461f,0.01875f,29.58154f,22.85058f,0.01875f,29.41459f});
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f245 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.09202f,0f,28.48577f,22.28445f,0f,28.65038f,23.09202f,0.075f,28.48577f,22.28445f,0.075f,28.65038f,22.28445f,0f,28.65038f,22.41857f,0f,29.30836f,22.28445f,0.075f,28.65038f,22.41857f,0.075f,29.30836f,22.41857f,0f,29.30836f,22.82235f,0f,29.22605f,23.22614f,0f,29.14375f,22.41857f,0.075f,29.30836f,22.82235f,0.075f,29.22605f,23.22614f,0.075f,29.14375f,22.62046f,0.075f,29.26721f,22.82235f,0.0375f,29.22605f,22.62046f,0f,29.26721f,22.62046f,0.0375f,29.26721f,23.02425f,0.075f,29.1849f,23.02425f,0f,29.1849f,23.02425f,0.0375f,29.1849f,23.22614f,0f,29.14375f,23.09202f,0f,28.48577f,23.22614f,0.075f,29.14375f,23.09202f,0.075f,28.48577f});
  }
}
private class MFInt32246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f248 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.95391f,0f,27.80819f,22.55012f,0f,27.8905f,22.14634f,0f,27.9728f,22.95391f,0.075f,27.80819f,22.55012f,0.075f,27.8905f,22.14634f,0.075f,27.9728f,22.34823f,0.075f,27.93165f,22.34823f,0f,27.93165f,22.55012f,0.0375f,27.8905f,22.34823f,0.0375f,27.93165f,22.75201f,0.075f,27.84934f,22.75201f,0f,27.84934f,22.75201f,0.0375f,27.84934f,22.14634f,0f,27.9728f,22.28045f,0f,28.63078f,22.14634f,0.075f,27.9728f,22.28045f,0.075f,28.63078f,22.28045f,0f,28.63078f,23.08803f,0f,28.46617f,22.28045f,0.075f,28.63078f,23.08803f,0.075f,28.46617f,23.08803f,0f,28.46617f,22.95391f,0f,27.80819f,23.08803f,0.075f,28.46617f,22.95391f,0.075f,27.80819f});
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt32250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f251 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.67768f,0f,26.45304f,22.48068f,0f,26.49319f,22.28369f,0f,26.53335f,22.67768f,0.075f,26.45304f,22.48068f,0.075f,26.49319f,22.28369f,0.075f,26.53335f,22.28369f,0f,26.53335f,22.55593f,0f,27.8689f,22.28369f,0.075f,26.53335f,22.55593f,0.075f,27.8689f,22.55593f,0f,27.8689f,22.94991f,0f,27.7886f,22.55593f,0.075f,27.8689f,22.94991f,0.075f,27.7886f,22.94991f,0f,27.7886f,22.8138f,0f,27.12082f,22.67768f,0f,26.45304f,22.94991f,0.075f,27.7886f,22.8138f,0.075f,27.12082f,22.67768f,0.075f,26.45304f,22.88185f,0.075f,27.45471f,22.8138f,0.0375f,27.12082f,22.88185f,0f,27.45471f,22.88185f,0.0375f,27.45471f,22.91588f,0.0375f,27.62165f,22.88185f,0.01875f,27.45471f,22.91588f,0f,27.62165f,22.91588f,0.01875f,27.62165f,22.91588f,0.075f,27.62165f,22.88185f,0.05625f,27.45471f,22.91588f,0.05625f,27.62165f,22.74574f,0.075f,26.78693f,22.74574f,0f,26.78693f,22.74574f,0.0375f,26.78693f,22.71171f,0.075f,26.61998f,22.71171f,0.0375f,26.61998f,22.74574f,0.05625f,26.78693f,22.71171f,0.05625f,26.61998f,22.71171f,0f,26.61998f,22.74574f,0.01875f,26.78693f,22.71171f,0.01875f,26.61998f});
  }
}
private class MFInt32252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.26409f,0f,26.53734f,21.87011f,0f,26.61765f,22.26409f,0.075f,26.53734f,21.87011f,0.075f,26.61765f,21.87011f,0f,26.61765f,22.00622f,0f,27.28543f,22.14234f,0f,27.95321f,21.87011f,0.075f,26.61765f,22.00622f,0.075f,27.28543f,22.14234f,0.075f,27.95321f,21.93817f,0.075f,26.95154f,22.00622f,0.0375f,27.28543f,21.93817f,0f,26.95154f,21.93817f,0.0375f,26.95154f,21.90414f,0.0375f,26.78459f,21.93817f,0.01875f,26.95154f,21.90414f,0f,26.78459f,21.90414f,0.01875f,26.78459f,21.90414f,0.075f,26.78459f,21.93817f,0.05625f,26.95154f,21.90414f,0.05625f,26.78459f,22.07428f,0.075f,27.61932f,22.07428f,0f,27.61932f,22.07428f,0.0375f,27.61932f,22.10831f,0.075f,27.78626f,22.10831f,0.0375f,27.78626f,22.07428f,0.05625f,27.61932f,22.10831f,0.05625f,27.78626f,22.10831f,0f,27.78626f,22.07428f,0.01875f,27.61932f,22.10831f,0.01875f,27.78626f,22.14234f,0f,27.95321f,22.53633f,0f,27.8729f,22.14234f,0.075f,27.95321f,22.53633f,0.075f,27.8729f,22.53633f,0f,27.8729f,22.26409f,0f,26.53734f,22.53633f,0.075f,27.8729f,22.26409f,0.075f,26.53734f});
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f257 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.53956f,0f,25.77546f,21.73199f,0f,25.94007f,22.53956f,0.075f,25.77546f,21.73199f,0.075f,25.94007f,21.73199f,0f,25.94007f,21.86611f,0f,26.59805f,21.73199f,0.075f,25.94007f,21.86611f,0.075f,26.59805f,21.86611f,0f,26.59805f,22.2699f,0f,26.51575f,22.67368f,0f,26.43344f,21.86611f,0.075f,26.59805f,22.2699f,0.075f,26.51575f,22.67368f,0.075f,26.43344f,22.068f,0.075f,26.5569f,22.2699f,0.0375f,26.51575f,22.068f,0f,26.5569f,22.068f,0.0375f,26.5569f,22.47179f,0.075f,26.47459f,22.47179f,0f,26.47459f,22.47179f,0.0375f,26.47459f,22.67368f,0f,26.43344f,22.53956f,0f,25.77546f,22.67368f,0.075f,26.43344f,22.53956f,0.075f,25.77546f});
  }
}
private class MFInt32258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f260 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.40145f,0f,25.09789f,21.99767f,0f,25.18019f,21.59388f,0f,25.2625f,22.40145f,0.075f,25.09789f,21.99767f,0.075f,25.18019f,21.59388f,0.075f,25.2625f,21.79577f,0.075f,25.22134f,21.79577f,0f,25.22134f,21.99767f,0.0375f,25.18019f,21.79577f,0.0375f,25.22134f,22.19956f,0.075f,25.13904f,22.19956f,0f,25.13904f,22.19956f,0.0375f,25.13904f,21.59388f,0f,25.2625f,21.728f,0f,25.92048f,21.59388f,0.075f,25.2625f,21.728f,0.075f,25.92048f,21.728f,0f,25.92048f,22.53557f,0f,25.75587f,21.728f,0.075f,25.92048f,22.53557f,0.075f,25.75587f,22.53557f,0f,25.75587f,22.40145f,0f,25.09789f,22.53557f,0.075f,25.75587f,22.40145f,0.075f,25.09789f});
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f263 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.12522f,0f,23.74273f,21.73124f,0f,23.82304f,22.12522f,0.075f,23.74273f,21.73124f,0.075f,23.82304f,21.73124f,0f,23.82304f,22.00347f,0f,25.1586f,21.73124f,0.075f,23.82304f,22.00347f,0.075f,25.1586f,22.00347f,0f,25.1586f,22.39746f,0f,25.07829f,22.00347f,0.075f,25.1586f,22.39746f,0.075f,25.07829f,22.39746f,0f,25.07829f,22.26134f,0f,24.41051f,22.12522f,0f,23.74273f,22.39746f,0.075f,25.07829f,22.26134f,0.075f,24.41051f,22.12522f,0.075f,23.74273f,22.3294f,0.075f,24.7444f,22.26134f,0.0375f,24.41051f,22.3294f,0f,24.7444f,22.3294f,0.0375f,24.7444f,22.36343f,0.0375f,24.91134f,22.3294f,0.01875f,24.7444f,22.36343f,0f,24.91134f,22.36343f,0.01875f,24.91134f,22.36343f,0.075f,24.91134f,22.3294f,0.05625f,24.7444f,22.36343f,0.05625f,24.91134f,22.19328f,0.075f,24.07662f,22.19328f,0f,24.07662f,22.19328f,0.0375f,24.07662f,22.15925f,0.075f,23.90968f,22.15925f,0.0375f,23.90968f,22.19328f,0.05625f,24.07662f,22.15925f,0.05625f,23.90968f,22.15925f,0f,23.90968f,22.19328f,0.01875f,24.07662f,22.15925f,0.01875f,23.90968f});
  }
}
private class MFInt32264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.71164f,0f,23.82704f,21.31765f,0f,23.90734f,21.71164f,0.075f,23.82704f,21.31765f,0.075f,23.90734f,21.31765f,0f,23.90734f,21.45377f,0f,24.57512f,21.58988f,0f,25.2429f,21.31765f,0.075f,23.90734f,21.45377f,0.075f,24.57512f,21.58988f,0.075f,25.2429f,21.38571f,0.075f,24.24123f,21.45377f,0.0375f,24.57512f,21.38571f,0f,24.24123f,21.38571f,0.0375f,24.24123f,21.35168f,0.0375f,24.07429f,21.38571f,0.01875f,24.24123f,21.35168f,0f,24.07429f,21.35168f,0.01875f,24.07429f,21.35168f,0.075f,24.07429f,21.38571f,0.05625f,24.24123f,21.35168f,0.05625f,24.07429f,21.52183f,0.075f,24.90901f,21.52183f,0f,24.90901f,21.52183f,0.0375f,24.90901f,21.55585f,0.075f,25.07596f,21.55585f,0.0375f,25.07596f,21.52183f,0.05625f,24.90901f,21.55585f,0.05625f,25.07596f,21.55585f,0f,25.07596f,21.52183f,0.01875f,24.90901f,21.55585f,0.01875f,25.07596f,21.58988f,0f,25.2429f,21.78688f,0f,25.20275f,21.98387f,0f,25.16259f,21.58988f,0.075f,25.2429f,21.78688f,0.075f,25.20275f,21.98387f,0.075f,25.16259f,21.98387f,0f,25.16259f,21.71164f,0f,23.82704f,21.98387f,0.075f,25.16259f,21.71164f,0.075f,23.82704f});
  }
}
private class MFInt32267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f269 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.98711f,0f,23.06516f,21.58332f,0f,23.14746f,21.17954f,0f,23.22977f,21.98711f,0.075f,23.06516f,21.58332f,0.075f,23.14746f,21.17954f,0.075f,23.22977f,21.38143f,0.075f,23.18862f,21.38143f,0f,23.18862f,21.58332f,0.0375f,23.14746f,21.38143f,0.0375f,23.18862f,21.78522f,0.075f,23.10631f,21.78522f,0f,23.10631f,21.78522f,0.0375f,23.10631f,21.17954f,0f,23.22977f,21.31366f,0f,23.88775f,21.17954f,0.075f,23.22977f,21.31366f,0.075f,23.88775f,21.31366f,0f,23.88775f,21.71744f,0f,23.80544f,22.12123f,0f,23.72313f,21.31366f,0.075f,23.88775f,21.71744f,0.075f,23.80544f,22.12123f,0.075f,23.72313f,21.51555f,0.075f,23.84659f,21.71744f,0.0375f,23.80544f,21.51555f,0f,23.84659f,21.51555f,0.0375f,23.84659f,21.91933f,0.075f,23.76429f,21.91933f,0f,23.76429f,21.91933f,0.0375f,23.76429f,22.12123f,0f,23.72313f,21.98711f,0f,23.06516f,22.12123f,0.075f,23.72313f,21.98711f,0.075f,23.06516f});
  }
}
private class MFInt32270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f272 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.84899f,0f,22.38758f,21.44521f,0f,22.46988f,21.04142f,0f,22.55219f,21.84899f,0.075f,22.38758f,21.44521f,0.075f,22.46988f,21.04142f,0.075f,22.55219f,21.24332f,0.075f,22.51104f,21.24332f,0f,22.51104f,21.44521f,0.0375f,22.46988f,21.24332f,0.0375f,22.51104f,21.6471f,0.075f,22.42873f,21.6471f,0f,22.42873f,21.6471f,0.0375f,22.42873f,21.04142f,0f,22.55219f,21.17554f,0f,23.21017f,21.04142f,0.075f,22.55219f,21.17554f,0.075f,23.21017f,21.17554f,0f,23.21017f,21.57933f,0f,23.12786f,21.98311f,0f,23.04556f,21.17554f,0.075f,23.21017f,21.57933f,0.075f,23.12786f,21.98311f,0.075f,23.04556f,21.37744f,0.075f,23.16902f,21.57933f,0.0375f,23.12786f,21.37744f,0f,23.16902f,21.37744f,0.0375f,23.16902f,21.78122f,0.075f,23.08671f,21.78122f,0f,23.08671f,21.78122f,0.0375f,23.08671f,21.98311f,0f,23.04556f,21.84899f,0f,22.38758f,21.98311f,0.075f,23.04556f,21.84899f,0.075f,22.38758f});
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f275 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.57277f,0f,21.03243f,21.37577f,0f,21.07258f,21.17878f,0f,21.11274f,21.57277f,0.075f,21.03243f,21.37577f,0.075f,21.07258f,21.17878f,0.075f,21.11274f,21.17878f,0f,21.11274f,21.3149f,0f,21.78051f,21.45101f,0f,22.44829f,21.17878f,0.075f,21.11274f,21.3149f,0.075f,21.78051f,21.45101f,0.075f,22.44829f,21.24684f,0.075f,21.44662f,21.3149f,0.0375f,21.78051f,21.24684f,0f,21.44662f,21.24684f,0.0375f,21.44662f,21.21281f,0.0375f,21.27968f,21.24684f,0.01875f,21.44662f,21.21281f,0f,21.27968f,21.21281f,0.01875f,21.27968f,21.21281f,0.075f,21.27968f,21.24684f,0.05625f,21.44662f,21.21281f,0.05625f,21.27968f,21.38295f,0.075f,22.1144f,21.38295f,0f,22.1144f,21.38295f,0.0375f,22.1144f,21.41698f,0.075f,22.28135f,21.41698f,0.0375f,22.28135f,21.38295f,0.05625f,22.1144f,21.41698f,0.05625f,22.28135f,21.41698f,0f,22.28135f,21.38295f,0.01875f,22.1144f,21.41698f,0.01875f,22.28135f,21.45101f,0f,22.44829f,21.845f,0f,22.36798f,21.45101f,0.075f,22.44829f,21.845f,0.075f,22.36798f,21.845f,0f,22.36798f,21.57277f,0f,21.03243f,21.845f,0.075f,22.36798f,21.57277f,0.075f,21.03243f});
  }
}
private class MFInt32276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.15918f,0f,21.11673f,20.7652f,0f,21.19704f,21.15918f,0.075f,21.11673f,20.7652f,0.075f,21.19704f,20.7652f,0f,21.19704f,21.03743f,0f,22.53259f,20.7652f,0.075f,21.19704f,21.03743f,0.075f,22.53259f,21.03743f,0f,22.53259f,21.23442f,0f,22.49244f,21.43142f,0f,22.45229f,21.03743f,0.075f,22.53259f,21.23442f,0.075f,22.49244f,21.43142f,0.075f,22.45229f,21.43142f,0f,22.45229f,21.2953f,0f,21.78451f,21.15918f,0f,21.11673f,21.43142f,0.075f,22.45229f,21.2953f,0.075f,21.78451f,21.15918f,0.075f,21.11673f,21.36336f,0.075f,22.1184f,21.2953f,0.0375f,21.78451f,21.36336f,0f,22.1184f,21.36336f,0.0375f,22.1184f,21.39739f,0.0375f,22.28534f,21.36336f,0.01875f,22.1184f,21.39739f,0f,22.28534f,21.39739f,0.01875f,22.28534f,21.39739f,0.075f,22.28534f,21.36336f,0.05625f,22.1184f,21.39739f,0.05625f,22.28534f,21.22724f,0.075f,21.45062f,21.22724f,0f,21.45062f,21.22724f,0.0375f,21.45062f,21.19321f,0.075f,21.28367f,21.19321f,0.0375f,21.28367f,21.22724f,0.05625f,21.45062f,21.19321f,0.05625f,21.28367f,21.19321f,0f,21.28367f,21.22724f,0.01875f,21.45062f,21.19321f,0.01875f,21.28367f});
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f281 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.43465f,0f,20.35485f,21.03087f,0f,20.43716f,20.62708f,0f,20.51946f,21.43465f,0.075f,20.35485f,21.03087f,0.075f,20.43716f,20.62708f,0.075f,20.51946f,20.82897f,0.075f,20.47831f,20.82897f,0f,20.47831f,21.03087f,0.0375f,20.43716f,20.82897f,0.0375f,20.47831f,21.23276f,0.075f,20.396f,21.23276f,0f,20.396f,21.23276f,0.0375f,20.396f,20.62708f,0f,20.51946f,20.7612f,0f,21.17744f,20.62708f,0.075f,20.51946f,20.7612f,0.075f,21.17744f,20.7612f,0f,21.17744f,21.16499f,0f,21.09514f,21.56877f,0f,21.01283f,20.7612f,0.075f,21.17744f,21.16499f,0.075f,21.09514f,21.56877f,0.075f,21.01283f,20.96309f,0.075f,21.13629f,21.16499f,0.0375f,21.09514f,20.96309f,0f,21.13629f,20.96309f,0.0375f,21.13629f,21.36688f,0.075f,21.05398f,21.36688f,0f,21.05398f,21.36688f,0.0375f,21.05398f,21.56877f,0f,21.01283f,21.43465f,0f,20.35485f,21.56877f,0.075f,21.01283f,21.43465f,0.075f,20.35485f});
  }
}
private class MFInt32282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.29654f,0f,19.67727f,20.89275f,0f,19.75958f,20.48897f,0f,19.84189f,21.29654f,0.075f,19.67727f,20.89275f,0.075f,19.75958f,20.48897f,0.075f,19.84189f,20.69086f,0.075f,19.80073f,20.69086f,0f,19.80073f,20.89275f,0.0375f,19.75958f,20.69086f,0.0375f,19.80073f,21.09464f,0.075f,19.71843f,21.09464f,0f,19.71843f,21.09464f,0.0375f,19.71843f,20.48897f,0f,19.84189f,20.62309f,0f,20.49986f,20.48897f,0.075f,19.84189f,20.62309f,0.075f,20.49986f,20.62309f,0f,20.49986f,21.02687f,0f,20.41756f,21.43066f,0f,20.33525f,20.62309f,0.075f,20.49986f,21.02687f,0.075f,20.41756f,21.43066f,0.075f,20.33525f,20.82498f,0.075f,20.45871f,21.02687f,0.0375f,20.41756f,20.82498f,0f,20.45871f,20.82498f,0.0375f,20.45871f,21.22877f,0.075f,20.37641f,21.22877f,0f,20.37641f,21.22877f,0.0375f,20.37641f,21.43066f,0f,20.33525f,21.29654f,0f,19.67727f,21.43066f,0.075f,20.33525f,21.29654f,0.075f,19.67727f});
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f287 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.02031f,0f,18.32212f,20.62632f,0f,18.40243f,21.02031f,0.075f,18.32212f,20.62632f,0.075f,18.40243f,20.62632f,0f,18.40243f,20.76244f,0f,19.07021f,20.89856f,0f,19.73799f,20.62632f,0.075f,18.40243f,20.76244f,0.075f,19.07021f,20.89856f,0.075f,19.73799f,20.69438f,0.075f,18.73632f,20.76244f,0.0375f,19.07021f,20.69438f,0f,18.73632f,20.69438f,0.0375f,18.73632f,20.66035f,0.0375f,18.56937f,20.69438f,0.01875f,18.73632f,20.66035f,0f,18.56937f,20.66035f,0.01875f,18.56937f,20.66035f,0.075f,18.56937f,20.69438f,0.05625f,18.73632f,20.66035f,0.05625f,18.56937f,20.8305f,0.075f,19.4041f,20.8305f,0f,19.4041f,20.8305f,0.0375f,19.4041f,20.86453f,0.075f,19.57104f,20.86453f,0.0375f,19.57104f,20.8305f,0.05625f,19.4041f,20.86453f,0.05625f,19.57104f,20.86453f,0f,19.57104f,20.8305f,0.01875f,19.4041f,20.86453f,0.01875f,19.57104f,20.89856f,0f,19.73799f,21.09555f,0f,19.69783f,21.29254f,0f,19.65768f,20.89856f,0.075f,19.73799f,21.09555f,0.075f,19.69783f,21.29254f,0.075f,19.65768f,21.29254f,0f,19.65768f,21.02031f,0f,18.32212f,21.29254f,0.075f,19.65768f,21.02031f,0.075f,18.32212f});
  }
}
private class MFInt32288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.60673f,0f,18.40642f,20.21274f,0f,18.48673f,20.60673f,0.075f,18.40642f,20.21274f,0.075f,18.48673f,20.21274f,0f,18.48673f,20.34886f,0f,19.15451f,20.48497f,0f,19.82229f,20.21274f,0.075f,18.48673f,20.34886f,0.075f,19.15451f,20.48497f,0.075f,19.82229f,20.2808f,0.075f,18.82062f,20.34886f,0.0375f,19.15451f,20.2808f,0f,18.82062f,20.2808f,0.0375f,18.82062f,20.24677f,0.0375f,18.65368f,20.2808f,0.01875f,18.82062f,20.24677f,0f,18.65368f,20.24677f,0.01875f,18.65368f,20.24677f,0.075f,18.65368f,20.2808f,0.05625f,18.82062f,20.24677f,0.05625f,18.65368f,20.41691f,0.075f,19.4884f,20.41691f,0f,19.4884f,20.41691f,0.0375f,19.4884f,20.45094f,0.075f,19.65534f,20.45094f,0.0375f,19.65534f,20.41691f,0.05625f,19.4884f,20.45094f,0.05625f,19.65534f,20.45094f,0f,19.65534f,20.41691f,0.01875f,19.4884f,20.45094f,0.01875f,19.65534f,20.48497f,0f,19.82229f,20.87896f,0f,19.74198f,20.48497f,0.075f,19.82229f,20.87896f,0.075f,19.74198f,20.87896f,0f,19.74198f,20.74284f,0f,19.0742f,20.60673f,0f,18.40642f,20.87896f,0.075f,19.74198f,20.74284f,0.075f,19.0742f,20.60673f,0.075f,18.40642f,20.8109f,0.075f,19.40809f,20.74284f,0.0375f,19.0742f,20.8109f,0f,19.40809f,20.8109f,0.0375f,19.40809f,20.84493f,0.0375f,19.57504f,20.8109f,0.01875f,19.40809f,20.84493f,0f,19.57504f,20.84493f,0.01875f,19.57504f,20.84493f,0.075f,19.57504f,20.8109f,0.05625f,19.40809f,20.84493f,0.05625f,19.57504f,20.67478f,0.075f,18.74031f,20.67478f,0f,18.74031f,20.67478f,0.0375f,18.74031f,20.64075f,0.075f,18.57337f,20.64075f,0.0375f,18.57337f,20.67478f,0.05625f,18.74031f,20.64075f,0.05625f,18.57337f,20.64075f,0f,18.57337f,20.67478f,0.01875f,18.74031f,20.64075f,0.01875f,18.57337f});
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f293 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.8822f,0f,17.64454f,20.07463f,0f,17.80916f,20.8822f,0.075f,17.64454f,20.07463f,0.075f,17.80916f,20.07463f,0f,17.80916f,20.20874f,0f,18.46714f,20.07463f,0.075f,17.80916f,20.20874f,0.075f,18.46714f,20.20874f,0f,18.46714f,20.61253f,0f,18.38483f,21.01632f,0f,18.30252f,20.20874f,0.075f,18.46714f,20.61253f,0.075f,18.38483f,21.01632f,0.075f,18.30252f,20.41064f,0.075f,18.42598f,20.61253f,0.0375f,18.38483f,20.41064f,0f,18.42598f,20.41064f,0.0375f,18.42598f,20.81442f,0.075f,18.34368f,20.81442f,0f,18.34368f,20.81442f,0.0375f,18.34368f,21.01632f,0f,18.30252f,20.8822f,0f,17.64454f,21.01632f,0.075f,18.30252f,20.8822f,0.075f,17.64454f});
  }
}
private class MFInt32294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.74408f,0f,16.96697f,20.3403f,0f,17.04927f,19.93651f,0f,17.13158f,20.74408f,0.075f,16.96697f,20.3403f,0.075f,17.04927f,19.93651f,0.075f,17.13158f,20.1384f,0.075f,17.09043f,20.1384f,0f,17.09043f,20.3403f,0.0375f,17.04927f,20.1384f,0.0375f,17.09043f,20.54219f,0.075f,17.00812f,20.54219f,0f,17.00812f,20.54219f,0.0375f,17.00812f,19.93651f,0f,17.13158f,20.07063f,0f,17.78956f,19.93651f,0.075f,17.13158f,20.07063f,0.075f,17.78956f,20.07063f,0f,17.78956f,20.8782f,0f,17.62495f,20.07063f,0.075f,17.78956f,20.8782f,0.075f,17.62495f,20.8782f,0f,17.62495f,20.74408f,0f,16.96697f,20.8782f,0.075f,17.62495f,20.74408f,0.075f,16.96697f});
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f299 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.46785f,0f,15.61182f,20.07387f,0f,15.69212f,20.46785f,0.075f,15.61182f,20.07387f,0.075f,15.69212f,20.07387f,0f,15.69212f,20.20998f,0f,16.3599f,20.3461f,0f,17.02768f,20.07387f,0.075f,15.69212f,20.20998f,0.075f,16.3599f,20.3461f,0.075f,17.02768f,20.14193f,0.075f,16.02601f,20.20998f,0.0375f,16.3599f,20.14193f,0f,16.02601f,20.14193f,0.0375f,16.02601f,20.1079f,0.0375f,15.85907f,20.14193f,0.01875f,16.02601f,20.1079f,0f,15.85907f,20.1079f,0.01875f,15.85907f,20.1079f,0.075f,15.85907f,20.14193f,0.05625f,16.02601f,20.1079f,0.05625f,15.85907f,20.27804f,0.075f,16.69379f,20.27804f,0f,16.69379f,20.27804f,0.0375f,16.69379f,20.31207f,0.075f,16.86073f,20.31207f,0.0375f,16.86073f,20.27804f,0.05625f,16.69379f,20.31207f,0.05625f,16.86073f,20.31207f,0f,16.86073f,20.27804f,0.01875f,16.69379f,20.31207f,0.01875f,16.86073f,20.3461f,0f,17.02768f,20.74009f,0f,16.94737f,20.3461f,0.075f,17.02768f,20.74009f,0.075f,16.94737f,20.74009f,0f,16.94737f,20.46785f,0f,15.61182f,20.74009f,0.075f,16.94737f,20.46785f,0.075f,15.61182f});
  }
}
private class MFInt32300 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f302 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.05427f,0f,15.69612f,19.85728f,0f,15.73627f,19.66028f,0f,15.77643f,20.05427f,0.075f,15.69612f,19.85728f,0.075f,15.73627f,19.66028f,0.075f,15.77643f,19.66028f,0f,15.77643f,19.93252f,0f,17.11198f,19.66028f,0.075f,15.77643f,19.93252f,0.075f,17.11198f,19.93252f,0f,17.11198f,20.12951f,0f,17.07183f,20.3265f,0f,17.03168f,19.93252f,0.075f,17.11198f,20.12951f,0.075f,17.07183f,20.3265f,0.075f,17.03168f,20.3265f,0f,17.03168f,20.05427f,0f,15.69612f,20.3265f,0.075f,17.03168f,20.05427f,0.075f,15.69612f});
  }
}
private class MFInt32303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32304 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f305 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.32974f,0f,14.93424f,19.52217f,0f,15.09885f,20.32974f,0.075f,14.93424f,19.52217f,0.075f,15.09885f,19.52217f,0f,15.09885f,19.65629f,0f,15.75683f,19.52217f,0.075f,15.09885f,19.65629f,0.075f,15.75683f,19.65629f,0f,15.75683f,20.06007f,0f,15.67452f,20.46386f,0f,15.59222f,19.65629f,0.075f,15.75683f,20.06007f,0.075f,15.67452f,20.46386f,0.075f,15.59222f,19.85818f,0.075f,15.71568f,20.06007f,0.0375f,15.67452f,19.85818f,0f,15.71568f,19.85818f,0.0375f,15.71568f,20.26197f,0.075f,15.63337f,20.26197f,0f,15.63337f,20.26197f,0.0375f,15.63337f,20.46386f,0f,15.59222f,20.32974f,0f,14.93424f,20.46386f,0.075f,15.59222f,20.32974f,0.075f,14.93424f});
  }
}
private class MFInt32306 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32307 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f308 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.19163f,0f,14.25666f,19.38406f,0f,14.42127f,20.19163f,0.075f,14.25666f,19.38406f,0.075f,14.42127f,19.38406f,0f,14.42127f,19.51818f,0f,15.07925f,19.38406f,0.075f,14.42127f,19.51818f,0.075f,15.07925f,19.51818f,0f,15.07925f,19.92196f,0f,14.99695f,20.32575f,0f,14.91464f,19.51818f,0.075f,15.07925f,19.92196f,0.075f,14.99695f,20.32575f,0.075f,14.91464f,19.72007f,0.075f,15.0381f,19.92196f,0.0375f,14.99695f,19.72007f,0f,15.0381f,19.72007f,0.0375f,15.0381f,20.12385f,0.075f,14.9558f,20.12385f,0f,14.9558f,20.12385f,0.0375f,14.9558f,20.32575f,0f,14.91464f,20.19163f,0f,14.25666f,20.32575f,0.075f,14.91464f,20.19163f,0.075f,14.25666f});
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32310 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f311 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.9154f,0f,12.90151f,19.7184f,0f,12.94166f,19.52141f,0f,12.98182f,19.9154f,0.075f,12.90151f,19.7184f,0.075f,12.94166f,19.52141f,0.075f,12.98182f,19.52141f,0f,12.98182f,19.79364f,0f,14.31737f,19.52141f,0.075f,12.98182f,19.79364f,0.075f,14.31737f,19.79364f,0f,14.31737f,19.99064f,0f,14.27722f,20.18763f,0f,14.23707f,19.79364f,0.075f,14.31737f,19.99064f,0.075f,14.27722f,20.18763f,0.075f,14.23707f,20.18763f,0f,14.23707f,19.9154f,0f,12.90151f,20.18763f,0.075f,14.23707f,19.9154f,0.075f,12.90151f});
  }
}
private class MFInt32312 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.50181f,0f,12.98581f,19.30482f,0f,13.02597f,19.10783f,0f,13.06612f,19.50181f,0.075f,12.98581f,19.30482f,0.075f,13.02597f,19.10783f,0.075f,13.06612f,19.10783f,0f,13.06612f,19.38006f,0f,14.40168f,19.10783f,0.075f,13.06612f,19.38006f,0.075f,14.40168f,19.38006f,0f,14.40168f,19.77405f,0f,14.32137f,19.38006f,0.075f,14.40168f,19.77405f,0.075f,14.32137f,19.77405f,0f,14.32137f,19.50181f,0f,12.98581f,19.77405f,0.075f,14.32137f,19.50181f,0.075f,12.98581f});
  }
}
private class MFInt32315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32316 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f317 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.77728f,0f,12.22393f,18.96971f,0f,12.38855f,19.77728f,0.075f,12.22393f,18.96971f,0.075f,12.38855f,18.96971f,0f,12.38855f,19.10383f,0f,13.04652f,18.96971f,0.075f,12.38855f,19.10383f,0.075f,13.04652f,19.10383f,0f,13.04652f,19.50762f,0f,12.96422f,19.9114f,0f,12.88191f,19.10383f,0.075f,13.04652f,19.50762f,0.075f,12.96422f,19.9114f,0.075f,12.88191f,19.30573f,0.075f,13.00537f,19.50762f,0.0375f,12.96422f,19.30573f,0f,13.00537f,19.30573f,0.0375f,13.00537f,19.70951f,0.075f,12.92307f,19.70951f,0f,12.92307f,19.70951f,0.0375f,12.92307f,19.9114f,0f,12.88191f,19.77728f,0f,12.22393f,19.9114f,0.075f,12.88191f,19.77728f,0.075f,12.22393f});
  }
}
private class MFInt32318 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32319 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f320 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.63917f,0f,11.54636f,18.8316f,0f,11.71097f,19.63917f,0.075f,11.54636f,18.8316f,0.075f,11.71097f,18.8316f,0f,11.71097f,18.96572f,0f,12.36895f,18.8316f,0.075f,11.71097f,18.96572f,0.075f,12.36895f,18.96572f,0f,12.36895f,19.77329f,0f,12.20434f,18.96572f,0.075f,12.36895f,19.77329f,0.075f,12.20434f,19.77329f,0f,12.20434f,19.63917f,0f,11.54636f,19.77329f,0.075f,12.20434f,19.63917f,0.075f,11.54636f});
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f323 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.36294f,0f,10.1912f,19.16595f,0f,10.23136f,18.96896f,0f,10.27151f,19.36294f,0.075f,10.1912f,19.16595f,0.075f,10.23136f,18.96896f,0.075f,10.27151f,18.96896f,0f,10.27151f,19.24119f,0f,11.60707f,18.96896f,0.075f,10.27151f,19.24119f,0.075f,11.60707f,19.24119f,0f,11.60707f,19.43818f,0f,11.56691f,19.63518f,0f,11.52676f,19.24119f,0.075f,11.60707f,19.43818f,0.075f,11.56691f,19.63518f,0.075f,11.52676f,19.63518f,0f,11.52676f,19.36294f,0f,10.1912f,19.63518f,0.075f,11.52676f,19.36294f,0.075f,10.1912f});
  }
}
private class MFInt32324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f326 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.94936f,0f,10.27551f,18.75237f,0f,10.31566f,18.55537f,0f,10.35582f,18.94936f,0.075f,10.27551f,18.75237f,0.075f,10.31566f,18.55537f,0.075f,10.35582f,18.55537f,0f,10.35582f,18.8276f,0f,11.69137f,18.55537f,0.075f,10.35582f,18.8276f,0.075f,11.69137f,18.8276f,0f,11.69137f,19.0246f,0f,11.65122f,19.22159f,0f,11.61106f,18.8276f,0.075f,11.69137f,19.0246f,0.075f,11.65122f,19.22159f,0.075f,11.61106f,19.22159f,0f,11.61106f,18.94936f,0f,10.27551f,19.22159f,0.075f,11.61106f,18.94936f,0.075f,10.27551f});
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f329 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.22483f,0f,9.513628f,18.41726f,0f,9.678239f,19.22483f,0.075f,9.513628f,18.41726f,0.075f,9.678239f,18.41726f,0f,9.678239f,18.55138f,0f,10.33622f,18.41726f,0.075f,9.678239f,18.55138f,0.075f,10.33622f,18.55138f,0f,10.33622f,18.95516f,0f,10.25391f,19.35895f,0f,10.17161f,18.55138f,0.075f,10.33622f,18.95516f,0.075f,10.25391f,19.35895f,0.075f,10.17161f,18.75327f,0.075f,10.29507f,18.95516f,0.0375f,10.25391f,18.75327f,0f,10.29507f,18.75327f,0.0375f,10.29507f,19.15705f,0.075f,10.21276f,19.15705f,0f,10.21276f,19.15705f,0.0375f,10.21276f,19.35895f,0f,10.17161f,19.22483f,0f,9.513628f,19.35895f,0.075f,10.17161f,19.22483f,0.075f,9.513628f});
  }
}
private class MFInt32330 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32331 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f332 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.08671f,0f,8.836051f,18.27914f,0f,9.000663f,19.08671f,0.075f,8.836051f,18.27914f,0.075f,9.000663f,18.27914f,0f,9.000663f,18.41326f,0f,9.658642f,18.27914f,0.075f,9.000663f,18.41326f,0.075f,9.658642f,18.41326f,0f,9.658642f,18.81705f,0f,9.576337f,19.22083f,0f,9.494031f,18.41326f,0.075f,9.658642f,18.81705f,0.075f,9.576337f,19.22083f,0.075f,9.494031f,18.61516f,0.075f,9.617489f,18.81705f,0.0375f,9.576337f,18.61516f,0f,9.617489f,18.61516f,0.0375f,9.617489f,19.01894f,0.075f,9.535184f,19.01894f,0f,9.535184f,19.01894f,0.0375f,9.535184f,19.22083f,0f,9.494031f,19.08671f,0f,8.836051f,19.22083f,0.075f,9.494031f,19.08671f,0.075f,8.836051f});
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt32334 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f335 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.81049f,0f,7.480898f,18.61349f,0f,7.521053f,18.4165f,0f,7.561207f,18.81049f,0.075f,7.480898f,18.61349f,0.075f,7.521053f,18.4165f,0.075f,7.561207f,18.4165f,0f,7.561207f,18.68873f,0f,8.896763f,18.4165f,0.075f,7.561207f,18.68873f,0.075f,8.896763f,18.68873f,0f,8.896763f,19.08272f,0f,8.816454f,18.68873f,0.075f,8.896763f,19.08272f,0.075f,8.816454f,19.08272f,0f,8.816454f,18.9466f,0f,8.148676f,18.81049f,0f,7.480898f,19.08272f,0.075f,8.816454f,18.9466f,0.075f,8.148676f,18.81049f,0.075f,7.480898f,19.01466f,0.075f,8.482565f,18.9466f,0.0375f,8.148676f,19.01466f,0f,8.482565f,19.01466f,0.0375f,8.482565f,19.04869f,0.0375f,8.649509f,19.01466f,0.01875f,8.482565f,19.04869f,0f,8.649509f,19.04869f,0.01875f,8.649509f,19.04869f,0.075f,8.649509f,19.01466f,0.05625f,8.482565f,19.04869f,0.05625f,8.649509f,18.87854f,0.075f,7.814787f,18.87854f,0f,7.814787f,18.87854f,0.0375f,7.814787f,18.84451f,0.075f,7.647843f,18.84451f,0.0375f,7.647843f,18.87854f,0.05625f,7.814787f,18.84451f,0.05625f,7.647843f,18.84451f,0f,7.647843f,18.87854f,0.01875f,7.814787f,18.84451f,0.01875f,7.647843f});
  }
}
private class MFInt32336 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32337 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f338 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.3969f,0f,7.565201f,18.00292f,0f,7.64551f,18.3969f,0.075f,7.565201f,18.00292f,0.075f,7.64551f,18.00292f,0f,7.64551f,18.13903f,0f,8.313288f,18.27515f,0f,8.981066f,18.00292f,0.075f,7.64551f,18.13903f,0.075f,8.313288f,18.27515f,0.075f,8.981066f,18.07097f,0.075f,7.979399f,18.13903f,0.0375f,8.313288f,18.07097f,0f,7.979399f,18.07097f,0.0375f,7.979399f,18.03695f,0.0375f,7.812454f,18.07097f,0.01875f,7.979399f,18.03695f,0f,7.812454f,18.03695f,0.01875f,7.812454f,18.03695f,0.075f,7.812454f,18.07097f,0.05625f,7.979399f,18.03695f,0.05625f,7.812454f,18.20709f,0.075f,8.647177f,18.20709f,0f,8.647177f,18.20709f,0.0375f,8.647177f,18.24112f,0.075f,8.814121f,18.24112f,0.0375f,8.814121f,18.20709f,0.05625f,8.647177f,18.24112f,0.05625f,8.814121f,18.24112f,0f,8.814121f,18.20709f,0.01875f,8.647177f,18.24112f,0.01875f,8.814121f,18.27515f,0f,8.981066f,18.47214f,0f,8.940911f,18.66914f,0f,8.900757f,18.27515f,0.075f,8.981066f,18.47214f,0.075f,8.940911f,18.66914f,0.075f,8.900757f,18.66914f,0f,8.900757f,18.3969f,0f,7.565201f,18.66914f,0.075f,8.900757f,18.3969f,0.075f,7.565201f});
  }
}
private class MFInt32339 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32340 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f341 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.67237f,0f,6.803322f,17.8648f,0f,6.967933f,18.67237f,0.075f,6.803322f,17.8648f,0.075f,6.967933f,17.8648f,0f,6.967933f,17.99892f,0f,7.625913f,17.8648f,0.075f,6.967933f,17.99892f,0.075f,7.625913f,17.99892f,0f,7.625913f,18.40271f,0f,7.543607f,18.80649f,0f,7.461301f,17.99892f,0.075f,7.625913f,18.40271f,0.075f,7.543607f,18.80649f,0.075f,7.461301f,18.20081f,0.075f,7.58476f,18.40271f,0.0375f,7.543607f,18.20081f,0f,7.58476f,18.20081f,0.0375f,7.58476f,18.6046f,0.075f,7.502454f,18.6046f,0f,7.502454f,18.6046f,0.0375f,7.502454f,18.80649f,0f,7.461301f,18.67237f,0f,6.803322f,18.80649f,0.075f,7.461301f,18.67237f,0.075f,6.803322f});
  }
}
private class MFInt32342 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32343 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f344 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.53426f,0f,6.125745f,18.13047f,0f,6.208051f,17.72669f,0f,6.290357f,18.53426f,0.075f,6.125745f,18.13047f,0.075f,6.208051f,17.72669f,0.075f,6.290357f,17.92858f,0.075f,6.249204f,17.92858f,0f,6.249204f,18.13047f,0.0375f,6.208051f,17.92858f,0.0375f,6.249204f,18.33237f,0.075f,6.166898f,18.33237f,0f,6.166898f,18.33237f,0.0375f,6.166898f,17.72669f,0f,6.290357f,17.86081f,0f,6.948337f,17.72669f,0.075f,6.290357f,17.86081f,0.075f,6.948337f,17.86081f,0f,6.948337f,18.26459f,0f,6.866031f,18.66838f,0f,6.783725f,17.86081f,0.075f,6.948337f,18.26459f,0.075f,6.866031f,18.66838f,0.075f,6.783725f,18.0627f,0.075f,6.907184f,18.26459f,0.0375f,6.866031f,18.0627f,0f,6.907184f,18.0627f,0.0375f,6.907184f,18.46648f,0.075f,6.824878f,18.46648f,0f,6.824878f,18.46648f,0.0375f,6.824878f,18.66838f,0f,6.783725f,18.53426f,0f,6.125745f,18.66838f,0.075f,6.783725f,18.53426f,0.075f,6.125745f});
  }
}
private class MFInt32345 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32346 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f347 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.25803f,0f,4.770593f,17.86404f,0f,4.850901f,18.25803f,0.075f,4.770593f,17.86404f,0.075f,4.850901f,17.86404f,0f,4.850901f,18.13628f,0f,6.186457f,17.86404f,0.075f,4.850901f,18.13628f,0.075f,6.186457f,18.13628f,0f,6.186457f,18.33327f,0f,6.146303f,18.53026f,0f,6.106149f,18.13628f,0.075f,6.186457f,18.33327f,0.075f,6.146303f,18.53026f,0.075f,6.106149f,18.53026f,0f,6.106149f,18.25803f,0f,4.770593f,18.53026f,0.075f,6.106149f,18.25803f,0.075f,4.770593f});
  }
}
private class MFInt32348 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32349 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f350 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.84445f,0f,4.854896f,17.64745f,0f,4.89505f,17.45046f,0f,4.935204f,17.84445f,0.075f,4.854896f,17.64745f,0.075f,4.89505f,17.45046f,0.075f,4.935204f,17.45046f,0f,4.935204f,17.72269f,0f,6.27076f,17.45046f,0.075f,4.935204f,17.72269f,0.075f,6.27076f,17.72269f,0f,6.27076f,17.91969f,0f,6.230606f,18.11668f,0f,6.190452f,17.72269f,0.075f,6.27076f,17.91969f,0.075f,6.230606f,18.11668f,0.075f,6.190452f,18.11668f,0f,6.190452f,17.84445f,0f,4.854896f,18.11668f,0.075f,6.190452f,17.84445f,0.075f,4.854896f});
  }
}
private class MFInt32351 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32352 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f353 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.11992f,0f,4.093016f,17.71613f,0f,4.175322f,17.31235f,0f,4.257627f,18.11992f,0.075f,4.093016f,17.71613f,0.075f,4.175322f,17.31235f,0.075f,4.257627f,17.51424f,0.075f,4.216475f,17.51424f,0f,4.216475f,17.71613f,0.0375f,4.175322f,17.51424f,0.0375f,4.216475f,17.91802f,0.075f,4.134169f,17.91802f,0f,4.134169f,17.91802f,0.0375f,4.134169f,17.31235f,0f,4.257627f,17.44646f,0f,4.915607f,17.31235f,0.075f,4.257627f,17.44646f,0.075f,4.915607f,17.44646f,0f,4.915607f,17.85025f,0f,4.833302f,18.25404f,0f,4.750996f,17.44646f,0.075f,4.915607f,17.85025f,0.075f,4.833302f,18.25404f,0.075f,4.750996f,17.64836f,0.075f,4.874454f,17.85025f,0.0375f,4.833302f,17.64836f,0f,4.874454f,17.64836f,0.0375f,4.874454f,18.05214f,0.075f,4.792149f,18.05214f,0f,4.792149f,18.05214f,0.0375f,4.792149f,18.25404f,0f,4.750996f,18.11992f,0f,4.093016f,18.25404f,0.075f,4.750996f,18.11992f,0.075f,4.093016f});
  }
}
private class MFInt32354 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32355 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f356 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.9818f,0f,3.41544f,17.57802f,0f,3.497746f,17.17423f,0f,3.580051f,17.9818f,0.075f,3.41544f,17.57802f,0.075f,3.497746f,17.17423f,0.075f,3.580051f,17.37612f,0.075f,3.538898f,17.37612f,0f,3.538898f,17.57802f,0.0375f,3.497746f,17.37612f,0.0375f,3.538898f,17.77991f,0.075f,3.456593f,17.77991f,0f,3.456593f,17.77991f,0.0375f,3.456593f,17.17423f,0f,3.580051f,17.30835f,0f,4.23803f,17.17423f,0.075f,3.580051f,17.30835f,0.075f,4.23803f,17.30835f,0f,4.23803f,17.71214f,0f,4.155725f,18.11592f,0f,4.073419f,17.30835f,0.075f,4.23803f,17.71214f,0.075f,4.155725f,18.11592f,0.075f,4.073419f,17.51024f,0.075f,4.196878f,17.71214f,0.0375f,4.155725f,17.51024f,0f,4.196878f,17.51024f,0.0375f,4.196878f,17.91403f,0.075f,4.114572f,17.91403f,0f,4.114572f,17.91403f,0.0375f,4.114572f,18.11592f,0f,4.073419f,17.9818f,0f,3.41544f,18.11592f,0.075f,4.073419f,17.9818f,0.075f,3.41544f});
  }
}
private class MFInt32357 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32358 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f359 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.40297f,0f,29.33195f,21.5954f,0f,29.49656f,22.40297f,0.075f,29.33195f,21.5954f,0.075f,29.49656f,21.5954f,0f,29.49656f,21.72952f,0f,30.15454f,21.5954f,0.075f,29.49656f,21.72952f,0.075f,30.15454f,21.72952f,0f,30.15454f,22.53709f,0f,29.98993f,21.72952f,0.075f,30.15454f,22.53709f,0.075f,29.98993f,22.53709f,0f,29.98993f,22.40297f,0f,29.33195f,22.53709f,0.075f,29.98993f,22.40297f,0.075f,29.33195f});
  }
}
private class MFInt32360 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32361 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f362 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.12674f,0f,27.9768f,21.73275f,0f,28.05711f,22.12674f,0.075f,27.9768f,21.73275f,0.075f,28.05711f,21.73275f,0f,28.05711f,22.00498f,0f,29.39266f,21.73275f,0.075f,28.05711f,22.00498f,0.075f,29.39266f,22.00498f,0f,29.39266f,22.39897f,0f,29.31235f,22.00498f,0.075f,29.39266f,22.39897f,0.075f,29.31235f,22.39897f,0f,29.31235f,22.12674f,0f,27.9768f,22.39897f,0.075f,29.31235f,22.12674f,0.075f,27.9768f});
  }
}
private class MFInt32363 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32364 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f365 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.71315f,0f,28.0611f,21.31917f,0f,28.14141f,21.71315f,0.075f,28.0611f,21.31917f,0.075f,28.14141f,21.31917f,0f,28.14141f,21.5914f,0f,29.47696f,21.31917f,0.075f,28.14141f,21.5914f,0.075f,29.47696f,21.5914f,0f,29.47696f,21.98539f,0f,29.39666f,21.5914f,0.075f,29.47696f,21.98539f,0.075f,29.39666f,21.98539f,0f,29.39666f,21.71315f,0f,28.0611f,21.98539f,0.075f,29.39666f,21.71315f,0.075f,28.0611f});
  }
}
private class MFInt32366 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32367 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f368 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.98862f,0f,27.29922f,21.18105f,0f,27.46383f,21.98862f,0.075f,27.29922f,21.18105f,0.075f,27.46383f,21.18105f,0f,27.46383f,21.31517f,0f,28.12181f,21.18105f,0.075f,27.46383f,21.31517f,0.075f,28.12181f,21.31517f,0f,28.12181f,22.12274f,0f,27.9572f,21.31517f,0.075f,28.12181f,22.12274f,0.075f,27.9572f,22.12274f,0f,27.9572f,21.98862f,0f,27.29922f,22.12274f,0.075f,27.9572f,21.98862f,0.075f,27.29922f});
  }
}
private class MFInt32369 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f371 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.85051f,0f,26.62164f,21.04294f,0f,26.78626f,21.85051f,0.075f,26.62164f,21.04294f,0.075f,26.78626f,21.04294f,0f,26.78626f,21.17706f,0f,27.44423f,21.04294f,0.075f,26.78626f,21.17706f,0.075f,27.44423f,21.17706f,0f,27.44423f,21.98463f,0f,27.27962f,21.17706f,0.075f,27.44423f,21.98463f,0.075f,27.27962f,21.98463f,0f,27.27962f,21.85051f,0f,26.62164f,21.98463f,0.075f,27.27962f,21.85051f,0.075f,26.62164f});
  }
}
private class MFInt32372 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32373 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f374 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.57428f,0f,25.26649f,21.1803f,0f,25.3468f,21.57428f,0.075f,25.26649f,21.1803f,0.075f,25.3468f,21.1803f,0f,25.3468f,21.31641f,0f,26.01458f,21.45253f,0f,26.68236f,21.1803f,0.075f,25.3468f,21.31641f,0.075f,26.01458f,21.45253f,0.075f,26.68236f,21.24835f,0.075f,25.68069f,21.31641f,0.0375f,26.01458f,21.24835f,0f,25.68069f,21.24835f,0.0375f,25.68069f,21.21432f,0.0375f,25.51374f,21.24835f,0.01875f,25.68069f,21.21432f,0f,25.51374f,21.21432f,0.01875f,25.51374f,21.21432f,0.075f,25.51374f,21.24835f,0.05625f,25.68069f,21.21432f,0.05625f,25.51374f,21.38447f,0.075f,26.34847f,21.38447f,0f,26.34847f,21.38447f,0.0375f,26.34847f,21.4185f,0.075f,26.51541f,21.4185f,0.0375f,26.51541f,21.38447f,0.05625f,26.34847f,21.4185f,0.05625f,26.51541f,21.4185f,0f,26.51541f,21.38447f,0.01875f,26.34847f,21.4185f,0.01875f,26.51541f,21.45253f,0f,26.68236f,21.84652f,0f,26.60205f,21.45253f,0.075f,26.68236f,21.84652f,0.075f,26.60205f,21.84652f,0f,26.60205f,21.57428f,0f,25.26649f,21.84652f,0.075f,26.60205f,21.57428f,0.075f,25.26649f});
  }
}
private class MFInt32375 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32376 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f377 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.1607f,0f,25.35079f,20.76671f,0f,25.4311f,21.1607f,0.075f,25.35079f,20.76671f,0.075f,25.4311f,20.76671f,0f,25.4311f,21.03894f,0f,26.76666f,20.76671f,0.075f,25.4311f,21.03894f,0.075f,26.76666f,21.03894f,0f,26.76666f,21.43293f,0f,26.68635f,21.03894f,0.075f,26.76666f,21.43293f,0.075f,26.68635f,21.43293f,0f,26.68635f,21.29682f,0f,26.01857f,21.1607f,0f,25.35079f,21.43293f,0.075f,26.68635f,21.29682f,0.075f,26.01857f,21.1607f,0.075f,25.35079f,21.36487f,0.075f,26.35246f,21.29682f,0.0375f,26.01857f,21.36487f,0f,26.35246f,21.36487f,0.0375f,26.35246f,21.3989f,0.0375f,26.51941f,21.36487f,0.01875f,26.35246f,21.3989f,0f,26.51941f,21.3989f,0.01875f,26.51941f,21.3989f,0.075f,26.51941f,21.36487f,0.05625f,26.35246f,21.3989f,0.05625f,26.51941f,21.22876f,0.075f,25.68468f,21.22876f,0f,25.68468f,21.22876f,0.0375f,25.68468f,21.19473f,0.075f,25.51774f,21.19473f,0.0375f,25.51774f,21.22876f,0.05625f,25.68468f,21.19473f,0.05625f,25.51774f,21.19473f,0f,25.51774f,21.22876f,0.01875f,25.68468f,21.19473f,0.01875f,25.51774f});
  }
}
private class MFInt32378 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32379 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f380 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.43617f,0f,24.58891f,20.6286f,0f,24.75353f,21.43617f,0.075f,24.58891f,20.6286f,0.075f,24.75353f,20.6286f,0f,24.75353f,20.76272f,0f,25.41151f,20.6286f,0.075f,24.75353f,20.76272f,0.075f,25.41151f,20.76272f,0f,25.41151f,21.57029f,0f,25.24689f,20.76272f,0.075f,25.41151f,21.57029f,0.075f,25.24689f,21.57029f,0f,25.24689f,21.43617f,0f,24.58891f,21.57029f,0.075f,25.24689f,21.43617f,0.075f,24.58891f});
  }
}
private class MFInt32381 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32382 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f383 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.29805f,0f,23.91134f,20.49048f,0f,24.07595f,21.29805f,0.075f,23.91134f,20.49048f,0.075f,24.07595f,20.49048f,0f,24.07595f,20.6246f,0f,24.73393f,20.49048f,0.075f,24.07595f,20.6246f,0.075f,24.73393f,20.6246f,0f,24.73393f,21.43217f,0f,24.56932f,20.6246f,0.075f,24.73393f,21.43217f,0.075f,24.56932f,21.43217f,0f,24.56932f,21.29805f,0f,23.91134f,21.43217f,0.075f,24.56932f,21.29805f,0.075f,23.91134f});
  }
}
private class MFInt32384 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32385 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f386 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.02183f,0f,22.55619f,20.62784f,0f,22.63649f,21.02183f,0.075f,22.55619f,20.62784f,0.075f,22.63649f,20.62784f,0f,22.63649f,20.76396f,0f,23.30427f,20.90007f,0f,23.97205f,20.62784f,0.075f,22.63649f,20.76396f,0.075f,23.30427f,20.90007f,0.075f,23.97205f,20.6959f,0.075f,22.97038f,20.76396f,0.0375f,23.30427f,20.6959f,0f,22.97038f,20.6959f,0.0375f,22.97038f,20.66187f,0.0375f,22.80344f,20.6959f,0.01875f,22.97038f,20.66187f,0f,22.80344f,20.66187f,0.01875f,22.80344f,20.66187f,0.075f,22.80344f,20.6959f,0.05625f,22.97038f,20.66187f,0.05625f,22.80344f,20.83201f,0.075f,23.63816f,20.83201f,0f,23.63816f,20.83201f,0.0375f,23.63816f,20.86604f,0.075f,23.80511f,20.86604f,0.0375f,23.80511f,20.83201f,0.05625f,23.63816f,20.86604f,0.05625f,23.80511f,20.86604f,0f,23.80511f,20.83201f,0.01875f,23.63816f,20.86604f,0.01875f,23.80511f,20.90007f,0f,23.97205f,21.29406f,0f,23.89174f,20.90007f,0.075f,23.97205f,21.29406f,0.075f,23.89174f,21.29406f,0f,23.89174f,21.02183f,0f,22.55619f,21.29406f,0.075f,23.89174f,21.02183f,0.075f,22.55619f});
  }
}
private class MFInt32387 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32388 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f389 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.60824f,0f,22.64049f,20.21426f,0f,22.7208f,20.60824f,0.075f,22.64049f,20.21426f,0.075f,22.7208f,20.21426f,0f,22.7208f,20.35037f,0f,23.38857f,20.48649f,0f,24.05635f,20.21426f,0.075f,22.7208f,20.35037f,0.075f,23.38857f,20.48649f,0.075f,24.05635f,20.28231f,0.075f,23.05469f,20.35037f,0.0375f,23.38857f,20.28231f,0f,23.05469f,20.28231f,0.0375f,23.05469f,20.24829f,0.0375f,22.88774f,20.28231f,0.01875f,23.05469f,20.24829f,0f,22.88774f,20.24829f,0.01875f,22.88774f,20.24829f,0.075f,22.88774f,20.28231f,0.05625f,23.05469f,20.24829f,0.05625f,22.88774f,20.41843f,0.075f,23.72246f,20.41843f,0f,23.72246f,20.41843f,0.0375f,23.72246f,20.45246f,0.075f,23.88941f,20.45246f,0.0375f,23.88941f,20.41843f,0.05625f,23.72246f,20.45246f,0.05625f,23.88941f,20.45246f,0f,23.88941f,20.41843f,0.01875f,23.72246f,20.45246f,0.01875f,23.88941f,20.48649f,0f,24.05635f,20.88048f,0f,23.97605f,20.48649f,0.075f,24.05635f,20.88048f,0.075f,23.97605f,20.88048f,0f,23.97605f,20.74436f,0f,23.30827f,20.60824f,0f,22.64049f,20.88048f,0.075f,23.97605f,20.74436f,0.075f,23.30827f,20.60824f,0.075f,22.64049f,20.81242f,0.075f,23.64216f,20.74436f,0.0375f,23.30827f,20.81242f,0f,23.64216f,20.81242f,0.0375f,23.64216f,20.84645f,0.0375f,23.8091f,20.81242f,0.01875f,23.64216f,20.84645f,0f,23.8091f,20.84645f,0.01875f,23.8091f,20.84645f,0.075f,23.8091f,20.81242f,0.05625f,23.64216f,20.84645f,0.05625f,23.8091f,20.6763f,0.075f,22.97438f,20.6763f,0f,22.97438f,20.6763f,0.0375f,22.97438f,20.64227f,0.075f,22.80743f,20.64227f,0.0375f,22.80743f,20.6763f,0.05625f,22.97438f,20.64227f,0.05625f,22.80743f,20.64227f,0f,22.80743f,20.6763f,0.01875f,22.97438f,20.64227f,0.01875f,22.80743f});
  }
}
private class MFInt32390 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32391 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f392 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.88371f,0f,21.87861f,20.07614f,0f,22.04322f,20.88371f,0.075f,21.87861f,20.07614f,0.075f,22.04322f,20.07614f,0f,22.04322f,20.21026f,0f,22.7012f,20.07614f,0.075f,22.04322f,20.21026f,0.075f,22.7012f,20.21026f,0f,22.7012f,21.01783f,0f,22.53659f,20.21026f,0.075f,22.7012f,21.01783f,0.075f,22.53659f,21.01783f,0f,22.53659f,20.88371f,0f,21.87861f,21.01783f,0.075f,22.53659f,20.88371f,0.075f,21.87861f});
  }
}
private class MFInt32393 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32394 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f395 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.7456f,0f,21.20103f,19.93803f,0f,21.36564f,20.7456f,0.075f,21.20103f,19.93803f,0.075f,21.36564f,19.93803f,0f,21.36564f,20.07215f,0f,22.02362f,19.93803f,0.075f,21.36564f,20.07215f,0.075f,22.02362f,20.07215f,0f,22.02362f,20.87972f,0f,21.85901f,20.07215f,0.075f,22.02362f,20.87972f,0.075f,21.85901f,20.87972f,0f,21.85901f,20.7456f,0f,21.20103f,20.87972f,0.075f,21.85901f,20.7456f,0.075f,21.20103f});
  }
}
private class MFInt32396 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32397 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f398 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.46937f,0f,19.84588f,20.07538f,0f,19.92619f,20.46937f,0.075f,19.84588f,20.07538f,0.075f,19.92619f,20.07538f,0f,19.92619f,20.2115f,0f,20.59397f,20.34762f,0f,21.26174f,20.07538f,0.075f,19.92619f,20.2115f,0.075f,20.59397f,20.34762f,0.075f,21.26174f,20.14344f,0.075f,20.26008f,20.2115f,0.0375f,20.59397f,20.14344f,0f,20.26008f,20.14344f,0.0375f,20.26008f,20.10941f,0.0375f,20.09313f,20.14344f,0.01875f,20.26008f,20.10941f,0f,20.09313f,20.10941f,0.01875f,20.09313f,20.10941f,0.075f,20.09313f,20.14344f,0.05625f,20.26008f,20.10941f,0.05625f,20.09313f,20.27956f,0.075f,20.92785f,20.27956f,0f,20.92785f,20.27956f,0.0375f,20.92785f,20.31359f,0.075f,21.0948f,20.31359f,0.0375f,21.0948f,20.27956f,0.05625f,20.92785f,20.31359f,0.05625f,21.0948f,20.31359f,0f,21.0948f,20.27956f,0.01875f,20.92785f,20.31359f,0.01875f,21.0948f,20.34762f,0f,21.26174f,20.7416f,0f,21.18144f,20.34762f,0.075f,21.26174f,20.7416f,0.075f,21.18144f,20.7416f,0f,21.18144f,20.60549f,0f,20.51366f,20.46937f,0f,19.84588f,20.7416f,0.075f,21.18144f,20.60549f,0.075f,20.51366f,20.46937f,0.075f,19.84588f,20.67355f,0.075f,20.84755f,20.60549f,0.0375f,20.51366f,20.67355f,0f,20.84755f,20.67355f,0.0375f,20.84755f,20.70757f,0.0375f,21.01449f,20.67355f,0.01875f,20.84755f,20.70757f,0f,21.01449f,20.70757f,0.01875f,21.01449f,20.70757f,0.075f,21.01449f,20.67355f,0.05625f,20.84755f,20.70757f,0.05625f,21.01449f,20.53743f,0.075f,20.17977f,20.53743f,0f,20.17977f,20.53743f,0.0375f,20.17977f,20.5034f,0.075f,20.01283f,20.5034f,0.0375f,20.01283f,20.53743f,0.05625f,20.17977f,20.5034f,0.05625f,20.01283f,20.5034f,0f,20.01283f,20.53743f,0.01875f,20.17977f,20.5034f,0.01875f,20.01283f});
  }
}
private class MFInt32399 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32400 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f401 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.05579f,0f,19.93018f,19.6618f,0f,20.01049f,20.05579f,0.075f,19.93018f,19.6618f,0.075f,20.01049f,19.6618f,0f,20.01049f,19.79792f,0f,20.67827f,19.93403f,0f,21.34605f,19.6618f,0.075f,20.01049f,19.79792f,0.075f,20.67827f,19.93403f,0.075f,21.34605f,19.72986f,0.075f,20.34438f,19.79792f,0.0375f,20.67827f,19.72986f,0f,20.34438f,19.72986f,0.0375f,20.34438f,19.69583f,0.0375f,20.17744f,19.72986f,0.01875f,20.34438f,19.69583f,0f,20.17744f,19.69583f,0.01875f,20.17744f,19.69583f,0.075f,20.17744f,19.72986f,0.05625f,20.34438f,19.69583f,0.05625f,20.17744f,19.86597f,0.075f,21.01216f,19.86597f,0f,21.01216f,19.86597f,0.0375f,21.01216f,19.9f,0.075f,21.1791f,19.9f,0.0375f,21.1791f,19.86597f,0.05625f,21.01216f,19.9f,0.05625f,21.1791f,19.9f,0f,21.1791f,19.86597f,0.01875f,21.01216f,19.9f,0.01875f,21.1791f,19.93403f,0f,21.34605f,20.32802f,0f,21.26574f,19.93403f,0.075f,21.34605f,20.32802f,0.075f,21.26574f,20.32802f,0f,21.26574f,20.1919f,0f,20.59796f,20.05579f,0f,19.93018f,20.32802f,0.075f,21.26574f,20.1919f,0.075f,20.59796f,20.05579f,0.075f,19.93018f,20.25996f,0.075f,20.93185f,20.1919f,0.0375f,20.59796f,20.25996f,0f,20.93185f,20.25996f,0.0375f,20.93185f,20.29399f,0.0375f,21.09879f,20.25996f,0.01875f,20.93185f,20.29399f,0f,21.09879f,20.29399f,0.01875f,21.09879f,20.29399f,0.075f,21.09879f,20.25996f,0.05625f,20.93185f,20.29399f,0.05625f,21.09879f,20.12384f,0.075f,20.26407f,20.12384f,0f,20.26407f,20.12384f,0.0375f,20.26407f,20.08982f,0.075f,20.09713f,20.08982f,0.0375f,20.09713f,20.12384f,0.05625f,20.26407f,20.08982f,0.05625f,20.09713f,20.08982f,0f,20.09713f,20.12384f,0.01875f,20.26407f,20.08982f,0.01875f,20.09713f});
  }
}
private class MFInt32402 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32403 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f404 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.33126f,0f,19.1683f,19.52369f,0f,19.33291f,20.33126f,0.075f,19.1683f,19.52369f,0.075f,19.33291f,19.52369f,0f,19.33291f,19.6578f,0f,19.99089f,19.52369f,0.075f,19.33291f,19.6578f,0.075f,19.99089f,19.6578f,0f,19.99089f,20.46538f,0f,19.82628f,19.6578f,0.075f,19.99089f,20.46538f,0.075f,19.82628f,20.46538f,0f,19.82628f,20.33126f,0f,19.1683f,20.46538f,0.075f,19.82628f,20.33126f,0.075f,19.1683f});
  }
}
private class MFInt32405 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32406 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f407 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.19314f,0f,18.49073f,19.38557f,0f,18.65534f,20.19314f,0.075f,18.49073f,19.38557f,0.075f,18.65534f,19.38557f,0f,18.65534f,19.51969f,0f,19.31332f,19.38557f,0.075f,18.65534f,19.51969f,0.075f,19.31332f,19.51969f,0f,19.31332f,20.32726f,0f,19.14871f,19.51969f,0.075f,19.31332f,20.32726f,0.075f,19.14871f,20.32726f,0f,19.14871f,20.19314f,0f,18.49073f,20.32726f,0.075f,19.14871f,20.19314f,0.075f,18.49073f});
  }
}
private class MFInt32408 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32409 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f410 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.91691f,0f,17.13557f,19.52293f,0f,17.21588f,19.91691f,0.075f,17.13557f,19.52293f,0.075f,17.21588f,19.52293f,0f,17.21588f,19.79516f,0f,18.55144f,19.52293f,0.075f,17.21588f,19.79516f,0.075f,18.55144f,19.79516f,0f,18.55144f,20.18915f,0f,18.47113f,19.79516f,0.075f,18.55144f,20.18915f,0.075f,18.47113f,20.18915f,0f,18.47113f,19.91691f,0f,17.13557f,20.18915f,0.075f,18.47113f,19.91691f,0.075f,17.13557f});
  }
}
private class MFInt32411 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32412 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f413 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.50333f,0f,17.21988f,19.10934f,0f,17.30019f,19.50333f,0.075f,17.21988f,19.10934f,0.075f,17.30019f,19.10934f,0f,17.30019f,19.24546f,0f,17.96796f,19.38158f,0f,18.63574f,19.10934f,0.075f,17.30019f,19.24546f,0.075f,17.96796f,19.38158f,0.075f,18.63574f,19.1774f,0.075f,17.63408f,19.24546f,0.0375f,17.96796f,19.1774f,0f,17.63408f,19.1774f,0.0375f,17.63408f,19.14337f,0.0375f,17.46713f,19.1774f,0.01875f,17.63408f,19.14337f,0f,17.46713f,19.14337f,0.01875f,17.46713f,19.14337f,0.075f,17.46713f,19.1774f,0.05625f,17.63408f,19.14337f,0.05625f,17.46713f,19.31352f,0.075f,18.30185f,19.31352f,0f,18.30185f,19.31352f,0.0375f,18.30185f,19.34755f,0.075f,18.4688f,19.34755f,0.0375f,18.4688f,19.31352f,0.05625f,18.30185f,19.34755f,0.05625f,18.4688f,19.34755f,0f,18.4688f,19.31352f,0.01875f,18.30185f,19.34755f,0.01875f,18.4688f,19.38158f,0f,18.63574f,19.77556f,0f,18.55543f,19.38158f,0.075f,18.63574f,19.77556f,0.075f,18.55543f,19.77556f,0f,18.55543f,19.50333f,0f,17.21988f,19.77556f,0.075f,18.55543f,19.50333f,0.075f,17.21988f});
  }
}
private class MFInt32414 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32415 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f416 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.7788f,0f,16.458f,18.97123f,0f,16.62261f,19.7788f,0.075f,16.458f,18.97123f,0.075f,16.62261f,18.97123f,0f,16.62261f,19.10535f,0f,17.28059f,18.97123f,0.075f,16.62261f,19.10535f,0.075f,17.28059f,19.10535f,0f,17.28059f,19.91292f,0f,17.11598f,19.10535f,0.075f,17.28059f,19.91292f,0.075f,17.11598f,19.91292f,0f,17.11598f,19.7788f,0f,16.458f,19.91292f,0.075f,17.11598f,19.7788f,0.075f,16.458f});
  }
}
private class MFInt32417 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32418 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f419 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.64069f,0f,15.78042f,19.2369f,0f,15.86273f,18.83311f,0f,15.94503f,19.64069f,0.075f,15.78042f,19.2369f,0.075f,15.86273f,18.83311f,0.075f,15.94503f,19.03501f,0.075f,15.90388f,19.03501f,0f,15.90388f,19.2369f,0.0375f,15.86273f,19.03501f,0.0375f,15.90388f,19.43879f,0.075f,15.82157f,19.43879f,0f,15.82157f,19.43879f,0.0375f,15.82157f,18.83311f,0f,15.94503f,18.96724f,0f,16.60301f,18.83311f,0.075f,15.94503f,18.96724f,0.075f,16.60301f,18.96724f,0f,16.60301f,19.77481f,0f,16.4384f,18.96724f,0.075f,16.60301f,19.77481f,0.075f,16.4384f,19.77481f,0f,16.4384f,19.64069f,0f,15.78042f,19.77481f,0.075f,16.4384f,19.64069f,0.075f,15.78042f});
  }
}
private class MFInt32420 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32421 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f422 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.36446f,0f,14.42527f,18.97047f,0f,14.50558f,19.36446f,0.075f,14.42527f,18.97047f,0.075f,14.50558f,18.97047f,0f,14.50558f,19.2427f,0f,15.84113f,18.97047f,0.075f,14.50558f,19.2427f,0.075f,15.84113f,19.2427f,0f,15.84113f,19.4397f,0f,15.80098f,19.63669f,0f,15.76082f,19.2427f,0.075f,15.84113f,19.4397f,0.075f,15.80098f,19.63669f,0.075f,15.76082f,19.63669f,0f,15.76082f,19.36446f,0f,14.42527f,19.63669f,0.075f,15.76082f,19.36446f,0.075f,14.42527f});
  }
}
private class MFInt32423 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32424 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f425 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.95087f,0f,14.50957f,18.75388f,0f,14.54973f,18.55689f,0f,14.58988f,18.95087f,0.075f,14.50957f,18.75388f,0.075f,14.54973f,18.55689f,0.075f,14.58988f,18.55689f,0f,14.58988f,18.82912f,0f,15.92544f,18.55689f,0.075f,14.58988f,18.82912f,0.075f,15.92544f,18.82912f,0f,15.92544f,19.22311f,0f,15.84513f,18.82912f,0.075f,15.92544f,19.22311f,0.075f,15.84513f,19.22311f,0f,15.84513f,18.95087f,0f,14.50957f,19.22311f,0.075f,15.84513f,18.95087f,0.075f,14.50957f});
  }
}
private class MFInt32426 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32427 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f428 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.22635f,0f,13.74769f,18.82256f,0f,13.83f,18.41877f,0f,13.9123f,19.22635f,0.075f,13.74769f,18.82256f,0.075f,13.83f,18.41877f,0.075f,13.9123f,18.62067f,0.075f,13.87115f,18.62067f,0f,13.87115f,18.82256f,0.0375f,13.83f,18.62067f,0.0375f,13.87115f,19.02445f,0.075f,13.78885f,19.02445f,0f,13.78885f,19.02445f,0.0375f,13.78885f,18.41877f,0f,13.9123f,18.55289f,0f,14.57028f,18.41877f,0.075f,13.9123f,18.55289f,0.075f,14.57028f,18.55289f,0f,14.57028f,18.95668f,0f,14.48798f,19.36046f,0f,14.40567f,18.55289f,0.075f,14.57028f,18.95668f,0.075f,14.48798f,19.36046f,0.075f,14.40567f,18.75479f,0.075f,14.52913f,18.95668f,0.0375f,14.48798f,18.75479f,0f,14.52913f,18.75479f,0.0375f,14.52913f,19.15857f,0.075f,14.44683f,19.15857f,0f,14.44683f,19.15857f,0.0375f,14.44683f,19.36046f,0f,14.40567f,19.22635f,0f,13.74769f,19.36046f,0.075f,14.40567f,19.22635f,0.075f,13.74769f});
  }
}
private class MFInt32429 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32430 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f431 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.08823f,0f,13.07012f,18.28066f,0f,13.23473f,19.08823f,0.075f,13.07012f,18.28066f,0.075f,13.23473f,18.28066f,0f,13.23473f,18.41478f,0f,13.89271f,18.28066f,0.075f,13.23473f,18.41478f,0.075f,13.89271f,18.41478f,0f,13.89271f,18.81856f,0f,13.8104f,19.22235f,0f,13.7281f,18.41478f,0.075f,13.89271f,18.81856f,0.075f,13.8104f,19.22235f,0.075f,13.7281f,18.61667f,0.075f,13.85155f,18.81856f,0.0375f,13.8104f,18.61667f,0f,13.85155f,18.61667f,0.0375f,13.85155f,19.02046f,0.075f,13.76925f,19.02046f,0f,13.76925f,19.02046f,0.0375f,13.76925f,19.22235f,0f,13.7281f,19.08823f,0f,13.07012f,19.22235f,0.075f,13.7281f,19.08823f,0.075f,13.07012f});
  }
}
private class MFInt32432 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1});
  }
}
private class MFInt32433 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1});
  }
}
private class MFVec3f434 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.812f,0f,11.71496f,18.61501f,0f,11.75512f,18.41801f,0f,11.79527f,18.812f,0.075f,11.71496f,18.61501f,0.075f,11.75512f,18.41801f,0.075f,11.79527f,18.41801f,0f,11.79527f,18.69025f,0f,13.13083f,18.41801f,0.075f,11.79527f,18.69025f,0.075f,13.13083f,18.69025f,0f,13.13083f,18.88724f,0f,13.09067f,19.08424f,0f,13.05052f,18.69025f,0.075f,13.13083f,18.88724f,0.075f,13.09067f,19.08424f,0.075f,13.05052f,19.08424f,0f,13.05052f,18.94812f,0f,12.38274f,18.812f,0f,11.71496f,19.08424f,0.075f,13.05052f,18.94812f,0.075f,12.38274f,18.812f,0.075f,11.71496f,19.01618f,0.075f,12.71663f,18.94812f,0.0375f,12.38274f,19.01618f,0f,12.71663f,19.01618f,0.0375f,12.71663f,19.05021f,0.0375f,12.88357f,19.01618f,0.01875f,12.71663f,19.05021f,0f,12.88357f,19.05021f,0.01875f,12.88357f,19.05021f,0.075f,12.88357f,19.01618f,0.05625f,12.71663f,19.05021f,0.05625f,12.88357f,18.88006f,0.075f,12.04885f,18.88006f,0f,12.04885f,18.88006f,0.0375f,12.04885f,18.84603f,0.075f,11.88191f,18.84603f,0.0375f,11.88191f,18.88006f,0.05625f,12.04885f,18.84603f,0.05625f,11.88191f,18.84603f,0f,11.88191f,18.88006f,0.01875f,12.04885f,18.84603f,0.01875f,11.88191f});
  }
}
private class MFInt32435 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32436 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f437 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.39842f,0f,11.79927f,18.20143f,0f,11.83942f,18.00443f,0f,11.87957f,18.39842f,0.075f,11.79927f,18.20143f,0.075f,11.83942f,18.00443f,0.075f,11.87957f,18.00443f,0f,11.87957f,18.27666f,0f,13.21513f,18.00443f,0.075f,11.87957f,18.27666f,0.075f,13.21513f,18.27666f,0f,13.21513f,18.47366f,0f,13.17498f,18.67065f,0f,13.13482f,18.27666f,0.075f,13.21513f,18.47366f,0.075f,13.17498f,18.67065f,0.075f,13.13482f,18.67065f,0f,13.13482f,18.39842f,0f,11.79927f,18.67065f,0.075f,13.13482f,18.39842f,0.075f,11.79927f});
  }
}
private class MFInt32438 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32439 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f440 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.67389f,0f,11.03739f,17.86632f,0f,11.202f,18.67389f,0.075f,11.03739f,17.86632f,0.075f,11.202f,17.86632f,0f,11.202f,18.00044f,0f,11.85998f,17.86632f,0.075f,11.202f,18.00044f,0.075f,11.85998f,18.00044f,0f,11.85998f,18.80801f,0f,11.69537f,18.00044f,0.075f,11.85998f,18.80801f,0.075f,11.69537f,18.80801f,0f,11.69537f,18.67389f,0f,11.03739f,18.80801f,0.075f,11.69537f,18.67389f,0.075f,11.03739f});
  }
}
private class MFInt32441 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32442 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f443 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.53577f,0f,10.35981f,17.7282f,0f,10.52442f,18.53577f,0.075f,10.35981f,17.7282f,0.075f,10.52442f,17.7282f,0f,10.52442f,17.86232f,0f,11.1824f,17.7282f,0.075f,10.52442f,17.86232f,0.075f,11.1824f,17.86232f,0f,11.1824f,18.66989f,0f,11.01779f,17.86232f,0.075f,11.1824f,18.66989f,0.075f,11.01779f,18.66989f,0f,11.01779f,18.53577f,0f,10.35981f,18.66989f,0.075f,11.01779f,18.53577f,0.075f,10.35981f});
  }
}
private class MFInt32444 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32445 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f446 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.25955f,0f,9.004658f,18.06255f,0f,9.044811f,17.86556f,0f,9.084966f,18.25955f,0.075f,9.004658f,18.06255f,0.075f,9.044811f,17.86556f,0.075f,9.084966f,17.86556f,0f,9.084966f,18.13779f,0f,10.42052f,17.86556f,0.075f,9.084966f,18.13779f,0.075f,10.42052f,18.13779f,0f,10.42052f,18.33479f,0f,10.38037f,18.53178f,0f,10.34021f,18.13779f,0.075f,10.42052f,18.33479f,0.075f,10.38037f,18.53178f,0.075f,10.34021f,18.53178f,0f,10.34021f,18.25955f,0f,9.004658f,18.53178f,0.075f,10.34021f,18.25955f,0.075f,9.004658f});
  }
}
private class MFInt32447 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32448 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f449 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.84596f,0f,9.088961f,17.45197f,0f,9.169269f,17.84596f,0.075f,9.088961f,17.45197f,0.075f,9.169269f,17.45197f,0f,9.169269f,17.72421f,0f,10.50482f,17.45197f,0.075f,9.169269f,17.72421f,0.075f,10.50482f,17.72421f,0f,10.50482f,17.9212f,0f,10.46467f,18.1182f,0f,10.42452f,17.72421f,0.075f,10.50482f,17.9212f,0.075f,10.46467f,18.1182f,0.075f,10.42452f,18.1182f,0f,10.42452f,17.84596f,0f,9.088961f,18.1182f,0.075f,10.42452f,17.84596f,0.075f,9.088961f});
  }
}
private class MFInt32450 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32451 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f452 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12143f,0f,8.327081f,17.31386f,0f,8.491693f,18.12143f,0.075f,8.327081f,17.31386f,0.075f,8.491693f,17.31386f,0f,8.491693f,17.44798f,0f,9.149672f,17.31386f,0.075f,8.491693f,17.44798f,0.075f,9.149672f,17.44798f,0f,9.149672f,17.85177f,0f,9.067366f,18.25555f,0f,8.985061f,17.44798f,0.075f,9.149672f,17.85177f,0.075f,9.067366f,18.25555f,0.075f,8.985061f,17.64987f,0.075f,9.108519f,17.85177f,0.0375f,9.067366f,17.64987f,0f,9.108519f,17.64987f,0.0375f,9.108519f,18.05366f,0.075f,9.026213f,18.05366f,0f,9.026213f,18.05366f,0.0375f,9.026213f,18.25555f,0f,8.985061f,18.12143f,0f,8.327081f,18.25555f,0.075f,8.985061f,18.12143f,0.075f,8.327081f});
  }
}
private class MFInt32453 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32454 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f455 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98332f,0f,7.649504f,17.57953f,0f,7.73181f,17.17575f,0f,7.814116f,17.98332f,0.075f,7.649504f,17.57953f,0.075f,7.73181f,17.17575f,0.075f,7.814116f,17.37764f,0.075f,7.772963f,17.37764f,0f,7.772963f,17.57953f,0.0375f,7.73181f,17.37764f,0.0375f,7.772963f,17.78143f,0.075f,7.690657f,17.78143f,0f,7.690657f,17.78143f,0.0375f,7.690657f,17.17575f,0f,7.814116f,17.30987f,0f,8.472095f,17.17575f,0.075f,7.814116f,17.30987f,0.075f,8.472095f,17.30987f,0f,8.472095f,18.11744f,0f,8.307484f,17.30987f,0.075f,8.472095f,18.11744f,0.075f,8.307484f,18.11744f,0f,8.307484f,17.98332f,0f,7.649504f,18.11744f,0.075f,8.307484f,17.98332f,0.075f,7.649504f});
  }
}
private class MFInt32456 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32457 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f458 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.70709f,0f,6.294352f,17.5101f,0f,6.334506f,17.3131f,0f,6.37466f,17.70709f,0.075f,6.294352f,17.5101f,0.075f,6.334506f,17.3131f,0.075f,6.37466f,17.3131f,0f,6.37466f,17.58534f,0f,7.710216f,17.3131f,0.075f,6.37466f,17.58534f,0.075f,7.710216f,17.58534f,0f,7.710216f,17.97932f,0f,7.629908f,17.58534f,0.075f,7.710216f,17.97932f,0.075f,7.629908f,17.97932f,0f,7.629908f,17.70709f,0f,6.294352f,17.97932f,0.075f,7.629908f,17.70709f,0.075f,6.294352f});
  }
}
private class MFInt32459 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32460 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f461 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.29351f,0f,6.378654f,17.09651f,0f,6.418809f,16.89952f,0f,6.458963f,17.29351f,0.075f,6.378654f,17.09651f,0.075f,6.418809f,16.89952f,0.075f,6.458963f,16.89952f,0f,6.458963f,17.17175f,0f,7.794519f,16.89952f,0.075f,6.458963f,17.17175f,0.075f,7.794519f,17.17175f,0f,7.794519f,17.36875f,0f,7.754364f,17.56574f,0f,7.714211f,17.17175f,0.075f,7.794519f,17.36875f,0.075f,7.754364f,17.56574f,0.075f,7.714211f,17.56574f,0f,7.714211f,17.29351f,0f,6.378654f,17.56574f,0.075f,7.714211f,17.29351f,0.075f,6.378654f});
  }
}
private class MFInt32462 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32463 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f464 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.56898f,0f,5.616775f,17.16519f,0f,5.699081f,16.76141f,0f,5.781386f,17.56898f,0.075f,5.616775f,17.16519f,0.075f,5.699081f,16.76141f,0.075f,5.781386f,16.9633f,0.075f,5.740234f,16.9633f,0f,5.740234f,17.16519f,0.0375f,5.699081f,16.9633f,0.0375f,5.740234f,17.36708f,0.075f,5.657928f,17.36708f,0f,5.657928f,17.36708f,0.0375f,5.657928f,16.76141f,0f,5.781386f,16.89552f,0f,6.439366f,16.76141f,0.075f,5.781386f,16.89552f,0.075f,6.439366f,16.89552f,0f,6.439366f,17.29931f,0f,6.35706f,17.7031f,0f,6.274755f,16.89552f,0.075f,6.439366f,17.29931f,0.075f,6.35706f,17.7031f,0.075f,6.274755f,17.09742f,0.075f,6.398213f,17.29931f,0.0375f,6.35706f,17.09742f,0f,6.398213f,17.09742f,0.0375f,6.398213f,17.5012f,0.075f,6.315907f,17.5012f,0f,6.315907f,17.5012f,0.0375f,6.315907f,17.7031f,0f,6.274755f,17.56898f,0f,5.616775f,17.7031f,0.075f,6.274755f,17.56898f,0.075f,5.616775f});
  }
}
private class MFInt32465 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32466 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f467 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.43086f,0f,4.939198f,17.02708f,0f,5.021504f,16.62329f,0f,5.10381f,17.43086f,0.075f,4.939198f,17.02708f,0.075f,5.021504f,16.62329f,0.075f,5.10381f,16.82518f,0.075f,5.062657f,16.82518f,0f,5.062657f,17.02708f,0.0375f,5.021504f,16.82518f,0.0375f,5.062657f,17.22897f,0.075f,4.980351f,17.22897f,0f,4.980351f,17.22897f,0.0375f,4.980351f,16.62329f,0f,5.10381f,16.75741f,0f,5.761789f,16.62329f,0.075f,5.10381f,16.75741f,0.075f,5.761789f,16.75741f,0f,5.761789f,17.1612f,0f,5.679484f,17.56498f,0f,5.597178f,16.75741f,0.075f,5.761789f,17.1612f,0.075f,5.679484f,17.56498f,0.075f,5.597178f,16.9593f,0.075f,5.720637f,17.1612f,0.0375f,5.679484f,16.9593f,0f,5.720637f,16.9593f,0.0375f,5.720637f,17.36309f,0.075f,5.638331f,17.36309f,0f,5.638331f,17.36309f,0.0375f,5.638331f,17.56498f,0f,5.597178f,17.43086f,0f,4.939198f,17.56498f,0.075f,5.597178f,17.43086f,0.075f,4.939198f});
  }
}
private class MFInt32468 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32469 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f470 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.15463f,0f,3.584046f,16.76065f,0f,3.664354f,17.15463f,0.075f,3.584046f,16.76065f,0.075f,3.664354f,16.76065f,0f,3.664354f,17.03288f,0f,4.99991f,16.76065f,0.075f,3.664354f,17.03288f,0.075f,4.99991f,17.03288f,0f,4.99991f,17.22987f,0f,4.959756f,17.42687f,0f,4.919601f,17.03288f,0.075f,4.99991f,17.22987f,0.075f,4.959756f,17.42687f,0.075f,4.919601f,17.42687f,0f,4.919601f,17.15463f,0f,3.584046f,17.42687f,0.075f,4.919601f,17.15463f,0.075f,3.584046f});
  }
}
private class MFInt32471 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32472 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f473 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.74105f,0f,3.668349f,16.34706f,0f,3.748657f,16.74105f,0.075f,3.668349f,16.34706f,0.075f,3.748657f,16.34706f,0f,3.748657f,16.6193f,0f,5.084213f,16.34706f,0.075f,3.748657f,16.6193f,0.075f,5.084213f,16.6193f,0f,5.084213f,17.01328f,0f,5.003905f,16.6193f,0.075f,5.084213f,17.01328f,0.075f,5.003905f,17.01328f,0f,5.003905f,16.74105f,0f,3.668349f,17.01328f,0.075f,5.003905f,16.74105f,0.075f,3.668349f});
  }
}
private class MFInt32474 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32475 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f476 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.01652f,0f,2.906469f,16.61274f,0f,2.988775f,16.20895f,0f,3.071081f,17.01652f,0.075f,2.906469f,16.61274f,0.075f,2.988775f,16.20895f,0.075f,3.071081f,16.41084f,0.075f,3.029928f,16.41084f,0f,3.029928f,16.61274f,0.0375f,2.988775f,16.41084f,0.0375f,3.029928f,16.81463f,0.075f,2.947622f,16.81463f,0f,2.947622f,16.81463f,0.0375f,2.947622f,16.20895f,0f,3.071081f,16.34307f,0f,3.72906f,16.20895f,0.075f,3.071081f,16.34307f,0.075f,3.72906f,16.34307f,0f,3.72906f,16.74685f,0f,3.646755f,17.15064f,0f,3.564449f,16.34307f,0.075f,3.72906f,16.74685f,0.075f,3.646755f,17.15064f,0.075f,3.564449f,16.54496f,0.075f,3.687907f,16.74685f,0.0375f,3.646755f,16.54496f,0f,3.687907f,16.54496f,0.0375f,3.687907f,16.94875f,0.075f,3.605602f,16.94875f,0f,3.605602f,16.94875f,0.0375f,3.605602f,17.15064f,0f,3.564449f,17.01652f,0f,2.906469f,17.15064f,0.075f,3.564449f,17.01652f,0.075f,2.906469f});
  }
}
private class MFInt32477 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32478 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f479 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.43769f,0f,28.82298f,20.63011f,0f,28.98759f,21.43769f,0.075f,28.82298f,20.63011f,0.075f,28.98759f,20.63011f,0f,28.98759f,20.76423f,0f,29.64557f,20.63011f,0.075f,28.98759f,20.76423f,0.075f,29.64557f,20.76423f,0f,29.64557f,21.5718f,0f,29.48096f,20.76423f,0.075f,29.64557f,21.5718f,0.075f,29.48096f,21.5718f,0f,29.48096f,21.43769f,0f,28.82298f,21.5718f,0.075f,29.48096f,21.43769f,0.075f,28.82298f});
  }
}
private class MFInt32480 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32481 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f482 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.29957f,0f,28.1454f,20.492f,0f,28.31001f,21.29957f,0.075f,28.1454f,20.492f,0.075f,28.31001f,20.492f,0f,28.31001f,20.62612f,0f,28.96799f,20.492f,0.075f,28.31001f,20.62612f,0.075f,28.96799f,20.62612f,0f,28.96799f,21.43369f,0f,28.80338f,20.62612f,0.075f,28.96799f,21.43369f,0.075f,28.80338f,21.43369f,0f,28.80338f,21.29957f,0f,28.1454f,21.43369f,0.075f,28.80338f,21.29957f,0.075f,28.1454f});
  }
}
private class MFInt32483 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32484 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f485 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.02334f,0f,26.79025f,20.62935f,0f,26.87056f,21.02334f,0.075f,26.79025f,20.62935f,0.075f,26.87056f,20.62935f,0f,26.87056f,20.76547f,0f,27.53834f,20.90159f,0f,28.20612f,20.62935f,0.075f,26.87056f,20.76547f,0.075f,27.53834f,20.90159f,0.075f,28.20612f,20.69741f,0.075f,27.20445f,20.76547f,0.0375f,27.53834f,20.69741f,0f,27.20445f,20.69741f,0.0375f,27.20445f,20.66339f,0.0375f,27.0375f,20.69741f,0.01875f,27.20445f,20.66339f,0f,27.0375f,20.66339f,0.01875f,27.0375f,20.66339f,0.075f,27.0375f,20.69741f,0.05625f,27.20445f,20.66339f,0.05625f,27.0375f,20.83353f,0.075f,27.87223f,20.83353f,0f,27.87223f,20.83353f,0.0375f,27.87223f,20.86756f,0.075f,28.03917f,20.86756f,0.0375f,28.03917f,20.83353f,0.05625f,27.87223f,20.86756f,0.05625f,28.03917f,20.86756f,0f,28.03917f,20.83353f,0.01875f,27.87223f,20.86756f,0.01875f,28.03917f,20.90159f,0f,28.20612f,21.29558f,0f,28.12581f,20.90159f,0.075f,28.20612f,21.29558f,0.075f,28.12581f,21.29558f,0f,28.12581f,21.15946f,0f,27.45803f,21.02334f,0f,26.79025f,21.29558f,0.075f,28.12581f,21.15946f,0.075f,27.45803f,21.02334f,0.075f,26.79025f,21.22752f,0.075f,27.79192f,21.15946f,0.0375f,27.45803f,21.22752f,0f,27.79192f,21.22752f,0.0375f,27.79192f,21.26155f,0.0375f,27.95886f,21.22752f,0.01875f,27.79192f,21.26155f,0f,27.95886f,21.26155f,0.01875f,27.95886f,21.26155f,0.075f,27.95886f,21.22752f,0.05625f,27.79192f,21.26155f,0.05625f,27.95886f,21.0914f,0.075f,27.12414f,21.0914f,0f,27.12414f,21.0914f,0.0375f,27.12414f,21.05737f,0.075f,26.9572f,21.05737f,0.0375f,26.9572f,21.0914f,0.05625f,27.12414f,21.05737f,0.05625f,26.9572f,21.05737f,0f,26.9572f,21.0914f,0.01875f,27.12414f,21.05737f,0.01875f,26.9572f});
  }
}
private class MFInt32486 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32487 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f488 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.60976f,0f,26.87455f,20.21577f,0f,26.95486f,20.60976f,0.075f,26.87455f,20.21577f,0.075f,26.95486f,20.21577f,0f,26.95486f,20.35189f,0f,27.62264f,20.488f,0f,28.29042f,20.21577f,0.075f,26.95486f,20.35189f,0.075f,27.62264f,20.488f,0.075f,28.29042f,20.28383f,0.075f,27.28875f,20.35189f,0.0375f,27.62264f,20.28383f,0f,27.28875f,20.28383f,0.0375f,27.28875f,20.2498f,0.0375f,27.12181f,20.28383f,0.01875f,27.28875f,20.2498f,0f,27.12181f,20.2498f,0.01875f,27.12181f,20.2498f,0.075f,27.12181f,20.28383f,0.05625f,27.28875f,20.2498f,0.05625f,27.12181f,20.41995f,0.075f,27.95653f,20.41995f,0f,27.95653f,20.41995f,0.0375f,27.95653f,20.45398f,0.075f,28.12347f,20.45398f,0.0375f,28.12347f,20.41995f,0.05625f,27.95653f,20.45398f,0.05625f,28.12347f,20.45398f,0f,28.12347f,20.41995f,0.01875f,27.95653f,20.45398f,0.01875f,28.12347f,20.488f,0f,28.29042f,20.88199f,0f,28.21011f,20.488f,0.075f,28.29042f,20.88199f,0.075f,28.21011f,20.88199f,0f,28.21011f,20.74587f,0f,27.54233f,20.60976f,0f,26.87455f,20.88199f,0.075f,28.21011f,20.74587f,0.075f,27.54233f,20.60976f,0.075f,26.87455f,20.81393f,0.075f,27.87622f,20.74587f,0.0375f,27.54233f,20.81393f,0f,27.87622f,20.81393f,0.0375f,27.87622f,20.84796f,0.0375f,28.04317f,20.81393f,0.01875f,27.87622f,20.84796f,0f,28.04317f,20.84796f,0.01875f,28.04317f,20.84796f,0.075f,28.04317f,20.81393f,0.05625f,27.87622f,20.84796f,0.05625f,28.04317f,20.67782f,0.075f,27.20844f,20.67782f,0f,27.20844f,20.67782f,0.0375f,27.20844f,20.64379f,0.075f,27.0415f,20.64379f,0.0375f,27.0415f,20.67782f,0.05625f,27.20844f,20.64379f,0.05625f,27.0415f,20.64379f,0f,27.0415f,20.67782f,0.01875f,27.20844f,20.64379f,0.01875f,27.0415f});
  }
}
private class MFInt32489 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32490 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f491 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.88523f,0f,26.11267f,20.07766f,0f,26.27728f,20.88523f,0.075f,26.11267f,20.07766f,0.075f,26.27728f,20.07766f,0f,26.27728f,20.21178f,0f,26.93526f,20.07766f,0.075f,26.27728f,20.21178f,0.075f,26.93526f,20.21178f,0f,26.93526f,21.01935f,0f,26.77065f,20.21178f,0.075f,26.93526f,21.01935f,0.075f,26.77065f,21.01935f,0f,26.77065f,20.88523f,0f,26.11267f,21.01935f,0.075f,26.77065f,20.88523f,0.075f,26.11267f});
  }
}
private class MFInt32492 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32493 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f494 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.74711f,0f,25.4351f,19.93954f,0f,25.59971f,20.74711f,0.075f,25.4351f,19.93954f,0.075f,25.59971f,19.93954f,0f,25.59971f,20.07366f,0f,26.25769f,19.93954f,0.075f,25.59971f,20.07366f,0.075f,26.25769f,20.07366f,0f,26.25769f,20.88123f,0f,26.09308f,20.07366f,0.075f,26.25769f,20.88123f,0.075f,26.09308f,20.88123f,0f,26.09308f,20.74711f,0f,25.4351f,20.88123f,0.075f,26.09308f,20.74711f,0.075f,25.4351f});
  }
}
private class MFInt32495 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32496 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f497 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.47089f,0f,24.07994f,20.0769f,0f,24.16025f,20.47089f,0.075f,24.07994f,20.0769f,0.075f,24.16025f,20.0769f,0f,24.16025f,20.21302f,0f,24.82803f,20.34913f,0f,25.49581f,20.0769f,0.075f,24.16025f,20.21302f,0.075f,24.82803f,20.34913f,0.075f,25.49581f,20.14496f,0.075f,24.49414f,20.21302f,0.0375f,24.82803f,20.14496f,0f,24.49414f,20.14496f,0.0375f,24.49414f,20.11093f,0.0375f,24.3272f,20.14496f,0.01875f,24.49414f,20.11093f,0f,24.3272f,20.11093f,0.01875f,24.3272f,20.11093f,0.075f,24.3272f,20.14496f,0.05625f,24.49414f,20.11093f,0.05625f,24.3272f,20.28107f,0.075f,25.16192f,20.28107f,0f,25.16192f,20.28107f,0.0375f,25.16192f,20.3151f,0.075f,25.32887f,20.3151f,0.0375f,25.32887f,20.28107f,0.05625f,25.16192f,20.3151f,0.05625f,25.32887f,20.3151f,0f,25.32887f,20.28107f,0.01875f,25.16192f,20.3151f,0.01875f,25.32887f,20.34913f,0f,25.49581f,20.74312f,0f,25.4155f,20.34913f,0.075f,25.49581f,20.74312f,0.075f,25.4155f,20.74312f,0f,25.4155f,20.607f,0f,24.74772f,20.47089f,0f,24.07994f,20.74312f,0.075f,25.4155f,20.607f,0.075f,24.74772f,20.47089f,0.075f,24.07994f,20.67506f,0.075f,25.08161f,20.607f,0.0375f,24.74772f,20.67506f,0f,25.08161f,20.67506f,0.0375f,25.08161f,20.70909f,0.0375f,25.24856f,20.67506f,0.01875f,25.08161f,20.70909f,0f,25.24856f,20.70909f,0.01875f,25.24856f,20.70909f,0.075f,25.24856f,20.67506f,0.05625f,25.08161f,20.70909f,0.05625f,25.24856f,20.53894f,0.075f,24.41383f,20.53894f,0f,24.41383f,20.53894f,0.0375f,24.41383f,20.50492f,0.075f,24.24689f,20.50492f,0.0375f,24.24689f,20.53894f,0.05625f,24.41383f,20.50492f,0.05625f,24.24689f,20.50492f,0f,24.24689f,20.53894f,0.01875f,24.41383f,20.50492f,0.01875f,24.24689f});
  }
}
private class MFInt32498 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32499 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f500 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.0573f,0f,24.16425f,19.66331f,0f,24.24456f,20.0573f,0.075f,24.16425f,19.66331f,0.075f,24.24456f,19.66331f,0f,24.24456f,19.93555f,0f,25.58011f,19.66331f,0.075f,24.24456f,19.93555f,0.075f,25.58011f,19.93555f,0f,25.58011f,20.32954f,0f,25.4998f,19.93555f,0.075f,25.58011f,20.32954f,0.075f,25.4998f,20.32954f,0f,25.4998f,20.19342f,0f,24.83203f,20.0573f,0f,24.16425f,20.32954f,0.075f,25.4998f,20.19342f,0.075f,24.83203f,20.0573f,0.075f,24.16425f,20.26148f,0.075f,25.16591f,20.19342f,0.0375f,24.83203f,20.26148f,0f,25.16591f,20.26148f,0.0375f,25.16591f,20.29551f,0.0375f,25.33286f,20.26148f,0.01875f,25.16591f,20.29551f,0f,25.33286f,20.29551f,0.01875f,25.33286f,20.29551f,0.075f,25.33286f,20.26148f,0.05625f,25.16591f,20.29551f,0.05625f,25.33286f,20.12536f,0.075f,24.49814f,20.12536f,0f,24.49814f,20.12536f,0.0375f,24.49814f,20.09133f,0.075f,24.33119f,20.09133f,0.0375f,24.33119f,20.12536f,0.05625f,24.49814f,20.09133f,0.05625f,24.33119f,20.09133f,0f,24.33119f,20.12536f,0.01875f,24.49814f,20.09133f,0.01875f,24.33119f});
  }
}
private class MFInt32501 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32502 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f503 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.33277f,0f,23.40237f,19.5252f,0f,23.56698f,20.33277f,0.075f,23.40237f,19.5252f,0.075f,23.56698f,19.5252f,0f,23.56698f,19.65932f,0f,24.22496f,19.5252f,0.075f,23.56698f,19.65932f,0.075f,24.22496f,19.65932f,0f,24.22496f,20.46689f,0f,24.06035f,19.65932f,0.075f,24.22496f,20.46689f,0.075f,24.06035f,20.46689f,0f,24.06035f,20.33277f,0f,23.40237f,20.46689f,0.075f,24.06035f,20.33277f,0.075f,23.40237f});
  }
}
private class MFInt32504 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32505 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f506 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.19466f,0f,22.72479f,19.38709f,0f,22.8894f,20.19466f,0.075f,22.72479f,19.38709f,0.075f,22.8894f,19.38709f,0f,22.8894f,19.52121f,0f,23.54738f,19.38709f,0.075f,22.8894f,19.52121f,0.075f,23.54738f,19.52121f,0f,23.54738f,20.32878f,0f,23.38277f,19.52121f,0.075f,23.54738f,20.32878f,0.075f,23.38277f,20.32878f,0f,23.38277f,20.19466f,0f,22.72479f,20.32878f,0.075f,23.38277f,20.19466f,0.075f,22.72479f});
  }
}
private class MFInt32507 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32508 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f509 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.91843f,0f,21.36964f,19.52444f,0f,21.44995f,19.91843f,0.075f,21.36964f,19.52444f,0.075f,21.44995f,19.52444f,0f,21.44995f,19.79668f,0f,22.7855f,19.52444f,0.075f,21.44995f,19.79668f,0.075f,22.7855f,19.79668f,0f,22.7855f,20.19066f,0f,22.70519f,19.79668f,0.075f,22.7855f,20.19066f,0.075f,22.70519f,20.19066f,0f,22.70519f,19.91843f,0f,21.36964f,20.19066f,0.075f,22.70519f,19.91843f,0.075f,21.36964f});
  }
}
private class MFInt32510 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32511 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f512 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.50485f,0f,21.45394f,19.11086f,0f,21.53425f,19.50485f,0.075f,21.45394f,19.11086f,0.075f,21.53425f,19.11086f,0f,21.53425f,19.38309f,0f,22.86981f,19.11086f,0.075f,21.53425f,19.38309f,0.075f,22.86981f,19.38309f,0f,22.86981f,19.77708f,0f,22.7895f,19.38309f,0.075f,22.86981f,19.77708f,0.075f,22.7895f,19.77708f,0f,22.7895f,19.50485f,0f,21.45394f,19.77708f,0.075f,22.7895f,19.50485f,0.075f,21.45394f});
  }
}
private class MFInt32513 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32514 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f515 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.78032f,0f,20.69206f,18.97275f,0f,20.85667f,19.78032f,0.075f,20.69206f,18.97275f,0.075f,20.85667f,18.97275f,0f,20.85667f,19.10686f,0f,21.51465f,18.97275f,0.075f,20.85667f,19.10686f,0.075f,21.51465f,19.10686f,0f,21.51465f,19.91444f,0f,21.35004f,19.10686f,0.075f,21.51465f,19.91444f,0.075f,21.35004f,19.91444f,0f,21.35004f,19.78032f,0f,20.69206f,19.91444f,0.075f,21.35004f,19.78032f,0.075f,20.69206f});
  }
}
private class MFInt32516 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32517 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f518 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.6422f,0f,20.01449f,18.83463f,0f,20.1791f,19.6422f,0.075f,20.01449f,18.83463f,0.075f,20.1791f,18.83463f,0f,20.1791f,18.96875f,0f,20.83708f,18.83463f,0.075f,20.1791f,18.96875f,0.075f,20.83708f,18.96875f,0f,20.83708f,19.77632f,0f,20.67247f,18.96875f,0.075f,20.83708f,19.77632f,0.075f,20.67247f,19.77632f,0f,20.67247f,19.6422f,0f,20.01449f,19.77632f,0.075f,20.67247f,19.6422f,0.075f,20.01449f});
  }
}
private class MFInt32519 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32520 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f521 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.36597f,0f,18.65933f,18.97199f,0f,18.73964f,19.36597f,0.075f,18.65933f,18.97199f,0.075f,18.73964f,18.97199f,0f,18.73964f,19.1081f,0f,19.40742f,19.24422f,0f,20.0752f,18.97199f,0.075f,18.73964f,19.1081f,0.075f,19.40742f,19.24422f,0.075f,20.0752f,19.04005f,0.075f,19.07353f,19.1081f,0.0375f,19.40742f,19.04005f,0f,19.07353f,19.04005f,0.0375f,19.07353f,19.00602f,0.0375f,18.90659f,19.04005f,0.01875f,19.07353f,19.00602f,0f,18.90659f,19.00602f,0.01875f,18.90659f,19.00602f,0.075f,18.90659f,19.04005f,0.05625f,19.07353f,19.00602f,0.05625f,18.90659f,19.17616f,0.075f,19.74131f,19.17616f,0f,19.74131f,19.17616f,0.0375f,19.74131f,19.21019f,0.075f,19.90825f,19.21019f,0.0375f,19.90825f,19.17616f,0.05625f,19.74131f,19.21019f,0.05625f,19.90825f,19.21019f,0f,19.90825f,19.17616f,0.01875f,19.74131f,19.21019f,0.01875f,19.90825f,19.24422f,0f,20.0752f,19.63821f,0f,19.99489f,19.24422f,0.075f,20.0752f,19.63821f,0.075f,19.99489f,19.63821f,0f,19.99489f,19.36597f,0f,18.65933f,19.63821f,0.075f,19.99489f,19.36597f,0.075f,18.65933f});
  }
}
private class MFInt32522 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32523 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f524 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.95239f,0f,18.74364f,18.5584f,0f,18.82394f,18.95239f,0.075f,18.74364f,18.5584f,0.075f,18.82394f,18.5584f,0f,18.82394f,18.69452f,0f,19.49172f,18.83064f,0f,20.1595f,18.5584f,0.075f,18.82394f,18.69452f,0.075f,19.49172f,18.83064f,0.075f,20.1595f,18.62646f,0.075f,19.15783f,18.69452f,0.0375f,19.49172f,18.62646f,0f,19.15783f,18.62646f,0.0375f,19.15783f,18.59243f,0.0375f,18.99089f,18.62646f,0.01875f,19.15783f,18.59243f,0f,18.99089f,18.59243f,0.01875f,18.99089f,18.59243f,0.075f,18.99089f,18.62646f,0.05625f,19.15783f,18.59243f,0.05625f,18.99089f,18.76258f,0.075f,19.82561f,18.76258f,0f,19.82561f,18.76258f,0.0375f,19.82561f,18.79661f,0.075f,19.99256f,18.79661f,0.0375f,19.99256f,18.76258f,0.05625f,19.82561f,18.79661f,0.05625f,19.99256f,18.79661f,0f,19.99256f,18.76258f,0.01875f,19.82561f,18.79661f,0.01875f,19.99256f,18.83064f,0f,20.1595f,19.22462f,0f,20.07919f,18.83064f,0.075f,20.1595f,19.22462f,0.075f,20.07919f,19.22462f,0f,20.07919f,19.08851f,0f,19.41142f,18.95239f,0f,18.74364f,19.22462f,0.075f,20.07919f,19.08851f,0.075f,19.41142f,18.95239f,0.075f,18.74364f,19.15656f,0.075f,19.7453f,19.08851f,0.0375f,19.41142f,19.15656f,0f,19.7453f,19.15656f,0.0375f,19.7453f,19.1906f,0.0375f,19.91225f,19.15656f,0.01875f,19.7453f,19.1906f,0f,19.91225f,19.1906f,0.01875f,19.91225f,19.1906f,0.075f,19.91225f,19.15656f,0.05625f,19.7453f,19.1906f,0.05625f,19.91225f,19.02045f,0.075f,19.07753f,19.02045f,0f,19.07753f,19.02045f,0.0375f,19.07753f,18.98642f,0.075f,18.91058f,18.98642f,0.0375f,18.91058f,19.02045f,0.05625f,19.07753f,18.98642f,0.05625f,18.91058f,18.98642f,0f,18.91058f,19.02045f,0.01875f,19.07753f,18.98642f,0.01875f,18.91058f});
  }
}
private class MFInt32525 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32526 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f527 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.22786f,0f,17.98176f,18.42029f,0f,18.14637f,19.22786f,0.075f,17.98176f,18.42029f,0.075f,18.14637f,18.42029f,0f,18.14637f,18.55441f,0f,18.80435f,18.42029f,0.075f,18.14637f,18.55441f,0.075f,18.80435f,18.55441f,0f,18.80435f,19.36198f,0f,18.63974f,18.55441f,0.075f,18.80435f,19.36198f,0.075f,18.63974f,19.36198f,0f,18.63974f,19.22786f,0f,17.98176f,19.36198f,0.075f,18.63974f,19.22786f,0.075f,17.98176f});
  }
}
private class MFInt32528 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32529 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f530 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.08975f,0f,17.30418f,18.28218f,0f,17.46879f,19.08975f,0.075f,17.30418f,18.28218f,0.075f,17.46879f,18.28218f,0f,17.46879f,18.41629f,0f,18.12677f,18.28218f,0.075f,17.46879f,18.41629f,0.075f,18.12677f,18.41629f,0f,18.12677f,19.22387f,0f,17.96216f,18.41629f,0.075f,18.12677f,19.22387f,0.075f,17.96216f,19.22387f,0f,17.96216f,19.08975f,0f,17.30418f,19.22387f,0.075f,17.96216f,19.08975f,0.075f,17.30418f});
  }
}
private class MFInt32531 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32532 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f533 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.81352f,0f,15.94903f,18.61653f,0f,15.98918f,18.41953f,0f,16.02934f,18.81352f,0.075f,15.94903f,18.61653f,0.075f,15.98918f,18.41953f,0.075f,16.02934f,18.41953f,0f,16.02934f,18.55565f,0f,16.69711f,18.69176f,0f,17.36489f,18.41953f,0.075f,16.02934f,18.55565f,0.075f,16.69711f,18.69176f,0.075f,17.36489f,18.48759f,0.075f,16.36323f,18.55565f,0.0375f,16.69711f,18.48759f,0f,16.36323f,18.48759f,0.0375f,16.36323f,18.45356f,0.0375f,16.19628f,18.48759f,0.01875f,16.36323f,18.45356f,0f,16.19628f,18.45356f,0.01875f,16.19628f,18.45356f,0.075f,16.19628f,18.48759f,0.05625f,16.36323f,18.45356f,0.05625f,16.19628f,18.62371f,0.075f,17.031f,18.62371f,0f,17.031f,18.62371f,0.0375f,17.031f,18.65774f,0.075f,17.19795f,18.65774f,0.0375f,17.19795f,18.62371f,0.05625f,17.031f,18.65774f,0.05625f,17.19795f,18.65774f,0f,17.19795f,18.62371f,0.01875f,17.031f,18.65774f,0.01875f,17.19795f,18.69176f,0f,17.36489f,19.08575f,0f,17.28458f,18.69176f,0.075f,17.36489f,19.08575f,0.075f,17.28458f,19.08575f,0f,17.28458f,18.81352f,0f,15.94903f,19.08575f,0.075f,17.28458f,18.81352f,0.075f,15.94903f});
  }
}
private class MFInt32534 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32535 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f536 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.39993f,0f,16.03333f,18.00595f,0f,16.11364f,18.39993f,0.075f,16.03333f,18.00595f,0.075f,16.11364f,18.00595f,0f,16.11364f,18.14207f,0f,16.78142f,18.27818f,0f,17.44919f,18.00595f,0.075f,16.11364f,18.14207f,0.075f,16.78142f,18.27818f,0.075f,17.44919f,18.07401f,0.075f,16.44753f,18.14207f,0.0375f,16.78142f,18.07401f,0f,16.44753f,18.07401f,0.0375f,16.44753f,18.03998f,0.0375f,16.28058f,18.07401f,0.01875f,16.44753f,18.03998f,0f,16.28058f,18.03998f,0.01875f,16.28058f,18.03998f,0.075f,16.28058f,18.07401f,0.05625f,16.44753f,18.03998f,0.05625f,16.28058f,18.21012f,0.075f,17.11531f,18.21012f,0f,17.11531f,18.21012f,0.0375f,17.11531f,18.24415f,0.075f,17.28225f,18.24415f,0.0375f,17.28225f,18.21012f,0.05625f,17.11531f,18.24415f,0.05625f,17.28225f,18.24415f,0f,17.28225f,18.21012f,0.01875f,17.11531f,18.24415f,0.01875f,17.28225f,18.27818f,0f,17.44919f,18.67217f,0f,17.36889f,18.27818f,0.075f,17.44919f,18.67217f,0.075f,17.36889f,18.67217f,0f,17.36889f,18.53605f,0f,16.70111f,18.39993f,0f,16.03333f,18.67217f,0.075f,17.36889f,18.53605f,0.075f,16.70111f,18.39993f,0.075f,16.03333f,18.60411f,0.075f,17.035f,18.53605f,0.0375f,16.70111f,18.60411f,0f,17.035f,18.60411f,0.0375f,17.035f,18.63814f,0.0375f,17.20194f,18.60411f,0.01875f,17.035f,18.63814f,0f,17.20194f,18.63814f,0.01875f,17.20194f,18.63814f,0.075f,17.20194f,18.60411f,0.05625f,17.035f,18.63814f,0.05625f,17.20194f,18.46799f,0.075f,16.36722f,18.46799f,0f,16.36722f,18.46799f,0.0375f,16.36722f,18.43396f,0.075f,16.20028f,18.43396f,0.0375f,16.20028f,18.46799f,0.05625f,16.36722f,18.43396f,0.05625f,16.20028f,18.43396f,0f,16.20028f,18.46799f,0.01875f,16.36722f,18.43396f,0.01875f,16.20028f});
  }
}
private class MFInt32537 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32538 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f539 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.6754f,0f,15.27145f,17.86783f,0f,15.43606f,18.6754f,0.075f,15.27145f,17.86783f,0.075f,15.43606f,17.86783f,0f,15.43606f,18.00195f,0f,16.09404f,17.86783f,0.075f,15.43606f,18.00195f,0.075f,16.09404f,18.00195f,0f,16.09404f,18.80952f,0f,15.92943f,18.00195f,0.075f,16.09404f,18.80952f,0.075f,15.92943f,18.80952f,0f,15.92943f,18.6754f,0f,15.27145f,18.80952f,0.075f,15.92943f,18.6754f,0.075f,15.27145f});
  }
}
private class MFInt32540 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32541 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f542 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.53729f,0f,14.59387f,17.72972f,0f,14.75849f,18.53729f,0.075f,14.59387f,17.72972f,0.075f,14.75849f,17.72972f,0f,14.75849f,17.86384f,0f,15.41647f,17.72972f,0.075f,14.75849f,17.86384f,0.075f,15.41647f,17.86384f,0f,15.41647f,18.67141f,0f,15.25185f,17.86384f,0.075f,15.41647f,18.67141f,0.075f,15.25185f,18.67141f,0f,15.25185f,18.53729f,0f,14.59387f,18.67141f,0.075f,15.25185f,18.53729f,0.075f,14.59387f});
  }
}
private class MFInt32543 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32544 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f545 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.26106f,0f,13.23872f,17.86707f,0f,13.31903f,18.26106f,0.075f,13.23872f,17.86707f,0.075f,13.31903f,17.86707f,0f,13.31903f,18.13931f,0f,14.65459f,17.86707f,0.075f,13.31903f,18.13931f,0.075f,14.65459f,18.13931f,0f,14.65459f,18.3363f,0f,14.61443f,18.5333f,0f,14.57428f,18.13931f,0.075f,14.65459f,18.3363f,0.075f,14.61443f,18.5333f,0.075f,14.57428f,18.5333f,0f,14.57428f,18.26106f,0f,13.23872f,18.5333f,0.075f,14.57428f,18.26106f,0.075f,13.23872f});
  }
}
private class MFInt32546 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32547 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f548 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.84748f,0f,13.32302f,17.65049f,0f,13.36318f,17.45349f,0f,13.40333f,17.84748f,0.075f,13.32302f,17.65049f,0.075f,13.36318f,17.45349f,0.075f,13.40333f,17.45349f,0f,13.40333f,17.72573f,0f,14.73889f,17.45349f,0.075f,13.40333f,17.72573f,0.075f,14.73889f,17.72573f,0f,14.73889f,17.92272f,0f,14.69874f,18.11971f,0f,14.65858f,17.72573f,0.075f,14.73889f,17.92272f,0.075f,14.69874f,18.11971f,0.075f,14.65858f,18.11971f,0f,14.65858f,17.84748f,0f,13.32302f,18.11971f,0.075f,14.65858f,17.84748f,0.075f,13.32302f});
  }
}
private class MFInt32549 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32550 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f551 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12295f,0f,12.56115f,17.31538f,0f,12.72576f,18.12295f,0.075f,12.56115f,17.31538f,0.075f,12.72576f,17.31538f,0f,12.72576f,17.4495f,0f,13.38374f,17.31538f,0.075f,12.72576f,17.4495f,0.075f,13.38374f,17.4495f,0f,13.38374f,17.85328f,0f,13.30143f,18.25707f,0f,13.21912f,17.4495f,0.075f,13.38374f,17.85328f,0.075f,13.30143f,18.25707f,0.075f,13.21912f,17.65139f,0.075f,13.34258f,17.85328f,0.0375f,13.30143f,17.65139f,0f,13.34258f,17.65139f,0.0375f,13.34258f,18.05518f,0.075f,13.26028f,18.05518f,0f,13.26028f,18.05518f,0.0375f,13.26028f,18.25707f,0f,13.21912f,18.12295f,0f,12.56115f,18.25707f,0.075f,13.21912f,18.12295f,0.075f,12.56115f});
  }
}
private class MFInt32552 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32553 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f554 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98483f,0f,11.88357f,17.17726f,0f,12.04818f,17.98483f,0.075f,11.88357f,17.17726f,0.075f,12.04818f,17.17726f,0f,12.04818f,17.31138f,0f,12.70616f,17.17726f,0.075f,12.04818f,17.31138f,0.075f,12.70616f,17.31138f,0f,12.70616f,18.11895f,0f,12.54155f,17.31138f,0.075f,12.70616f,18.11895f,0.075f,12.54155f,18.11895f,0f,12.54155f,17.98483f,0f,11.88357f,18.11895f,0.075f,12.54155f,17.98483f,0.075f,11.88357f});
  }
}
private class MFInt32555 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32556 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f557 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.70861f,0f,10.52842f,17.31462f,0f,10.60872f,17.70861f,0.075f,10.52842f,17.31462f,0.075f,10.60872f,17.31462f,0f,10.60872f,17.58685f,0f,11.94428f,17.31462f,0.075f,10.60872f,17.58685f,0.075f,11.94428f,17.58685f,0f,11.94428f,17.78385f,0f,11.90413f,17.98084f,0f,11.86397f,17.58685f,0.075f,11.94428f,17.78385f,0.075f,11.90413f,17.98084f,0.075f,11.86397f,17.98084f,0f,11.86397f,17.70861f,0f,10.52842f,17.98084f,0.075f,11.86397f,17.70861f,0.075f,10.52842f});
  }
}
private class MFInt32558 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32559 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f560 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.29502f,0f,10.61272f,17.09803f,0f,10.65287f,16.90104f,0f,10.69303f,17.29502f,0.075f,10.61272f,17.09803f,0.075f,10.65287f,16.90104f,0.075f,10.69303f,16.90104f,0f,10.69303f,17.17327f,0f,12.02858f,16.90104f,0.075f,10.69303f,17.17327f,0.075f,12.02858f,17.17327f,0f,12.02858f,17.56726f,0f,11.94827f,17.17327f,0.075f,12.02858f,17.56726f,0.075f,11.94827f,17.56726f,0f,11.94827f,17.29502f,0f,10.61272f,17.56726f,0.075f,11.94827f,17.29502f,0.075f,10.61272f});
  }
}
private class MFInt32561 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32562 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f563 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.57049f,0f,9.85084f,16.76292f,0f,10.01545f,17.57049f,0.075f,9.85084f,16.76292f,0.075f,10.01545f,16.76292f,0f,10.01545f,16.89704f,0f,10.67343f,16.76292f,0.075f,10.01545f,16.89704f,0.075f,10.67343f,16.89704f,0f,10.67343f,17.30083f,0f,10.59112f,17.70461f,0f,10.50882f,16.89704f,0.075f,10.67343f,17.30083f,0.075f,10.59112f,17.70461f,0.075f,10.50882f,17.09893f,0.075f,10.63228f,17.30083f,0.0375f,10.59112f,17.09893f,0f,10.63228f,17.09893f,0.0375f,10.63228f,17.50272f,0.075f,10.54997f,17.50272f,0f,10.54997f,17.50272f,0.0375f,10.54997f,17.70461f,0f,10.50882f,17.57049f,0f,9.85084f,17.70461f,0.075f,10.50882f,17.57049f,0.075f,9.85084f});
  }
}
private class MFInt32564 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32565 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f566 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.43238f,0f,9.173264f,16.62481f,0f,9.337874f,17.43238f,0.075f,9.173264f,16.62481f,0.075f,9.337874f,16.62481f,0f,9.337874f,16.75893f,0f,9.995854f,16.62481f,0.075f,9.337874f,16.75893f,0.075f,9.995854f,16.75893f,0f,9.995854f,17.16271f,0f,9.913548f,17.5665f,0f,9.831243f,16.75893f,0.075f,9.995854f,17.16271f,0.075f,9.913548f,17.5665f,0.075f,9.831243f,16.96082f,0.075f,9.954701f,17.16271f,0.0375f,9.913548f,16.96082f,0f,9.954701f,16.96082f,0.0375f,9.954701f,17.3646f,0.075f,9.872396f,17.3646f,0f,9.872396f,17.3646f,0.0375f,9.872396f,17.5665f,0f,9.831243f,17.43238f,0f,9.173264f,17.5665f,0.075f,9.831243f,17.43238f,0.075f,9.173264f});
  }
}
private class MFInt32567 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFInt32568 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFVec3f569 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.15615f,0f,7.81811f,16.95916f,0f,7.858264f,16.76216f,0f,7.898419f,17.15615f,0.075f,7.81811f,16.95916f,0.075f,7.858264f,16.76216f,0.075f,7.898419f,16.76216f,0f,7.898419f,16.89828f,0f,8.566196f,17.0344f,0f,9.233974f,16.76216f,0.075f,7.898419f,16.89828f,0.075f,8.566196f,17.0344f,0.075f,9.233974f,16.83022f,0.075f,8.232307f,16.89828f,0.0375f,8.566196f,16.83022f,0f,8.232307f,16.83022f,0.0375f,8.232307f,16.79619f,0.0375f,8.065363f,16.83022f,0.01875f,8.232307f,16.79619f,0f,8.065363f,16.79619f,0.01875f,8.065363f,16.79619f,0.075f,8.065363f,16.83022f,0.05625f,8.232307f,16.79619f,0.05625f,8.065363f,16.96634f,0.075f,8.900085f,16.96634f,0f,8.900085f,16.96634f,0.0375f,8.900085f,17.00037f,0.075f,9.06703f,17.00037f,0.0375f,9.06703f,16.96634f,0.05625f,8.900085f,17.00037f,0.05625f,9.06703f,17.00037f,0f,9.06703f,16.96634f,0.01875f,8.900085f,17.00037f,0.01875f,9.06703f,17.0344f,0f,9.233974f,17.23139f,0f,9.193821f,17.42838f,0f,9.153666f,17.0344f,0.075f,9.233974f,17.23139f,0.075f,9.193821f,17.42838f,0.075f,9.153666f,17.42838f,0f,9.153666f,17.29227f,0f,8.485888f,17.15615f,0f,7.81811f,17.42838f,0.075f,9.153666f,17.29227f,0.075f,8.485888f,17.15615f,0.075f,7.81811f,17.36032f,0.075f,8.819777f,17.29227f,0.0375f,8.485888f,17.36032f,0f,8.819777f,17.36032f,0.0375f,8.819777f,17.39435f,0.0375f,8.986722f,17.36032f,0.01875f,8.819777f,17.39435f,0f,8.986722f,17.39435f,0.01875f,8.986722f,17.39435f,0.075f,8.986722f,17.36032f,0.05625f,8.819777f,17.39435f,0.05625f,8.986722f,17.22421f,0.075f,8.151999f,17.22421f,0f,8.151999f,17.22421f,0.0375f,8.151999f,17.19018f,0.075f,7.985055f,17.19018f,0.0375f,7.985055f,17.22421f,0.05625f,8.151999f,17.19018f,0.05625f,7.985055f,17.19018f,0f,7.985055f,17.22421f,0.01875f,8.151999f,17.19018f,0.01875f,7.985055f});
  }
}
private class MFInt32570 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt32571 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f572 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.74257f,0f,7.902413f,16.34858f,0f,7.982722f,16.74257f,0.075f,7.902413f,16.34858f,0.075f,7.982722f,16.34858f,0f,7.982722f,16.62081f,0f,9.318277f,16.34858f,0.075f,7.982722f,16.62081f,0.075f,9.318277f,16.62081f,0f,9.318277f,16.81781f,0f,9.278124f,17.0148f,0f,9.237969f,16.62081f,0.075f,9.318277f,16.81781f,0.075f,9.278124f,17.0148f,0.075f,9.237969f,17.0148f,0f,9.237969f,16.87868f,0f,8.570191f,16.74257f,0f,7.902413f,17.0148f,0.075f,9.237969f,16.87868f,0.075f,8.570191f,16.74257f,0.075f,7.902413f,16.94674f,0.075f,8.90408f,16.87868f,0.0375f,8.570191f,16.94674f,0f,8.90408f,16.94674f,0.0375f,8.90408f,16.98077f,0.0375f,9.071025f,16.94674f,0.01875f,8.90408f,16.98077f,0f,9.071025f,16.98077f,0.01875f,9.071025f,16.98077f,0.075f,9.071025f,16.94674f,0.05625f,8.90408f,16.98077f,0.05625f,9.071025f,16.81063f,0.075f,8.236302f,16.81063f,0f,8.236302f,16.81063f,0.0375f,8.236302f,16.7766f,0.075f,8.069358f,16.7766f,0.0375f,8.069358f,16.81063f,0.05625f,8.236302f,16.7766f,0.05625f,8.069358f,16.7766f,0f,8.069358f,16.81063f,0.01875f,8.236302f,16.7766f,0.01875f,8.069358f});
  }
}
private class MFInt32573 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32574 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f575 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.01804f,0f,7.140534f,16.21047f,0f,7.305145f,17.01804f,0.075f,7.140534f,16.21047f,0.075f,7.305145f,16.21047f,0f,7.305145f,16.34459f,0f,7.963125f,16.21047f,0.075f,7.305145f,16.34459f,0.075f,7.963125f,16.34459f,0f,7.963125f,16.74837f,0f,7.880819f,17.15216f,0f,7.798513f,16.34459f,0.075f,7.963125f,16.74837f,0.075f,7.880819f,17.15216f,0.075f,7.798513f,16.54648f,0.075f,7.921972f,16.74837f,0.0375f,7.880819f,16.54648f,0f,7.921972f,16.54648f,0.0375f,7.921972f,16.95026f,0.075f,7.839666f,16.95026f,0f,7.839666f,16.95026f,0.0375f,7.839666f,17.15216f,0f,7.798513f,17.01804f,0f,7.140534f,17.15216f,0.075f,7.798513f,17.01804f,0.075f,7.140534f});
  }
}
private class MFInt32576 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32577 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f578 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.87992f,0f,6.462957f,16.47614f,0f,6.545263f,16.07235f,0f,6.627569f,16.87992f,0.075f,6.462957f,16.47614f,0.075f,6.545263f,16.07235f,0.075f,6.627569f,16.27424f,0.075f,6.586416f,16.27424f,0f,6.586416f,16.47614f,0.0375f,6.545263f,16.27424f,0.0375f,6.586416f,16.67803f,0.075f,6.50411f,16.67803f,0f,6.50411f,16.67803f,0.0375f,6.50411f,16.07235f,0f,6.627569f,16.20647f,0f,7.285548f,16.07235f,0.075f,6.627569f,16.20647f,0.075f,7.285548f,16.20647f,0f,7.285548f,17.01404f,0f,7.120937f,16.20647f,0.075f,7.285548f,17.01404f,0.075f,7.120937f,17.01404f,0f,7.120937f,16.87992f,0f,6.462957f,17.01404f,0.075f,7.120937f,16.87992f,0.075f,6.462957f});
  }
}
private class MFInt32579 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32580 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f581 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.60369f,0f,5.107805f,16.20971f,0f,5.188113f,16.60369f,0.075f,5.107805f,16.20971f,0.075f,5.188113f,16.20971f,0f,5.188113f,16.48194f,0f,6.523669f,16.20971f,0.075f,5.188113f,16.48194f,0.075f,6.523669f,16.48194f,0f,6.523669f,16.87593f,0f,6.44336f,16.48194f,0.075f,6.523669f,16.87593f,0.075f,6.44336f,16.87593f,0f,6.44336f,16.60369f,0f,5.107805f,16.87593f,0.075f,6.44336f,16.60369f,0.075f,5.107805f});
  }
}
private class MFInt32582 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32583 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f584 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.19011f,0f,5.192108f,15.79612f,0f,5.272416f,16.19011f,0.075f,5.192108f,15.79612f,0.075f,5.272416f,15.79612f,0f,5.272416f,15.93224f,0f,5.940194f,16.06836f,0f,6.607972f,15.79612f,0.075f,5.272416f,15.93224f,0.075f,5.940194f,16.06836f,0.075f,6.607972f,15.86418f,0.075f,5.606305f,15.93224f,0.0375f,5.940194f,15.86418f,0f,5.606305f,15.86418f,0.0375f,5.606305f,15.83015f,0.0375f,5.439361f,15.86418f,0.01875f,5.606305f,15.83015f,0f,5.439361f,15.83015f,0.01875f,5.439361f,15.83015f,0.075f,5.439361f,15.86418f,0.05625f,5.606305f,15.83015f,0.05625f,5.439361f,16.0003f,0.075f,6.274083f,16.0003f,0f,6.274083f,16.0003f,0.0375f,6.274083f,16.03433f,0.075f,6.441028f,16.03433f,0.0375f,6.441028f,16.0003f,0.05625f,6.274083f,16.03433f,0.05625f,6.441028f,16.03433f,0f,6.441028f,16.0003f,0.01875f,6.274083f,16.03433f,0.01875f,6.441028f,16.06836f,0f,6.607972f,16.26535f,0f,6.567818f,16.46234f,0f,6.527664f,16.06836f,0.075f,6.607972f,16.26535f,0.075f,6.567818f,16.46234f,0.075f,6.527664f,16.46234f,0f,6.527664f,16.19011f,0f,5.192108f,16.46234f,0.075f,6.527664f,16.19011f,0.075f,5.192108f});
  }
}
private class MFInt32585 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32586 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f587 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.46558f,0f,4.430228f,15.65801f,0f,4.59484f,16.46558f,0.075f,4.430228f,15.65801f,0.075f,4.59484f,15.65801f,0f,4.59484f,15.79213f,0f,5.252819f,15.65801f,0.075f,4.59484f,15.79213f,0.075f,5.252819f,15.79213f,0f,5.252819f,16.5997f,0f,5.088208f,15.79213f,0.075f,5.252819f,16.5997f,0.075f,5.088208f,16.5997f,0f,5.088208f,16.46558f,0f,4.430228f,16.5997f,0.075f,5.088208f,16.46558f,0.075f,4.430228f});
  }
}
private class MFInt32588 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32589 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f590 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.32747f,0f,3.752652f,15.5199f,0f,3.917263f,16.32747f,0.075f,3.752652f,15.5199f,0.075f,3.917263f,15.5199f,0f,3.917263f,15.65402f,0f,4.575243f,15.5199f,0.075f,3.917263f,15.65402f,0.075f,4.575243f,15.65402f,0f,4.575243f,16.46159f,0f,4.410631f,15.65402f,0.075f,4.575243f,16.46159f,0.075f,4.410631f,16.46159f,0f,4.410631f,16.32747f,0f,3.752652f,16.46159f,0.075f,4.410631f,16.32747f,0.075f,3.752652f});
  }
}
private class MFInt32591 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32592 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f593 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.05124f,0f,2.397499f,15.65725f,0f,2.477808f,16.05124f,0.075f,2.397499f,15.65725f,0.075f,2.477808f,15.65725f,0f,2.477808f,15.92949f,0f,3.813363f,15.65725f,0.075f,2.477808f,15.92949f,0.075f,3.813363f,15.92949f,0f,3.813363f,16.32347f,0f,3.733055f,15.92949f,0.075f,3.813363f,16.32347f,0.075f,3.733055f,16.32347f,0f,3.733055f,16.05124f,0f,2.397499f,16.32347f,0.075f,3.733055f,16.05124f,0.075f,2.397499f});
  }
}
private class MFInt32594 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32595 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f596 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.63765f,0f,2.481802f,15.24367f,0f,2.56211f,15.63765f,0.075f,2.481802f,15.24367f,0.075f,2.56211f,15.24367f,0f,2.56211f,15.5159f,0f,3.897666f,15.24367f,0.075f,2.56211f,15.5159f,0.075f,3.897666f,15.5159f,0f,3.897666f,15.90989f,0f,3.817358f,15.5159f,0.075f,3.897666f,15.90989f,0.075f,3.817358f,15.90989f,0f,3.817358f,15.63765f,0f,2.481802f,15.90989f,0.075f,3.817358f,15.63765f,0.075f,2.481802f});
  }
}
private class MFInt32597 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32598 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f599 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.4724f,0f,28.31401f,20.07841f,0f,28.39432f,20.4724f,0.075f,28.31401f,20.07841f,0.075f,28.39432f,20.07841f,0f,28.39432f,20.35065f,0f,29.72987f,20.07841f,0.075f,28.39432f,20.35065f,0.075f,29.72987f,20.35065f,0f,29.72987f,20.74464f,0f,29.64956f,20.35065f,0.075f,29.72987f,20.74464f,0.075f,29.64956f,20.74464f,0f,29.64956f,20.4724f,0f,28.31401f,20.74464f,0.075f,29.64956f,20.4724f,0.075f,28.31401f});
  }
}
private class MFInt32600 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32601 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f602 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.91995f,0f,25.6037f,19.52596f,0f,25.68401f,19.91995f,0.075f,25.6037f,19.52596f,0.075f,25.68401f,19.52596f,0f,25.68401f,19.79819f,0f,27.01957f,19.52596f,0.075f,25.68401f,19.79819f,0.075f,27.01957f,19.79819f,0f,27.01957f,20.19218f,0f,26.93926f,19.79819f,0.075f,27.01957f,20.19218f,0.075f,26.93926f,20.19218f,0f,26.93926f,19.91995f,0f,25.6037f,20.19218f,0.075f,26.93926f,19.91995f,0.075f,25.6037f});
  }
}
private class MFInt32603 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32604 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f605 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.78183f,0f,24.92613f,18.97426f,0f,25.09074f,19.78183f,0.075f,24.92613f,18.97426f,0.075f,25.09074f,18.97426f,0f,25.09074f,19.10838f,0f,25.74872f,18.97426f,0.075f,25.09074f,19.10838f,0.075f,25.74872f,19.10838f,0f,25.74872f,19.91595f,0f,25.58411f,19.10838f,0.075f,25.74872f,19.91595f,0.075f,25.58411f,19.91595f,0f,25.58411f,19.78183f,0f,24.92613f,19.91595f,0.075f,25.58411f,19.78183f,0.075f,24.92613f});
  }
}
private class MFInt32606 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32607 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f608 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.64372f,0f,24.24855f,18.83615f,0f,24.41316f,19.64372f,0.075f,24.24855f,18.83615f,0.075f,24.41316f,18.83615f,0f,24.41316f,18.97027f,0f,25.07114f,18.83615f,0.075f,24.41316f,18.97027f,0.075f,25.07114f,18.97027f,0f,25.07114f,19.77784f,0f,24.90653f,18.97027f,0.075f,25.07114f,19.77784f,0.075f,24.90653f,19.77784f,0f,24.90653f,19.64372f,0f,24.24855f,19.77784f,0.075f,24.90653f,19.64372f,0.075f,24.24855f});
  }
}
private class MFInt32609 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32610 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f611 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.36749f,0f,22.8934f,18.9735f,0f,22.97371f,19.36749f,0.075f,22.8934f,18.9735f,0.075f,22.97371f,18.9735f,0f,22.97371f,19.10962f,0f,23.64149f,19.24574f,0f,24.30926f,18.9735f,0.075f,22.97371f,19.10962f,0.075f,23.64149f,19.24574f,0.075f,24.30926f,19.04156f,0.075f,23.3076f,19.10962f,0.0375f,23.64149f,19.04156f,0f,23.3076f,19.04156f,0.0375f,23.3076f,19.00753f,0.0375f,23.14065f,19.04156f,0.01875f,23.3076f,19.00753f,0f,23.14065f,19.00753f,0.01875f,23.14065f,19.00753f,0.075f,23.14065f,19.04156f,0.05625f,23.3076f,19.00753f,0.05625f,23.14065f,19.17768f,0.075f,23.97537f,19.17768f,0f,23.97537f,19.17768f,0.0375f,23.97537f,19.21171f,0.075f,24.14232f,19.21171f,0.0375f,24.14232f,19.17768f,0.05625f,23.97537f,19.21171f,0.05625f,24.14232f,19.21171f,0f,24.14232f,19.17768f,0.01875f,23.97537f,19.21171f,0.01875f,24.14232f,19.24574f,0f,24.30926f,19.63972f,0f,24.22895f,19.24574f,0.075f,24.30926f,19.63972f,0.075f,24.22895f,19.63972f,0f,24.22895f,19.36749f,0f,22.8934f,19.63972f,0.075f,24.22895f,19.36749f,0.075f,22.8934f});
  }
}
private class MFInt32612 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32613 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f614 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.95391f,0f,22.9777f,18.55992f,0f,23.05801f,18.95391f,0.075f,22.9777f,18.55992f,0.075f,23.05801f,18.55992f,0f,23.05801f,18.69604f,0f,23.72579f,18.83215f,0f,24.39357f,18.55992f,0.075f,23.05801f,18.69604f,0.075f,23.72579f,18.83215f,0.075f,24.39357f,18.62798f,0.075f,23.3919f,18.69604f,0.0375f,23.72579f,18.62798f,0f,23.3919f,18.62798f,0.0375f,23.3919f,18.59395f,0.0375f,23.22495f,18.62798f,0.01875f,23.3919f,18.59395f,0f,23.22495f,18.59395f,0.01875f,23.22495f,18.59395f,0.075f,23.22495f,18.62798f,0.05625f,23.3919f,18.59395f,0.05625f,23.22495f,18.7641f,0.075f,24.05968f,18.7641f,0f,24.05968f,18.7641f,0.0375f,24.05968f,18.79812f,0.075f,24.22662f,18.79812f,0.0375f,24.22662f,18.7641f,0.05625f,24.05968f,18.79812f,0.05625f,24.22662f,18.79812f,0f,24.22662f,18.7641f,0.01875f,24.05968f,18.79812f,0.01875f,24.22662f,18.83215f,0f,24.39357f,19.22614f,0f,24.31326f,18.83215f,0.075f,24.39357f,19.22614f,0.075f,24.31326f,19.22614f,0f,24.31326f,19.09002f,0f,23.64548f,18.95391f,0f,22.9777f,19.22614f,0.075f,24.31326f,19.09002f,0.075f,23.64548f,18.95391f,0.075f,22.9777f,19.15808f,0.075f,23.97937f,19.09002f,0.0375f,23.64548f,19.15808f,0f,23.97937f,19.15808f,0.0375f,23.97937f,19.19211f,0.0375f,24.14631f,19.15808f,0.01875f,23.97937f,19.19211f,0f,24.14631f,19.19211f,0.01875f,24.14631f,19.19211f,0.075f,24.14631f,19.15808f,0.05625f,23.97937f,19.19211f,0.05625f,24.14631f,19.02197f,0.075f,23.31159f,19.02197f,0f,23.31159f,19.02197f,0.0375f,23.31159f,18.98794f,0.075f,23.14465f,18.98794f,0.0375f,23.14465f,19.02197f,0.05625f,23.31159f,18.98794f,0.05625f,23.14465f,18.98794f,0f,23.14465f,19.02197f,0.01875f,23.31159f,18.98794f,0.01875f,23.14465f});
  }
}
private class MFInt32615 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32616 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f617 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.22938f,0f,22.21582f,18.42181f,0f,22.38043f,19.22938f,0.075f,22.21582f,18.42181f,0.075f,22.38043f,18.42181f,0f,22.38043f,18.55593f,0f,23.03841f,18.42181f,0.075f,22.38043f,18.55593f,0.075f,23.03841f,18.55593f,0f,23.03841f,19.3635f,0f,22.8738f,18.55593f,0.075f,23.03841f,19.3635f,0.075f,22.8738f,19.3635f,0f,22.8738f,19.22938f,0f,22.21582f,19.3635f,0.075f,22.8738f,19.22938f,0.075f,22.21582f});
  }
}
private class MFInt32618 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32619 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f620 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.09126f,0f,21.53824f,18.28369f,0f,21.70286f,19.09126f,0.075f,21.53824f,18.28369f,0.075f,21.70286f,18.28369f,0f,21.70286f,18.41781f,0f,22.36084f,18.28369f,0.075f,21.70286f,18.41781f,0.075f,22.36084f,18.41781f,0f,22.36084f,19.22538f,0f,22.19622f,18.41781f,0.075f,22.36084f,19.22538f,0.075f,22.19622f,19.22538f,0f,22.19622f,19.09126f,0f,21.53824f,19.22538f,0.075f,22.19622f,19.09126f,0.075f,21.53824f});
  }
}
private class MFInt32621 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32622 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f623 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.81503f,0f,20.18309f,18.42105f,0f,20.2634f,18.81503f,0.075f,20.18309f,18.42105f,0.075f,20.2634f,18.42105f,0f,20.2634f,18.55717f,0f,20.93118f,18.69328f,0f,21.59896f,18.42105f,0.075f,20.2634f,18.55717f,0.075f,20.93118f,18.69328f,0.075f,21.59896f,18.48911f,0.075f,20.59729f,18.55717f,0.0375f,20.93118f,18.48911f,0f,20.59729f,18.48911f,0.0375f,20.59729f,18.45508f,0.0375f,20.43035f,18.48911f,0.01875f,20.59729f,18.45508f,0f,20.43035f,18.45508f,0.01875f,20.43035f,18.45508f,0.075f,20.43035f,18.48911f,0.05625f,20.59729f,18.45508f,0.05625f,20.43035f,18.62522f,0.075f,21.26507f,18.62522f,0f,21.26507f,18.62522f,0.0375f,21.26507f,18.65925f,0.075f,21.43201f,18.65925f,0.0375f,21.43201f,18.62522f,0.05625f,21.26507f,18.65925f,0.05625f,21.43201f,18.65925f,0f,21.43201f,18.62522f,0.01875f,21.26507f,18.65925f,0.01875f,21.43201f,18.69328f,0f,21.59896f,19.08727f,0f,21.51865f,18.69328f,0.075f,21.59896f,19.08727f,0.075f,21.51865f,19.08727f,0f,21.51865f,18.95115f,0f,20.85087f,18.81503f,0f,20.18309f,19.08727f,0.075f,21.51865f,18.95115f,0.075f,20.85087f,18.81503f,0.075f,20.18309f,19.01921f,0.075f,21.18476f,18.95115f,0.0375f,20.85087f,19.01921f,0f,21.18476f,19.01921f,0.0375f,21.18476f,19.05324f,0.0375f,21.3517f,19.01921f,0.01875f,21.18476f,19.05324f,0f,21.3517f,19.05324f,0.01875f,21.3517f,19.05324f,0.075f,21.3517f,19.01921f,0.05625f,21.18476f,19.05324f,0.05625f,21.3517f,18.88309f,0.075f,20.51698f,18.88309f,0f,20.51698f,18.88309f,0.0375f,20.51698f,18.84906f,0.075f,20.35004f,18.84906f,0.0375f,20.35004f,18.88309f,0.05625f,20.51698f,18.84906f,0.05625f,20.35004f,18.84906f,0f,20.35004f,18.88309f,0.01875f,20.51698f,18.84906f,0.01875f,20.35004f});
  }
}
private class MFInt32624 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32625 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f626 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.40145f,0f,20.2674f,18.00746f,0f,20.3477f,18.40145f,0.075f,20.2674f,18.00746f,0.075f,20.3477f,18.00746f,0f,20.3477f,18.14358f,0f,21.01548f,18.2797f,0f,21.68326f,18.00746f,0.075f,20.3477f,18.14358f,0.075f,21.01548f,18.2797f,0.075f,21.68326f,18.07552f,0.075f,20.68159f,18.14358f,0.0375f,21.01548f,18.07552f,0f,20.68159f,18.07552f,0.0375f,20.68159f,18.04149f,0.0375f,20.51465f,18.07552f,0.01875f,20.68159f,18.04149f,0f,20.51465f,18.04149f,0.01875f,20.51465f,18.04149f,0.075f,20.51465f,18.07552f,0.05625f,20.68159f,18.04149f,0.05625f,20.51465f,18.21164f,0.075f,21.34937f,18.21164f,0f,21.34937f,18.21164f,0.0375f,21.34937f,18.24567f,0.075f,21.51632f,18.24567f,0.0375f,21.51632f,18.21164f,0.05625f,21.34937f,18.24567f,0.05625f,21.51632f,18.24567f,0f,21.51632f,18.21164f,0.01875f,21.34937f,18.24567f,0.01875f,21.51632f,18.2797f,0f,21.68326f,18.67368f,0f,21.60295f,18.2797f,0.075f,21.68326f,18.67368f,0.075f,21.60295f,18.67368f,0f,21.60295f,18.53757f,0f,20.93517f,18.40145f,0f,20.2674f,18.67368f,0.075f,21.60295f,18.53757f,0.075f,20.93517f,18.40145f,0.075f,20.2674f,18.60563f,0.075f,21.26906f,18.53757f,0.0375f,20.93517f,18.60563f,0f,21.26906f,18.60563f,0.0375f,21.26906f,18.63965f,0.0375f,21.43601f,18.60563f,0.01875f,21.26906f,18.63965f,0f,21.43601f,18.63965f,0.01875f,21.43601f,18.63965f,0.075f,21.43601f,18.60563f,0.05625f,21.26906f,18.63965f,0.05625f,21.43601f,18.46951f,0.075f,20.60128f,18.46951f,0f,20.60128f,18.46951f,0.0375f,20.60128f,18.43548f,0.075f,20.43434f,18.43548f,0.0375f,20.43434f,18.46951f,0.05625f,20.60128f,18.43548f,0.05625f,20.43434f,18.43548f,0f,20.43434f,18.46951f,0.01875f,20.60128f,18.43548f,0.01875f,20.43434f});
  }
}
private class MFInt32627 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32628 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f629 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.67692f,0f,19.50552f,17.86935f,0f,19.67013f,18.67692f,0.075f,19.50552f,17.86935f,0.075f,19.67013f,17.86935f,0f,19.67013f,18.00347f,0f,20.32811f,17.86935f,0.075f,19.67013f,18.00347f,0.075f,20.32811f,18.00347f,0f,20.32811f,18.81104f,0f,20.1635f,18.00347f,0.075f,20.32811f,18.81104f,0.075f,20.1635f,18.81104f,0f,20.1635f,18.67692f,0f,19.50552f,18.81104f,0.075f,20.1635f,18.67692f,0.075f,19.50552f});
  }
}
private class MFInt32630 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32631 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f632 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.53881f,0f,18.82794f,17.73124f,0f,18.99255f,18.53881f,0.075f,18.82794f,17.73124f,0.075f,18.99255f,17.73124f,0f,18.99255f,17.86535f,0f,19.65053f,17.73124f,0.075f,18.99255f,17.86535f,0.075f,19.65053f,17.86535f,0f,19.65053f,18.67293f,0f,19.48592f,17.86535f,0.075f,19.65053f,18.67293f,0.075f,19.48592f,18.67293f,0f,19.48592f,18.53881f,0f,18.82794f,18.67293f,0.075f,19.48592f,18.53881f,0.075f,18.82794f});
  }
}
private class MFInt32633 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32634 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f635 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.26258f,0f,17.47279f,17.86859f,0f,17.55309f,18.26258f,0.075f,17.47279f,17.86859f,0.075f,17.55309f,17.86859f,0f,17.55309f,18.14083f,0f,18.88865f,17.86859f,0.075f,17.55309f,18.14083f,0.075f,18.88865f,18.14083f,0f,18.88865f,18.53481f,0f,18.80834f,18.14083f,0.075f,18.88865f,18.53481f,0.075f,18.80834f,18.53481f,0f,18.80834f,18.26258f,0f,17.47279f,18.53481f,0.075f,18.80834f,18.26258f,0.075f,17.47279f});
  }
}
private class MFInt32636 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32637 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f638 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.849f,0f,17.55709f,17.45501f,0f,17.6374f,17.849f,0.075f,17.55709f,17.45501f,0.075f,17.6374f,17.45501f,0f,17.6374f,17.72724f,0f,18.97295f,17.45501f,0.075f,17.6374f,17.72724f,0.075f,18.97295f,17.72724f,0f,18.97295f,18.12123f,0f,18.89264f,17.72724f,0.075f,18.97295f,18.12123f,0.075f,18.89264f,18.12123f,0f,18.89264f,17.849f,0f,17.55709f,18.12123f,0.075f,18.89264f,17.849f,0.075f,17.55709f});
  }
}
private class MFInt32639 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32640 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f641 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12446f,0f,16.79521f,17.31689f,0f,16.95982f,18.12446f,0.075f,16.79521f,17.31689f,0.075f,16.95982f,17.31689f,0f,16.95982f,17.45101f,0f,17.6178f,17.31689f,0.075f,16.95982f,17.45101f,0.075f,17.6178f,17.45101f,0f,17.6178f,18.25858f,0f,17.45319f,17.45101f,0.075f,17.6178f,18.25858f,0.075f,17.45319f,18.25858f,0f,17.45319f,18.12446f,0f,16.79521f,18.25858f,0.075f,17.45319f,18.12446f,0.075f,16.79521f});
  }
}
private class MFInt32642 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32643 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f644 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98635f,0f,16.11763f,17.17878f,0f,16.28225f,17.98635f,0.075f,16.11763f,17.17878f,0.075f,16.28225f,17.17878f,0f,16.28225f,17.3129f,0f,16.94022f,17.17878f,0.075f,16.28225f,17.3129f,0.075f,16.94022f,17.3129f,0f,16.94022f,18.12047f,0f,16.77561f,17.3129f,0.075f,16.94022f,18.12047f,0.075f,16.77561f,18.12047f,0f,16.77561f,17.98635f,0f,16.11763f,18.12047f,0.075f,16.77561f,17.98635f,0.075f,16.11763f});
  }
}
private class MFInt32645 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32646 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f647 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.71012f,0f,14.76248f,17.51313f,0f,14.80264f,17.31614f,0f,14.84279f,17.71012f,0.075f,14.76248f,17.51313f,0.075f,14.80264f,17.31614f,0.075f,14.84279f,17.31614f,0f,14.84279f,17.58837f,0f,16.17834f,17.31614f,0.075f,14.84279f,17.58837f,0.075f,16.17834f,17.58837f,0f,16.17834f,17.98236f,0f,16.09804f,17.58837f,0.075f,16.17834f,17.98236f,0.075f,16.09804f,17.98236f,0f,16.09804f,17.71012f,0f,14.76248f,17.98236f,0.075f,16.09804f,17.71012f,0.075f,14.76248f});
  }
}
private class MFInt32648 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32649 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f650 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.29654f,0f,14.84678f,16.90255f,0f,14.92709f,17.29654f,0.075f,14.84678f,16.90255f,0.075f,14.92709f,16.90255f,0f,14.92709f,17.17479f,0f,16.26265f,16.90255f,0.075f,14.92709f,17.17479f,0.075f,16.26265f,17.17479f,0f,16.26265f,17.56877f,0f,16.18234f,17.17479f,0.075f,16.26265f,17.56877f,0.075f,16.18234f,17.56877f,0f,16.18234f,17.43266f,0f,15.51456f,17.29654f,0f,14.84678f,17.56877f,0.075f,16.18234f,17.43266f,0.075f,15.51456f,17.29654f,0.075f,14.84678f,17.50071f,0.075f,15.84845f,17.43266f,0.0375f,15.51456f,17.50071f,0f,15.84845f,17.50071f,0.0375f,15.84845f,17.53474f,0.0375f,16.01539f,17.50071f,0.01875f,15.84845f,17.53474f,0f,16.01539f,17.53474f,0.01875f,16.01539f,17.53474f,0.075f,16.01539f,17.50071f,0.05625f,15.84845f,17.53474f,0.05625f,16.01539f,17.3646f,0.075f,15.18067f,17.3646f,0f,15.18067f,17.3646f,0.0375f,15.18067f,17.33057f,0.075f,15.01373f,17.33057f,0.0375f,15.01373f,17.3646f,0.05625f,15.18067f,17.33057f,0.05625f,15.01373f,17.33057f,0f,15.01373f,17.3646f,0.01875f,15.18067f,17.33057f,0.01875f,15.01373f});
  }
}
private class MFInt32651 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32652 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f653 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.57201f,0f,14.0849f,16.76444f,0f,14.24952f,17.57201f,0.075f,14.0849f,16.76444f,0.075f,14.24952f,16.76444f,0f,14.24952f,16.89856f,0f,14.9075f,16.76444f,0.075f,14.24952f,16.89856f,0.075f,14.9075f,16.89856f,0f,14.9075f,17.30234f,0f,14.82519f,17.70613f,0f,14.74288f,16.89856f,0.075f,14.9075f,17.30234f,0.075f,14.82519f,17.70613f,0.075f,14.74288f,17.10045f,0.075f,14.86634f,17.30234f,0.0375f,14.82519f,17.10045f,0f,14.86634f,17.10045f,0.0375f,14.86634f,17.50424f,0.075f,14.78404f,17.50424f,0f,14.78404f,17.50424f,0.0375f,14.78404f,17.70613f,0f,14.74288f,17.57201f,0f,14.0849f,17.70613f,0.075f,14.74288f,17.57201f,0.075f,14.0849f});
  }
}
private class MFInt32654 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32655 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f656 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.4339f,0f,13.40733f,16.62632f,0f,13.57194f,17.4339f,0.075f,13.40733f,16.62632f,0.075f,13.57194f,16.62632f,0f,13.57194f,16.76044f,0f,14.22992f,16.62632f,0.075f,13.57194f,16.76044f,0.075f,14.22992f,16.76044f,0f,14.22992f,17.16423f,0f,14.14761f,17.56801f,0f,14.06531f,16.76044f,0.075f,14.22992f,17.16423f,0.075f,14.14761f,17.56801f,0.075f,14.06531f,16.96234f,0.075f,14.18877f,17.16423f,0.0375f,14.14761f,16.96234f,0f,14.18877f,16.96234f,0.0375f,14.18877f,17.36612f,0.075f,14.10646f,17.36612f,0f,14.10646f,17.36612f,0.0375f,14.10646f,17.56801f,0f,14.06531f,17.4339f,0f,13.40733f,17.56801f,0.075f,14.06531f,17.4339f,0.075f,13.40733f});
  }
}
private class MFInt32657 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32658 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f659 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.15767f,0f,12.05217f,16.96067f,0f,12.09233f,16.76368f,0f,12.13248f,17.15767f,0.075f,12.05217f,16.96067f,0.075f,12.09233f,16.76368f,0.075f,12.13248f,16.76368f,0f,12.13248f,17.03591f,0f,13.46804f,16.76368f,0.075f,12.13248f,17.03591f,0.075f,13.46804f,17.03591f,0f,13.46804f,17.23291f,0f,13.42789f,17.4299f,0f,13.38773f,17.03591f,0.075f,13.46804f,17.23291f,0.075f,13.42789f,17.4299f,0.075f,13.38773f,17.4299f,0f,13.38773f,17.15767f,0f,12.05217f,17.4299f,0.075f,13.38773f,17.15767f,0.075f,12.05217f});
  }
}
private class MFInt32660 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32661 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f662 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.74408f,0f,12.13648f,16.54709f,0f,12.17663f,16.3501f,0f,12.21679f,16.74408f,0.075f,12.13648f,16.54709f,0.075f,12.17663f,16.3501f,0.075f,12.21679f,16.3501f,0f,12.21679f,16.62233f,0f,13.55234f,16.3501f,0.075f,12.21679f,16.62233f,0.075f,13.55234f,16.62233f,0f,13.55234f,16.81932f,0f,13.51219f,17.01632f,0f,13.47203f,16.62233f,0.075f,13.55234f,16.81932f,0.075f,13.51219f,17.01632f,0.075f,13.47203f,17.01632f,0f,13.47203f,16.74408f,0f,12.13648f,17.01632f,0.075f,13.47203f,16.74408f,0.075f,12.13648f});
  }
}
private class MFInt32663 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32664 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f665 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.01955f,0f,11.3746f,16.61577f,0f,11.4569f,16.21198f,0f,11.53921f,17.01955f,0.075f,11.3746f,16.61577f,0.075f,11.4569f,16.21198f,0.075f,11.53921f,16.41387f,0.075f,11.49806f,16.41387f,0f,11.49806f,16.61577f,0.0375f,11.4569f,16.41387f,0.0375f,11.49806f,16.81766f,0.075f,11.41575f,16.81766f,0f,11.41575f,16.81766f,0.0375f,11.41575f,16.21198f,0f,11.53921f,16.3461f,0f,12.19719f,16.21198f,0.075f,11.53921f,16.3461f,0.075f,12.19719f,16.3461f,0f,12.19719f,16.74989f,0f,12.11488f,17.15367f,0f,12.03258f,16.3461f,0.075f,12.19719f,16.74989f,0.075f,12.11488f,17.15367f,0.075f,12.03258f,16.54799f,0.075f,12.15604f,16.74989f,0.0375f,12.11488f,16.54799f,0f,12.15604f,16.54799f,0.0375f,12.15604f,16.95178f,0.075f,12.07373f,16.95178f,0f,12.07373f,16.95178f,0.0375f,12.07373f,17.15367f,0f,12.03258f,17.01955f,0f,11.3746f,17.15367f,0.075f,12.03258f,17.01955f,0.075f,11.3746f});
  }
}
private class MFInt32666 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32667 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f668 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.88144f,0f,10.69702f,16.47765f,0f,10.77933f,16.07387f,0f,10.86163f,16.88144f,0.075f,10.69702f,16.47765f,0.075f,10.77933f,16.07387f,0.075f,10.86163f,16.27576f,0.075f,10.82048f,16.27576f,0f,10.82048f,16.47765f,0.0375f,10.77933f,16.27576f,0.0375f,10.82048f,16.67955f,0.075f,10.73818f,16.67955f,0f,10.73818f,16.67955f,0.0375f,10.73818f,16.07387f,0f,10.86163f,16.20799f,0f,11.51961f,16.07387f,0.075f,10.86163f,16.20799f,0.075f,11.51961f,16.20799f,0f,11.51961f,16.61177f,0f,11.43731f,17.01556f,0f,11.355f,16.20799f,0.075f,11.51961f,16.61177f,0.075f,11.43731f,17.01556f,0.075f,11.355f,16.40988f,0.075f,11.47846f,16.61177f,0.0375f,11.43731f,16.40988f,0f,11.47846f,16.40988f,0.0375f,11.47846f,16.81367f,0.075f,11.39615f,16.81367f,0f,11.39615f,16.81367f,0.0375f,11.39615f,17.01556f,0f,11.355f,16.88144f,0f,10.69702f,17.01556f,0.075f,11.355f,16.88144f,0.075f,10.69702f});
  }
}
private class MFInt32669 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32670 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f671 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.60521f,0f,9.341869f,16.21122f,0f,9.422177f,16.60521f,0.075f,9.341869f,16.21122f,0.075f,9.422177f,16.21122f,0f,9.422177f,16.48346f,0f,10.75773f,16.21122f,0.075f,9.422177f,16.48346f,0.075f,10.75773f,16.48346f,0f,10.75773f,16.68045f,0f,10.71758f,16.87744f,0f,10.67743f,16.48346f,0.075f,10.75773f,16.68045f,0.075f,10.71758f,16.87744f,0.075f,10.67743f,16.87744f,0f,10.67743f,16.60521f,0f,9.341869f,16.87744f,0.075f,10.67743f,16.60521f,0.075f,9.341869f});
  }
}
private class MFInt32672 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32673 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f674 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.19163f,0f,9.426172f,15.79764f,0f,9.506481f,16.19163f,0.075f,9.426172f,15.79764f,0.075f,9.506481f,15.79764f,0f,9.506481f,16.06987f,0f,10.84204f,15.79764f,0.075f,9.506481f,16.06987f,0.075f,10.84204f,16.06987f,0f,10.84204f,16.46386f,0f,10.76173f,16.06987f,0.075f,10.84204f,16.46386f,0.075f,10.76173f,16.46386f,0f,10.76173f,16.19163f,0f,9.426172f,16.46386f,0.075f,10.76173f,16.19163f,0.075f,9.426172f});
  }
}
private class MFInt32675 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32676 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f677 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.4671f,0f,8.664293f,16.06331f,0f,8.746598f,15.65953f,0f,8.828904f,16.4671f,0.075f,8.664293f,16.06331f,0.075f,8.746598f,15.65953f,0.075f,8.828904f,15.86142f,0.075f,8.787751f,15.86142f,0f,8.787751f,16.06331f,0.0375f,8.746598f,15.86142f,0.0375f,8.787751f,16.2652f,0.075f,8.705445f,16.2652f,0f,8.705445f,16.2652f,0.0375f,8.705445f,15.65953f,0f,8.828904f,15.79364f,0f,9.486884f,15.65953f,0.075f,8.828904f,15.79364f,0.075f,9.486884f,15.79364f,0f,9.486884f,16.19743f,0f,9.404578f,16.60122f,0f,9.322272f,15.79364f,0.075f,9.486884f,16.19743f,0.075f,9.404578f,16.60122f,0.075f,9.322272f,15.99554f,0.075f,9.445731f,16.19743f,0.0375f,9.404578f,15.99554f,0f,9.445731f,15.99554f,0.0375f,9.445731f,16.39932f,0.075f,9.363425f,16.39932f,0f,9.363425f,16.39932f,0.0375f,9.363425f,16.60122f,0f,9.322272f,16.4671f,0f,8.664293f,16.60122f,0.075f,9.322272f,16.4671f,0.075f,8.664293f});
  }
}
private class MFInt32678 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1});
  }
}
private class MFInt32679 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1});
  }
}
private class MFVec3f680 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.32898f,0f,7.986716f,15.52141f,0f,8.151328f,16.32898f,0.075f,7.986716f,15.52141f,0.075f,8.151328f,15.52141f,0f,8.151328f,15.65553f,0f,8.809307f,15.52141f,0.075f,8.151328f,15.65553f,0.075f,8.809307f,15.65553f,0f,8.809307f,16.05932f,0f,8.727001f,16.4631f,0f,8.644696f,15.65553f,0.075f,8.809307f,16.05932f,0.075f,8.727001f,16.4631f,0.075f,8.644696f,15.85742f,0.075f,8.768154f,16.05932f,0.0375f,8.727001f,15.85742f,0f,8.768154f,15.85742f,0.0375f,8.768154f,16.26121f,0.075f,8.685848f,16.26121f,0f,8.685848f,16.26121f,0.0375f,8.685848f,16.4631f,0f,8.644696f,16.39604f,0f,8.315706f,16.32898f,0f,7.986716f,16.4631f,0.075f,8.644696f,16.39604f,0.075f,8.315706f,16.32898f,0.075f,7.986716f,16.42957f,0.075f,8.480201f,16.39604f,0.0375f,8.315706f,16.42957f,0f,8.480201f,16.42957f,0.0375f,8.480201f,16.36251f,0.075f,8.151212f,16.36251f,0f,8.151212f,16.36251f,0.0375f,8.151212f});
  }
}
private class MFInt32681 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32682 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f683 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.05276f,0f,6.631564f,15.65877f,0f,6.711872f,16.05276f,0.075f,6.631564f,15.65877f,0.075f,6.711872f,15.65877f,0f,6.711872f,15.931f,0f,8.047428f,15.65877f,0.075f,6.711872f,15.931f,0.075f,8.047428f,15.931f,0f,8.047428f,16.12799f,0f,8.007274f,16.32499f,0f,7.967119f,15.931f,0.075f,8.047428f,16.12799f,0.075f,8.007274f,16.32499f,0.075f,7.967119f,16.32499f,0f,7.967119f,16.05276f,0f,6.631564f,16.32499f,0.075f,7.967119f,16.05276f,0.075f,6.631564f});
  }
}
private class MFInt32684 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32685 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f686 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.63917f,0f,6.715867f,15.24518f,0f,6.796175f,15.63917f,0.075f,6.715867f,15.24518f,0.075f,6.796175f,15.24518f,0f,6.796175f,15.51742f,0f,8.131731f,15.24518f,0.075f,6.796175f,15.51742f,0.075f,8.131731f,15.51742f,0f,8.131731f,15.9114f,0f,8.051422f,15.51742f,0.075f,8.131731f,15.9114f,0.075f,8.051422f,15.9114f,0f,8.051422f,15.77529f,0f,7.383645f,15.63917f,0f,6.715867f,15.9114f,0.075f,8.051422f,15.77529f,0.075f,7.383645f,15.63917f,0.075f,6.715867f,15.84335f,0.075f,7.717534f,15.77529f,0.0375f,7.383645f,15.84335f,0f,7.717534f,15.84335f,0.0375f,7.717534f,15.87737f,0.0375f,7.884478f,15.84335f,0.01875f,7.717534f,15.87737f,0f,7.884478f,15.87737f,0.01875f,7.884478f,15.87737f,0.075f,7.884478f,15.84335f,0.05625f,7.717534f,15.87737f,0.05625f,7.884478f,15.70723f,0.075f,7.049756f,15.70723f,0f,7.049756f,15.70723f,0.0375f,7.049756f,15.6732f,0.075f,6.882811f,15.6732f,0.0375f,6.882811f,15.70723f,0.05625f,7.049756f,15.6732f,0.05625f,6.882811f,15.6732f,0f,6.882811f,15.70723f,0.01875f,7.049756f,15.6732f,0.01875f,6.882811f});
  }
}
private class MFInt32687 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32688 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f689 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91464f,0f,5.953987f,15.10707f,0f,6.118598f,15.91464f,0.075f,5.953987f,15.10707f,0.075f,6.118598f,15.10707f,0f,6.118598f,15.24119f,0f,6.776578f,15.10707f,0.075f,6.118598f,15.24119f,0.075f,6.776578f,15.24119f,0f,6.776578f,15.64497f,0f,6.694272f,16.04876f,0f,6.611967f,15.24119f,0.075f,6.776578f,15.64497f,0.075f,6.694272f,16.04876f,0.075f,6.611967f,15.44308f,0.075f,6.735425f,15.64497f,0.0375f,6.694272f,15.44308f,0f,6.735425f,15.44308f,0.0375f,6.735425f,15.84687f,0.075f,6.65312f,15.84687f,0f,6.65312f,15.84687f,0.0375f,6.65312f,16.04876f,0f,6.611967f,15.91464f,0f,5.953987f,16.04876f,0.075f,6.611967f,15.91464f,0.075f,5.953987f});
  }
}
private class MFInt32690 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32691 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f692 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.77653f,0f,5.276411f,15.37274f,0f,5.358716f,14.96896f,0f,5.441022f,15.77653f,0.075f,5.276411f,15.37274f,0.075f,5.358716f,14.96896f,0.075f,5.441022f,15.17085f,0.075f,5.399869f,15.17085f,0f,5.399869f,15.37274f,0.0375f,5.358716f,15.17085f,0.0375f,5.399869f,15.57463f,0.075f,5.317564f,15.57463f,0f,5.317564f,15.57463f,0.0375f,5.317564f,14.96896f,0f,5.441022f,15.10308f,0f,6.099001f,14.96896f,0.075f,5.441022f,15.10308f,0.075f,6.099001f,15.10308f,0f,6.099001f,15.50686f,0f,6.016696f,15.91065f,0f,5.93439f,15.10308f,0.075f,6.099001f,15.50686f,0.075f,6.016696f,15.91065f,0.075f,5.93439f,15.30497f,0.075f,6.057849f,15.50686f,0.0375f,6.016696f,15.30497f,0f,6.057849f,15.30497f,0.0375f,6.057849f,15.70875f,0.075f,5.975543f,15.70875f,0f,5.975543f,15.70875f,0.0375f,5.975543f,15.91065f,0f,5.93439f,15.77653f,0f,5.276411f,15.91065f,0.075f,5.93439f,15.77653f,0.075f,5.276411f});
  }
}
private class MFInt32693 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32694 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f695 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.5003f,0f,3.921258f,15.10631f,0f,4.001566f,15.5003f,0.075f,3.921258f,15.10631f,0.075f,4.001566f,15.10631f,0f,4.001566f,15.37854f,0f,5.337122f,15.10631f,0.075f,4.001566f,15.37854f,0.075f,5.337122f,15.37854f,0f,5.337122f,15.77253f,0f,5.256814f,15.37854f,0.075f,5.337122f,15.77253f,0.075f,5.256814f,15.77253f,0f,5.256814f,15.63642f,0f,4.589036f,15.5003f,0f,3.921258f,15.77253f,0.075f,5.256814f,15.63642f,0.075f,4.589036f,15.5003f,0.075f,3.921258f,15.70447f,0.075f,4.922925f,15.63642f,0.0375f,4.589036f,15.70447f,0f,4.922925f,15.70447f,0.0375f,4.922925f,15.7385f,0.0375f,5.089869f,15.70447f,0.01875f,4.922925f,15.7385f,0f,5.089869f,15.7385f,0.01875f,5.089869f,15.7385f,0.075f,5.089869f,15.70447f,0.05625f,4.922925f,15.7385f,0.05625f,5.089869f,15.56836f,0.075f,4.255147f,15.56836f,0f,4.255147f,15.56836f,0.0375f,4.255147f,15.53433f,0.075f,4.088202f,15.53433f,0.0375f,4.088202f,15.56836f,0.05625f,4.255147f,15.53433f,0.05625f,4.088202f,15.53433f,0f,4.088202f,15.56836f,0.01875f,4.255147f,15.53433f,0.01875f,4.088202f});
  }
}
private class MFInt32696 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32697 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f698 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.08671f,0f,4.005561f,14.69273f,0f,4.085869f,15.08671f,0.075f,4.005561f,14.69273f,0.075f,4.085869f,14.69273f,0f,4.085869f,14.96496f,0f,5.421425f,14.69273f,0.075f,4.085869f,14.96496f,0.075f,5.421425f,14.96496f,0f,5.421425f,15.16195f,0f,5.381271f,15.35895f,0f,5.341117f,14.96496f,0.075f,5.421425f,15.16195f,0.075f,5.381271f,15.35895f,0.075f,5.341117f,15.35895f,0f,5.341117f,15.08671f,0f,4.005561f,15.35895f,0.075f,5.341117f,15.08671f,0.075f,4.005561f});
  }
}
private class MFInt32699 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32700 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f701 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36218f,0f,3.243681f,14.9584f,0f,3.325987f,14.55461f,0f,3.408293f,15.36218f,0.075f,3.243681f,14.9584f,0.075f,3.325987f,14.55461f,0.075f,3.408293f,14.75651f,0.075f,3.36714f,14.75651f,0f,3.36714f,14.9584f,0.0375f,3.325987f,14.75651f,0.0375f,3.36714f,15.16029f,0.075f,3.284834f,15.16029f,0f,3.284834f,15.16029f,0.0375f,3.284834f,14.55461f,0f,3.408293f,14.68873f,0f,4.066272f,14.55461f,0.075f,3.408293f,14.68873f,0.075f,4.066272f,14.68873f,0f,4.066272f,15.09252f,0f,3.983967f,15.4963f,0f,3.901661f,14.68873f,0.075f,4.066272f,15.09252f,0.075f,3.983967f,15.4963f,0.075f,3.901661f,14.89063f,0.075f,4.025119f,15.09252f,0.0375f,3.983967f,14.89063f,0f,4.025119f,14.89063f,0.0375f,4.025119f,15.29441f,0.075f,3.942814f,15.29441f,0f,3.942814f,15.29441f,0.0375f,3.942814f,15.4963f,0f,3.901661f,15.36218f,0f,3.243681f,15.4963f,0.075f,3.901661f,15.36218f,0.075f,3.243681f});
  }
}
private class MFInt32702 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32703 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f704 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.22407f,0f,2.566105f,14.4165f,0f,2.730716f,15.22407f,0.075f,2.566105f,14.4165f,0.075f,2.730716f,14.4165f,0f,2.730716f,14.55062f,0f,3.388696f,14.4165f,0.075f,2.730716f,14.55062f,0.075f,3.388696f,14.55062f,0f,3.388696f,14.9544f,0f,3.30639f,15.35819f,0f,3.224084f,14.55062f,0.075f,3.388696f,14.9544f,0.075f,3.30639f,15.35819f,0.075f,3.224084f,14.75251f,0.075f,3.347543f,14.9544f,0.0375f,3.30639f,14.75251f,0f,3.347543f,14.75251f,0.0375f,3.347543f,15.1563f,0.075f,3.265237f,15.1563f,0f,3.265237f,15.1563f,0.0375f,3.265237f,15.35819f,0f,3.224084f,15.22407f,0f,2.566105f,15.35819f,0.075f,3.224084f,15.22407f,0.075f,2.566105f});
  }
}
private class MFInt32705 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32706 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f707 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.54032f,0f,23.062f,18.13654f,0f,23.14431f,17.73275f,0f,23.22662f,18.54032f,0.075f,23.062f,18.13654f,0.075f,23.14431f,17.73275f,0.075f,23.22662f,17.93464f,0.075f,23.18546f,17.93464f,0f,23.18546f,18.13654f,0.0375f,23.14431f,17.93464f,0.0375f,23.18546f,18.33843f,0.075f,23.10316f,18.33843f,0f,23.10316f,18.33843f,0.0375f,23.10316f,17.73275f,0f,23.22662f,17.86687f,0f,23.88459f,17.73275f,0.075f,23.22662f,17.86687f,0.075f,23.88459f,17.86687f,0f,23.88459f,18.27066f,0f,23.80229f,18.67444f,0f,23.71998f,17.86687f,0.075f,23.88459f,18.27066f,0.075f,23.80229f,18.67444f,0.075f,23.71998f,18.06876f,0.075f,23.84344f,18.27066f,0.0375f,23.80229f,18.06876f,0f,23.84344f,18.06876f,0.0375f,23.84344f,18.47255f,0.075f,23.76114f,18.47255f,0f,23.76114f,18.47255f,0.0375f,23.76114f,18.67444f,0f,23.71998f,18.54032f,0f,23.062f,18.67444f,0.075f,23.71998f,18.54032f,0.075f,23.062f});
  }
}
private class MFInt32708 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32709 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f710 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.2641f,0f,21.70685f,17.87011f,0f,21.78716f,18.2641f,0.075f,21.70685f,17.87011f,0.075f,21.78716f,17.87011f,0f,21.78716f,18.14234f,0f,23.12271f,17.87011f,0.075f,21.78716f,18.14234f,0.075f,23.12271f,18.14234f,0f,23.12271f,18.33933f,0f,23.08256f,18.53633f,0f,23.04241f,18.14234f,0.075f,23.12271f,18.33933f,0.075f,23.08256f,18.53633f,0.075f,23.04241f,18.53633f,0f,23.04241f,18.2641f,0f,21.70685f,18.53633f,0.075f,23.04241f,18.2641f,0.075f,21.70685f});
  }
}
private class MFInt32711 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32712 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f713 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.85051f,0f,21.79115f,17.65352f,0f,21.83131f,17.45652f,0f,21.87146f,17.85051f,0.075f,21.79115f,17.65352f,0.075f,21.83131f,17.45652f,0.075f,21.87146f,17.45652f,0f,21.87146f,17.72876f,0f,23.20702f,17.45652f,0.075f,21.87146f,17.72876f,0.075f,23.20702f,17.72876f,0f,23.20702f,18.12274f,0f,23.12671f,17.72876f,0.075f,23.20702f,18.12274f,0.075f,23.12671f,18.12274f,0f,23.12671f,17.85051f,0f,21.79115f,18.12274f,0.075f,23.12671f,17.85051f,0.075f,21.79115f});
  }
}
private class MFInt32714 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32715 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f716 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12598f,0f,21.02927f,17.31841f,0f,21.19389f,18.12598f,0.075f,21.02927f,17.31841f,0.075f,21.19389f,17.31841f,0f,21.19389f,17.45253f,0f,21.85187f,17.31841f,0.075f,21.19389f,17.45253f,0.075f,21.85187f,17.45253f,0f,21.85187f,17.85631f,0f,21.76956f,18.2601f,0f,21.68725f,17.45253f,0.075f,21.85187f,17.85631f,0.075f,21.76956f,18.2601f,0.075f,21.68725f,17.65442f,0.075f,21.81071f,17.85631f,0.0375f,21.76956f,17.65442f,0f,21.81071f,17.65442f,0.0375f,21.81071f,18.05821f,0.075f,21.72841f,18.05821f,0f,21.72841f,18.05821f,0.0375f,21.72841f,18.2601f,0f,21.68725f,18.12598f,0f,21.02927f,18.2601f,0.075f,21.68725f,18.12598f,0.075f,21.02927f});
  }
}
private class MFInt32717 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32718 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f719 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98787f,0f,20.3517f,17.58408f,0f,20.434f,17.1803f,0f,20.51631f,17.98787f,0.075f,20.3517f,17.58408f,0.075f,20.434f,17.1803f,0.075f,20.51631f,17.38219f,0.075f,20.47516f,17.38219f,0f,20.47516f,17.58408f,0.0375f,20.434f,17.38219f,0.0375f,20.47516f,17.78597f,0.075f,20.39285f,17.78597f,0f,20.39285f,17.78597f,0.0375f,20.39285f,17.1803f,0f,20.51631f,17.31441f,0f,21.17429f,17.1803f,0.075f,20.51631f,17.31441f,0.075f,21.17429f,17.31441f,0f,21.17429f,18.12199f,0f,21.00968f,17.31441f,0.075f,21.17429f,18.12199f,0.075f,21.00968f,18.12199f,0f,21.00968f,17.98787f,0f,20.3517f,18.12199f,0.075f,21.00968f,17.98787f,0.075f,20.3517f});
  }
}
private class MFInt32720 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32721 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f722 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.71164f,0f,18.99655f,17.31765f,0f,19.07685f,17.71164f,0.075f,18.99655f,17.31765f,0.075f,19.07685f,17.31765f,0f,19.07685f,17.58989f,0f,20.41241f,17.31765f,0.075f,19.07685f,17.58989f,0.075f,20.41241f,17.58989f,0f,20.41241f,17.98387f,0f,20.3321f,17.58989f,0.075f,20.41241f,17.98387f,0.075f,20.3321f,17.98387f,0f,20.3321f,17.84776f,0f,19.66432f,17.71164f,0f,18.99655f,17.98387f,0.075f,20.3321f,17.84776f,0.075f,19.66432f,17.71164f,0.075f,18.99655f,17.91581f,0.075f,19.99821f,17.84776f,0.0375f,19.66432f,17.91581f,0f,19.99821f,17.91581f,0.0375f,19.99821f,17.94984f,0.0375f,20.16516f,17.91581f,0.01875f,19.99821f,17.94984f,0f,20.16516f,17.94984f,0.01875f,20.16516f,17.94984f,0.075f,20.16516f,17.91581f,0.05625f,19.99821f,17.94984f,0.05625f,20.16516f,17.7797f,0.075f,19.33043f,17.7797f,0f,19.33043f,17.7797f,0.0375f,19.33043f,17.74567f,0.075f,19.16349f,17.74567f,0.0375f,19.16349f,17.7797f,0.05625f,19.33043f,17.74567f,0.05625f,19.16349f,17.74567f,0f,19.16349f,17.7797f,0.01875f,19.33043f,17.74567f,0.01875f,19.16349f});
  }
}
private class MFInt32723 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32724 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f725 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.29805f,0f,19.08085f,17.10106f,0f,19.121f,16.90407f,0f,19.16116f,17.29805f,0.075f,19.08085f,17.10106f,0.075f,19.121f,16.90407f,0.075f,19.16116f,16.90407f,0f,19.16116f,17.04018f,0f,19.82894f,17.1763f,0f,20.49671f,16.90407f,0.075f,19.16116f,17.04018f,0.075f,19.82894f,17.1763f,0.075f,20.49671f,16.97213f,0.075f,19.49505f,17.04018f,0.0375f,19.82894f,16.97213f,0f,19.49505f,16.97213f,0.0375f,19.49505f,16.9381f,0.0375f,19.3281f,16.97213f,0.01875f,19.49505f,16.9381f,0f,19.3281f,16.9381f,0.01875f,19.3281f,16.9381f,0.075f,19.3281f,16.97213f,0.05625f,19.49505f,16.9381f,0.05625f,19.3281f,17.10824f,0.075f,20.16282f,17.10824f,0f,20.16282f,17.10824f,0.0375f,20.16282f,17.14227f,0.075f,20.32977f,17.14227f,0.0375f,20.32977f,17.10824f,0.05625f,20.16282f,17.14227f,0.05625f,20.32977f,17.14227f,0f,20.32977f,17.10824f,0.01875f,20.16282f,17.14227f,0.01875f,20.32977f,17.1763f,0f,20.49671f,17.57029f,0f,20.4164f,17.1763f,0.075f,20.49671f,17.57029f,0.075f,20.4164f,17.57029f,0f,20.4164f,17.29805f,0f,19.08085f,17.57029f,0.075f,20.4164f,17.29805f,0.075f,19.08085f});
  }
}
private class MFInt32726 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32727 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f728 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.57352f,0f,18.31897f,17.16974f,0f,18.40127f,16.76595f,0f,18.48358f,17.57352f,0.075f,18.31897f,17.16974f,0.075f,18.40127f,16.76595f,0.075f,18.48358f,16.96785f,0.075f,18.44243f,16.96785f,0f,18.44243f,17.16974f,0.0375f,18.40127f,16.96785f,0.0375f,18.44243f,17.37163f,0.075f,18.36012f,17.37163f,0f,18.36012f,17.37163f,0.0375f,18.36012f,16.76595f,0f,18.48358f,16.90007f,0f,19.14156f,16.76595f,0.075f,18.48358f,16.90007f,0.075f,19.14156f,16.90007f,0f,19.14156f,17.30386f,0f,19.05925f,17.70764f,0f,18.97695f,16.90007f,0.075f,19.14156f,17.30386f,0.075f,19.05925f,17.70764f,0.075f,18.97695f,17.10197f,0.075f,19.10041f,17.30386f,0.0375f,19.05925f,17.10197f,0f,19.10041f,17.10197f,0.0375f,19.10041f,17.50575f,0.075f,19.0181f,17.50575f,0f,19.0181f,17.50575f,0.0375f,19.0181f,17.70764f,0f,18.97695f,17.57352f,0f,18.31897f,17.70764f,0.075f,18.97695f,17.57352f,0.075f,18.31897f});
  }
}
private class MFInt32729 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32730 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f731 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.43541f,0f,17.64139f,17.03163f,0f,17.7237f,16.62784f,0f,17.806f,17.43541f,0.075f,17.64139f,17.03163f,0.075f,17.7237f,16.62784f,0.075f,17.806f,16.82973f,0.075f,17.76485f,16.82973f,0f,17.76485f,17.03163f,0.0375f,17.7237f,16.82973f,0.0375f,17.76485f,17.23352f,0.075f,17.68254f,17.23352f,0f,17.68254f,17.23352f,0.0375f,17.68254f,16.62784f,0f,17.806f,16.76196f,0f,18.46398f,16.62784f,0.075f,17.806f,16.76196f,0.075f,18.46398f,16.76196f,0f,18.46398f,17.16574f,0f,18.38168f,17.56953f,0f,18.29937f,16.76196f,0.075f,18.46398f,17.16574f,0.075f,18.38168f,17.56953f,0.075f,18.29937f,16.96385f,0.075f,18.42283f,17.16574f,0.0375f,18.38168f,16.96385f,0f,18.42283f,16.96385f,0.0375f,18.42283f,17.36764f,0.075f,18.34052f,17.36764f,0f,18.34052f,17.36764f,0.0375f,18.34052f,17.56953f,0f,18.29937f,17.43541f,0f,17.64139f,17.56953f,0.075f,18.29937f,17.43541f,0.075f,17.64139f});
  }
}
private class MFInt32732 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFInt32733 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFVec3f734 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.15918f,0f,16.28624f,16.96219f,0f,16.32639f,16.7652f,0f,16.36655f,17.15918f,0.075f,16.28624f,16.96219f,0.075f,16.32639f,16.7652f,0.075f,16.36655f,16.7652f,0f,16.36655f,16.90131f,0f,17.03433f,17.03743f,0f,17.7021f,16.7652f,0.075f,16.36655f,16.90131f,0.075f,17.03433f,17.03743f,0.075f,17.7021f,16.83325f,0.075f,16.70044f,16.90131f,0.0375f,17.03433f,16.83325f,0f,16.70044f,16.83325f,0.0375f,16.70044f,16.79922f,0.0375f,16.53349f,16.83325f,0.01875f,16.70044f,16.79922f,0f,16.53349f,16.79922f,0.01875f,16.53349f,16.79922f,0.075f,16.53349f,16.83325f,0.05625f,16.70044f,16.79922f,0.05625f,16.53349f,16.96937f,0.075f,17.36822f,16.96937f,0f,17.36822f,16.96937f,0.0375f,17.36822f,17.0034f,0.075f,17.53516f,17.0034f,0.0375f,17.53516f,16.96937f,0.05625f,17.36822f,17.0034f,0.05625f,17.53516f,17.0034f,0f,17.53516f,16.96937f,0.01875f,17.36822f,17.0034f,0.01875f,17.53516f,17.03743f,0f,17.7021f,17.23442f,0f,17.66195f,17.43142f,0f,17.6218f,17.03743f,0.075f,17.7021f,17.23442f,0.075f,17.66195f,17.43142f,0.075f,17.6218f,17.43142f,0f,17.6218f,17.2953f,0f,16.95402f,17.15918f,0f,16.28624f,17.43142f,0.075f,17.6218f,17.2953f,0.075f,16.95402f,17.15918f,0.075f,16.28624f,17.36336f,0.075f,17.28791f,17.2953f,0.0375f,16.95402f,17.36336f,0f,17.28791f,17.36336f,0.0375f,17.28791f,17.39739f,0.0375f,17.45485f,17.36336f,0.01875f,17.28791f,17.39739f,0f,17.45485f,17.39739f,0.01875f,17.45485f,17.39739f,0.075f,17.45485f,17.36336f,0.05625f,17.28791f,17.39739f,0.05625f,17.45485f,17.22724f,0.075f,16.62013f,17.22724f,0f,16.62013f,17.22724f,0.0375f,16.62013f,17.19321f,0.075f,16.45318f,17.19321f,0.0375f,16.45318f,17.22724f,0.05625f,16.62013f,17.19321f,0.05625f,16.45318f,17.19321f,0f,16.45318f,17.22724f,0.01875f,16.62013f,17.19321f,0.01875f,16.45318f});
  }
}
private class MFInt32735 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32736 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f737 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.7456f,0f,16.37054f,16.35161f,0f,16.45085f,16.7456f,0.075f,16.37054f,16.35161f,0.075f,16.45085f,16.35161f,0f,16.45085f,16.48773f,0f,17.11863f,16.62385f,0f,17.78641f,16.35161f,0.075f,16.45085f,16.48773f,0.075f,17.11863f,16.62385f,0.075f,17.78641f,16.41967f,0.075f,16.78474f,16.48773f,0.0375f,17.11863f,16.41967f,0f,16.78474f,16.41967f,0.0375f,16.78474f,16.38564f,0.0375f,16.6178f,16.41967f,0.01875f,16.78474f,16.38564f,0f,16.6178f,16.38564f,0.01875f,16.6178f,16.38564f,0.075f,16.6178f,16.41967f,0.05625f,16.78474f,16.38564f,0.05625f,16.6178f,16.55579f,0.075f,17.45252f,16.55579f,0f,17.45252f,16.55579f,0.0375f,17.45252f,16.58982f,0.075f,17.61946f,16.58982f,0.0375f,17.61946f,16.55579f,0.05625f,17.45252f,16.58982f,0.05625f,17.61946f,16.58982f,0f,17.61946f,16.55579f,0.01875f,17.45252f,16.58982f,0.01875f,17.61946f,16.62385f,0f,17.78641f,17.01783f,0f,17.7061f,16.62385f,0.075f,17.78641f,17.01783f,0.075f,17.7061f,17.01783f,0f,17.7061f,16.88172f,0f,17.03832f,16.7456f,0f,16.37054f,17.01783f,0.075f,17.7061f,16.88172f,0.075f,17.03832f,16.7456f,0.075f,16.37054f,16.94977f,0.075f,17.37221f,16.88172f,0.0375f,17.03832f,16.94977f,0f,17.37221f,16.94977f,0.0375f,17.37221f,16.9838f,0.0375f,17.53915f,16.94977f,0.01875f,17.37221f,16.9838f,0f,17.53915f,16.9838f,0.01875f,17.53915f,16.9838f,0.075f,17.53915f,16.94977f,0.05625f,17.37221f,16.9838f,0.05625f,17.53915f,16.81366f,0.075f,16.70443f,16.81366f,0f,16.70443f,16.81366f,0.0375f,16.70443f,16.77963f,0.075f,16.53749f,16.77963f,0.0375f,16.53749f,16.81366f,0.05625f,16.70443f,16.77963f,0.05625f,16.53749f,16.77963f,0f,16.53749f,16.81366f,0.01875f,16.70443f,16.77963f,0.01875f,16.53749f});
  }
}
private class MFInt32738 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFInt32739 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,21,24,26,-1,21,26,23,-1,24,18,25,-1,24,25,26,-1,29,28,18,-1,29,18,24,-1,27,29,24,-1,27,24,21,-1,26,25,17,-1,29,19,28,-1,26,17,20,-1,22,29,27,-1,19,29,22,-1,20,23,26,-1,31,30,32,-1,31,32,33,-1});
  }
}
private class MFVec3f740 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.02107f,0f,15.60866f,16.61728f,0f,15.69097f,16.2135f,0f,15.77327f,17.02107f,0.075f,15.60866f,16.61728f,0.075f,15.69097f,16.2135f,0.075f,15.77327f,16.41539f,0.075f,15.73212f,16.41539f,0f,15.73212f,16.61728f,0.0375f,15.69097f,16.41539f,0.0375f,15.73212f,16.81918f,0.075f,15.64982f,16.81918f,0f,15.64982f,16.81918f,0.0375f,15.64982f,16.2135f,0f,15.77327f,16.34762f,0f,16.43125f,16.2135f,0.075f,15.77327f,16.34762f,0.075f,16.43125f,16.34762f,0f,16.43125f,16.7514f,0f,16.34895f,17.15519f,0f,16.26664f,16.34762f,0.075f,16.43125f,16.7514f,0.075f,16.34895f,17.15519f,0.075f,16.26664f,16.54951f,0.075f,16.3901f,16.7514f,0.0375f,16.34895f,16.54951f,0f,16.3901f,16.54951f,0.0375f,16.3901f,16.95329f,0.075f,16.30779f,16.95329f,0f,16.30779f,16.95329f,0.0375f,16.30779f,17.15519f,0f,16.26664f,17.02107f,0f,15.60866f,17.15519f,0.075f,16.26664f,17.02107f,0.075f,15.60866f});
  }
}
private class MFInt32741 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32742 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f743 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.88296f,0f,14.93109f,16.07538f,0f,15.0957f,16.88296f,0.075f,14.93109f,16.07538f,0.075f,15.0957f,16.07538f,0f,15.0957f,16.2095f,0f,15.75368f,16.07538f,0.075f,15.0957f,16.2095f,0.075f,15.75368f,16.2095f,0f,15.75368f,16.61329f,0f,15.67137f,17.01707f,0f,15.58907f,16.2095f,0.075f,15.75368f,16.61329f,0.075f,15.67137f,17.01707f,0.075f,15.58907f,16.4114f,0.075f,15.71252f,16.61329f,0.0375f,15.67137f,16.4114f,0f,15.71252f,16.4114f,0.0375f,15.71252f,16.81518f,0.075f,15.63022f,16.81518f,0f,15.63022f,16.81518f,0.0375f,15.63022f,17.01707f,0f,15.58907f,16.88296f,0f,14.93109f,17.01707f,0.075f,15.58907f,16.88296f,0.075f,14.93109f});
  }
}
private class MFInt32744 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32745 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f746 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.60673f,0f,13.57593f,16.40973f,0f,13.61609f,16.21274f,0f,13.65624f,16.60673f,0.075f,13.57593f,16.40973f,0.075f,13.61609f,16.21274f,0.075f,13.65624f,16.21274f,0f,13.65624f,16.48497f,0f,14.9918f,16.21274f,0.075f,13.65624f,16.48497f,0.075f,14.9918f,16.48497f,0f,14.9918f,16.87896f,0f,14.91149f,16.48497f,0.075f,14.9918f,16.87896f,0.075f,14.91149f,16.87896f,0f,14.91149f,16.60673f,0f,13.57593f,16.87896f,0.075f,14.91149f,16.60673f,0.075f,13.57593f});
  }
}
private class MFInt32747 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32748 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f749 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.19314f,0f,13.66024f,15.99615f,0f,13.70039f,15.79916f,0f,13.74055f,16.19314f,0.075f,13.66024f,15.99615f,0.075f,13.70039f,15.79916f,0.075f,13.74055f,15.79916f,0f,13.74055f,16.07139f,0f,15.0761f,15.79916f,0.075f,13.74055f,16.07139f,0.075f,15.0761f,16.07139f,0f,15.0761f,16.46538f,0f,14.99579f,16.07139f,0.075f,15.0761f,16.46538f,0.075f,14.99579f,16.46538f,0f,14.99579f,16.19314f,0f,13.66024f,16.46538f,0.075f,14.99579f,16.19314f,0.075f,13.66024f});
  }
}
private class MFInt32750 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32751 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f752 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.46861f,0f,12.89836f,15.66104f,0f,13.06297f,16.46861f,0.075f,12.89836f,15.66104f,0.075f,13.06297f,15.66104f,0f,13.06297f,15.79516f,0f,13.72095f,15.66104f,0.075f,13.06297f,15.79516f,0.075f,13.72095f,15.79516f,0f,13.72095f,16.60273f,0f,13.55634f,15.79516f,0.075f,13.72095f,16.60273f,0.075f,13.55634f,16.60273f,0f,13.55634f,16.46861f,0f,12.89836f,16.60273f,0.075f,13.55634f,16.46861f,0.075f,12.89836f});
  }
}
private class MFInt32753 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32754 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f755 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.3305f,0f,12.22078f,15.52293f,0f,12.38539f,16.3305f,0.075f,12.22078f,15.52293f,0.075f,12.38539f,15.52293f,0f,12.38539f,15.58999f,0f,12.71438f,15.65705f,0f,13.04337f,15.52293f,0.075f,12.38539f,15.58999f,0.075f,12.71438f,15.65705f,0.075f,13.04337f,15.55646f,0.075f,12.54989f,15.58999f,0.0375f,12.71438f,15.55646f,0f,12.54989f,15.55646f,0.0375f,12.54989f,15.62352f,0.075f,12.87888f,15.62352f,0f,12.87888f,15.62352f,0.0375f,12.87888f,15.65705f,0f,13.04337f,16.46462f,0f,12.87876f,15.65705f,0.075f,13.04337f,16.46462f,0.075f,12.87876f,16.46462f,0f,12.87876f,16.3305f,0f,12.22078f,16.46462f,0.075f,12.87876f,16.3305f,0.075f,12.22078f});
  }
}
private class MFInt32756 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32757 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f758 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.05427f,0f,10.86563f,15.85728f,0f,10.90578f,15.66028f,0f,10.94594f,16.05427f,0.075f,10.86563f,15.85728f,0.075f,10.90578f,15.66028f,0.075f,10.94594f,15.66028f,0f,10.94594f,15.93252f,0f,12.28149f,15.66028f,0.075f,10.94594f,15.93252f,0.075f,12.28149f,15.93252f,0f,12.28149f,16.3265f,0f,12.20118f,15.93252f,0.075f,12.28149f,16.3265f,0.075f,12.20118f,16.3265f,0f,12.20118f,16.05427f,0f,10.86563f,16.3265f,0.075f,12.20118f,16.05427f,0.075f,10.86563f});
  }
}
private class MFInt32759 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32760 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f761 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.64069f,0f,10.94993f,15.44369f,0f,10.99009f,15.2467f,0f,11.03024f,15.64069f,0.075f,10.94993f,15.44369f,0.075f,10.99009f,15.2467f,0.075f,11.03024f,15.2467f,0f,11.03024f,15.38282f,0f,11.69802f,15.51893f,0f,12.3658f,15.2467f,0.075f,11.03024f,15.38282f,0.075f,11.69802f,15.51893f,0.075f,12.3658f,15.31476f,0.075f,11.36413f,15.38282f,0.0375f,11.69802f,15.31476f,0f,11.36413f,15.31476f,0.0375f,11.36413f,15.28073f,0.0375f,11.19718f,15.31476f,0.01875f,11.36413f,15.28073f,0f,11.19718f,15.28073f,0.01875f,11.19718f,15.28073f,0.075f,11.19718f,15.31476f,0.05625f,11.36413f,15.28073f,0.05625f,11.19718f,15.45088f,0.075f,12.03191f,15.45088f,0f,12.03191f,15.45088f,0.0375f,12.03191f,15.4849f,0.075f,12.19885f,15.4849f,0.0375f,12.19885f,15.45088f,0.05625f,12.03191f,15.4849f,0.05625f,12.19885f,15.4849f,0f,12.19885f,15.45088f,0.01875f,12.03191f,15.4849f,0.01875f,12.19885f,15.51893f,0f,12.3658f,15.91292f,0f,12.28549f,15.51893f,0.075f,12.3658f,15.91292f,0.075f,12.28549f,15.91292f,0f,12.28549f,15.64069f,0f,10.94993f,15.91292f,0.075f,12.28549f,15.64069f,0.075f,10.94993f});
  }
}
private class MFInt32762 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32763 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f764 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91616f,0f,10.18805f,15.10859f,0f,10.35266f,15.91616f,0.075f,10.18805f,15.10859f,0.075f,10.35266f,15.10859f,0f,10.35266f,15.24271f,0f,11.01064f,15.10859f,0.075f,10.35266f,15.24271f,0.075f,11.01064f,15.24271f,0f,11.01064f,16.05028f,0f,10.84603f,15.24271f,0.075f,11.01064f,16.05028f,0.075f,10.84603f,16.05028f,0f,10.84603f,15.91616f,0f,10.18805f,16.05028f,0.075f,10.84603f,15.91616f,0.075f,10.18805f});
  }
}
private class MFInt32765 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32766 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f767 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.77804f,0f,9.510475f,14.97047f,0f,9.675087f,15.77804f,0.075f,9.510475f,14.97047f,0.075f,9.675087f,14.97047f,0f,9.675087f,15.10459f,0f,10.33307f,14.97047f,0.075f,9.675087f,15.10459f,0.075f,10.33307f,15.10459f,0f,10.33307f,15.91216f,0f,10.16846f,15.10459f,0.075f,10.33307f,15.91216f,0.075f,10.16846f,15.91216f,0f,10.16846f,15.77804f,0f,9.510475f,15.91216f,0.075f,10.16846f,15.77804f,0.075f,9.510475f});
  }
}
private class MFInt32768 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1});
  }
}
private class MFInt32769 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1});
  }
}
private class MFVec3f770 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.50181f,0f,8.155322f,15.30482f,0f,8.195477f,15.10783f,0f,8.235631f,15.50181f,0.075f,8.155322f,15.30482f,0.075f,8.195477f,15.10783f,0.075f,8.235631f,15.10783f,0f,8.235631f,15.24394f,0f,8.903409f,15.38006f,0f,9.571187f,15.10783f,0.075f,8.235631f,15.24394f,0.075f,8.903409f,15.38006f,0.075f,9.571187f,15.17589f,0.075f,8.56952f,15.24394f,0.0375f,8.903409f,15.17589f,0f,8.56952f,15.17589f,0.0375f,8.56952f,15.14186f,0.0375f,8.402575f,15.17589f,0.01875f,8.56952f,15.14186f,0f,8.402575f,15.14186f,0.01875f,8.402575f,15.14186f,0.075f,8.402575f,15.17589f,0.05625f,8.56952f,15.14186f,0.05625f,8.402575f,15.312f,0.075f,9.237298f,15.312f,0f,9.237298f,15.312f,0.0375f,9.237298f,15.34603f,0.075f,9.404243f,15.34603f,0.0375f,9.404243f,15.312f,0.05625f,9.237298f,15.34603f,0.05625f,9.404243f,15.34603f,0f,9.404243f,15.312f,0.01875f,9.237298f,15.34603f,0.01875f,9.404243f,15.38006f,0f,9.571187f,15.77405f,0f,9.490878f,15.38006f,0.075f,9.571187f,15.77405f,0.075f,9.490878f,15.77405f,0f,9.490878f,15.63793f,0f,8.8231f,15.50181f,0f,8.155322f,15.77405f,0.075f,9.490878f,15.63793f,0.075f,8.8231f,15.50181f,0.075f,8.155322f,15.70599f,0.075f,9.156989f,15.63793f,0.0375f,8.8231f,15.70599f,0f,9.156989f,15.70599f,0.0375f,9.156989f,15.74002f,0.0375f,9.323934f,15.70599f,0.01875f,9.156989f,15.74002f,0f,9.323934f,15.74002f,0.01875f,9.323934f,15.74002f,0.075f,9.323934f,15.70599f,0.05625f,9.156989f,15.74002f,0.05625f,9.323934f,15.56987f,0.075f,8.489211f,15.56987f,0f,8.489211f,15.56987f,0.0375f,8.489211f,15.53584f,0.075f,8.322267f,15.53584f,0.0375f,8.322267f,15.56987f,0.05625f,8.489211f,15.53584f,0.05625f,8.322267f,15.53584f,0f,8.322267f,15.56987f,0.01875f,8.489211f,15.53584f,0.01875f,8.322267f});
  }
}
private class MFInt32771 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1});
  }
}
private class MFInt32772 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,52,43,41,-1,44,46,52,-1,41,44,52,-1,48,46,44,-1,38,45,48,-1,44,38,48,-1,46,48,50,-1,46,50,47,-1,48,45,49,-1,48,49,50,-1,43,52,53,-1,43,53,51,-1,52,46,47,-1,52,47,53,-1,60,58,56,-1,60,56,59,-1,57,60,59,-1,57,59,54,-1,63,61,55,-1,63,55,62,-1,58,63,62,-1,58,62,56,-1,62,55,38,-1,44,56,62,-1,38,44,62,-1,59,56,44,-1,41,54,59,-1,44,41,59,-1,49,37,50,-1,47,50,37,-1,63,39,61,-1,58,39,63,-1,47,37,40,-1,51,53,40,-1,47,40,53,-1,42,58,60,-1,60,57,42,-1,39,58,42,-1});
  }
}
private class MFVec3f773 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.08823f,0f,8.239626f,14.89124f,0f,8.279779f,14.69424f,0f,8.319934f,15.08823f,0.075f,8.239626f,14.89124f,0.075f,8.279779f,14.69424f,0.075f,8.319934f,14.69424f,0f,8.319934f,14.83036f,0f,8.987712f,14.96648f,0f,9.65549f,14.69424f,0.075f,8.319934f,14.83036f,0.075f,8.987712f,14.96648f,0.075f,9.65549f,14.7623f,0.075f,8.653823f,14.83036f,0.0375f,8.987712f,14.7623f,0f,8.653823f,14.7623f,0.0375f,8.653823f,14.72827f,0.0375f,8.486878f,14.7623f,0.01875f,8.653823f,14.72827f,0f,8.486878f,14.72827f,0.01875f,8.486878f,14.72827f,0.075f,8.486878f,14.7623f,0.05625f,8.653823f,14.72827f,0.05625f,8.486878f,14.89842f,0.075f,9.321601f,14.89842f,0f,9.321601f,14.89842f,0.0375f,9.321601f,14.93245f,0.075f,9.488545f,14.93245f,0.0375f,9.488545f,14.89842f,0.05625f,9.321601f,14.93245f,0.05625f,9.488545f,14.93245f,0f,9.488545f,14.89842f,0.01875f,9.321601f,14.93245f,0.01875f,9.488545f,14.96648f,0f,9.65549f,15.36046f,0f,9.575181f,14.96648f,0.075f,9.65549f,15.36046f,0.075f,9.575181f,15.36046f,0f,9.575181f,15.22435f,0f,8.907403f,15.08823f,0f,8.239626f,15.36046f,0.075f,9.575181f,15.22435f,0.075f,8.907403f,15.08823f,0.075f,8.239626f,15.29241f,0.075f,9.241292f,15.22435f,0.0375f,8.907403f,15.29241f,0f,9.241292f,15.29241f,0.0375f,9.241292f,15.32644f,0.0375f,9.408237f,15.29241f,0.01875f,9.241292f,15.32644f,0f,9.408237f,15.32644f,0.01875f,9.408237f,15.32644f,0.075f,9.408237f,15.29241f,0.05625f,9.241292f,15.32644f,0.05625f,9.408237f,15.15629f,0.075f,8.573514f,15.15629f,0f,8.573514f,15.15629f,0.0375f,8.573514f,15.12226f,0.075f,8.406569f,15.12226f,0.0375f,8.406569f,15.15629f,0.05625f,8.573514f,15.12226f,0.05625f,8.406569f,15.12226f,0f,8.406569f,15.15629f,0.01875f,8.573514f,15.12226f,0.01875f,8.406569f});
  }
}
private class MFInt32774 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32775 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f776 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.3637f,0f,7.477746f,14.55613f,0f,7.642357f,15.3637f,0.075f,7.477746f,14.55613f,0.075f,7.642357f,14.55613f,0f,7.642357f,14.69025f,0f,8.300337f,14.55613f,0.075f,7.642357f,14.69025f,0.075f,8.300337f,14.69025f,0f,8.300337f,15.49782f,0f,8.135725f,14.69025f,0.075f,8.300337f,15.49782f,0.075f,8.135725f,15.49782f,0f,8.135725f,15.3637f,0f,7.477746f,15.49782f,0.075f,8.135725f,15.3637f,0.075f,7.477746f});
  }
}
private class MFInt32777 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32778 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f779 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.22559f,0f,6.800169f,14.41802f,0f,6.964781f,15.22559f,0.075f,6.800169f,14.41802f,0.075f,6.964781f,14.41802f,0f,6.964781f,14.55214f,0f,7.62276f,14.41802f,0.075f,6.964781f,14.55214f,0.075f,7.62276f,14.55214f,0f,7.62276f,15.35971f,0f,7.458149f,14.55214f,0.075f,7.62276f,15.35971f,0.075f,7.458149f,15.35971f,0f,7.458149f,15.22559f,0f,6.800169f,15.35971f,0.075f,7.458149f,15.22559f,0.075f,6.800169f});
  }
}
private class MFInt32780 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32781 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f782 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.94936f,0f,5.445017f,14.55537f,0f,5.525325f,14.94936f,0.075f,5.445017f,14.55537f,0.075f,5.525325f,14.55537f,0f,5.525325f,14.82761f,0f,6.860881f,14.55537f,0.075f,5.525325f,14.82761f,0.075f,6.860881f,14.82761f,0f,6.860881f,15.22159f,0f,6.780572f,14.82761f,0.075f,6.860881f,15.22159f,0.075f,6.780572f,15.22159f,0f,6.780572f,14.94936f,0f,5.445017f,15.22159f,0.075f,6.780572f,14.94936f,0.075f,5.445017f});
  }
}
private class MFInt32783 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32784 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f785 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.53578f,0f,5.52932f,14.14179f,0f,5.609628f,14.53578f,0.075f,5.52932f,14.14179f,0.075f,5.609628f,14.14179f,0f,5.609628f,14.2779f,0f,6.277406f,14.41402f,0f,6.945184f,14.14179f,0.075f,5.609628f,14.2779f,0.075f,6.277406f,14.41402f,0.075f,6.945184f,14.20985f,0.075f,5.943517f,14.2779f,0.0375f,6.277406f,14.20985f,0f,5.943517f,14.20985f,0.0375f,5.943517f,14.17582f,0.0375f,5.776573f,14.20985f,0.01875f,5.943517f,14.17582f,0f,5.776573f,14.17582f,0.01875f,5.776573f,14.17582f,0.075f,5.776573f,14.20985f,0.05625f,5.943517f,14.17582f,0.05625f,5.776573f,14.34596f,0.075f,6.611295f,14.34596f,0f,6.611295f,14.34596f,0.0375f,6.611295f,14.37999f,0.075f,6.77824f,14.37999f,0.0375f,6.77824f,14.34596f,0.05625f,6.611295f,14.37999f,0.05625f,6.77824f,14.37999f,0f,6.77824f,14.34596f,0.01875f,6.611295f,14.37999f,0.01875f,6.77824f,14.41402f,0f,6.945184f,14.61101f,0f,6.90503f,14.80801f,0f,6.864876f,14.41402f,0.075f,6.945184f,14.61101f,0.075f,6.90503f,14.80801f,0.075f,6.864876f,14.80801f,0f,6.864876f,14.53578f,0f,5.52932f,14.80801f,0.075f,6.864876f,14.53578f,0.075f,5.52932f});
  }
}
private class MFInt32786 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32787 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f788 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.81124f,0f,4.76744f,14.00367f,0f,4.932052f,14.81124f,0.075f,4.76744f,14.00367f,0.075f,4.932052f,14.00367f,0f,4.932052f,14.13779f,0f,5.590031f,14.00367f,0.075f,4.932052f,14.13779f,0.075f,5.590031f,14.13779f,0f,5.590031f,14.94536f,0f,5.42542f,14.13779f,0.075f,5.590031f,14.94536f,0.075f,5.42542f,14.94536f,0f,5.42542f,14.81124f,0f,4.76744f,14.94536f,0.075f,5.42542f,14.81124f,0.075f,4.76744f});
  }
}
private class MFInt32789 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32790 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f791 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67313f,0f,4.089864f,13.86556f,0f,4.254475f,14.67313f,0.075f,4.089864f,13.86556f,0.075f,4.254475f,13.86556f,0f,4.254475f,13.99968f,0f,4.912455f,13.86556f,0.075f,4.254475f,13.99968f,0.075f,4.912455f,13.99968f,0f,4.912455f,14.80725f,0f,4.747843f,13.99968f,0.075f,4.912455f,14.80725f,0.075f,4.747843f,14.80725f,0f,4.747843f,14.67313f,0f,4.089864f,14.80725f,0.075f,4.747843f,14.67313f,0.075f,4.089864f});
  }
}
private class MFInt32792 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32793 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f794 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.3969f,0f,2.734711f,14.00292f,0f,2.815019f,14.3969f,0.075f,2.734711f,14.00292f,0.075f,2.815019f,14.00292f,0f,2.815019f,14.13903f,0f,3.482797f,14.27515f,0f,4.150575f,14.00292f,0.075f,2.815019f,14.13903f,0.075f,3.482797f,14.27515f,0.075f,4.150575f,14.07097f,0.075f,3.148908f,14.13903f,0.0375f,3.482797f,14.07097f,0f,3.148908f,14.07097f,0.0375f,3.148908f,14.03695f,0.0375f,2.981964f,14.07097f,0.01875f,3.148908f,14.03695f,0f,2.981964f,14.03695f,0.01875f,2.981964f,14.03695f,0.075f,2.981964f,14.07097f,0.05625f,3.148908f,14.03695f,0.05625f,2.981964f,14.20709f,0.075f,3.816686f,14.20709f,0f,3.816686f,14.20709f,0.0375f,3.816686f,14.24112f,0.075f,3.983631f,14.24112f,0.0375f,3.983631f,14.20709f,0.05625f,3.816686f,14.24112f,0.05625f,3.983631f,14.24112f,0f,3.983631f,14.20709f,0.01875f,3.816686f,14.24112f,0.01875f,3.983631f,14.27515f,0f,4.150575f,14.47214f,0f,4.110421f,14.66914f,0f,4.070267f,14.27515f,0.075f,4.150575f,14.47214f,0.075f,4.110421f,14.66914f,0.075f,4.070267f,14.66914f,0f,4.070267f,14.3969f,0f,2.734711f,14.66914f,0.075f,4.070267f,14.3969f,0.075f,2.734711f});
  }
}
private class MFInt32795 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32796 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f797 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.98332f,0f,2.819014f,13.58933f,0f,2.899323f,13.98332f,0.075f,2.819014f,13.58933f,0.075f,2.899323f,13.58933f,0f,2.899323f,13.86157f,0f,4.234878f,13.58933f,0.075f,2.899323f,13.86157f,0.075f,4.234878f,13.86157f,0f,4.234878f,14.25555f,0f,4.15457f,13.86157f,0.075f,4.234878f,14.25555f,0.075f,4.15457f,14.25555f,0f,4.15457f,13.98332f,0f,2.819014f,14.25555f,0.075f,4.15457f,13.98332f,0.075f,2.819014f});
  }
}
private class MFInt32798 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32799 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f800 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.57504f,0f,22.55303f,16.76747f,0f,22.71765f,17.57504f,0.075f,22.55303f,16.76747f,0.075f,22.71765f,16.76747f,0f,22.71765f,16.90159f,0f,23.37562f,16.76747f,0.075f,22.71765f,16.90159f,0.075f,23.37562f,16.90159f,0f,23.37562f,17.70916f,0f,23.21101f,16.90159f,0.075f,23.37562f,17.70916f,0.075f,23.21101f,17.70916f,0f,23.21101f,17.57504f,0f,22.55303f,17.70916f,0.075f,23.21101f,17.57504f,0.075f,22.55303f});
  }
}
private class MFInt32801 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32802 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f803 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.43693f,0f,21.87546f,16.62936f,0f,22.04007f,17.43693f,0.075f,21.87546f,16.62936f,0.075f,22.04007f,16.62936f,0f,22.04007f,16.76348f,0f,22.69805f,16.62936f,0.075f,22.04007f,16.76348f,0.075f,22.69805f,16.76348f,0f,22.69805f,17.57105f,0f,22.53344f,16.76348f,0.075f,22.69805f,17.57105f,0.075f,22.53344f,17.57105f,0f,22.53344f,17.43693f,0f,21.87546f,17.57105f,0.075f,22.53344f,17.43693f,0.075f,21.87546f});
  }
}
private class MFInt32804 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32805 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f806 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.1607f,0f,20.5203f,16.76671f,0f,20.60061f,17.1607f,0.075f,20.5203f,16.76671f,0.075f,20.60061f,16.76671f,0f,20.60061f,16.90283f,0f,21.26839f,17.03895f,0f,21.93617f,16.76671f,0.075f,20.60061f,16.90283f,0.075f,21.26839f,17.03895f,0.075f,21.93617f,16.83477f,0.075f,20.9345f,16.90283f,0.0375f,21.26839f,16.83477f,0f,20.9345f,16.83477f,0.0375f,20.9345f,16.80074f,0.0375f,20.76756f,16.83477f,0.01875f,20.9345f,16.80074f,0f,20.76756f,16.80074f,0.01875f,20.76756f,16.80074f,0.075f,20.76756f,16.83477f,0.05625f,20.9345f,16.80074f,0.05625f,20.76756f,16.97089f,0.075f,21.60228f,16.97089f,0f,21.60228f,16.97089f,0.0375f,21.60228f,17.00492f,0.075f,21.76922f,17.00492f,0.0375f,21.76922f,16.97089f,0.05625f,21.60228f,17.00492f,0.05625f,21.76922f,17.00492f,0f,21.76922f,16.97089f,0.01875f,21.60228f,17.00492f,0.01875f,21.76922f,17.03895f,0f,21.93617f,17.43293f,0f,21.85586f,17.03895f,0.075f,21.93617f,17.43293f,0.075f,21.85586f,17.43293f,0f,21.85586f,17.29682f,0f,21.18808f,17.1607f,0f,20.5203f,17.43293f,0.075f,21.85586f,17.29682f,0.075f,21.18808f,17.1607f,0.075f,20.5203f,17.36487f,0.075f,21.52197f,17.29682f,0.0375f,21.18808f,17.36487f,0f,21.52197f,17.36487f,0.0375f,21.52197f,17.3989f,0.0375f,21.68892f,17.36487f,0.01875f,21.52197f,17.3989f,0f,21.68892f,17.3989f,0.01875f,21.68892f,17.3989f,0.075f,21.68892f,17.36487f,0.05625f,21.52197f,17.3989f,0.05625f,21.68892f,17.22876f,0.075f,20.85419f,17.22876f,0f,20.85419f,17.22876f,0.0375f,20.85419f,17.19473f,0.075f,20.68725f,17.19473f,0.0375f,20.68725f,17.22876f,0.05625f,20.85419f,17.19473f,0.05625f,20.68725f,17.19473f,0f,20.68725f,17.22876f,0.01875f,20.85419f,17.19473f,0.01875f,20.68725f});
  }
}
private class MFInt32807 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32808 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f809 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.74711f,0f,20.60461f,16.35313f,0f,20.68492f,16.74711f,0.075f,20.60461f,16.35313f,0.075f,20.68492f,16.35313f,0f,20.68492f,16.48924f,0f,21.35269f,16.62536f,0f,22.02047f,16.35313f,0.075f,20.68492f,16.48924f,0.075f,21.35269f,16.62536f,0.075f,22.02047f,16.42119f,0.075f,21.0188f,16.48924f,0.0375f,21.35269f,16.42119f,0f,21.0188f,16.42119f,0.0375f,21.0188f,16.38716f,0.0375f,20.85186f,16.42119f,0.01875f,21.0188f,16.38716f,0f,20.85186f,16.38716f,0.01875f,20.85186f,16.38716f,0.075f,20.85186f,16.42119f,0.05625f,21.0188f,16.38716f,0.05625f,20.85186f,16.5573f,0.075f,21.68658f,16.5573f,0f,21.68658f,16.5573f,0.0375f,21.68658f,16.59133f,0.075f,21.85353f,16.59133f,0.0375f,21.85353f,16.5573f,0.05625f,21.68658f,16.59133f,0.05625f,21.85353f,16.59133f,0f,21.85353f,16.5573f,0.01875f,21.68658f,16.59133f,0.01875f,21.85353f,16.62536f,0f,22.02047f,17.01935f,0f,21.94016f,16.62536f,0.075f,22.02047f,17.01935f,0.075f,21.94016f,17.01935f,0f,21.94016f,16.88323f,0f,21.27238f,16.74711f,0f,20.60461f,17.01935f,0.075f,21.94016f,16.88323f,0.075f,21.27238f,16.74711f,0.075f,20.60461f,16.95129f,0.075f,21.60627f,16.88323f,0.0375f,21.27238f,16.95129f,0f,21.60627f,16.95129f,0.0375f,21.60627f,16.98532f,0.0375f,21.77322f,16.95129f,0.01875f,21.60627f,16.98532f,0f,21.77322f,16.98532f,0.01875f,21.77322f,16.98532f,0.075f,21.77322f,16.95129f,0.05625f,21.60627f,16.98532f,0.05625f,21.77322f,16.81517f,0.075f,20.9385f,16.81517f,0f,20.9385f,16.81517f,0.0375f,20.9385f,16.78114f,0.075f,20.77155f,16.78114f,0.0375f,20.77155f,16.81517f,0.05625f,20.9385f,16.78114f,0.05625f,20.77155f,16.78114f,0f,20.77155f,16.81517f,0.01875f,20.9385f,16.78114f,0.01875f,20.77155f});
  }
}
private class MFInt32810 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32811 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f812 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.02258f,0f,19.84273f,16.21501f,0f,20.00734f,17.02258f,0.075f,19.84273f,16.21501f,0.075f,20.00734f,16.21501f,0f,20.00734f,16.34913f,0f,20.66532f,16.21501f,0.075f,20.00734f,16.34913f,0.075f,20.66532f,16.34913f,0f,20.66532f,17.1567f,0f,20.50071f,16.34913f,0.075f,20.66532f,17.1567f,0.075f,20.50071f,17.1567f,0f,20.50071f,17.02258f,0f,19.84273f,17.1567f,0.075f,20.50071f,17.02258f,0.075f,19.84273f});
  }
}
private class MFInt32813 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32814 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f815 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.88447f,0f,19.16515f,16.0769f,0f,19.32976f,16.88447f,0.075f,19.16515f,16.0769f,0.075f,19.32976f,16.0769f,0f,19.32976f,16.21102f,0f,19.98774f,16.0769f,0.075f,19.32976f,16.21102f,0.075f,19.98774f,16.21102f,0f,19.98774f,17.01859f,0f,19.82313f,16.21102f,0.075f,19.98774f,17.01859f,0.075f,19.82313f,17.01859f,0f,19.82313f,16.88447f,0f,19.16515f,17.01859f,0.075f,19.82313f,16.88447f,0.075f,19.16515f});
  }
}
private class MFInt32816 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32817 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f818 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.60824f,0f,17.81f,16.21426f,0f,17.89031f,16.60824f,0.075f,17.81f,16.21426f,0.075f,17.89031f,16.21426f,0f,17.89031f,16.48649f,0f,19.22586f,16.21426f,0.075f,17.89031f,16.48649f,0.075f,19.22586f,16.48649f,0f,19.22586f,16.88048f,0f,19.14555f,16.48649f,0.075f,19.22586f,16.88048f,0.075f,19.14555f,16.88048f,0f,19.14555f,16.60824f,0f,17.81f,16.88048f,0.075f,19.14555f,16.60824f,0.075f,17.81f});
  }
}
private class MFInt32819 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32820 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f821 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.19466f,0f,17.8943f,15.80067f,0f,17.97461f,16.19466f,0.075f,17.8943f,15.80067f,0.075f,17.97461f,15.80067f,0f,17.97461f,16.0729f,0f,19.31017f,15.80067f,0.075f,17.97461f,16.0729f,0.075f,19.31017f,16.0729f,0f,19.31017f,16.46689f,0f,19.22986f,16.0729f,0.075f,19.31017f,16.46689f,0.075f,19.22986f,16.46689f,0f,19.22986f,16.19466f,0f,17.8943f,16.46689f,0.075f,19.22986f,16.19466f,0.075f,17.8943f});
  }
}
private class MFInt32822 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32823 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f824 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.47013f,0f,17.13242f,15.66256f,0f,17.29703f,16.47013f,0.075f,17.13242f,15.66256f,0.075f,17.29703f,15.66256f,0f,17.29703f,15.72962f,0f,17.62602f,15.79668f,0f,17.95501f,15.66256f,0.075f,17.29703f,15.72962f,0.075f,17.62602f,15.79668f,0.075f,17.95501f,15.69609f,0.075f,17.46153f,15.72962f,0.0375f,17.62602f,15.69609f,0f,17.46153f,15.69609f,0.0375f,17.46153f,15.76315f,0.075f,17.79052f,15.76315f,0f,17.79052f,15.76315f,0.0375f,17.79052f,15.79668f,0f,17.95501f,16.60425f,0f,17.7904f,15.79668f,0.075f,17.95501f,16.60425f,0.075f,17.7904f,16.60425f,0f,17.7904f,16.47013f,0f,17.13242f,16.60425f,0.075f,17.7904f,16.47013f,0.075f,17.13242f});
  }
}
private class MFInt32825 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32826 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f827 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.33201f,0f,16.45485f,15.52444f,0f,16.61946f,16.33201f,0.075f,16.45485f,15.52444f,0.075f,16.61946f,15.52444f,0f,16.61946f,15.65856f,0f,17.27744f,15.52444f,0.075f,16.61946f,15.65856f,0.075f,17.27744f,15.65856f,0f,17.27744f,16.46614f,0f,17.11283f,15.65856f,0.075f,17.27744f,16.46614f,0.075f,17.11283f,16.46614f,0f,17.11283f,16.33201f,0f,16.45485f,16.46614f,0.075f,17.11283f,16.33201f,0.075f,16.45485f});
  }
}
private class MFInt32828 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32829 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f830 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.05579f,0f,15.09969f,15.6618f,0f,15.18f,16.05579f,0.075f,15.09969f,15.6618f,0.075f,15.18f,15.6618f,0f,15.18f,15.93403f,0f,16.51556f,15.6618f,0.075f,15.18f,15.93403f,0.075f,16.51556f,15.93403f,0f,16.51556f,16.32802f,0f,16.43525f,15.93403f,0.075f,16.51556f,16.32802f,0.075f,16.43525f,16.32802f,0f,16.43525f,16.05579f,0f,15.09969f,16.32802f,0.075f,16.43525f,16.05579f,0.075f,15.09969f});
  }
}
private class MFInt32831 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFInt32832 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,36,35,37,-1,36,37,38,-1});
  }
}
private class MFVec3f833 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.6422f,0f,15.184f,15.24822f,0f,15.2643f,15.6422f,0.075f,15.184f,15.24822f,0.075f,15.2643f,15.24822f,0f,15.2643f,15.38433f,0f,15.93208f,15.52045f,0f,16.59986f,15.24822f,0.075f,15.2643f,15.38433f,0.075f,15.93208f,15.52045f,0.075f,16.59986f,15.31627f,0.075f,15.59819f,15.38433f,0.0375f,15.93208f,15.31627f,0f,15.59819f,15.31627f,0.0375f,15.59819f,15.28224f,0.0375f,15.43125f,15.31627f,0.01875f,15.59819f,15.28224f,0f,15.43125f,15.28224f,0.01875f,15.43125f,15.28224f,0.075f,15.43125f,15.31627f,0.05625f,15.59819f,15.28224f,0.05625f,15.43125f,15.45239f,0.075f,16.26597f,15.45239f,0f,16.26597f,15.45239f,0.0375f,16.26597f,15.48642f,0.075f,16.43291f,15.48642f,0.0375f,16.43291f,15.45239f,0.05625f,16.26597f,15.48642f,0.05625f,16.43291f,15.48642f,0f,16.43291f,15.45239f,0.01875f,16.26597f,15.48642f,0.01875f,16.43291f,15.52045f,0f,16.59986f,15.91444f,0f,16.51955f,15.52045f,0.075f,16.59986f,15.91444f,0.075f,16.51955f,15.91444f,0f,16.51955f,15.6422f,0f,15.184f,15.91444f,0.075f,16.51955f,15.6422f,0.075f,15.184f});
  }
}
private class MFInt32834 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32835 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f836 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91767f,0f,14.42212f,15.1101f,0f,14.58673f,15.91767f,0.075f,14.42212f,15.1101f,0.075f,14.58673f,15.1101f,0f,14.58673f,15.24422f,0f,15.24471f,15.1101f,0.075f,14.58673f,15.24422f,0.075f,15.24471f,15.24422f,0f,15.24471f,16.05179f,0f,15.0801f,15.24422f,0.075f,15.24471f,16.05179f,0.075f,15.0801f,16.05179f,0f,15.0801f,15.91767f,0f,14.42212f,16.05179f,0.075f,15.0801f,15.91767f,0.075f,14.42212f});
  }
}
private class MFInt32837 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32838 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f839 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.77956f,0f,13.74454f,14.97199f,0f,13.90915f,15.77956f,0.075f,13.74454f,14.97199f,0.075f,13.90915f,14.97199f,0f,13.90915f,15.10611f,0f,14.56713f,14.97199f,0.075f,13.90915f,15.10611f,0.075f,14.56713f,15.10611f,0f,14.56713f,15.91368f,0f,14.40252f,15.10611f,0.075f,14.56713f,15.91368f,0.075f,14.40252f,15.91368f,0f,14.40252f,15.77956f,0f,13.74454f,15.91368f,0.075f,14.40252f,15.77956f,0.075f,13.74454f});
  }
}
private class MFInt32840 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32841 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f842 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.50333f,0f,12.38939f,15.10934f,0f,12.4697f,15.50333f,0.075f,12.38939f,15.10934f,0.075f,12.4697f,15.10934f,0f,12.4697f,15.38158f,0f,13.80525f,15.10934f,0.075f,12.4697f,15.38158f,0.075f,13.80525f,15.38158f,0f,13.80525f,15.77556f,0f,13.72494f,15.38158f,0.075f,13.80525f,15.77556f,0.075f,13.72494f,15.77556f,0f,13.72494f,15.50333f,0f,12.38939f,15.77556f,0.075f,13.72494f,15.50333f,0.075f,12.38939f});
  }
}
private class MFInt32843 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32844 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f845 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.08975f,0f,12.47369f,14.89275f,0f,12.51384f,14.69576f,0f,12.554f,15.08975f,0.075f,12.47369f,14.89275f,0.075f,12.51384f,14.69576f,0.075f,12.554f,14.69576f,0f,12.554f,14.96799f,0f,13.88955f,14.69576f,0.075f,12.554f,14.96799f,0.075f,13.88955f,14.96799f,0f,13.88955f,15.36198f,0f,13.80925f,14.96799f,0.075f,13.88955f,15.36198f,0.075f,13.80925f,15.36198f,0f,13.80925f,15.08975f,0f,12.47369f,15.36198f,0.075f,13.80925f,15.08975f,0.075f,12.47369f});
  }
}
private class MFInt32846 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32847 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f848 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36522f,0f,11.71181f,14.55765f,0f,11.87642f,15.36522f,0.075f,11.71181f,14.55765f,0.075f,11.87642f,14.55765f,0f,11.87642f,14.69177f,0f,12.5344f,14.55765f,0.075f,11.87642f,14.69177f,0.075f,12.5344f,14.69177f,0f,12.5344f,15.49934f,0f,12.36979f,14.69177f,0.075f,12.5344f,15.49934f,0.075f,12.36979f,15.49934f,0f,12.36979f,15.36522f,0f,11.71181f,15.49934f,0.075f,12.36979f,15.36522f,0.075f,11.71181f});
  }
}
private class MFInt32849 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32850 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f851 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.2271f,0f,11.03423f,14.41953f,0f,11.19885f,15.2271f,0.075f,11.03423f,14.41953f,0.075f,11.19885f,14.41953f,0f,11.19885f,14.55365f,0f,11.85682f,14.41953f,0.075f,11.19885f,14.55365f,0.075f,11.85682f,14.55365f,0f,11.85682f,15.36122f,0f,11.69221f,14.55365f,0.075f,11.85682f,15.36122f,0.075f,11.69221f,15.36122f,0f,11.69221f,15.2271f,0f,11.03423f,15.36122f,0.075f,11.69221f,15.2271f,0.075f,11.03423f});
  }
}
private class MFInt32852 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32853 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f854 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.95088f,0f,9.679081f,14.55689f,0f,9.75939f,14.95088f,0.075f,9.679081f,14.55689f,0.075f,9.75939f,14.55689f,0f,9.75939f,14.82912f,0f,11.09495f,14.55689f,0.075f,9.75939f,14.82912f,0.075f,11.09495f,14.82912f,0f,11.09495f,15.22311f,0f,11.01464f,14.82912f,0.075f,11.09495f,15.22311f,0.075f,11.01464f,15.22311f,0f,11.01464f,14.95088f,0f,9.679081f,15.22311f,0.075f,11.01464f,14.95088f,0.075f,9.679081f});
  }
}
private class MFInt32855 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32856 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f857 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.53729f,0f,9.763384f,14.1433f,0f,9.843693f,14.53729f,0.075f,9.763384f,14.1433f,0.075f,9.843693f,14.1433f,0f,9.843693f,14.41554f,0f,11.17925f,14.1433f,0.075f,9.843693f,14.41554f,0.075f,11.17925f,14.41554f,0f,11.17925f,14.80952f,0f,11.09894f,14.41554f,0.075f,11.17925f,14.80952f,0.075f,11.09894f,14.80952f,0f,11.09894f,14.53729f,0f,9.763384f,14.80952f,0.075f,11.09894f,14.53729f,0.075f,9.763384f});
  }
}
private class MFInt32858 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32859 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f860 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.81276f,0f,9.001505f,14.00519f,0f,9.166117f,14.81276f,0.075f,9.001505f,14.00519f,0.075f,9.166117f,14.00519f,0f,9.166117f,14.13931f,0f,9.824096f,14.00519f,0.075f,9.166117f,14.13931f,0.075f,9.824096f,14.13931f,0f,9.824096f,14.94688f,0f,9.659484f,14.13931f,0.075f,9.824096f,14.94688f,0.075f,9.659484f,14.94688f,0f,9.659484f,14.81276f,0f,9.001505f,14.94688f,0.075f,9.659484f,14.81276f,0.075f,9.001505f});
  }
}
private class MFInt32861 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32862 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f863 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67465f,0f,8.323929f,13.86708f,0f,8.48854f,14.67465f,0.075f,8.323929f,13.86708f,0.075f,8.48854f,13.86708f,0f,8.48854f,14.00119f,0f,9.14652f,13.86708f,0.075f,8.48854f,14.00119f,0.075f,9.14652f,14.00119f,0f,9.14652f,14.80877f,0f,8.981908f,14.00119f,0.075f,9.14652f,14.80877f,0.075f,8.981908f,14.80877f,0f,8.981908f,14.67465f,0f,8.323929f,14.80877f,0.075f,8.981908f,14.67465f,0.075f,8.323929f});
  }
}
private class MFInt32864 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt32865 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f866 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.39842f,0f,6.968776f,14.20143f,0f,7.00893f,14.00443f,0f,7.049084f,14.39842f,0.075f,6.968776f,14.20143f,0.075f,7.00893f,14.00443f,0.075f,7.049084f,14.00443f,0f,7.049084f,14.27667f,0f,8.38464f,14.00443f,0.075f,7.049084f,14.27667f,0.075f,8.38464f,14.27667f,0f,8.38464f,14.67065f,0f,8.304332f,14.27667f,0.075f,8.38464f,14.67065f,0.075f,8.304332f,14.67065f,0f,8.304332f,14.39842f,0f,6.968776f,14.67065f,0.075f,8.304332f,14.39842f,0.075f,6.968776f});
  }
}
private class MFInt32867 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32868 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f869 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.98483f,0f,7.053079f,13.59085f,0f,7.133387f,13.98483f,0.075f,7.053079f,13.59085f,0.075f,7.133387f,13.59085f,0f,7.133387f,13.86308f,0f,8.468943f,13.59085f,0.075f,7.133387f,13.86308f,0.075f,8.468943f,13.86308f,0f,8.468943f,14.25707f,0f,8.388635f,13.86308f,0.075f,8.468943f,14.25707f,0.075f,8.388635f,14.25707f,0f,8.388635f,14.12095f,0f,7.720857f,13.98483f,0f,7.053079f,14.25707f,0.075f,8.388635f,14.12095f,0.075f,7.720857f,13.98483f,0.075f,7.053079f,14.18901f,0.075f,8.054746f,14.12095f,0.0375f,7.720857f,14.18901f,0f,8.054746f,14.18901f,0.0375f,8.054746f,14.22304f,0.0375f,8.22169f,14.18901f,0.01875f,8.054746f,14.22304f,0f,8.22169f,14.22304f,0.01875f,8.22169f,14.22304f,0.075f,8.22169f,14.18901f,0.05625f,8.054746f,14.22304f,0.05625f,8.22169f,14.05289f,0.075f,7.386968f,14.05289f,0f,7.386968f,14.05289f,0.0375f,7.386968f,14.01886f,0.075f,7.220023f,14.01886f,0.0375f,7.220023f,14.05289f,0.05625f,7.386968f,14.01886f,0.05625f,7.220023f,14.01886f,0f,7.220023f,14.05289f,0.01875f,7.386968f,14.01886f,0.01875f,7.220023f});
  }
}
private class MFInt32870 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32871 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f872 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.2603f,0f,6.291199f,13.85652f,0f,6.373505f,13.45273f,0f,6.455811f,14.2603f,0.075f,6.291199f,13.85652f,0.075f,6.373505f,13.45273f,0.075f,6.455811f,13.65463f,0.075f,6.414658f,13.65463f,0f,6.414658f,13.85652f,0.0375f,6.373505f,13.65463f,0.0375f,6.414658f,14.05841f,0.075f,6.332352f,14.05841f,0f,6.332352f,14.05841f,0.0375f,6.332352f,13.45273f,0f,6.455811f,13.58685f,0f,7.11379f,13.45273f,0.075f,6.455811f,13.58685f,0.075f,7.11379f,13.58685f,0f,7.11379f,14.39442f,0f,6.949179f,13.58685f,0.075f,7.11379f,14.39442f,0.075f,6.949179f,14.39442f,0f,6.949179f,14.2603f,0f,6.291199f,14.39442f,0.075f,6.949179f,14.2603f,0.075f,6.291199f});
  }
}
private class MFInt32873 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32874 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f875 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.12219f,0f,5.613623f,13.31462f,0f,5.778234f,14.12219f,0.075f,5.613623f,13.31462f,0.075f,5.778234f,13.31462f,0f,5.778234f,13.44874f,0f,6.436213f,13.31462f,0.075f,5.778234f,13.44874f,0.075f,6.436213f,13.44874f,0f,6.436213f,14.25631f,0f,6.271602f,13.44874f,0.075f,6.436213f,14.25631f,0.075f,6.271602f,14.25631f,0f,6.271602f,14.12219f,0f,5.613623f,14.25631f,0.075f,6.271602f,14.12219f,0.075f,5.613623f});
  }
}
private class MFInt32876 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32877 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f878 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.84596f,0f,4.25847f,13.45198f,0f,4.338778f,13.84596f,0.075f,4.25847f,13.45198f,0.075f,4.338778f,13.45198f,0f,4.338778f,13.72421f,0f,5.674334f,13.45198f,0.075f,4.338778f,13.72421f,0.075f,5.674334f,13.72421f,0f,5.674334f,14.1182f,0f,5.594026f,13.72421f,0.075f,5.674334f,14.1182f,0.075f,5.594026f,14.1182f,0f,5.594026f,13.98208f,0f,4.926248f,13.84596f,0f,4.25847f,14.1182f,0.075f,5.594026f,13.98208f,0.075f,4.926248f,13.84596f,0.075f,4.25847f,14.05014f,0.075f,5.260137f,13.98208f,0.0375f,4.926248f,14.05014f,0f,5.260137f,14.05014f,0.0375f,5.260137f,14.08417f,0.0375f,5.427081f,14.05014f,0.01875f,5.260137f,14.08417f,0f,5.427081f,14.08417f,0.01875f,5.427081f,14.08417f,0.075f,5.427081f,14.05014f,0.05625f,5.260137f,14.08417f,0.05625f,5.427081f,13.91402f,0.075f,4.592359f,13.91402f,0f,4.592359f,13.91402f,0.0375f,4.592359f,13.87999f,0.075f,4.425415f,13.87999f,0.0375f,4.425415f,13.91402f,0.05625f,4.592359f,13.87999f,0.05625f,4.425415f,13.87999f,0f,4.425415f,13.91402f,0.01875f,4.592359f,13.87999f,0.01875f,4.425415f});
  }
}
private class MFInt32879 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32880 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f881 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.43238f,0f,4.342773f,13.03839f,0f,4.423081f,13.43238f,0.075f,4.342773f,13.03839f,0.075f,4.423081f,13.03839f,0f,4.423081f,13.31063f,0f,5.758637f,13.03839f,0.075f,4.423081f,13.31063f,0.075f,5.758637f,13.31063f,0f,5.758637f,13.70461f,0f,5.678329f,13.31063f,0.075f,5.758637f,13.70461f,0.075f,5.678329f,13.70461f,0f,5.678329f,13.5685f,0f,5.010551f,13.43238f,0f,4.342773f,13.70461f,0.075f,5.678329f,13.5685f,0.075f,5.010551f,13.43238f,0.075f,4.342773f,13.63655f,0.075f,5.34444f,13.5685f,0.0375f,5.010551f,13.63655f,0f,5.34444f,13.63655f,0.0375f,5.34444f,13.67058f,0.0375f,5.511384f,13.63655f,0.01875f,5.34444f,13.67058f,0f,5.511384f,13.67058f,0.01875f,5.511384f,13.67058f,0.075f,5.511384f,13.63655f,0.05625f,5.34444f,13.67058f,0.05625f,5.511384f,13.50044f,0.075f,4.676662f,13.50044f,0f,4.676662f,13.50044f,0.0375f,4.676662f,13.46641f,0.075f,4.509717f,13.46641f,0.0375f,4.509717f,13.50044f,0.05625f,4.676662f,13.46641f,0.05625f,4.509717f,13.46641f,0f,4.509717f,13.50044f,0.01875f,4.676662f,13.46641f,0.01875f,4.509717f});
  }
}
private class MFInt32882 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32883 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f884 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.70785f,0f,3.580894f,13.30406f,0f,3.663199f,12.90028f,0f,3.745505f,13.70785f,0.075f,3.580894f,13.30406f,0.075f,3.663199f,12.90028f,0.075f,3.745505f,13.10217f,0.075f,3.704352f,13.10217f,0f,3.704352f,13.30406f,0.0375f,3.663199f,13.10217f,0.0375f,3.704352f,13.50596f,0.075f,3.622046f,13.50596f,0f,3.622046f,13.50596f,0.0375f,3.622046f,12.90028f,0f,3.745505f,13.0344f,0f,4.403484f,12.90028f,0.075f,3.745505f,13.0344f,0.075f,4.403484f,13.0344f,0f,4.403484f,13.84197f,0f,4.238873f,13.0344f,0.075f,4.403484f,13.84197f,0.075f,4.238873f,13.84197f,0f,4.238873f,13.70785f,0f,3.580894f,13.84197f,0.075f,4.238873f,13.70785f,0.075f,3.580894f});
  }
}
private class MFInt32885 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32886 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f887 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.56973f,0f,2.903317f,12.76216f,0f,3.067929f,13.56973f,0.075f,2.903317f,12.76216f,0.075f,3.067929f,12.76216f,0f,3.067929f,12.89628f,0f,3.725908f,12.76216f,0.075f,3.067929f,12.89628f,0.075f,3.725908f,12.89628f,0f,3.725908f,13.30007f,0f,3.643602f,13.70385f,0f,3.561296f,12.89628f,0.075f,3.725908f,13.30007f,0.075f,3.643602f,13.70385f,0.075f,3.561296f,13.09818f,0.075f,3.684755f,13.30007f,0.0375f,3.643602f,13.09818f,0f,3.684755f,13.09818f,0.0375f,3.684755f,13.50196f,0.075f,3.602449f,13.50196f,0f,3.602449f,13.50196f,0.0375f,3.602449f,13.70385f,0f,3.561296f,13.56973f,0f,2.903317f,13.70385f,0.075f,3.561296f,13.56973f,0.075f,2.903317f});
  }
}
private class MFInt32888 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32889 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f890 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.47165f,0f,21.36649f,15.66407f,0f,21.5311f,16.47165f,0.075f,21.36649f,15.66407f,0.075f,21.5311f,15.66407f,0f,21.5311f,15.73113f,0f,21.86009f,15.79819f,0f,22.18908f,15.66407f,0.075f,21.5311f,15.73113f,0.075f,21.86009f,15.79819f,0.075f,22.18908f,15.6976f,0.075f,21.69559f,15.73113f,0.0375f,21.86009f,15.6976f,0f,21.69559f,15.6976f,0.0375f,21.69559f,15.76466f,0.075f,22.02458f,15.76466f,0f,22.02458f,15.76466f,0.0375f,22.02458f,15.79819f,0f,22.18908f,16.60576f,0f,22.02447f,15.79819f,0.075f,22.18908f,16.60576f,0.075f,22.02447f,16.60576f,0f,22.02447f,16.47165f,0f,21.36649f,16.60576f,0.075f,22.02447f,16.47165f,0.075f,21.36649f});
  }
}
private class MFInt32891 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32892 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f893 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.33353f,0f,20.68891f,15.52596f,0f,20.85352f,16.33353f,0.075f,20.68891f,15.52596f,0.075f,20.85352f,15.52596f,0f,20.85352f,15.66008f,0f,21.5115f,15.52596f,0.075f,20.85352f,15.66008f,0.075f,21.5115f,15.66008f,0f,21.5115f,16.46765f,0f,21.34689f,15.66008f,0.075f,21.5115f,16.46765f,0.075f,21.34689f,16.46765f,0f,21.34689f,16.33353f,0f,20.68891f,16.46765f,0.075f,21.34689f,16.33353f,0.075f,20.68891f});
  }
}
private class MFInt32894 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32895 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f896 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.0573f,0f,19.33376f,15.66332f,0f,19.41407f,16.0573f,0.075f,19.33376f,15.66332f,0.075f,19.41407f,15.66332f,0f,19.41407f,15.79943f,0f,20.08184f,15.93555f,0f,20.74962f,15.66332f,0.075f,19.41407f,15.79943f,0.075f,20.08184f,15.93555f,0.075f,20.74962f,15.73137f,0.075f,19.74796f,15.79943f,0.0375f,20.08184f,15.73137f,0f,19.74796f,15.73137f,0.0375f,19.74796f,15.69734f,0.0375f,19.58101f,15.73137f,0.01875f,19.74796f,15.69734f,0f,19.58101f,15.69734f,0.01875f,19.58101f,15.69734f,0.075f,19.58101f,15.73137f,0.05625f,19.74796f,15.69734f,0.05625f,19.58101f,15.86749f,0.075f,20.41573f,15.86749f,0f,20.41573f,15.86749f,0.0375f,20.41573f,15.90152f,0.075f,20.58268f,15.90152f,0.0375f,20.58268f,15.86749f,0.05625f,20.41573f,15.90152f,0.05625f,20.58268f,15.90152f,0f,20.58268f,15.86749f,0.01875f,20.41573f,15.90152f,0.01875f,20.58268f,15.93555f,0f,20.74962f,16.32954f,0f,20.66931f,15.93555f,0.075f,20.74962f,16.32954f,0.075f,20.66931f,16.32954f,0f,20.66931f,16.19342f,0f,20.00154f,16.0573f,0f,19.33376f,16.32954f,0.075f,20.66931f,16.19342f,0.075f,20.00154f,16.0573f,0.075f,19.33376f,16.26148f,0.075f,20.33542f,16.19342f,0.0375f,20.00154f,16.26148f,0f,20.33542f,16.26148f,0.0375f,20.33542f,16.29551f,0.0375f,20.50237f,16.26148f,0.01875f,20.33542f,16.29551f,0f,20.50237f,16.29551f,0.01875f,20.50237f,16.29551f,0.075f,20.50237f,16.26148f,0.05625f,20.33542f,16.29551f,0.05625f,20.50237f,16.12536f,0.075f,19.66765f,16.12536f,0f,19.66765f,16.12536f,0.0375f,19.66765f,16.09133f,0.075f,19.5007f,16.09133f,0.0375f,19.5007f,16.12536f,0.05625f,19.66765f,16.09133f,0.05625f,19.5007f,16.09133f,0f,19.5007f,16.12536f,0.01875f,19.66765f,16.09133f,0.01875f,19.5007f});
  }
}
private class MFInt32897 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32898 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f899 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.64372f,0f,19.41806f,15.24973f,0f,19.49837f,15.64372f,0.075f,19.41806f,15.24973f,0.075f,19.49837f,15.24973f,0f,19.49837f,15.38585f,0f,20.16615f,15.52197f,0f,20.83393f,15.24973f,0.075f,19.49837f,15.38585f,0.075f,20.16615f,15.52197f,0.075f,20.83393f,15.31779f,0.075f,19.83226f,15.38585f,0.0375f,20.16615f,15.31779f,0f,19.83226f,15.31779f,0.0375f,19.83226f,15.28376f,0.0375f,19.66531f,15.31779f,0.01875f,19.83226f,15.28376f,0f,19.66531f,15.28376f,0.01875f,19.66531f,15.28376f,0.075f,19.66531f,15.31779f,0.05625f,19.83226f,15.28376f,0.05625f,19.66531f,15.45391f,0.075f,20.50004f,15.45391f,0f,20.50004f,15.45391f,0.0375f,20.50004f,15.48794f,0.075f,20.66698f,15.48794f,0.0375f,20.66698f,15.45391f,0.05625f,20.50004f,15.48794f,0.05625f,20.66698f,15.48794f,0f,20.66698f,15.45391f,0.01875f,20.50004f,15.48794f,0.01875f,20.66698f,15.52197f,0f,20.83393f,15.91595f,0f,20.75362f,15.52197f,0.075f,20.83393f,15.91595f,0.075f,20.75362f,15.91595f,0f,20.75362f,15.77984f,0f,20.08584f,15.64372f,0f,19.41806f,15.91595f,0.075f,20.75362f,15.77984f,0.075f,20.08584f,15.64372f,0.075f,19.41806f,15.84789f,0.075f,20.41973f,15.77984f,0.0375f,20.08584f,15.84789f,0f,20.41973f,15.84789f,0.0375f,20.41973f,15.88192f,0.0375f,20.58667f,15.84789f,0.01875f,20.41973f,15.88192f,0f,20.58667f,15.88192f,0.01875f,20.58667f,15.88192f,0.075f,20.58667f,15.84789f,0.05625f,20.41973f,15.88192f,0.05625f,20.58667f,15.71178f,0.075f,19.75195f,15.71178f,0f,19.75195f,15.71178f,0.0375f,19.75195f,15.67775f,0.075f,19.585f,15.67775f,0.0375f,19.585f,15.71178f,0.05625f,19.75195f,15.67775f,0.05625f,19.585f,15.67775f,0f,19.585f,15.71178f,0.01875f,19.75195f,15.67775f,0.01875f,19.585f});
  }
}
private class MFInt32900 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1});
  }
}
private class MFInt32901 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1});
  }
}
private class MFVec3f902 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91919f,0f,18.65618f,15.11162f,0f,18.82079f,15.91919f,0.075f,18.65618f,15.11162f,0.075f,18.82079f,15.11162f,0f,18.82079f,15.24574f,0f,19.47877f,15.11162f,0.075f,18.82079f,15.24574f,0.075f,19.47877f,15.24574f,0f,19.47877f,16.05331f,0f,19.31416f,15.24574f,0.075f,19.47877f,16.05331f,0.075f,19.31416f,16.05331f,0f,19.31416f,15.98625f,0f,18.98517f,15.91919f,0f,18.65618f,16.05331f,0.075f,19.31416f,15.98625f,0.075f,18.98517f,15.91919f,0.075f,18.65618f,16.01978f,0.075f,19.14967f,15.98625f,0.0375f,18.98517f,16.01978f,0f,19.14967f,16.01978f,0.0375f,19.14967f,15.95272f,0.075f,18.82067f,15.95272f,0f,18.82067f,15.95272f,0.0375f,18.82067f});
  }
}
private class MFInt32903 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32904 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f905 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.78107f,0f,17.97861f,14.9735f,0f,18.14322f,15.78107f,0.075f,17.97861f,14.9735f,0.075f,18.14322f,14.9735f,0f,18.14322f,15.10762f,0f,18.8012f,14.9735f,0.075f,18.14322f,15.10762f,0.075f,18.8012f,15.10762f,0f,18.8012f,15.91519f,0f,18.63658f,15.10762f,0.075f,18.8012f,15.91519f,0.075f,18.63658f,15.91519f,0f,18.63658f,15.78107f,0f,17.97861f,15.91519f,0.075f,18.63658f,15.78107f,0.075f,17.97861f});
  }
}
private class MFInt32906 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32907 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f908 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.50485f,0f,16.62345f,15.11086f,0f,16.70376f,15.50485f,0.075f,16.62345f,15.11086f,0.075f,16.70376f,15.11086f,0f,16.70376f,15.24698f,0f,17.37154f,15.38309f,0f,18.03932f,15.11086f,0.075f,16.70376f,15.24698f,0.075f,17.37154f,15.38309f,0.075f,18.03932f,15.17892f,0.075f,17.03765f,15.24698f,0.0375f,17.37154f,15.17892f,0f,17.03765f,15.17892f,0.0375f,17.03765f,15.14489f,0.0375f,16.8707f,15.17892f,0.01875f,17.03765f,15.14489f,0f,16.8707f,15.14489f,0.01875f,16.8707f,15.14489f,0.075f,16.8707f,15.17892f,0.05625f,17.03765f,15.14489f,0.05625f,16.8707f,15.31503f,0.075f,17.70543f,15.31503f,0f,17.70543f,15.31503f,0.0375f,17.70543f,15.34906f,0.075f,17.87237f,15.34906f,0.0375f,17.87237f,15.31503f,0.05625f,17.70543f,15.34906f,0.05625f,17.87237f,15.34906f,0f,17.87237f,15.31503f,0.01875f,17.70543f,15.34906f,0.01875f,17.87237f,15.38309f,0f,18.03932f,15.77708f,0f,17.95901f,15.38309f,0.075f,18.03932f,15.77708f,0.075f,17.95901f,15.77708f,0f,17.95901f,15.64096f,0f,17.29123f,15.50485f,0f,16.62345f,15.77708f,0.075f,17.95901f,15.64096f,0.075f,17.29123f,15.50485f,0.075f,16.62345f,15.70902f,0.075f,17.62512f,15.64096f,0.0375f,17.29123f,15.70902f,0f,17.62512f,15.70902f,0.0375f,17.62512f,15.74305f,0.0375f,17.79206f,15.70902f,0.01875f,17.62512f,15.74305f,0f,17.79206f,15.74305f,0.01875f,17.79206f,15.74305f,0.075f,17.79206f,15.70902f,0.05625f,17.62512f,15.74305f,0.05625f,17.79206f,15.57291f,0.075f,16.95734f,15.57291f,0f,16.95734f,15.57291f,0.0375f,16.95734f,15.53888f,0.075f,16.7904f,15.53888f,0.0375f,16.7904f,15.57291f,0.05625f,16.95734f,15.53888f,0.05625f,16.7904f,15.53888f,0f,16.7904f,15.57291f,0.01875f,16.95734f,15.53888f,0.01875f,16.7904f});
  }
}
private class MFInt32909 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt32910 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f911 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.09126f,0f,16.70775f,14.69728f,0f,16.78806f,15.09126f,0.075f,16.70775f,14.69728f,0.075f,16.78806f,14.69728f,0f,16.78806f,14.83339f,0f,17.45584f,14.96951f,0f,18.12362f,14.69728f,0.075f,16.78806f,14.83339f,0.075f,17.45584f,14.96951f,0.075f,18.12362f,14.76533f,0.075f,17.12195f,14.83339f,0.0375f,17.45584f,14.76533f,0f,17.12195f,14.76533f,0.0375f,17.12195f,14.73131f,0.0375f,16.95501f,14.76533f,0.01875f,17.12195f,14.73131f,0f,16.95501f,14.73131f,0.01875f,16.95501f,14.73131f,0.075f,16.95501f,14.76533f,0.05625f,17.12195f,14.73131f,0.05625f,16.95501f,14.90145f,0.075f,17.78973f,14.90145f,0f,17.78973f,14.90145f,0.0375f,17.78973f,14.93548f,0.075f,17.95667f,14.93548f,0.0375f,17.95667f,14.90145f,0.05625f,17.78973f,14.93548f,0.05625f,17.95667f,14.93548f,0f,17.95667f,14.90145f,0.01875f,17.78973f,14.93548f,0.01875f,17.95667f,14.96951f,0f,18.12362f,15.3635f,0f,18.04331f,14.96951f,0.075f,18.12362f,15.3635f,0.075f,18.04331f,15.3635f,0f,18.04331f,15.22738f,0f,17.37553f,15.09126f,0f,16.70775f,15.3635f,0.075f,18.04331f,15.22738f,0.075f,17.37553f,15.09126f,0.075f,16.70775f,15.29544f,0.075f,17.70942f,15.22738f,0.0375f,17.37553f,15.29544f,0f,17.70942f,15.29544f,0.0375f,17.70942f,15.32947f,0.0375f,17.87637f,15.29544f,0.01875f,17.70942f,15.32947f,0f,17.87637f,15.32947f,0.01875f,17.87637f,15.32947f,0.075f,17.87637f,15.29544f,0.05625f,17.70942f,15.32947f,0.05625f,17.87637f,15.15932f,0.075f,17.04164f,15.15932f,0f,17.04164f,15.15932f,0.0375f,17.04164f,15.12529f,0.075f,16.8747f,15.12529f,0.0375f,16.8747f,15.15932f,0.05625f,17.04164f,15.12529f,0.05625f,16.8747f,15.12529f,0f,16.8747f,15.15932f,0.01875f,17.04164f,15.12529f,0.01875f,16.8747f});
  }
}
private class MFInt32912 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32913 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f914 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36673f,0f,15.94588f,14.55916f,0f,16.11049f,15.36673f,0.075f,15.94588f,14.55916f,0.075f,16.11049f,14.55916f,0f,16.11049f,14.69328f,0f,16.76847f,14.55916f,0.075f,16.11049f,14.69328f,0.075f,16.76847f,14.69328f,0f,16.76847f,15.50085f,0f,16.60386f,14.69328f,0.075f,16.76847f,15.50085f,0.075f,16.60386f,15.50085f,0f,16.60386f,15.36673f,0f,15.94588f,15.50085f,0.075f,16.60386f,15.36673f,0.075f,15.94588f});
  }
}
private class MFInt32915 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt32916 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f917 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.22862f,0f,15.2683f,14.42105f,0f,15.43291f,15.22862f,0.075f,15.2683f,14.42105f,0.075f,15.43291f,14.42105f,0f,15.43291f,14.48811f,0f,15.7619f,14.55517f,0f,16.09089f,14.42105f,0.075f,15.43291f,14.48811f,0.075f,15.7619f,14.55517f,0.075f,16.09089f,14.45458f,0.075f,15.59741f,14.48811f,0.0375f,15.7619f,14.45458f,0f,15.59741f,14.45458f,0.0375f,15.59741f,14.52164f,0.075f,15.92639f,14.52164f,0f,15.92639f,14.52164f,0.0375f,15.92639f,14.55517f,0f,16.09089f,15.36274f,0f,15.92628f,14.55517f,0.075f,16.09089f,15.36274f,0.075f,15.92628f,15.36274f,0f,15.92628f,15.22862f,0f,15.2683f,15.36274f,0.075f,15.92628f,15.22862f,0.075f,15.2683f});
  }
}
private class MFInt32918 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32919 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f920 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.95239f,0f,13.91315f,14.7554f,0f,13.9533f,14.5584f,0f,13.99345f,14.95239f,0.075f,13.91315f,14.7554f,0.075f,13.9533f,14.5584f,0.075f,13.99345f,14.5584f,0f,13.99345f,14.83064f,0f,15.32901f,14.5584f,0.075f,13.99345f,14.83064f,0.075f,15.32901f,14.83064f,0f,15.32901f,15.02763f,0f,15.28886f,15.22462f,0f,15.2487f,14.83064f,0.075f,15.32901f,15.02763f,0.075f,15.28886f,15.22462f,0.075f,15.2487f,15.22462f,0f,15.2487f,14.95239f,0f,13.91315f,15.22462f,0.075f,15.2487f,14.95239f,0.075f,13.91315f});
  }
}
private class MFInt32921 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1});
  }
}
private class MFInt32922 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1});
  }
}
private class MFVec3f923 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.53881f,0f,13.99745f,14.34181f,0f,14.0376f,14.14482f,0f,14.07776f,14.53881f,0.075f,13.99745f,14.34181f,0.075f,14.0376f,14.14482f,0.075f,14.07776f,14.14482f,0f,14.07776f,14.28094f,0f,14.74553f,14.41705f,0f,15.41331f,14.14482f,0.075f,14.07776f,14.28094f,0.075f,14.74553f,14.41705f,0.075f,15.41331f,14.21288f,0.075f,14.41165f,14.28094f,0.0375f,14.74553f,14.21288f,0f,14.41165f,14.21288f,0.0375f,14.41165f,14.17885f,0.0375f,14.2447f,14.21288f,0.01875f,14.41165f,14.17885f,0f,14.2447f,14.17885f,0.01875f,14.2447f,14.17885f,0.075f,14.2447f,14.21288f,0.05625f,14.41165f,14.17885f,0.05625f,14.2447f,14.349f,0.075f,15.07942f,14.349f,0f,15.07942f,14.349f,0.0375f,15.07942f,14.38302f,0.075f,15.24637f,14.38302f,0.0375f,15.24637f,14.349f,0.05625f,15.07942f,14.38302f,0.05625f,15.24637f,14.38302f,0f,15.24637f,14.349f,0.01875f,15.07942f,14.38302f,0.01875f,15.24637f,14.41705f,0f,15.41331f,14.61405f,0f,15.37316f,14.81104f,0f,15.333f,14.41705f,0.075f,15.41331f,14.61405f,0.075f,15.37316f,14.81104f,0.075f,15.333f,14.81104f,0f,15.333f,14.53881f,0f,13.99745f,14.81104f,0.075f,15.333f,14.53881f,0.075f,13.99745f});
  }
}
private class MFInt32924 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32925 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f926 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.81428f,0f,13.23557f,14.00671f,0f,13.40018f,14.81428f,0.075f,13.23557f,14.00671f,0.075f,13.40018f,14.00671f,0f,13.40018f,14.14083f,0f,14.05816f,14.00671f,0.075f,13.40018f,14.14083f,0.075f,14.05816f,14.14083f,0f,14.05816f,14.9484f,0f,13.89355f,14.14083f,0.075f,14.05816f,14.9484f,0.075f,13.89355f,14.9484f,0f,13.89355f,14.81428f,0f,13.23557f,14.9484f,0.075f,13.89355f,14.81428f,0.075f,13.23557f});
  }
}
private class MFInt32927 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32928 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f929 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67616f,0f,12.55799f,13.86859f,0f,12.7226f,14.67616f,0.075f,12.55799f,13.86859f,0.075f,12.7226f,13.86859f,0f,12.7226f,14.00271f,0f,13.38058f,13.86859f,0.075f,12.7226f,14.00271f,0.075f,13.38058f,14.00271f,0f,13.38058f,14.81028f,0f,13.21597f,14.00271f,0.075f,13.38058f,14.81028f,0.075f,13.21597f,14.81028f,0f,13.21597f,14.67616f,0f,12.55799f,14.81028f,0.075f,13.21597f,14.67616f,0.075f,12.55799f});
  }
}
private class MFInt32930 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32931 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f932 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.39993f,0f,11.20284f,14.00595f,0f,11.28315f,14.39993f,0.075f,11.20284f,14.00595f,0.075f,11.28315f,14.00595f,0f,11.28315f,14.27818f,0f,12.6187f,14.00595f,0.075f,11.28315f,14.27818f,0.075f,12.6187f,14.27818f,0f,12.6187f,14.67217f,0f,12.5384f,14.27818f,0.075f,12.6187f,14.67217f,0.075f,12.5384f,14.67217f,0f,12.5384f,14.39993f,0f,11.20284f,14.67217f,0.075f,12.5384f,14.39993f,0.075f,11.20284f});
  }
}
private class MFInt32933 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt32934 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f935 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.98635f,0f,11.28714f,13.78936f,0f,11.3273f,13.59236f,0f,11.36745f,13.98635f,0.075f,11.28714f,13.78936f,0.075f,11.3273f,13.59236f,0.075f,11.36745f,13.59236f,0f,11.36745f,13.8646f,0f,12.70301f,13.59236f,0.075f,11.36745f,13.8646f,0.075f,12.70301f,13.8646f,0f,12.70301f,14.06159f,0f,12.66285f,14.25858f,0f,12.6227f,13.8646f,0.075f,12.70301f,14.06159f,0.075f,12.66285f,14.25858f,0.075f,12.6227f,14.25858f,0f,12.6227f,13.98635f,0f,11.28714f,14.25858f,0.075f,12.6227f,13.98635f,0.075f,11.28714f});
  }
}
private class MFInt32936 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32937 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f938 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.26182f,0f,10.52526f,13.45425f,0f,10.68988f,14.26182f,0.075f,10.52526f,13.45425f,0.075f,10.68988f,13.45425f,0f,10.68988f,13.58837f,0f,11.34785f,13.45425f,0.075f,10.68988f,13.58837f,0.075f,11.34785f,13.58837f,0f,11.34785f,14.39594f,0f,11.18324f,13.58837f,0.075f,11.34785f,14.39594f,0.075f,11.18324f,14.39594f,0f,11.18324f,14.26182f,0f,10.52526f,14.39594f,0.075f,11.18324f,14.26182f,0.075f,10.52526f});
  }
}
private class MFInt32939 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32940 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f941 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.12371f,0f,9.847688f,13.31614f,0f,10.0123f,14.12371f,0.075f,9.847688f,13.31614f,0.075f,10.0123f,13.31614f,0f,10.0123f,13.45026f,0f,10.67028f,13.31614f,0.075f,10.0123f,13.45026f,0.075f,10.67028f,13.45026f,0f,10.67028f,14.25783f,0f,10.50567f,13.45026f,0.075f,10.67028f,14.25783f,0.075f,10.50567f,14.25783f,0f,10.50567f,14.12371f,0f,9.847688f,14.25783f,0.075f,10.50567f,14.12371f,0.075f,9.847688f});
  }
}
private class MFInt32942 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1});
  }
}
private class MFInt32943 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,31,22,20,-1,23,25,31,-1,20,23,31,-1,27,25,23,-1,17,24,27,-1,23,17,27,-1,25,27,29,-1,25,29,26,-1,27,24,28,-1,27,28,29,-1,22,31,32,-1,22,32,30,-1,31,25,26,-1,31,26,32,-1,39,37,35,-1,39,35,38,-1,36,39,38,-1,36,38,33,-1,42,40,34,-1,42,34,41,-1,37,42,41,-1,37,41,35,-1,41,34,17,-1,23,35,41,-1,17,23,41,-1,38,35,23,-1,20,33,38,-1,23,20,38,-1,28,16,29,-1,26,29,16,-1,42,18,40,-1,37,18,42,-1,26,16,19,-1,30,32,19,-1,26,19,32,-1,21,37,39,-1,39,36,21,-1,18,37,21,-1});
  }
}
private class MFVec3f944 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.84748f,0f,8.492535f,13.65049f,0f,8.532689f,13.45349f,0f,8.572843f,13.84748f,0.075f,8.492535f,13.65049f,0.075f,8.532689f,13.45349f,0.075f,8.572843f,13.45349f,0f,8.572843f,13.72573f,0f,9.908399f,13.45349f,0.075f,8.572843f,13.72573f,0.075f,9.908399f,13.72573f,0f,9.908399f,13.92272f,0f,9.868244f,14.11971f,0f,9.828091f,13.72573f,0.075f,9.908399f,13.92272f,0.075f,9.868244f,14.11971f,0.075f,9.828091f,14.11971f,0f,9.828091f,13.9836f,0f,9.160313f,13.84748f,0f,8.492535f,14.11971f,0.075f,9.828091f,13.9836f,0.075f,9.160313f,13.84748f,0.075f,8.492535f,14.05165f,0.075f,9.494202f,13.9836f,0.0375f,9.160313f,14.05165f,0f,9.494202f,14.05165f,0.0375f,9.494202f,14.08568f,0.0375f,9.661146f,14.05165f,0.01875f,9.494202f,14.08568f,0f,9.661146f,14.08568f,0.01875f,9.661146f,14.08568f,0.075f,9.661146f,14.05165f,0.05625f,9.494202f,14.08568f,0.05625f,9.661146f,13.91554f,0.075f,8.826424f,13.91554f,0f,8.826424f,13.91554f,0.0375f,8.826424f,13.88151f,0.075f,8.659479f,13.88151f,0.0375f,8.659479f,13.91554f,0.05625f,8.826424f,13.88151f,0.05625f,8.659479f,13.88151f,0f,8.659479f,13.91554f,0.01875f,8.826424f,13.88151f,0.01875f,8.659479f});
  }
}
private class MFInt32945 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFInt32946 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,54,45,43,-1,46,48,54,-1,43,46,54,-1,50,48,46,-1,40,47,50,-1,46,40,50,-1,48,50,52,-1,48,52,49,-1,50,47,51,-1,50,51,52,-1,45,54,55,-1,45,55,53,-1,54,48,49,-1,54,49,55,-1,62,60,58,-1,62,58,61,-1,59,62,61,-1,59,61,56,-1,65,63,57,-1,65,57,64,-1,60,65,64,-1,60,64,58,-1,64,57,40,-1,46,58,64,-1,40,46,64,-1,61,58,46,-1,43,56,61,-1,46,43,61,-1,51,39,52,-1,49,52,39,-1,65,41,63,-1,60,41,65,-1,49,39,42,-1,53,55,42,-1,49,42,55,-1,44,60,62,-1,62,59,44,-1,41,60,44,-1});
  }
}
private class MFVec3f947 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.4339f,0f,8.576838f,13.2369f,0f,8.616992f,13.03991f,0f,8.657146f,13.4339f,0.075f,8.576838f,13.2369f,0.075f,8.616992f,13.03991f,0.075f,8.657146f,13.03991f,0f,8.657146f,13.17602f,0f,9.324924f,13.31214f,0f,9.992702f,13.03991f,0.075f,8.657146f,13.17602f,0.075f,9.324924f,13.31214f,0.075f,9.992702f,13.10797f,0.075f,8.991035f,13.17602f,0.0375f,9.324924f,13.10797f,0f,8.991035f,13.10797f,0.0375f,8.991035f,13.07394f,0.0375f,8.82409f,13.10797f,0.01875f,8.991035f,13.07394f,0f,8.82409f,13.07394f,0.01875f,8.82409f,13.07394f,0.075f,8.82409f,13.10797f,0.05625f,8.991035f,13.07394f,0.05625f,8.82409f,13.24408f,0.075f,9.658813f,13.24408f,0f,9.658813f,13.24408f,0.0375f,9.658813f,13.27811f,0.075f,9.825757f,13.27811f,0.0375f,9.825757f,13.24408f,0.05625f,9.658813f,13.27811f,0.05625f,9.825757f,13.27811f,0f,9.825757f,13.24408f,0.01875f,9.658813f,13.27811f,0.01875f,9.825757f,13.31214f,0f,9.992702f,13.50914f,0f,9.952547f,13.70613f,0f,9.912394f,13.31214f,0.075f,9.992702f,13.50914f,0.075f,9.952547f,13.70613f,0.075f,9.912394f,13.70613f,0f,9.912394f,13.57001f,0f,9.244616f,13.4339f,0f,8.576838f,13.70613f,0.075f,9.912394f,13.57001f,0.075f,9.244616f,13.4339f,0.075f,8.576838f,13.63807f,0.075f,9.578505f,13.57001f,0.0375f,9.244616f,13.63807f,0f,9.578505f,13.63807f,0.0375f,9.578505f,13.6721f,0.0375f,9.745449f,13.63807f,0.01875f,9.578505f,13.6721f,0f,9.745449f,13.6721f,0.01875f,9.745449f,13.6721f,0.075f,9.745449f,13.63807f,0.05625f,9.578505f,13.6721f,0.05625f,9.745449f,13.50195f,0.075f,8.910727f,13.50195f,0f,8.910727f,13.50195f,0.0375f,8.910727f,13.46792f,0.075f,8.743782f,13.46792f,0.0375f,8.743782f,13.50195f,0.05625f,8.910727f,13.46792f,0.05625f,8.743782f,13.46792f,0f,8.743782f,13.50195f,0.01875f,8.910727f,13.46792f,0.01875f,8.743782f});
  }
}
private class MFInt32948 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32949 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f950 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.70936f,0f,7.814958f,12.90179f,0f,7.979569f,13.70936f,0.075f,7.814958f,12.90179f,0.075f,7.979569f,12.90179f,0f,7.979569f,13.03591f,0f,8.637548f,12.90179f,0.075f,7.979569f,13.03591f,0.075f,8.637548f,13.03591f,0f,8.637548f,13.84348f,0f,8.472938f,13.03591f,0.075f,8.637548f,13.84348f,0.075f,8.472938f,13.84348f,0f,8.472938f,13.70936f,0f,7.814958f,13.84348f,0.075f,8.472938f,13.70936f,0.075f,7.814958f});
  }
}
private class MFInt32951 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32952 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f953 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.57125f,0f,7.137382f,12.76368f,0f,7.301993f,13.57125f,0.075f,7.137382f,12.76368f,0.075f,7.301993f,12.76368f,0f,7.301993f,12.8978f,0f,7.959972f,12.76368f,0.075f,7.301993f,12.8978f,0.075f,7.959972f,12.8978f,0f,7.959972f,13.70537f,0f,7.795361f,12.8978f,0.075f,7.959972f,13.70537f,0.075f,7.795361f,13.70537f,0f,7.795361f,13.57125f,0f,7.137382f,13.70537f,0.075f,7.795361f,13.57125f,0.075f,7.137382f});
  }
}
private class MFInt32954 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32955 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f956 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.29502f,0f,5.782229f,12.90104f,0f,5.862537f,13.29502f,0.075f,5.782229f,12.90104f,0.075f,5.862537f,12.90104f,0f,5.862537f,13.17327f,0f,7.198093f,12.90104f,0.075f,5.862537f,13.17327f,0.075f,7.198093f,13.17327f,0f,7.198093f,13.56726f,0f,7.117785f,13.17327f,0.075f,7.198093f,13.56726f,0.075f,7.117785f,13.56726f,0f,7.117785f,13.29502f,0f,5.782229f,13.56726f,0.075f,7.117785f,13.29502f,0.075f,5.782229f});
  }
}
private class MFInt32957 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32958 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f959 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.88144f,0f,5.866532f,12.48745f,0f,5.94684f,12.88144f,0.075f,5.866532f,12.48745f,0.075f,5.94684f,12.48745f,0f,5.94684f,12.75969f,0f,7.282396f,12.48745f,0.075f,5.94684f,12.75969f,0.075f,7.282396f,12.75969f,0f,7.282396f,13.15367f,0f,7.202087f,12.75969f,0.075f,7.282396f,13.15367f,0.075f,7.202087f,13.15367f,0f,7.202087f,12.88144f,0f,5.866532f,13.15367f,0.075f,7.202087f,12.88144f,0.075f,5.866532f});
  }
}
private class MFInt32960 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32961 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f962 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.15691f,0f,5.104652f,12.34934f,0f,5.269264f,13.15691f,0.075f,5.104652f,12.34934f,0.075f,5.269264f,12.34934f,0f,5.269264f,12.48346f,0f,5.927243f,12.34934f,0.075f,5.269264f,12.48346f,0.075f,5.927243f,12.48346f,0f,5.927243f,13.29103f,0f,5.762632f,12.48346f,0.075f,5.927243f,13.29103f,0.075f,5.762632f,13.29103f,0f,5.762632f,13.15691f,0f,5.104652f,13.29103f,0.075f,5.762632f,13.15691f,0.075f,5.104652f});
  }
}
private class MFInt32963 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32964 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f965 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.0188f,0f,4.427076f,12.21122f,0f,4.591687f,13.0188f,0.075f,4.427076f,12.21122f,0.075f,4.591687f,12.21122f,0f,4.591687f,12.34534f,0f,5.249667f,12.21122f,0.075f,4.591687f,12.34534f,0.075f,5.249667f,12.34534f,0f,5.249667f,13.15291f,0f,5.085055f,12.34534f,0.075f,5.249667f,13.15291f,0.075f,5.085055f,13.15291f,0f,5.085055f,13.0188f,0f,4.427076f,13.15291f,0.075f,5.085055f,13.0188f,0.075f,4.427076f});
  }
}
private class MFInt32966 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32967 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f968 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.74257f,0f,3.071923f,12.34858f,0f,3.152231f,12.74257f,0.075f,3.071923f,12.34858f,0.075f,3.152231f,12.34858f,0f,3.152231f,12.62081f,0f,4.487787f,12.34858f,0.075f,3.152231f,12.62081f,0.075f,4.487787f,12.62081f,0f,4.487787f,13.0148f,0f,4.407479f,12.62081f,0.075f,4.487787f,13.0148f,0.075f,4.407479f,13.0148f,0f,4.407479f,12.74257f,0f,3.071923f,13.0148f,0.075f,4.407479f,12.74257f,0.075f,3.071923f});
  }
}
private class MFInt32969 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32970 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f971 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.32898f,0f,3.156226f,11.935f,0f,3.236535f,12.32898f,0.075f,3.156226f,11.935f,0.075f,3.236535f,11.935f,0f,3.236535f,12.20723f,0f,4.57209f,11.935f,0.075f,3.236535f,12.20723f,0.075f,4.57209f,12.20723f,0f,4.57209f,12.60122f,0f,4.491782f,12.20723f,0.075f,4.57209f,12.60122f,0.075f,4.491782f,12.60122f,0f,4.491782f,12.32898f,0f,3.156226f,12.60122f,0.075f,4.491782f,12.32898f,0.075f,3.156226f});
  }
}
private class MFInt32972 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32973 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f974 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.60445f,0f,2.394347f,11.79688f,0f,2.558958f,12.60445f,0.075f,2.394347f,11.79688f,0.075f,2.558958f,11.79688f,0f,2.558958f,11.931f,0f,3.216938f,11.79688f,0.075f,2.558958f,11.931f,0.075f,3.216938f,11.931f,0f,3.216938f,12.73857f,0f,3.052326f,11.931f,0.075f,3.216938f,12.73857f,0.075f,3.052326f,12.73857f,0f,3.052326f,12.60445f,0f,2.394347f,12.73857f,0.075f,3.052326f,12.60445f,0.075f,2.394347f});
  }
}
private class MFInt32975 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1});
  }
}
private class MFInt32976 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1});
  }
}
private class MFVec3f977 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36825f,0f,20.17994f,14.56068f,0f,20.34455f,15.36825f,0.075f,20.17994f,14.56068f,0.075f,20.34455f,14.56068f,0f,20.34455f,14.6948f,0f,21.00253f,14.56068f,0.075f,20.34455f,14.6948f,0.075f,21.00253f,14.6948f,0f,21.00253f,15.50237f,0f,20.83792f,14.6948f,0.075f,21.00253f,15.50237f,0.075f,20.83792f,15.50237f,0f,20.83792f,15.43531f,0f,20.50893f,15.36825f,0f,20.17994f,15.50237f,0.075f,20.83792f,15.43531f,0.075f,20.50893f,15.36825f,0.075f,20.17994f,15.46884f,0.075f,20.67342f,15.43531f,0.0375f,20.50893f,15.46884f,0f,20.67342f,15.46884f,0.0375f,20.67342f,15.40178f,0.075f,20.34443f,15.40178f,0f,20.34443f,15.40178f,0.0375f,20.34443f});
  }
}
private class MFInt32978 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32979 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f980 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.23013f,0f,19.50236f,14.42256f,0f,19.66698f,15.23013f,0.075f,19.50236f,14.42256f,0.075f,19.66698f,14.42256f,0f,19.66698f,14.55668f,0f,20.32495f,14.42256f,0.075f,19.66698f,14.55668f,0.075f,20.32495f,14.55668f,0f,20.32495f,15.36425f,0f,20.16034f,14.55668f,0.075f,20.32495f,15.36425f,0.075f,20.16034f,15.36425f,0f,20.16034f,15.23013f,0f,19.50236f,15.36425f,0.075f,20.16034f,15.23013f,0.075f,19.50236f});
  }
}
private class MFInt32981 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32982 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f983 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.95391f,0f,18.14721f,14.55992f,0f,18.22752f,14.95391f,0.075f,18.14721f,14.55992f,0.075f,18.22752f,14.55992f,0f,18.22752f,14.83215f,0f,19.56307f,14.55992f,0.075f,18.22752f,14.83215f,0.075f,19.56307f,14.83215f,0f,19.56307f,15.22614f,0f,19.48277f,14.83215f,0.075f,19.56307f,15.22614f,0.075f,19.48277f,15.22614f,0f,19.48277f,14.95391f,0f,18.14721f,15.22614f,0.075f,19.48277f,14.95391f,0.075f,18.14721f});
  }
}
private class MFInt32984 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32985 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f986 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.54032f,0f,18.23151f,14.14634f,0f,18.31182f,14.54032f,0.075f,18.23151f,14.14634f,0.075f,18.31182f,14.14634f,0f,18.31182f,14.41857f,0f,19.64738f,14.14634f,0.075f,18.31182f,14.41857f,0.075f,19.64738f,14.41857f,0f,19.64738f,14.81256f,0f,19.56707f,14.41857f,0.075f,19.64738f,14.81256f,0.075f,19.56707f,14.81256f,0f,19.56707f,14.54032f,0f,18.23151f,14.81256f,0.075f,19.56707f,14.54032f,0.075f,18.23151f});
  }
}
private class MFInt32987 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32988 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f989 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.81579f,0f,17.46964f,14.00822f,0f,17.63424f,14.81579f,0.075f,17.46964f,14.00822f,0.075f,17.63424f,14.00822f,0f,17.63424f,14.14234f,0f,18.29222f,14.00822f,0.075f,17.63424f,14.14234f,0.075f,18.29222f,14.14234f,0f,18.29222f,14.94991f,0f,18.12761f,14.14234f,0.075f,18.29222f,14.94991f,0.075f,18.12761f,14.94991f,0f,18.12761f,14.81579f,0f,17.46964f,14.94991f,0.075f,18.12761f,14.81579f,0.075f,17.46964f});
  }
}
private class MFInt32990 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt32991 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f992 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67768f,0f,16.79206f,13.87011f,0f,16.95667f,14.67768f,0.075f,16.79206f,13.87011f,0.075f,16.95667f,13.87011f,0f,16.95667f,14.00423f,0f,17.61465f,13.87011f,0.075f,16.95667f,14.00423f,0.075f,17.61465f,14.00423f,0f,17.61465f,14.8118f,0f,17.45004f,14.00423f,0.075f,17.61465f,14.8118f,0.075f,17.45004f,14.8118f,0f,17.45004f,14.67768f,0f,16.79206f,14.8118f,0.075f,17.45004f,14.67768f,0.075f,16.79206f});
  }
}
private class MFInt32993 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt32994 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,35,-1,34,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f995 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.40145f,0f,15.4369f,14.20446f,0f,15.47706f,14.00746f,0f,15.51721f,14.40145f,0.075f,15.4369f,14.20446f,0.075f,15.47706f,14.00746f,0.075f,15.51721f,14.00746f,0f,15.51721f,14.14358f,0f,16.18499f,14.2797f,0f,16.85277f,14.00746f,0.075f,15.51721f,14.14358f,0.075f,16.18499f,14.2797f,0.075f,16.85277f,14.07552f,0.075f,15.8511f,14.14358f,0.0375f,16.18499f,14.07552f,0f,15.8511f,14.07552f,0.0375f,15.8511f,14.04149f,0.0375f,15.68416f,14.07552f,0.01875f,15.8511f,14.04149f,0f,15.68416f,14.04149f,0.01875f,15.68416f,14.04149f,0.075f,15.68416f,14.07552f,0.05625f,15.8511f,14.04149f,0.05625f,15.68416f,14.21164f,0.075f,16.51888f,14.21164f,0f,16.51888f,14.21164f,0.0375f,16.51888f,14.24567f,0.075f,16.68583f,14.24567f,0.0375f,16.68583f,14.21164f,0.05625f,16.51888f,14.24567f,0.05625f,16.68583f,14.24567f,0f,16.68583f,14.21164f,0.01875f,16.51888f,14.24567f,0.01875f,16.68583f,14.2797f,0f,16.85277f,14.67368f,0f,16.77246f,14.2797f,0.075f,16.85277f,14.67368f,0.075f,16.77246f,14.67368f,0f,16.77246f,14.40145f,0f,15.4369f,14.67368f,0.075f,16.77246f,14.40145f,0.075f,15.4369f});
  }
}
private class MFInt32996 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt32997 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f998 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.98787f,0f,15.52121f,13.59388f,0f,15.60152f,13.98787f,0.075f,15.52121f,13.59388f,0.075f,15.60152f,13.59388f,0f,15.60152f,13.86611f,0f,16.93707f,13.59388f,0.075f,15.60152f,13.86611f,0.075f,16.93707f,13.86611f,0f,16.93707f,14.2601f,0f,16.85676f,13.86611f,0.075f,16.93707f,14.2601f,0.075f,16.85676f,14.2601f,0f,16.85676f,14.12398f,0f,16.18899f,13.98787f,0f,15.52121f,14.2601f,0.075f,16.85676f,14.12398f,0.075f,16.18899f,13.98787f,0.075f,15.52121f,14.19204f,0.075f,16.52287f,14.12398f,0.0375f,16.18899f,14.19204f,0f,16.52287f,14.19204f,0.0375f,16.52287f,14.22607f,0.0375f,16.68982f,14.19204f,0.01875f,16.52287f,14.22607f,0f,16.68982f,14.22607f,0.01875f,16.68982f,14.22607f,0.075f,16.68982f,14.19204f,0.05625f,16.52287f,14.22607f,0.05625f,16.68982f,14.05593f,0.075f,15.8551f,14.05593f,0f,15.8551f,14.05593f,0.0375f,15.8551f,14.0219f,0.075f,15.68815f,14.0219f,0.0375f,15.68815f,14.05593f,0.05625f,15.8551f,14.0219f,0.05625f,15.68815f,14.0219f,0f,15.68815f,14.05593f,0.01875f,15.8551f,14.0219f,0.01875f,15.68815f});
  }
}
private class MFInt32999 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321000 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1001 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.26334f,0f,14.75933f,13.45577f,0f,14.92394f,14.26334f,0.075f,14.75933f,13.45577f,0.075f,14.92394f,13.45577f,0f,14.92394f,13.58989f,0f,15.58192f,13.45577f,0.075f,14.92394f,13.58989f,0.075f,15.58192f,13.58989f,0f,15.58192f,14.39746f,0f,15.41731f,13.58989f,0.075f,15.58192f,14.39746f,0.075f,15.41731f,14.39746f,0f,15.41731f,14.26334f,0f,14.75933f,14.39746f,0.075f,15.41731f,14.26334f,0.075f,14.75933f});
  }
}
private class MFInt321002 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321003 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1004 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.74408f,0f,7.305988f,12.3501f,0f,7.386296f,12.74408f,0.075f,7.305988f,12.3501f,0.075f,7.386296f,12.3501f,0f,7.386296f,12.62233f,0f,8.721852f,12.3501f,0.075f,7.386296f,12.62233f,0.075f,8.721852f,12.62233f,0f,8.721852f,12.81932f,0f,8.681698f,13.01632f,0f,8.641543f,12.62233f,0.075f,8.721852f,12.81932f,0.075f,8.681698f,13.01632f,0.075f,8.641543f,13.01632f,0f,8.641543f,12.74408f,0f,7.305988f,13.01632f,0.075f,8.641543f,12.74408f,0.075f,7.305988f});
  }
}
private class MFInt321005 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt321006 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f1007 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.3305f,0f,7.390291f,12.13351f,0f,7.430445f,11.93651f,0f,7.470599f,12.3305f,0.075f,7.390291f,12.13351f,0.075f,7.430445f,11.93651f,0.075f,7.470599f,11.93651f,0f,7.470599f,12.20875f,0f,8.806155f,11.93651f,0.075f,7.470599f,12.20875f,0.075f,8.806155f,12.20875f,0f,8.806155f,12.40574f,0f,8.766001f,12.60273f,0f,8.725846f,12.20875f,0.075f,8.806155f,12.40574f,0.075f,8.766001f,12.60273f,0.075f,8.725846f,12.60273f,0f,8.725846f,12.3305f,0f,7.390291f,12.60273f,0.075f,8.725846f,12.3305f,0.075f,7.390291f});
  }
}
private class MFInt321008 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321009 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1010 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.60597f,0f,6.628411f,11.7984f,0f,6.793023f,12.60597f,0.075f,6.628411f,11.7984f,0.075f,6.793023f,11.7984f,0f,6.793023f,11.93252f,0f,7.451002f,11.7984f,0.075f,6.793023f,11.93252f,0.075f,7.451002f,11.93252f,0f,7.451002f,12.74009f,0f,7.286391f,11.93252f,0.075f,7.451002f,12.74009f,0.075f,7.286391f,12.74009f,0f,7.286391f,12.60597f,0f,6.628411f,12.74009f,0.075f,7.286391f,12.60597f,0.075f,6.628411f});
  }
}
private class MFInt321011 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321012 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1013 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.46786f,0f,5.950835f,11.66028f,0f,6.115446f,12.46786f,0.075f,5.950835f,11.66028f,0.075f,6.115446f,11.66028f,0f,6.115446f,11.7944f,0f,6.773426f,11.66028f,0.075f,6.115446f,11.7944f,0.075f,6.773426f,11.7944f,0f,6.773426f,12.19819f,0f,6.69112f,12.60197f,0f,6.608814f,11.7944f,0.075f,6.773426f,12.19819f,0.075f,6.69112f,12.60197f,0.075f,6.608814f,11.9963f,0.075f,6.732273f,12.19819f,0.0375f,6.69112f,11.9963f,0f,6.732273f,11.9963f,0.0375f,6.732273f,12.40008f,0.075f,6.649967f,12.40008f,0f,6.649967f,12.40008f,0.0375f,6.649967f,12.60197f,0f,6.608814f,12.46786f,0f,5.950835f,12.60197f,0.075f,6.608814f,12.46786f,0.075f,5.950835f});
  }
}
private class MFInt321014 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt321015 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f1016 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.19163f,0f,4.595682f,11.79764f,0f,4.675991f,12.19163f,0.075f,4.595682f,11.79764f,0.075f,4.675991f,11.79764f,0f,4.675991f,11.93376f,0f,5.343768f,12.06987f,0f,6.011546f,11.79764f,0.075f,4.675991f,11.93376f,0.075f,5.343768f,12.06987f,0.075f,6.011546f,11.8657f,0.075f,5.009879f,11.93376f,0.0375f,5.343768f,11.8657f,0f,5.009879f,11.8657f,0.0375f,5.009879f,11.83167f,0.0375f,4.842935f,11.8657f,0.01875f,5.009879f,11.83167f,0f,4.842935f,11.83167f,0.01875f,4.842935f,11.83167f,0.075f,4.842935f,11.8657f,0.05625f,5.009879f,11.83167f,0.05625f,4.842935f,12.00181f,0.075f,5.677657f,12.00181f,0f,5.677657f,12.00181f,0.0375f,5.677657f,12.03584f,0.075f,5.844602f,12.03584f,0.0375f,5.844602f,12.00181f,0.05625f,5.677657f,12.03584f,0.05625f,5.844602f,12.03584f,0f,5.844602f,12.00181f,0.01875f,5.677657f,12.03584f,0.01875f,5.844602f,12.06987f,0f,6.011546f,12.26687f,0f,5.971392f,12.46386f,0f,5.931238f,12.06987f,0.075f,6.011546f,12.26687f,0.075f,5.971392f,12.46386f,0.075f,5.931238f,12.46386f,0f,5.931238f,12.19163f,0f,4.595682f,12.46386f,0.075f,5.931238f,12.19163f,0.075f,4.595682f});
  }
}
private class MFInt321017 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt321018 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f1019 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.77804f,0f,4.679985f,11.38406f,0f,4.760293f,11.77804f,0.075f,4.679985f,11.38406f,0.075f,4.760293f,11.38406f,0f,4.760293f,11.65629f,0f,6.095849f,11.38406f,0.075f,4.760293f,11.65629f,0.075f,6.095849f,11.65629f,0f,6.095849f,12.05028f,0f,6.015541f,11.65629f,0.075f,6.095849f,12.05028f,0.075f,6.015541f,12.05028f,0f,6.015541f,11.91416f,0f,5.347763f,11.77804f,0f,4.679985f,12.05028f,0.075f,6.015541f,11.91416f,0.075f,5.347763f,11.77804f,0.075f,4.679985f,11.98222f,0.075f,5.681652f,11.91416f,0.0375f,5.347763f,11.98222f,0f,5.681652f,11.98222f,0.0375f,5.681652f,12.01625f,0.0375f,5.848596f,11.98222f,0.01875f,5.681652f,12.01625f,0f,5.848596f,12.01625f,0.01875f,5.848596f,12.01625f,0.075f,5.848596f,11.98222f,0.05625f,5.681652f,12.01625f,0.05625f,5.848596f,11.8461f,0.075f,5.013874f,11.8461f,0f,5.013874f,11.8461f,0.0375f,5.013874f,11.81207f,0.075f,4.84693f,11.81207f,0.0375f,4.84693f,11.8461f,0.05625f,5.013874f,11.81207f,0.05625f,4.84693f,11.81207f,0f,4.84693f,11.8461f,0.01875f,5.013874f,11.81207f,0.01875f,4.84693f});
  }
}
private class MFInt321020 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321021 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1022 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.05351f,0f,3.918105f,11.24594f,0f,4.082717f,12.05351f,0.075f,3.918105f,11.24594f,0.075f,4.082717f,11.24594f,0f,4.082717f,11.38006f,0f,4.740696f,11.24594f,0.075f,4.082717f,11.38006f,0.075f,4.740696f,11.38006f,0f,4.740696f,11.78385f,0f,4.658391f,12.18763f,0f,4.576085f,11.38006f,0.075f,4.740696f,11.78385f,0.075f,4.658391f,12.18763f,0.075f,4.576085f,11.58195f,0.075f,4.699543f,11.78385f,0.0375f,4.658391f,11.58195f,0f,4.699543f,11.58195f,0.0375f,4.699543f,11.98574f,0.075f,4.617238f,11.98574f,0f,4.617238f,11.98574f,0.0375f,4.617238f,12.18763f,0f,4.576085f,12.05351f,0f,3.918105f,12.18763f,0.075f,4.576085f,12.05351f,0.075f,3.918105f});
  }
}
private class MFInt321023 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321024 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1025 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.9154f,0f,3.240529f,11.10783f,0f,3.40514f,11.9154f,0.075f,3.240529f,11.10783f,0.075f,3.40514f,11.10783f,0f,3.40514f,11.24195f,0f,4.06312f,11.10783f,0.075f,3.40514f,11.24195f,0.075f,4.06312f,11.24195f,0f,4.06312f,12.04952f,0f,3.898509f,11.24195f,0.075f,4.06312f,12.04952f,0.075f,3.898509f,12.04952f,0f,3.898509f,11.9154f,0f,3.240529f,12.04952f,0.075f,3.898509f,11.9154f,0.075f,3.240529f});
  }
}
private class MFInt321026 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321027 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1028 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.63917f,0f,1.885376f,11.44218f,0f,1.92553f,11.24518f,0f,1.965685f,11.63917f,0.075f,1.885376f,11.44218f,0.075f,1.92553f,11.24518f,0.075f,1.965685f,11.24518f,0f,1.965685f,11.51742f,0f,3.30124f,11.24518f,0.075f,1.965685f,11.51742f,0.075f,3.30124f,11.51742f,0f,3.30124f,11.9114f,0f,3.220932f,11.51742f,0.075f,3.30124f,11.9114f,0.075f,3.220932f,11.9114f,0f,3.220932f,11.63917f,0f,1.885376f,11.9114f,0.075f,3.220932f,11.63917f,0.075f,1.885376f});
  }
}
private class MFInt321029 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321030 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1031 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.22559f,0f,1.969679f,10.8316f,0f,2.049988f,11.22559f,0.075f,1.969679f,10.8316f,0.075f,2.049988f,10.8316f,0f,2.049988f,11.10383f,0f,3.385544f,10.8316f,0.075f,2.049988f,11.10383f,0.075f,3.385544f,11.10383f,0f,3.385544f,11.49782f,0f,3.305235f,11.10383f,0.075f,3.385544f,11.49782f,0.075f,3.305235f,11.49782f,0f,3.305235f,11.22559f,0f,1.969679f,11.49782f,0.075f,3.305235f,11.22559f,0.075f,1.969679f});
  }
}
private class MFInt321032 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFInt321033 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,33,-1,32,33,34,-1,50,41,39,-1,42,44,50,-1,39,42,50,-1,46,44,42,-1,36,43,46,-1,42,36,46,-1,44,46,48,-1,44,48,45,-1,46,43,47,-1,46,47,48,-1,41,50,51,-1,41,51,49,-1,50,44,45,-1,50,45,51,-1,58,56,54,-1,58,54,57,-1,55,58,57,-1,55,57,52,-1,61,59,53,-1,61,53,60,-1,56,61,60,-1,56,60,54,-1,60,53,36,-1,42,54,60,-1,36,42,60,-1,57,54,42,-1,39,52,57,-1,42,39,57,-1,47,35,48,-1,45,48,35,-1,61,37,59,-1,56,37,61,-1,45,35,38,-1,49,51,38,-1,45,38,51,-1,40,56,58,-1,58,55,40,-1,37,56,40,-1});
  }
}
private class MFVec3f1034 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.85051f,0f,16.96066f,13.45652f,0f,17.04097f,13.85051f,0.075f,16.96066f,13.45652f,0.075f,17.04097f,13.45652f,0f,17.04097f,13.59264f,0f,17.70875f,13.72876f,0f,18.37653f,13.45652f,0.075f,17.04097f,13.59264f,0.075f,17.70875f,13.72876f,0.075f,18.37653f,13.52458f,0.075f,17.37486f,13.59264f,0.0375f,17.70875f,13.52458f,0f,17.37486f,13.52458f,0.0375f,17.37486f,13.49055f,0.0375f,17.20792f,13.52458f,0.01875f,17.37486f,13.49055f,0f,17.20792f,13.49055f,0.01875f,17.20792f,13.49055f,0.075f,17.20792f,13.52458f,0.05625f,17.37486f,13.49055f,0.05625f,17.20792f,13.6607f,0.075f,18.04264f,13.6607f,0f,18.04264f,13.6607f,0.0375f,18.04264f,13.69473f,0.075f,18.20958f,13.69473f,0.0375f,18.20958f,13.6607f,0.05625f,18.04264f,13.69473f,0.05625f,18.20958f,13.69473f,0f,18.20958f,13.6607f,0.01875f,18.04264f,13.69473f,0.01875f,18.20958f,13.72876f,0f,18.37653f,14.12274f,0f,18.29622f,13.72876f,0.075f,18.37653f,14.12274f,0.075f,18.29622f,14.12274f,0f,18.29622f,13.98663f,0f,17.62844f,13.85051f,0f,16.96066f,14.12274f,0.075f,18.29622f,13.98663f,0.075f,17.62844f,13.85051f,0.075f,16.96066f,14.05469f,0.075f,17.96233f,13.98663f,0.0375f,17.62844f,14.05469f,0f,17.96233f,14.05469f,0.0375f,17.96233f,14.08872f,0.0375f,18.12927f,14.05469f,0.01875f,17.96233f,14.08872f,0f,18.12927f,14.08872f,0.01875f,18.12927f,14.08872f,0.075f,18.12927f,14.05469f,0.05625f,17.96233f,14.08872f,0.05625f,18.12927f,13.91857f,0.075f,17.29455f,13.91857f,0f,17.29455f,13.91857f,0.0375f,17.29455f,13.88454f,0.075f,17.12761f,13.88454f,0.0375f,17.12761f,13.91857f,0.05625f,17.29455f,13.88454f,0.05625f,17.12761f,13.88454f,0f,17.12761f,13.91857f,0.01875f,17.29455f,13.88454f,0.01875f,17.12761f});
  }
}
private class MFInt321035 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321036 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1037 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.64069f,0f,6.119441f,11.2467f,0f,6.199749f,11.64069f,0.075f,6.119441f,11.2467f,0.075f,6.199749f,11.2467f,0f,6.199749f,11.51893f,0f,7.535305f,11.2467f,0.075f,6.199749f,11.51893f,0.075f,7.535305f,11.51893f,0f,7.535305f,11.91292f,0f,7.454997f,11.51893f,0.075f,7.535305f,11.91292f,0.075f,7.454997f,11.91292f,0f,7.454997f,11.64069f,0f,6.119441f,11.91292f,0.075f,7.454997f,11.64069f,0.075f,6.119441f});
  }
}
private class MFInt321038 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt321039 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f1040 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.2271f,0f,6.203744f,10.83312f,0f,6.284052f,11.2271f,0.075f,6.203744f,10.83312f,0.075f,6.284052f,10.83312f,0f,6.284052f,10.96923f,0f,6.95183f,11.10535f,0f,7.619608f,10.83312f,0.075f,6.284052f,10.96923f,0.075f,6.95183f,11.10535f,0.075f,7.619608f,10.90117f,0.075f,6.617941f,10.96923f,0.0375f,6.95183f,10.90117f,0f,6.617941f,10.90117f,0.0375f,6.617941f,10.86715f,0.0375f,6.450997f,10.90117f,0.01875f,6.617941f,10.86715f,0f,6.450997f,10.86715f,0.01875f,6.450997f,10.86715f,0.075f,6.450997f,10.90117f,0.05625f,6.617941f,10.86715f,0.05625f,6.450997f,11.03729f,0.075f,7.285719f,11.03729f,0f,7.285719f,11.03729f,0.0375f,7.285719f,11.07132f,0.075f,7.452663f,11.07132f,0.0375f,7.452663f,11.03729f,0.05625f,7.285719f,11.07132f,0.05625f,7.452663f,11.07132f,0f,7.452663f,11.03729f,0.01875f,7.285719f,11.07132f,0.01875f,7.452663f,11.10535f,0f,7.619608f,11.30234f,0f,7.579454f,11.49934f,0f,7.539299f,11.10535f,0.075f,7.619608f,11.30234f,0.075f,7.579454f,11.49934f,0.075f,7.539299f,11.49934f,0f,7.539299f,11.2271f,0f,6.203744f,11.49934f,0.075f,7.539299f,11.2271f,0.075f,6.203744f});
  }
}
private class MFInt321041 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321042 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1043 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.50257f,0f,5.441864f,10.695f,0f,5.606476f,11.50257f,0.075f,5.441864f,10.695f,0.075f,5.606476f,10.695f,0f,5.606476f,10.82912f,0f,6.264455f,10.695f,0.075f,5.606476f,10.82912f,0.075f,6.264455f,10.82912f,0f,6.264455f,11.63669f,0f,6.099844f,10.82912f,0.075f,6.264455f,11.63669f,0.075f,6.099844f,11.63669f,0f,6.099844f,11.50257f,0f,5.441864f,11.63669f,0.075f,6.099844f,11.50257f,0.075f,5.441864f});
  }
}
private class MFInt321044 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321045 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1046 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.36446f,0f,4.764288f,10.55689f,0f,4.928899f,11.36446f,0.075f,4.764288f,10.55689f,0.075f,4.928899f,10.55689f,0f,4.928899f,10.69101f,0f,5.586879f,10.55689f,0.075f,4.928899f,10.69101f,0.075f,5.586879f,10.69101f,0f,5.586879f,11.49858f,0f,5.422267f,10.69101f,0.075f,5.586879f,11.49858f,0.075f,5.422267f,11.49858f,0f,5.422267f,11.36446f,0f,4.764288f,11.49858f,0.075f,5.422267f,11.36446f,0.075f,4.764288f});
  }
}
private class MFInt321047 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321048 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1049 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.08823f,0f,3.409135f,10.69424f,0f,3.489444f,11.08823f,0.075f,3.409135f,10.69424f,0.075f,3.489444f,10.69424f,0f,3.489444f,10.96648f,0f,4.824999f,10.69424f,0.075f,3.489444f,10.96648f,0.075f,4.824999f,10.96648f,0f,4.824999f,11.36047f,0f,4.744691f,10.96648f,0.075f,4.824999f,11.36047f,0.075f,4.744691f,11.36047f,0f,4.744691f,11.08823f,0f,3.409135f,11.36047f,0.075f,4.744691f,11.08823f,0.075f,3.409135f});
  }
}
private class MFInt321050 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321051 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1052 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.67465f,0f,3.493438f,10.28066f,0f,3.573746f,10.67465f,0.075f,3.493438f,10.28066f,0.075f,3.573746f,10.28066f,0f,3.573746f,10.55289f,0f,4.909302f,10.28066f,0.075f,3.573746f,10.55289f,0.075f,4.909302f,10.55289f,0f,4.909302f,10.74989f,0f,4.869148f,10.94688f,0f,4.828994f,10.55289f,0.075f,4.909302f,10.74989f,0.075f,4.869148f,10.94688f,0.075f,4.828994f,10.94688f,0f,4.828994f,10.67465f,0f,3.493438f,10.94688f,0.075f,4.828994f,10.67465f,0.075f,3.493438f});
  }
}
private class MFInt321053 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321054 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1055 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.95012f,0f,2.731559f,10.14255f,0f,2.89617f,10.95012f,0.075f,2.731559f,10.14255f,0.075f,2.89617f,10.14255f,0f,2.89617f,10.27667f,0f,3.554149f,10.14255f,0.075f,2.89617f,10.27667f,0.075f,3.554149f,10.27667f,0f,3.554149f,11.08424f,0f,3.389538f,10.27667f,0.075f,3.554149f,11.08424f,0.075f,3.389538f,11.08424f,0f,3.389538f,10.95012f,0f,2.731559f,11.08424f,0.075f,3.389538f,10.95012f,0.075f,2.731559f});
  }
}
private class MFInt321056 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321057 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1058 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.812f,0f,2.053982f,10.00443f,0f,2.218594f,10.812f,0.075f,2.053982f,10.00443f,0.075f,2.218594f,10.00443f,0f,2.218594f,10.13855f,0f,2.876573f,10.00443f,0.075f,2.218594f,10.13855f,0.075f,2.876573f,10.13855f,0f,2.876573f,10.94612f,0f,2.711962f,10.13855f,0.075f,2.876573f,10.94612f,0.075f,2.711962f,10.94612f,0f,2.711962f,10.812f,0f,2.053982f,10.94612f,0.075f,2.711962f,10.812f,0.075f,2.053982f});
  }
}
private class MFInt321059 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321060 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1061 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.81352f,0f,6.288047f,10.00595f,0f,6.452658f,10.81352f,0.075f,6.288047f,10.00595f,0.075f,6.452658f,10.00595f,0f,6.452658f,10.14007f,0f,7.110638f,10.00595f,0.075f,6.452658f,10.14007f,0.075f,7.110638f,10.14007f,0f,7.110638f,10.94764f,0f,6.946026f,10.14007f,0.075f,7.110638f,10.94764f,0.075f,6.946026f,10.94764f,0f,6.946026f,10.81352f,0f,6.288047f,10.94764f,0.075f,6.946026f,10.81352f,0.075f,6.288047f});
  }
}
private class MFInt321062 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321063 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1064 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.53729f,0f,4.932894f,10.1433f,0f,5.013202f,10.53729f,0.075f,4.932894f,10.1433f,0.075f,5.013202f,10.1433f,0f,5.013202f,10.41554f,0f,6.348758f,10.1433f,0.075f,5.013202f,10.41554f,0.075f,6.348758f,10.41554f,0f,6.348758f,10.80952f,0f,6.26845f,10.41554f,0.075f,6.348758f,10.80952f,0.075f,6.26845f,10.80952f,0f,6.26845f,10.53729f,0f,4.932894f,10.80952f,0.075f,6.26845f,10.53729f,0.075f,4.932894f});
  }
}
private class MFInt321065 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321066 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1067 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.12371f,0f,5.017197f,9.72972f,0f,5.097506f,10.12371f,0.075f,5.017197f,9.72972f,0.075f,5.097506f,9.72972f,0f,5.097506f,10.00195f,0f,6.433061f,9.72972f,0.075f,5.097506f,10.00195f,0.075f,6.433061f,10.00195f,0f,6.433061f,10.39594f,0f,6.352753f,10.00195f,0.075f,6.433061f,10.39594f,0.075f,6.352753f,10.39594f,0f,6.352753f,10.12371f,0f,5.017197f,10.39594f,0.075f,6.352753f,10.12371f,0.075f,5.017197f});
  }
}
private class MFInt321068 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321069 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1070 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.39918f,0f,4.255318f,9.591606f,0f,4.419929f,10.39918f,0.075f,4.255318f,9.591606f,0.075f,4.419929f,9.591606f,0f,4.419929f,9.725726f,0f,5.077909f,9.591606f,0.075f,4.419929f,9.725726f,0.075f,5.077909f,9.725726f,0f,5.077909f,10.5333f,0f,4.913297f,9.725726f,0.075f,5.077909f,10.5333f,0.075f,4.913297f,10.5333f,0f,4.913297f,10.39918f,0f,4.255318f,10.5333f,0.075f,4.913297f,10.39918f,0.075f,4.255318f});
  }
}
private class MFInt321071 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321072 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1073 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.26106f,0f,3.577741f,9.453492f,0f,3.742352f,10.26106f,0.075f,3.577741f,9.453492f,0.075f,3.742352f,9.453492f,0f,3.742352f,9.587612f,0f,4.400332f,9.453492f,0.075f,3.742352f,9.587612f,0.075f,4.400332f,9.587612f,0f,4.400332f,10.39518f,0f,4.235721f,9.587612f,0.075f,4.400332f,10.39518f,0.075f,4.235721f,10.39518f,0f,4.235721f,10.26106f,0f,3.577741f,10.39518f,0.075f,4.235721f,10.26106f,0.075f,3.577741f});
  }
}
private class MFInt321074 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt321075 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f1076 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.984836f,0f,2.222588f,9.590848f,0f,2.302897f,9.984836f,0.075f,2.222588f,9.590848f,0.075f,2.302897f,9.590848f,0f,2.302897f,9.726965f,0f,2.970675f,9.863082f,0f,3.638453f,9.590848f,0.075f,2.302897f,9.726965f,0.075f,2.970675f,9.863082f,0.075f,3.638453f,9.658907f,0.075f,2.636786f,9.726965f,0.0375f,2.970675f,9.658907f,0f,2.636786f,9.658907f,0.0375f,2.636786f,9.624878f,0.0375f,2.469841f,9.658907f,0.01875f,2.636786f,9.624878f,0f,2.469841f,9.624878f,0.01875f,2.469841f,9.624878f,0.075f,2.469841f,9.658907f,0.05625f,2.636786f,9.624878f,0.05625f,2.469841f,9.795024f,0.075f,3.304564f,9.795024f,0f,3.304564f,9.795024f,0.0375f,3.304564f,9.829053f,0.075f,3.471508f,9.829053f,0.0375f,3.471508f,9.795024f,0.05625f,3.304564f,9.829053f,0.05625f,3.471508f,9.829053f,0f,3.471508f,9.795024f,0.01875f,3.304564f,9.829053f,0.01875f,3.471508f,9.863082f,0f,3.638453f,10.06007f,0f,3.598298f,10.25707f,0f,3.558144f,9.863082f,0.075f,3.638453f,10.06007f,0.075f,3.598298f,10.25707f,0.075f,3.558144f,10.25707f,0f,3.558144f,9.984836f,0f,2.222588f,10.25707f,0.075f,3.558144f,9.984836f,0.075f,2.222588f});
  }
}
private class MFInt321077 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321078 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1079 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.571251f,0f,2.306891f,9.177264f,0f,2.3872f,9.571251f,0.075f,2.306891f,9.177264f,0.075f,2.3872f,9.177264f,0f,2.3872f,9.449498f,0f,3.722755f,9.177264f,0.075f,2.3872f,9.449498f,0.075f,3.722755f,9.449498f,0f,3.722755f,9.843485f,0f,3.642447f,9.449498f,0.075f,3.722755f,9.843485f,0.075f,3.642447f,9.843485f,0f,3.642447f,9.571251f,0f,2.306891f,9.843485f,0.075f,3.642447f,9.571251f,0.075f,2.306891f});
  }
}
private class MFInt321080 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321081 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1082 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.846722f,0f,1.545012f,9.03915f,0f,1.709623f,9.846722f,0.075f,1.545012f,9.03915f,0.075f,1.709623f,9.03915f,0f,1.709623f,9.17327f,0f,2.367603f,9.03915f,0.075f,1.709623f,9.17327f,0.075f,2.367603f,9.17327f,0f,2.367603f,9.980841f,0f,2.202991f,9.17327f,0.075f,2.367603f,9.980841f,0.075f,2.202991f,9.980841f,0f,2.202991f,9.846722f,0f,1.545012f,9.980841f,0.075f,2.202991f,9.846722f,0.075f,1.545012f});
  }
}
private class MFInt321083 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321084 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1085 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.848237f,0f,5.779077f,9.040667f,0f,5.943688f,9.848237f,0.075f,5.779077f,9.040667f,0.075f,5.943688f,9.040667f,0f,5.943688f,9.174786f,0f,6.601667f,9.040667f,0.075f,5.943688f,9.174786f,0.075f,6.601667f,9.174786f,0f,6.601667f,9.982357f,0f,6.437056f,9.174786f,0.075f,6.601667f,9.982357f,0.075f,6.437056f,9.982357f,0f,6.437056f,9.848237f,0f,5.779077f,9.982357f,0.075f,6.437056f,9.848237f,0.075f,5.779077f});
  }
}
private class MFInt321086 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321087 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1088 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.710123f,0f,5.1015f,8.902553f,0f,5.266111f,9.710123f,0.075f,5.1015f,8.902553f,0.075f,5.266111f,8.902553f,0f,5.266111f,9.036672f,0f,5.924091f,8.902553f,0.075f,5.266111f,9.036672f,0.075f,5.924091f,9.036672f,0f,5.924091f,9.844243f,0f,5.75948f,9.036672f,0.075f,5.924091f,9.844243f,0.075f,5.75948f,9.844243f,0f,5.75948f,9.710123f,0f,5.1015f,9.844243f,0.075f,5.75948f,9.710123f,0.075f,5.1015f});
  }
}
private class MFInt321089 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321090 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1091 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.433895f,0f,3.746347f,9.039908f,0f,3.826656f,9.433895f,0.075f,3.746347f,9.039908f,0.075f,3.826656f,9.039908f,0f,3.826656f,9.312142f,0f,5.162211f,9.039908f,0.075f,3.826656f,9.312142f,0.075f,5.162211f,9.312142f,0f,5.162211f,9.509135f,0f,5.122057f,9.706129f,0f,5.081903f,9.312142f,0.075f,5.162211f,9.509135f,0.075f,5.122057f,9.706129f,0.075f,5.081903f,9.706129f,0f,5.081903f,9.433895f,0f,3.746347f,9.706129f,0.075f,5.081903f,9.433895f,0.075f,3.746347f});
  }
}
private class MFInt321092 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt321093 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f1094 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.020311f,0f,3.83065f,8.823318f,0f,3.870804f,8.626325f,0f,3.910959f,9.020311f,0.075f,3.83065f,8.823318f,0.075f,3.870804f,8.626325f,0.075f,3.910959f,8.626325f,0f,3.910959f,8.898558f,0f,5.246514f,8.626325f,0.075f,3.910959f,8.898558f,0.075f,5.246514f,8.898558f,0f,5.246514f,9.292545f,0f,5.166206f,8.898558f,0.075f,5.246514f,9.292545f,0.075f,5.166206f,9.292545f,0f,5.166206f,9.156428f,0f,4.498428f,9.020311f,0f,3.83065f,9.292545f,0.075f,5.166206f,9.156428f,0.075f,4.498428f,9.020311f,0.075f,3.83065f,9.224486f,0.075f,4.832317f,9.156428f,0.0375f,4.498428f,9.224486f,0f,4.832317f,9.224486f,0.0375f,4.832317f,9.258515f,0.0375f,4.999261f,9.224486f,0.01875f,4.832317f,9.258515f,0f,4.999261f,9.258515f,0.01875f,4.999261f,9.258515f,0.075f,4.999261f,9.224486f,0.05625f,4.832317f,9.258515f,0.05625f,4.999261f,9.088369f,0.075f,4.164539f,9.088369f,0f,4.164539f,9.088369f,0.0375f,4.164539f,9.05434f,0.075f,3.997595f,9.05434f,0.0375f,3.997595f,9.088369f,0.05625f,4.164539f,9.05434f,0.05625f,3.997595f,9.05434f,0f,3.997595f,9.088369f,0.01875f,4.164539f,9.05434f,0.01875f,3.997595f});
  }
}
private class MFInt321095 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321096 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1097 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.295781f,0f,3.068771f,8.488211f,0f,3.233382f,9.295781f,0.075f,3.068771f,8.488211f,0.075f,3.233382f,8.488211f,0f,3.233382f,8.62233f,0f,3.891361f,8.488211f,0.075f,3.233382f,8.62233f,0.075f,3.891361f,8.62233f,0f,3.891361f,9.429901f,0f,3.72675f,8.62233f,0.075f,3.891361f,9.429901f,0.075f,3.72675f,9.429901f,0f,3.72675f,9.295781f,0f,3.068771f,9.429901f,0.075f,3.72675f,9.295781f,0.075f,3.068771f});
  }
}
private class MFInt321098 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321099 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.157667f,0f,2.391194f,8.350097f,0f,2.555806f,9.157667f,0.075f,2.391194f,8.350097f,0.075f,2.555806f,8.350097f,0f,2.555806f,8.484216f,0f,3.213785f,8.350097f,0.075f,2.555806f,8.484216f,0.075f,3.213785f,8.484216f,0f,3.213785f,9.291787f,0f,3.049174f,8.484216f,0.075f,3.213785f,9.291787f,0.075f,3.049174f,9.291787f,0f,3.049174f,9.157667f,0f,2.391194f,9.291787f,0.075f,3.049174f,9.157667f,0.075f,2.391194f});
  }
}
private class MFInt321101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt321102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f1103 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.881439f,0f,1.036041f,8.487453f,0f,1.11635f,8.881439f,0.075f,1.036041f,8.487453f,0.075f,1.11635f,8.487453f,0f,1.11635f,8.759686f,0f,2.451906f,8.487453f,0.075f,1.11635f,8.759686f,0.075f,2.451906f,8.759686f,0f,2.451906f,9.153673f,0f,2.371597f,8.759686f,0.075f,2.451906f,9.153673f,0.075f,2.371597f,9.153673f,0f,2.371597f,9.017556f,0f,1.703819f,8.881439f,0f,1.036041f,9.153673f,0.075f,2.371597f,9.017556f,0.075f,1.703819f,8.881439f,0.075f,1.036041f,9.085614f,0.075f,2.037708f,9.017556f,0.0375f,1.703819f,9.085614f,0f,2.037708f,9.085614f,0.0375f,2.037708f,9.119643f,0.0375f,2.204653f,9.085614f,0.01875f,2.037708f,9.119643f,0f,2.204653f,9.119643f,0.01875f,2.204653f,9.119643f,0.075f,2.204653f,9.085614f,0.05625f,2.037708f,9.119643f,0.05625f,2.204653f,8.949498f,0.075f,1.36993f,8.949498f,0f,1.36993f,8.949498f,0.0375f,1.36993f,8.915468f,0.075f,1.202986f,8.915468f,0.0375f,1.202986f,8.949498f,0.05625f,1.36993f,8.915468f,0.05625f,1.202986f,8.915468f,0f,1.202986f,8.949498f,0.01875f,1.36993f,8.915468f,0.01875f,1.202986f});
  }
}
private class MFInt321104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFInt321105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,19,10,8,-1,11,13,19,-1,8,11,19,-1,15,13,11,-1,5,12,15,-1,11,5,15,-1,13,15,17,-1,13,17,14,-1,15,12,16,-1,15,16,17,-1,10,19,20,-1,10,20,18,-1,19,13,14,-1,19,14,20,-1,27,25,23,-1,27,23,26,-1,24,27,26,-1,24,26,21,-1,30,28,22,-1,30,22,29,-1,25,30,29,-1,25,29,23,-1,29,22,5,-1,11,23,29,-1,5,11,29,-1,26,23,11,-1,8,21,26,-1,11,8,26,-1,16,4,17,-1,14,17,4,-1,30,6,28,-1,25,6,30,-1,14,4,7,-1,18,20,7,-1,14,7,20,-1,9,25,27,-1,27,24,9,-1,6,25,9,-1,32,31,34,-1,32,34,35,-1,33,32,35,-1,33,35,36,-1,38,37,39,-1,38,39,40,-1});
  }
}
private class MFVec3f1106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.467855f,0f,1.120344f,8.073869f,0f,1.200653f,8.467855f,0.075f,1.120344f,8.073869f,0.075f,1.200653f,8.073869f,0f,1.200653f,8.209986f,0f,1.868431f,8.346102f,0f,2.536209f,8.073869f,0.075f,1.200653f,8.209986f,0.075f,1.868431f,8.346102f,0.075f,2.536209f,8.141927f,0.075f,1.534542f,8.209986f,0.0375f,1.868431f,8.141927f,0f,1.534542f,8.141927f,0.0375f,1.534542f,8.107898f,0.0375f,1.367597f,8.141927f,0.01875f,1.534542f,8.107898f,0f,1.367597f,8.107898f,0.01875f,1.367597f,8.107898f,0.075f,1.367597f,8.141927f,0.05625f,1.534542f,8.107898f,0.05625f,1.367597f,8.278044f,0.075f,2.20232f,8.278044f,0f,2.20232f,8.278044f,0.0375f,2.20232f,8.312073f,0.075f,2.369264f,8.312073f,0.0375f,2.369264f,8.278044f,0.05625f,2.20232f,8.312073f,0.05625f,2.369264f,8.312073f,0f,2.369264f,8.278044f,0.01875f,2.20232f,8.312073f,0.01875f,2.369264f,8.346102f,0f,2.536209f,8.543096f,0f,2.496054f,8.740088f,0f,2.4559f,8.346102f,0.075f,2.536209f,8.543096f,0.075f,2.496054f,8.740088f,0.075f,2.4559f,8.740088f,0f,2.4559f,8.467855f,0f,1.120344f,8.740088f,0.075f,2.4559f,8.467855f,0.075f,1.120344f});
  }
}
private class MFInt321107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1109 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.743325f,0f,0.3584649f,7.935755f,0f,0.5230764f,8.743325f,0.075f,0.3584649f,7.935755f,0.075f,0.5230764f,7.935755f,0f,0.5230764f,8.069874f,0f,1.181056f,7.935755f,0.075f,0.5230764f,8.069874f,0.075f,1.181056f,8.069874f,0f,1.181056f,8.877445f,0f,1.016444f,8.069874f,0.075f,1.181056f,8.877445f,0.075f,1.016444f,8.877445f,0f,1.016444f,8.743325f,0f,0.3584649f,8.877445f,0.075f,1.016444f,8.743325f,0.075f,0.3584649f});
  }
}
private class MFInt321110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1112 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.882956f,0f,5.270106f,8.488969f,0f,5.350414f,8.882956f,0.075f,5.270106f,8.488969f,0.075f,5.350414f,8.488969f,0f,5.350414f,8.761202f,0f,6.68597f,8.488969f,0.075f,5.350414f,8.761202f,0.075f,6.68597f,8.761202f,0f,6.68597f,9.155189f,0f,6.605662f,8.761202f,0.075f,6.68597f,9.155189f,0.075f,6.605662f,9.155189f,0f,6.605662f,8.882956f,0f,5.270106f,9.155189f,0.075f,6.605662f,8.882956f,0.075f,5.270106f});
  }
}
private class MFInt321113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1});
  }
}
private class MFInt321114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,21,12,10,-1,13,15,21,-1,10,13,21,-1,17,15,13,-1,7,14,17,-1,13,7,17,-1,15,17,19,-1,15,19,16,-1,17,14,18,-1,17,18,19,-1,12,21,22,-1,12,22,20,-1,21,15,16,-1,21,16,22,-1,29,27,25,-1,29,25,28,-1,26,29,28,-1,26,28,23,-1,32,30,24,-1,32,24,31,-1,27,32,31,-1,27,31,25,-1,31,24,7,-1,13,25,31,-1,7,13,31,-1,28,25,13,-1,10,23,28,-1,13,10,28,-1,18,6,19,-1,16,19,6,-1,32,8,30,-1,27,8,32,-1,16,6,9,-1,20,22,9,-1,16,9,22,-1,11,27,29,-1,29,26,11,-1,8,27,11,-1,34,33,36,-1,34,36,37,-1,35,34,37,-1,35,37,38,-1,40,39,41,-1,40,41,42,-1});
  }
}
private class MFVec3f1115 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.469372f,0f,5.354409f,8.272378f,0f,5.394563f,8.075385f,0f,5.434718f,8.469372f,0.075f,5.354409f,8.272378f,0.075f,5.394563f,8.075385f,0.075f,5.434718f,8.075385f,0f,5.434718f,8.211501f,0f,6.102495f,8.347618f,0f,6.770273f,8.075385f,0.075f,5.434718f,8.211501f,0.075f,6.102495f,8.347618f,0.075f,6.770273f,8.143443f,0.075f,5.768606f,8.211501f,0.0375f,6.102495f,8.143443f,0f,5.768606f,8.143443f,0.0375f,5.768606f,8.109414f,0.0375f,5.601662f,8.143443f,0.01875f,5.768606f,8.109414f,0f,5.601662f,8.109414f,0.01875f,5.601662f,8.109414f,0.075f,5.601662f,8.143443f,0.05625f,5.768606f,8.109414f,0.05625f,5.601662f,8.27956f,0.075f,6.436384f,8.27956f,0f,6.436384f,8.27956f,0.0375f,6.436384f,8.313589f,0.075f,6.603329f,8.313589f,0.0375f,6.603329f,8.27956f,0.05625f,6.436384f,8.313589f,0.05625f,6.603329f,8.313589f,0f,6.603329f,8.27956f,0.01875f,6.436384f,8.313589f,0.01875f,6.603329f,8.347618f,0f,6.770273f,8.544612f,0f,6.730119f,8.741605f,0f,6.689965f,8.347618f,0.075f,6.770273f,8.544612f,0.075f,6.730119f,8.741605f,0.075f,6.689965f,8.741605f,0f,6.689965f,8.469372f,0f,5.354409f,8.741605f,0.075f,6.689965f,8.469372f,0.075f,5.354409f});
  }
}
private class MFInt321116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.744842f,0f,4.59253f,7.937271f,0f,4.757141f,8.744842f,0.075f,4.59253f,7.937271f,0.075f,4.757141f,7.937271f,0f,4.757141f,8.07139f,0f,5.415121f,7.937271f,0.075f,4.757141f,8.07139f,0.075f,5.415121f,8.07139f,0f,5.415121f,8.878961f,0f,5.250509f,8.07139f,0.075f,5.415121f,8.878961f,0.075f,5.250509f,8.878961f,0f,5.250509f,8.744842f,0f,4.59253f,8.878961f,0.075f,5.250509f,8.744842f,0.075f,4.59253f});
  }
}
private class MFInt321119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1121 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.606728f,0f,3.914953f,8.202942f,0f,3.997259f,7.799157f,0f,4.079565f,8.606728f,0.075f,3.914953f,8.202942f,0.075f,3.997259f,7.799157f,0.075f,4.079565f,8.001049f,0.075f,4.038412f,8.001049f,0f,4.038412f,8.202942f,0.0375f,3.997259f,8.001049f,0.0375f,4.038412f,8.404835f,0.075f,3.956106f,8.404835f,0f,3.956106f,8.404835f,0.0375f,3.956106f,7.799157f,0f,4.079565f,7.933276f,0f,4.737544f,7.799157f,0.075f,4.079565f,7.933276f,0.075f,4.737544f,7.933276f,0f,4.737544f,8.740847f,0f,4.572933f,7.933276f,0.075f,4.737544f,8.740847f,0.075f,4.572933f,8.740847f,0f,4.572933f,8.606728f,0f,3.914953f,8.740847f,0.075f,4.572933f,8.606728f,0.075f,3.914953f});
  }
}
private class MFInt321122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFInt321123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,13,-1,11,13,14,-1,12,11,14,-1,12,14,15,-1,17,16,18,-1,17,18,19,-1});
  }
}
private class MFVec3f1124 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.3305f,0f,2.5598f,8.133506f,0f,2.599954f,7.936512f,0f,2.640109f,8.3305f,0.075f,2.5598f,8.133506f,0.075f,2.599954f,7.936512f,0.075f,2.640109f,7.936512f,0f,2.640109f,8.208746f,0f,3.975665f,7.936512f,0.075f,2.640109f,8.208746f,0.075f,3.975665f,8.208746f,0f,3.975665f,8.40574f,0f,3.93551f,8.602733f,0f,3.895356f,8.208746f,0.075f,3.975665f,8.40574f,0.075f,3.93551f,8.602733f,0.075f,3.895356f,8.602733f,0f,3.895356f,8.3305f,0f,2.5598f,8.602733f,0.075f,3.895356f,8.3305f,0.075f,2.5598f});
  }
}
private class MFInt321125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1127 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.916915f,0f,2.644103f,7.522929f,0f,2.724412f,7.916915f,0.075f,2.644103f,7.522929f,0.075f,2.724412f,7.522929f,0f,2.724412f,7.795162f,0f,4.059968f,7.522929f,0.075f,2.724412f,7.795162f,0.075f,4.059968f,7.795162f,0f,4.059968f,8.189149f,0f,3.979659f,7.795162f,0.075f,4.059968f,8.189149f,0.075f,3.979659f,8.189149f,0f,3.979659f,7.916915f,0f,2.644103f,8.189149f,0.075f,3.979659f,7.916915f,0.075f,2.644103f});
  }
}
private class MFInt321128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.192386f,0f,1.882224f,7.384815f,0f,2.046835f,8.192386f,0.075f,1.882224f,7.384815f,0.075f,2.046835f,7.384815f,0f,2.046835f,7.518934f,0f,2.704815f,7.384815f,0.075f,2.046835f,7.518934f,0.075f,2.704815f,7.518934f,0f,2.704815f,8.326505f,0f,2.540203f,7.518934f,0.075f,2.704815f,8.326505f,0.075f,2.540203f,8.326505f,0f,2.540203f,8.192386f,0f,1.882224f,8.326505f,0.075f,2.540203f,8.192386f,0.075f,1.882224f});
  }
}
private class MFInt321131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1133 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.054272f,0f,1.204647f,7.246701f,0f,1.369259f,8.054272f,0.075f,1.204647f,7.246701f,0.075f,1.369259f,7.246701f,0f,1.369259f,7.38082f,0f,2.027238f,7.246701f,0.075f,1.369259f,7.38082f,0.075f,2.027238f,7.38082f,0f,2.027238f,8.188391f,0f,1.862627f,7.38082f,0.075f,2.027238f,8.188391f,0.075f,1.862627f,8.188391f,0f,1.862627f,8.054272f,0f,1.204647f,8.188391f,0.075f,1.862627f,8.054272f,0.075f,1.204647f});
  }
}
private class MFInt321134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.778044f,0f,-0.1505055f,7.58105f,0f,-0.1103513f,7.384057f,0f,-0.07019704f,7.778044f,0.075f,-0.1505055f,7.58105f,0.075f,-0.1103513f,7.384057f,0.075f,-0.07019704f,7.384057f,0f,-0.07019704f,7.65629f,0f,1.265359f,7.384057f,0.075f,-0.07019704f,7.65629f,0.075f,1.265359f,7.65629f,0f,1.265359f,8.050277f,0f,1.18505f,7.65629f,0.075f,1.265359f,8.050277f,0.075f,1.18505f,8.050277f,0f,1.18505f,7.778044f,0f,-0.1505055f,8.050277f,0.075f,1.18505f,7.778044f,0.075f,-0.1505055f});
  }
}
private class MFInt321137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFInt321138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,27,18,16,-1,19,21,27,-1,16,19,27,-1,23,21,19,-1,13,20,23,-1,19,13,23,-1,21,23,25,-1,21,25,22,-1,23,20,24,-1,23,24,25,-1,18,27,28,-1,18,28,26,-1,27,21,22,-1,27,22,28,-1,35,33,31,-1,35,31,34,-1,32,35,34,-1,32,34,29,-1,38,36,30,-1,38,30,37,-1,33,38,37,-1,33,37,31,-1,37,30,13,-1,19,31,37,-1,13,19,37,-1,34,31,19,-1,16,29,34,-1,19,16,34,-1,24,12,25,-1,22,25,12,-1,38,14,36,-1,33,14,38,-1,22,12,15,-1,26,28,15,-1,22,15,28,-1,17,33,35,-1,35,32,17,-1,14,33,17,-1});
  }
}
private class MFVec3f1139 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.36446f,0f,-0.06620247f,6.970473f,0f,0.01410597f,7.36446f,0.075f,-0.06620247f,6.970473f,0.075f,0.01410597f,6.970473f,0f,0.01410597f,7.242706f,0f,1.349662f,6.970473f,0.075f,0.01410597f,7.242706f,0.075f,1.349662f,7.242706f,0f,1.349662f,7.636693f,0f,1.269353f,7.242706f,0.075f,1.349662f,7.636693f,0.075f,1.269353f,7.636693f,0f,1.269353f,7.500576f,0f,0.6015754f,7.36446f,0f,-0.06620247f,7.636693f,0.075f,1.269353f,7.500576f,0.075f,0.6015754f,7.36446f,0.075f,-0.06620247f,7.568635f,0.075f,0.9354644f,7.500576f,0.0375f,0.6015754f,7.568635f,0f,0.9354644f,7.568635f,0.0375f,0.9354644f,7.602664f,0.0375f,1.102409f,7.568635f,0.01875f,0.9354644f,7.602664f,0f,1.102409f,7.602664f,0.01875f,1.102409f,7.602664f,0.075f,1.102409f,7.568635f,0.05625f,0.9354644f,7.602664f,0.05625f,1.102409f,7.432518f,0.075f,0.2676865f,7.432518f,0f,0.2676865f,7.432518f,0.0375f,0.2676865f,7.398489f,0.075f,0.100742f,7.398489f,0.0375f,0.100742f,7.432518f,0.05625f,0.2676865f,7.398489f,0.05625f,0.100742f,7.398489f,0f,0.100742f,7.432518f,0.01875f,0.2676865f,7.398489f,0.01875f,0.100742f});
  }
}
private class MFInt321140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,12,15,17,-1,12,17,14,-1,15,9,16,-1,15,16,17,-1,20,19,9,-1,20,9,15,-1,18,20,15,-1,18,15,12,-1,17,16,8,-1,20,10,19,-1,17,8,11,-1,13,20,18,-1,10,20,13,-1,11,14,17,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.055788f,0f,5.438712f,7.248217f,0f,5.603323f,8.055788f,0.075f,5.438712f,7.248217f,0.075f,5.603323f,7.248217f,0f,5.603323f,7.382336f,0f,6.261303f,7.248217f,0.075f,5.603323f,7.382336f,0.075f,6.261303f,7.382336f,0f,6.261303f,7.786121f,0f,6.178997f,8.189907f,0f,6.096692f,7.382336f,0.075f,6.261303f,7.786121f,0.075f,6.178997f,8.189907f,0.075f,6.096692f,7.584229f,0.075f,6.22015f,7.786121f,0.0375f,6.178997f,7.584229f,0f,6.22015f,7.584229f,0.0375f,6.22015f,7.988014f,0.075f,6.137844f,7.988014f,0f,6.137844f,7.988014f,0.0375f,6.137844f,8.189907f,0f,6.096692f,8.055788f,0f,5.438712f,8.189907f,0.075f,6.096692f,8.055788f,0.075f,5.438712f});
  }
}
private class MFInt321143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1145 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.77956f,0f,4.083559f,7.385573f,0f,4.163867f,7.77956f,0.075f,4.083559f,7.385573f,0.075f,4.163867f,7.385573f,0f,4.163867f,7.657806f,0f,5.499424f,7.385573f,0.075f,4.163867f,7.657806f,0.075f,5.499424f,7.657806f,0f,5.499424f,8.051793f,0f,5.419115f,7.657806f,0.075f,5.499424f,8.051793f,0.075f,5.419115f,8.051793f,0f,5.419115f,7.77956f,0f,4.083559f,8.051793f,0.075f,5.419115f,7.77956f,0.075f,4.083559f});
  }
}
private class MFInt321146 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1148 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.365976f,0f,4.167862f,6.971989f,0f,4.24817f,7.365976f,0.075f,4.167862f,6.971989f,0.075f,4.24817f,6.971989f,0f,4.24817f,7.244222f,0f,5.583726f,6.971989f,0.075f,4.24817f,7.244222f,0.075f,5.583726f,7.244222f,0f,5.583726f,7.638209f,0f,5.503418f,7.244222f,0.075f,5.583726f,7.638209f,0.075f,5.503418f,7.638209f,0f,5.503418f,7.365976f,0f,4.167862f,7.638209f,0.075f,5.503418f,7.365976f,0.075f,4.167862f});
  }
}
private class MFInt321149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1151 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.641446f,0f,3.405983f,6.833875f,0f,3.570594f,7.641446f,0.075f,3.405983f,6.833875f,0.075f,3.570594f,6.833875f,0f,3.570594f,6.967994f,0f,4.228573f,6.833875f,0.075f,3.570594f,6.967994f,0.075f,4.228573f,6.967994f,0f,4.228573f,7.775565f,0f,4.063962f,6.967994f,0.075f,4.228573f,7.775565f,0.075f,4.063962f,7.775565f,0f,4.063962f,7.641446f,0f,3.405983f,7.775565f,0.075f,4.063962f,7.641446f,0.075f,3.405983f});
  }
}
private class MFInt321152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.503332f,0f,2.728406f,6.695761f,0f,2.893018f,7.503332f,0.075f,2.728406f,6.695761f,0.075f,2.893018f,6.695761f,0f,2.893018f,6.82988f,0f,3.550997f,6.695761f,0.075f,2.893018f,6.82988f,0.075f,3.550997f,6.82988f,0f,3.550997f,7.637451f,0f,3.386386f,6.82988f,0.075f,3.550997f,7.637451f,0.075f,3.386386f,7.637451f,0f,3.386386f,7.503332f,0f,2.728406f,7.637451f,0.075f,3.386386f,7.503332f,0.075f,2.728406f});
  }
}
private class MFInt321155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1157 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.227104f,0f,1.373253f,6.833117f,0f,1.453562f,7.227104f,0.075f,1.373253f,6.833117f,0.075f,1.453562f,6.833117f,0f,1.453562f,7.10535f,0f,2.789118f,6.833117f,0.075f,1.453562f,7.10535f,0.075f,2.789118f,7.10535f,0f,2.789118f,7.499337f,0f,2.708809f,7.10535f,0.075f,2.789118f,7.499337f,0.075f,2.708809f,7.499337f,0f,2.708809f,7.227104f,0f,1.373253f,7.499337f,0.075f,2.708809f,7.227104f,0.075f,1.373253f});
  }
}
private class MFInt321158 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt321159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f1160 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.813519f,0f,1.457556f,6.616526f,0f,1.497711f,6.419533f,0f,1.537865f,6.813519f,0.075f,1.457556f,6.616526f,0.075f,1.497711f,6.419533f,0.075f,1.537865f,6.419533f,0f,1.537865f,6.691766f,0f,2.873421f,6.419533f,0.075f,1.537865f,6.691766f,0.075f,2.873421f,6.691766f,0f,2.873421f,7.085753f,0f,2.793112f,6.691766f,0.075f,2.873421f,7.085753f,0.075f,2.793112f,7.085753f,0f,2.793112f,6.949636f,0f,2.125334f,6.813519f,0f,1.457556f,7.085753f,0.075f,2.793112f,6.949636f,0.075f,2.125334f,6.813519f,0.075f,1.457556f,7.017695f,0.075f,2.459223f,6.949636f,0.0375f,2.125334f,7.017695f,0f,2.459223f,7.017695f,0.0375f,2.459223f,7.051724f,0.0375f,2.626168f,7.017695f,0.01875f,2.459223f,7.051724f,0f,2.626168f,7.051724f,0.01875f,2.626168f,7.051724f,0.075f,2.626168f,7.017695f,0.05625f,2.459223f,7.051724f,0.05625f,2.626168f,6.881578f,0.075f,1.791445f,6.881578f,0f,1.791445f,6.881578f,0.0375f,1.791445f,6.847549f,0.075f,1.624501f,6.847549f,0.0375f,1.624501f,6.881578f,0.05625f,1.791445f,6.847549f,0.05625f,1.624501f,6.847549f,0f,1.624501f,6.881578f,0.01875f,1.791445f,6.847549f,0.01875f,1.624501f});
  }
}
private class MFInt321161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321162 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1163 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.08899f,0f,0.695677f,6.281419f,0f,0.8602884f,7.08899f,0.075f,0.695677f,6.281419f,0.075f,0.8602884f,6.281419f,0f,0.8602884f,6.415538f,0f,1.518268f,6.281419f,0.075f,0.8602884f,6.415538f,0.075f,1.518268f,6.415538f,0f,1.518268f,7.223109f,0f,1.353656f,6.415538f,0.075f,1.518268f,7.223109f,0.075f,1.353656f,7.223109f,0f,1.353656f,7.08899f,0f,0.695677f,7.223109f,0.075f,1.353656f,7.08899f,0.075f,0.695677f});
  }
}
private class MFInt321164 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.950876f,0f,0.01810054f,6.143305f,0f,0.182712f,6.950876f,0.075f,0.01810054f,6.143305f,0.075f,0.182712f,6.143305f,0f,0.182712f,6.277424f,0f,0.8406914f,6.143305f,0.075f,0.182712f,6.277424f,0.075f,0.8406914f,6.277424f,0f,0.8406914f,7.084995f,0f,0.6760799f,6.277424f,0.075f,0.8406914f,7.084995f,0.075f,0.6760799f,7.084995f,0f,0.6760799f,6.950876f,0f,0.01810054f,7.084995f,0.075f,0.6760799f,6.950876f,0.075f,0.01810054f});
  }
}
private class MFInt321167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321168 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1169 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.090506f,0f,4.929741f,6.68672f,0f,5.012047f,6.282935f,0f,5.094353f,7.090506f,0.075f,4.929741f,6.68672f,0.075f,5.012047f,6.282935f,0.075f,5.094353f,6.484828f,0.075f,5.0532f,6.484828f,0f,5.0532f,6.68672f,0.0375f,5.012047f,6.484828f,0.0375f,5.0532f,6.888613f,0.075f,4.970894f,6.888613f,0f,4.970894f,6.888613f,0.0375f,4.970894f,6.282935f,0f,5.094353f,6.417054f,0f,5.752332f,6.282935f,0.075f,5.094353f,6.417054f,0.075f,5.752332f,6.417054f,0f,5.752332f,7.224625f,0f,5.587721f,6.417054f,0.075f,5.752332f,7.224625f,0.075f,5.587721f,7.224625f,0f,5.587721f,7.090506f,0f,4.929741f,7.224625f,0.075f,5.587721f,7.090506f,0.075f,4.929741f});
  }
}
private class MFInt321170 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1172 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.952392f,0f,4.252165f,6.144821f,0f,4.416777f,6.952392f,0.075f,4.252165f,6.144821f,0.075f,4.416777f,6.144821f,0f,4.416777f,6.27894f,0f,5.074756f,6.144821f,0.075f,4.416777f,6.27894f,0.075f,5.074756f,6.27894f,0f,5.074756f,7.086511f,0f,4.910144f,6.27894f,0.075f,5.074756f,7.086511f,0.075f,4.910144f,7.086511f,0f,4.910144f,6.952392f,0f,4.252165f,7.086511f,0.075f,4.910144f,6.952392f,0.075f,4.252165f});
  }
}
private class MFInt321173 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1175 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.676164f,0f,2.897012f,6.282177f,0f,2.977321f,6.676164f,0.075f,2.897012f,6.282177f,0.075f,2.977321f,6.282177f,0f,2.977321f,6.55441f,0f,4.312877f,6.282177f,0.075f,2.977321f,6.55441f,0.075f,4.312877f,6.55441f,0f,4.312877f,6.948397f,0f,4.232568f,6.55441f,0.075f,4.312877f,6.948397f,0.075f,4.232568f,6.948397f,0f,4.232568f,6.676164f,0f,2.897012f,6.948397f,0.075f,4.232568f,6.676164f,0.075f,2.897012f});
  }
}
private class MFInt321176 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.26258f,0f,2.981315f,5.868593f,0f,3.061624f,6.26258f,0.075f,2.981315f,5.868593f,0.075f,3.061624f,5.868593f,0f,3.061624f,6.140826f,0f,4.39718f,5.868593f,0.075f,3.061624f,6.140826f,0.075f,4.39718f,6.140826f,0f,4.39718f,6.534813f,0f,4.316871f,6.140826f,0.075f,4.39718f,6.534813f,0.075f,4.316871f,6.534813f,0f,4.316871f,6.26258f,0f,2.981315f,6.534813f,0.075f,4.316871f,6.26258f,0.075f,2.981315f});
  }
}
private class MFInt321179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321180 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1181 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.53805f,0f,2.219436f,5.730479f,0f,2.384047f,6.53805f,0.075f,2.219436f,5.730479f,0.075f,2.384047f,5.730479f,0f,2.384047f,5.864598f,0f,3.042027f,5.730479f,0.075f,2.384047f,5.864598f,0.075f,3.042027f,5.864598f,0f,3.042027f,6.672169f,0f,2.877415f,5.864598f,0.075f,3.042027f,6.672169f,0.075f,2.877415f,6.672169f,0f,2.877415f,6.53805f,0f,2.219436f,6.672169f,0.075f,2.877415f,6.53805f,0.075f,2.219436f});
  }
}
private class MFInt321182 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.399936f,0f,1.541859f,5.592365f,0f,1.706471f,6.399936f,0.075f,1.541859f,5.592365f,0.075f,1.706471f,5.592365f,0f,1.706471f,5.726484f,0f,2.36445f,5.592365f,0.075f,1.706471f,5.726484f,0.075f,2.36445f,5.726484f,0f,2.36445f,6.534055f,0f,2.199839f,5.726484f,0.075f,2.36445f,6.534055f,0.075f,2.199839f,6.534055f,0f,2.199839f,6.399936f,0f,1.541859f,6.534055f,0.075f,2.199839f,6.399936f,0.075f,1.541859f});
  }
}
private class MFInt321185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321186 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1187 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.123708f,0f,0.1867066f,5.729721f,0f,0.267015f,6.123708f,0.075f,0.1867066f,5.729721f,0.075f,0.267015f,5.729721f,0f,0.267015f,6.001954f,0f,1.602571f,5.729721f,0.075f,0.267015f,6.001954f,0.075f,1.602571f,6.001954f,0f,1.602571f,6.395941f,0f,1.522262f,6.001954f,0.075f,1.602571f,6.395941f,0.075f,1.522262f,6.395941f,0f,1.522262f,6.123708f,0f,0.1867066f,6.395941f,0.075f,1.522262f,6.123708f,0.075f,0.1867066f});
  }
}
private class MFInt321188 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.710124f,0f,0.2710096f,5.316137f,0f,0.351318f,5.710124f,0.075f,0.2710096f,5.316137f,0.075f,0.351318f,5.316137f,0f,0.351318f,5.58837f,0f,1.686874f,5.316137f,0.075f,0.351318f,5.58837f,0.075f,1.686874f,5.58837f,0f,1.686874f,5.982357f,0f,1.606565f,5.58837f,0.075f,1.686874f,5.982357f,0.075f,1.606565f,5.982357f,0f,1.606565f,5.710124f,0f,0.2710096f,5.982357f,0.075f,1.606565f,5.710124f,0.075f,0.2710096f});
  }
}
private class MFInt321191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1193 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.125224f,0f,4.420771f,5.731237f,0f,4.50108f,6.125224f,0.075f,4.420771f,5.731237f,0.075f,4.50108f,5.731237f,0f,4.50108f,6.00347f,0f,5.836636f,5.731237f,0.075f,4.50108f,6.00347f,0.075f,5.836636f,6.00347f,0f,5.836636f,6.397457f,0f,5.756327f,6.00347f,0.075f,5.836636f,6.397457f,0.075f,5.756327f,6.397457f,0f,5.756327f,6.125224f,0f,4.420771f,6.397457f,0.075f,5.756327f,6.125224f,0.075f,4.420771f});
  }
}
private class MFInt321194 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1196 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.71164f,0f,4.505074f,5.317653f,0f,4.585382f,5.71164f,0.075f,4.505074f,5.317653f,0.075f,4.585382f,5.317653f,0f,4.585382f,5.589886f,0f,5.920938f,5.317653f,0.075f,4.585382f,5.589886f,0.075f,5.920938f,5.589886f,0f,5.920938f,5.983873f,0f,5.84063f,5.589886f,0.075f,5.920938f,5.983873f,0.075f,5.84063f,5.983873f,0f,5.84063f,5.71164f,0f,4.505074f,5.983873f,0.075f,5.84063f,5.71164f,0.075f,4.505074f});
  }
}
private class MFInt321197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321198 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1199 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.98711f,0f,3.743195f,5.179539f,0f,3.907806f,5.98711f,0.075f,3.743195f,5.179539f,0.075f,3.907806f,5.179539f,0f,3.907806f,5.313658f,0f,4.565785f,5.179539f,0.075f,3.907806f,5.313658f,0.075f,4.565785f,5.313658f,0f,4.565785f,6.121229f,0f,4.401174f,5.313658f,0.075f,4.565785f,6.121229f,0.075f,4.401174f,6.121229f,0f,4.401174f,5.98711f,0f,3.743195f,6.121229f,0.075f,4.401174f,5.98711f,0.075f,3.743195f});
  }
}
private class MFInt321200 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.848996f,0f,3.065618f,5.041425f,0f,3.23023f,5.848996f,0.075f,3.065618f,5.041425f,0.075f,3.23023f,5.041425f,0f,3.23023f,5.175544f,0f,3.888209f,5.041425f,0.075f,3.23023f,5.175544f,0.075f,3.888209f,5.175544f,0f,3.888209f,5.983115f,0f,3.723598f,5.175544f,0.075f,3.888209f,5.983115f,0.075f,3.723598f,5.983115f,0f,3.723598f,5.848996f,0f,3.065618f,5.983115f,0.075f,3.723598f,5.848996f,0.075f,3.065618f});
  }
}
private class MFInt321203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321204 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1205 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.572768f,0f,1.710465f,5.178781f,0f,1.790774f,5.572768f,0.075f,1.710465f,5.178781f,0.075f,1.790774f,5.178781f,0f,1.790774f,5.451015f,0f,3.12633f,5.178781f,0.075f,1.790774f,5.451015f,0.075f,3.12633f,5.451015f,0f,3.12633f,5.845001f,0f,3.046021f,5.451015f,0.075f,3.12633f,5.845001f,0.075f,3.046021f,5.845001f,0f,3.046021f,5.572768f,0f,1.710465f,5.845001f,0.075f,3.046021f,5.572768f,0.075f,1.710465f});
  }
}
private class MFInt321206 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFInt321207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,29,20,18,-1,21,23,29,-1,18,21,29,-1,25,23,21,-1,15,22,25,-1,21,15,25,-1,23,25,27,-1,23,27,24,-1,25,22,26,-1,25,26,27,-1,20,29,30,-1,20,30,28,-1,29,23,24,-1,29,24,30,-1,37,35,33,-1,37,33,36,-1,34,37,36,-1,34,36,31,-1,40,38,32,-1,40,32,39,-1,35,40,39,-1,35,39,33,-1,39,32,15,-1,21,33,39,-1,15,21,39,-1,36,33,21,-1,18,31,36,-1,21,18,36,-1,26,14,27,-1,24,27,14,-1,40,16,38,-1,35,16,40,-1,24,14,17,-1,28,30,17,-1,24,17,30,-1,19,35,37,-1,37,34,19,-1,16,35,19,-1});
  }
}
private class MFVec3f1208 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.159184f,0f,1.794768f,4.962191f,0f,1.834923f,4.765197f,0f,1.875077f,5.159184f,0.075f,1.794768f,4.962191f,0.075f,1.834923f,4.765197f,0.075f,1.875077f,4.765197f,0f,1.875077f,5.03743f,0f,3.210633f,4.765197f,0.075f,1.875077f,5.03743f,0.075f,3.210633f,5.03743f,0f,3.210633f,5.431417f,0f,3.130324f,5.03743f,0.075f,3.210633f,5.431417f,0.075f,3.130324f,5.431417f,0f,3.130324f,5.2953f,0f,2.462546f,5.159184f,0f,1.794768f,5.431417f,0.075f,3.130324f,5.2953f,0.075f,2.462546f,5.159184f,0.075f,1.794768f,5.363359f,0.075f,2.796435f,5.2953f,0.0375f,2.462546f,5.363359f,0f,2.796435f,5.363359f,0.0375f,2.796435f,5.397388f,0.0375f,2.96338f,5.363359f,0.01875f,2.796435f,5.397388f,0f,2.96338f,5.397388f,0.01875f,2.96338f,5.397388f,0.075f,2.96338f,5.363359f,0.05625f,2.796435f,5.397388f,0.05625f,2.96338f,5.227242f,0.075f,2.128657f,5.227242f,0f,2.128657f,5.227242f,0.0375f,2.128657f,5.193213f,0.075f,1.961713f,5.193213f,0.0375f,1.961713f,5.227242f,0.05625f,2.128657f,5.193213f,0.05625f,1.961713f,5.193213f,0f,1.961713f,5.227242f,0.01875f,2.128657f,5.193213f,0.01875f,1.961713f});
  }
}
private class MFInt321209 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1211 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.434654f,0f,1.032889f,4.627083f,0f,1.1975f,5.434654f,0.075f,1.032889f,4.627083f,0.075f,1.1975f,4.627083f,0f,1.1975f,4.761202f,0f,1.85548f,4.627083f,0.075f,1.1975f,4.761202f,0.075f,1.85548f,4.761202f,0f,1.85548f,5.568773f,0f,1.690868f,4.761202f,0.075f,1.85548f,5.568773f,0.075f,1.690868f,5.568773f,0f,1.690868f,5.434654f,0f,1.032889f,5.568773f,0.075f,1.690868f,5.434654f,0.075f,1.032889f});
  }
}
private class MFInt321212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.29654f,0f,0.3553126f,4.488969f,0f,0.519924f,5.29654f,0.075f,0.3553126f,4.488969f,0.075f,0.519924f,4.488969f,0f,0.519924f,4.623088f,0f,1.177903f,4.488969f,0.075f,0.519924f,4.623088f,0.075f,1.177903f,4.623088f,0f,1.177903f,5.430659f,0f,1.013292f,4.623088f,0.075f,1.177903f,5.430659f,0.075f,1.013292f,5.430659f,0f,1.013292f,5.29654f,0f,0.3553126f,5.430659f,0.075f,1.013292f,5.29654f,0.075f,0.3553126f});
  }
}
private class MFInt321215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1217 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.43617f,0f,5.266953f,4.628599f,0f,5.431565f,5.43617f,0.075f,5.266953f,4.628599f,0.075f,5.431565f,4.628599f,0f,5.431565f,4.762719f,0f,6.089544f,4.628599f,0.075f,5.431565f,4.762719f,0.075f,6.089544f,4.762719f,0f,6.089544f,5.570289f,0f,5.924933f,4.762719f,0.075f,6.089544f,5.570289f,0.075f,5.924933f,5.570289f,0f,5.924933f,5.43617f,0f,5.266953f,5.570289f,0.075f,5.924933f,5.43617f,0.075f,5.266953f});
  }
}
private class MFInt321218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1220 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.298056f,0f,4.589377f,4.490485f,0f,4.753989f,5.298056f,0.075f,4.589377f,4.490485f,0.075f,4.753989f,4.490485f,0f,4.753989f,4.624605f,0f,5.411968f,4.490485f,0.075f,4.753989f,4.624605f,0.075f,5.411968f,4.624605f,0f,5.411968f,5.432175f,0f,5.247356f,4.624605f,0.075f,5.411968f,5.432175f,0.075f,5.247356f,5.432175f,0f,5.247356f,5.298056f,0f,4.589377f,5.432175f,0.075f,5.247356f,5.298056f,0.075f,4.589377f});
  }
}
private class MFInt321221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,11,-1,9,11,12,-1,10,9,12,-1,10,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1223 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.021828f,0f,3.234224f,4.627841f,0f,3.314533f,5.021828f,0.075f,3.234224f,4.627841f,0.075f,3.314533f,4.627841f,0f,3.314533f,4.900074f,0f,4.650089f,4.627841f,0.075f,3.314533f,4.900074f,0.075f,4.650089f,4.900074f,0f,4.650089f,5.097068f,0f,4.609934f,5.294061f,0f,4.56978f,4.900074f,0.075f,4.650089f,5.097068f,0.075f,4.609934f,5.294061f,0.075f,4.56978f,5.294061f,0f,4.56978f,5.021828f,0f,3.234224f,5.294061f,0.075f,4.56978f,5.021828f,0.075f,3.234224f});
  }
}
private class MFInt321224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.608244f,0f,3.318527f,4.214257f,0f,3.398836f,4.608244f,0.075f,3.318527f,4.214257f,0.075f,3.398836f,4.214257f,0f,3.398836f,4.486491f,0f,4.734392f,4.214257f,0.075f,3.398836f,4.486491f,0.075f,4.734392f,4.486491f,0f,4.734392f,4.880477f,0f,4.654083f,4.486491f,0.075f,4.734392f,4.880477f,0.075f,4.654083f,4.880477f,0f,4.654083f,4.608244f,0f,3.318527f,4.880477f,0.075f,4.654083f,4.608244f,0.075f,3.318527f});
  }
}
private class MFInt321227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1229 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.883714f,0f,2.556648f,4.076143f,0f,2.721259f,4.883714f,0.075f,2.556648f,4.076143f,0.075f,2.721259f,4.076143f,0f,2.721259f,4.210262f,0f,3.379239f,4.076143f,0.075f,2.721259f,4.210262f,0.075f,3.379239f,4.210262f,0f,3.379239f,5.017833f,0f,3.214627f,4.210262f,0.075f,3.379239f,5.017833f,0.075f,3.214627f,5.017833f,0f,3.214627f,4.883714f,0f,2.556648f,5.017833f,0.075f,3.214627f,4.883714f,0.075f,2.556648f});
  }
}
private class MFInt321230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1232 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.7456f,0f,1.879071f,3.938029f,0f,2.043683f,4.7456f,0.075f,1.879071f,3.938029f,0.075f,2.043683f,3.938029f,0f,2.043683f,4.005089f,0f,2.372673f,4.072148f,0f,2.701662f,3.938029f,0.075f,2.043683f,4.005089f,0.075f,2.372673f,4.072148f,0.075f,2.701662f,3.971559f,0.075f,2.208178f,4.005089f,0.0375f,2.372673f,3.971559f,0f,2.208178f,3.971559f,0.0375f,2.208178f,4.038619f,0.075f,2.537168f,4.038619f,0f,2.537168f,4.038619f,0.0375f,2.537168f,4.072148f,0f,2.701662f,4.879719f,0f,2.537051f,4.072148f,0.075f,2.701662f,4.879719f,0.075f,2.537051f,4.879719f,0f,2.537051f,4.7456f,0f,1.879071f,4.879719f,0.075f,2.537051f,4.7456f,0.075f,1.879071f});
  }
}
private class MFInt321233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1235 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.469372f,0f,0.5239186f,4.272378f,0f,0.5640728f,4.075385f,0f,0.604227f,4.469372f,0.075f,0.5239186f,4.272378f,0.075f,0.5640728f,4.075385f,0.075f,0.604227f,4.075385f,0f,0.604227f,4.347619f,0f,1.939783f,4.075385f,0.075f,0.604227f,4.347619f,0.075f,1.939783f,4.347619f,0f,1.939783f,4.741605f,0f,1.859474f,4.347619f,0.075f,1.939783f,4.741605f,0.075f,1.859474f,4.741605f,0f,1.859474f,4.469372f,0f,0.5239186f,4.741605f,0.075f,1.859474f,4.469372f,0.075f,0.5239186f});
  }
}
private class MFInt321236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1238 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.055788f,0f,0.6082216f,3.858794f,0f,0.6483758f,3.661801f,0f,0.68853f,4.055788f,0.075f,0.6082216f,3.858794f,0.075f,0.6483758f,3.661801f,0.075f,0.68853f,3.661801f,0f,0.68853f,3.934035f,0f,2.024086f,3.661801f,0.075f,0.68853f,3.934035f,0.075f,2.024086f,3.934035f,0f,2.024086f,4.328022f,0f,1.943777f,3.934035f,0.075f,2.024086f,4.328022f,0.075f,1.943777f,4.328022f,0f,1.943777f,4.055788f,0f,0.6082216f,4.328022f,0.075f,1.943777f,4.055788f,0.075f,0.6082216f});
  }
}
private class MFInt321239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1241 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.331258f,0f,-0.1536579f,3.523687f,0f,0.0109536f,4.331258f,0.075f,-0.1536579f,3.523687f,0.075f,0.0109536f,3.523687f,0f,0.0109536f,3.590747f,0f,0.3399433f,3.657807f,0f,0.668933f,3.523687f,0.075f,0.0109536f,3.590747f,0.075f,0.3399433f,3.657807f,0.075f,0.668933f,3.557217f,0.075f,0.1754484f,3.590747f,0.0375f,0.3399433f,3.557217f,0f,0.1754484f,3.557217f,0.0375f,0.1754484f,3.624277f,0.075f,0.5044382f,3.624277f,0f,0.5044382f,3.624277f,0.0375f,0.5044382f,3.657807f,0f,0.668933f,4.465377f,0f,0.5043216f,3.657807f,0.075f,0.668933f,4.465377f,0.075f,0.5043216f,4.465377f,0f,0.5043216f,4.331258f,0f,-0.1536579f,4.465377f,0.075f,0.5043216f,4.331258f,0.075f,-0.1536579f});
  }
}
private class MFInt321242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1244 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.470888f,0f,4.757983f,4.076901f,0f,4.838292f,4.470888f,0.075f,4.757983f,4.076901f,0.075f,4.838292f,4.076901f,0f,4.838292f,4.349134f,0f,6.173848f,4.076901f,0.075f,4.838292f,4.349134f,0.075f,6.173848f,4.349134f,0f,6.173848f,4.743122f,0f,6.093539f,4.349134f,0.075f,6.173848f,4.743122f,0.075f,6.093539f,4.743122f,0f,6.093539f,4.470888f,0f,4.757983f,4.743122f,0.075f,6.093539f,4.470888f,0.075f,4.757983f});
  }
}
private class MFInt321245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1247 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.057304f,0f,4.842286f,3.663317f,0f,4.922595f,4.057304f,0.075f,4.842286f,3.663317f,0.075f,4.922595f,3.663317f,0f,4.922595f,3.935551f,0f,6.258151f,3.663317f,0.075f,4.922595f,3.935551f,0.075f,6.258151f,3.935551f,0f,6.258151f,4.329537f,0f,6.177842f,3.935551f,0.075f,6.258151f,4.329537f,0.075f,6.177842f,4.329537f,0f,6.177842f,4.057304f,0f,4.842286f,4.329537f,0.075f,6.177842f,4.057304f,0.075f,4.842286f});
  }
}
private class MFInt321248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,8,12,-1,4,12,10,-1,8,1,11,-1,8,11,12,-1,9,7,1,-1,9,1,8,-1,6,9,8,-1,6,8,4,-1,12,11,0,-1,9,2,7,-1,12,0,3,-1,5,9,6,-1,2,9,5,-1,3,10,12,-1,14,13,15,-1,14,15,16,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.332774f,0f,4.080407f,3.928989f,0f,4.162713f,3.525203f,0f,4.245018f,4.332774f,0.075f,4.080407f,3.928989f,0.075f,4.162713f,3.525203f,0.075f,4.245018f,3.727096f,0.075f,4.203866f,3.727096f,0f,4.203866f,3.928989f,0.0375f,4.162713f,3.727096f,0.0375f,4.203866f,4.130881f,0.075f,4.12156f,4.130881f,0f,4.12156f,4.130881f,0.0375f,4.12156f,3.525203f,0f,4.245018f,3.659323f,0f,4.902997f,3.525203f,0.075f,4.245018f,3.659323f,0.075f,4.902997f,3.659323f,0f,4.902997f,4.466894f,0f,4.738386f,3.659323f,0.075f,4.902997f,4.466894f,0.075f,4.738386f,4.466894f,0f,4.738386f,4.332774f,0f,4.080407f,4.466894f,0.075f,4.738386f,4.332774f,0.075f,4.080407f});
  }
}
private class MFInt321251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1253 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.19466f,0f,3.40283f,3.387089f,0f,3.567442f,4.19466f,0.075f,3.40283f,3.387089f,0.075f,3.567442f,3.387089f,0f,3.567442f,3.454149f,0f,3.896431f,3.521209f,0f,4.225421f,3.387089f,0.075f,3.567442f,3.454149f,0.075f,3.896431f,3.521209f,0.075f,4.225421f,3.420619f,0.075f,3.731937f,3.454149f,0.0375f,3.896431f,3.420619f,0f,3.731937f,3.420619f,0.0375f,3.731937f,3.487679f,0.075f,4.060926f,3.487679f,0f,4.060926f,3.487679f,0.0375f,4.060926f,3.521209f,0f,4.225421f,4.32878f,0f,4.06081f,3.521209f,0.075f,4.225421f,4.32878f,0.075f,4.06081f,4.32878f,0f,4.06081f,4.19466f,0f,3.40283f,4.32878f,0.075f,4.06081f,4.19466f,0.075f,3.40283f});
  }
}
private class MFInt321254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1256 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.918432f,0f,2.047678f,3.524445f,0f,2.127986f,3.918432f,0.075f,2.047678f,3.524445f,0.075f,2.127986f,3.524445f,0f,2.127986f,3.796679f,0f,3.463542f,3.524445f,0.075f,2.127986f,3.796679f,0.075f,3.463542f,3.796679f,0f,3.463542f,4.190666f,0f,3.383233f,3.796679f,0.075f,3.463542f,4.190666f,0.075f,3.383233f,4.190666f,0f,3.383233f,3.918432f,0f,2.047678f,4.190666f,0.075f,3.383233f,3.918432f,0.075f,2.047678f});
  }
}
private class MFInt321257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1259 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.504848f,0f,2.13198f,3.110861f,0f,2.212289f,3.504848f,0.075f,2.13198f,3.110861f,0.075f,2.212289f,3.110861f,0f,2.212289f,3.383095f,0f,3.547845f,3.110861f,0.075f,2.212289f,3.383095f,0.075f,3.547845f,3.383095f,0f,3.547845f,3.777081f,0f,3.467536f,3.383095f,0.075f,3.547845f,3.777081f,0.075f,3.467536f,3.777081f,0f,3.467536f,3.504848f,0f,2.13198f,3.777081f,0.075f,3.467536f,3.504848f,0.075f,2.13198f});
  }
}
private class MFInt321260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.780318f,0f,1.370101f,2.972747f,0f,1.534712f,3.780318f,0.075f,1.370101f,2.972747f,0.075f,1.534712f,2.972747f,0f,1.534712f,3.106867f,0f,2.192692f,2.972747f,0.075f,1.534712f,3.106867f,0.075f,2.192692f,3.106867f,0f,2.192692f,3.914438f,0f,2.02808f,3.106867f,0.075f,2.192692f,3.914438f,0.075f,2.02808f,3.914438f,0f,2.02808f,3.780318f,0f,1.370101f,3.914438f,0.075f,2.02808f,3.780318f,0.075f,1.370101f});
  }
}
private class MFInt321263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1265 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.642204f,0f,0.6925246f,2.834633f,0f,0.8571361f,3.642204f,0.075f,0.6925246f,2.834633f,0.075f,0.8571361f,2.834633f,0f,0.8571361f,2.968753f,0f,1.515115f,2.834633f,0.075f,0.8571361f,2.968753f,0.075f,1.515115f,2.968753f,0f,1.515115f,3.776324f,0f,1.350504f,2.968753f,0.075f,1.515115f,3.776324f,0.075f,1.350504f,3.776324f,0f,1.350504f,3.642204f,0f,0.6925246f,3.776324f,0.075f,1.350504f,3.642204f,0.075f,0.6925246f});
  }
}
private class MFInt321266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1268 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.365976f,0f,-0.6626283f,2.971989f,0f,-0.5823198f,3.365976f,0.075f,-0.6626283f,2.971989f,0.075f,-0.5823198f,2.971989f,0f,-0.5823198f,3.244223f,0f,0.753236f,2.971989f,0.075f,-0.5823198f,3.244223f,0.075f,0.753236f,3.244223f,0f,0.753236f,3.63821f,0f,0.6729276f,3.244223f,0.075f,0.753236f,3.63821f,0.075f,0.6729276f,3.63821f,0f,0.6729276f,3.365976f,0f,-0.6626283f,3.63821f,0.075f,0.6729276f,3.365976f,0.075f,-0.6626283f});
  }
}
private class MFInt321269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1271 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.952392f,0f,-0.5783253f,2.558405f,0f,-0.4980168f,2.952392f,0.075f,-0.5783253f,2.558405f,0.075f,-0.4980168f,2.558405f,0f,-0.4980168f,2.830639f,0f,0.837539f,2.558405f,0.075f,-0.4980168f,2.830639f,0.075f,0.837539f,2.830639f,0f,0.837539f,3.224626f,0f,0.7572306f,2.830639f,0.075f,0.837539f,3.224626f,0.075f,0.7572306f,3.224626f,0f,0.7572306f,2.952392f,0f,-0.5783253f,3.224626f,0.075f,0.7572306f,2.952392f,0.075f,-0.5783253f});
  }
}
private class MFInt321272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.64372f,0f,4.926589f,2.836149f,0f,5.091201f,3.64372f,0.075f,4.926589f,2.836149f,0.075f,5.091201f,2.836149f,0f,5.091201f,2.970269f,0f,5.74918f,2.836149f,0.075f,5.091201f,2.970269f,0.075f,5.74918f,2.970269f,0f,5.74918f,3.77784f,0f,5.584569f,2.970269f,0.075f,5.74918f,3.77784f,0.075f,5.584569f,3.77784f,0f,5.584569f,3.64372f,0f,4.926589f,3.77784f,0.075f,5.584569f,3.64372f,0.075f,4.926589f});
  }
}
private class MFInt321275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1277 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.367492f,0f,3.571436f,2.973505f,0f,3.651745f,3.367492f,0.075f,3.571436f,2.973505f,0.075f,3.651745f,2.973505f,0f,3.651745f,3.245739f,0f,4.9873f,2.973505f,0.075f,3.651745f,3.245739f,0.075f,4.9873f,3.245739f,0f,4.9873f,3.639726f,0f,4.906992f,3.245739f,0.075f,4.9873f,3.639726f,0.075f,4.906992f,3.639726f,0f,4.906992f,3.367492f,0f,3.571436f,3.639726f,0.075f,4.906992f,3.367492f,0.075f,3.571436f});
  }
}
private class MFInt321278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1280 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.953908f,0f,3.655739f,2.559921f,0f,3.736048f,2.953908f,0.075f,3.655739f,2.559921f,0.075f,3.736048f,2.559921f,0f,3.736048f,2.832155f,0f,5.071604f,2.559921f,0.075f,3.736048f,2.832155f,0.075f,5.071604f,2.832155f,0f,5.071604f,3.226142f,0f,4.991295f,2.832155f,0.075f,5.071604f,3.226142f,0.075f,4.991295f,3.226142f,0f,4.991295f,2.953908f,0f,3.655739f,3.226142f,0.075f,4.991295f,2.953908f,0.075f,3.655739f});
  }
}
private class MFInt321281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFInt321282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,22,21,23,-1,22,23,24,-1});
  }
}
private class MFVec3f1283 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.229378f,0f,2.89386f,2.421807f,0f,3.058471f,3.229378f,0.075f,2.89386f,2.421807f,0.075f,3.058471f,2.421807f,0f,3.058471f,2.488867f,0f,3.387461f,2.555927f,0f,3.716451f,2.421807f,0.075f,3.058471f,2.488867f,0.075f,3.387461f,2.555927f,0.075f,3.716451f,2.455337f,0.075f,3.222966f,2.488867f,0.0375f,3.387461f,2.455337f,0f,3.222966f,2.455337f,0.0375f,3.222966f,2.522397f,0.075f,3.551956f,2.522397f,0f,3.551956f,2.522397f,0.0375f,3.551956f,2.555927f,0f,3.716451f,3.363497f,0f,3.551839f,2.555927f,0.075f,3.716451f,3.363497f,0.075f,3.551839f,3.363497f,0f,3.551839f,3.229378f,0f,2.89386f,3.363497f,0.075f,3.551839f,3.229378f,0.075f,2.89386f});
  }
}
private class MFInt321284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.091264f,0f,2.216284f,2.283693f,0f,2.380895f,3.091264f,0.075f,2.216284f,2.283693f,0.075f,2.380895f,2.283693f,0f,2.380895f,2.417813f,0f,3.038874f,2.283693f,0.075f,2.380895f,2.417813f,0.075f,3.038874f,2.417813f,0f,3.038874f,3.225384f,0f,2.874263f,2.417813f,0.075f,3.038874f,3.225384f,0.075f,2.874263f,3.225384f,0f,2.874263f,3.091264f,0f,2.216284f,3.225384f,0.075f,2.874263f,3.091264f,0.075f,2.216284f});
  }
}
private class MFInt321287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1289 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.815036f,0f,0.8611306f,2.421049f,0f,0.941439f,2.815036f,0.075f,0.8611306f,2.421049f,0.075f,0.941439f,2.421049f,0f,0.941439f,2.693283f,0f,2.276995f,2.421049f,0.075f,0.941439f,2.693283f,0.075f,2.276995f,2.693283f,0f,2.276995f,3.08727f,0f,2.196687f,2.693283f,0.075f,2.276995f,3.08727f,0.075f,2.196687f,3.08727f,0f,2.196687f,2.815036f,0f,0.8611306f,3.08727f,0.075f,2.196687f,2.815036f,0.075f,0.8611306f});
  }
}
private class MFInt321290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFInt321291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,1,3,4,-1,2,1,4,-1,2,4,5,-1,7,6,8,-1,7,8,9,-1,11,10,12,-1,11,12,13,-1,15,14,16,-1,15,16,17,-1});
  }
}
private class MFVec3f1292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.401452f,0f,0.9454336f,2.204459f,0f,0.9855878f,2.007465f,0f,1.025742f,2.401452f,0.075f,0.9454336f,2.204459f,0.075f,0.9855878f,2.007465f,0.075f,1.025742f,2.007465f,0f,1.025742f,2.279699f,0f,2.361298f,2.007465f,0.075f,1.025742f,2.279699f,0.075f,2.361298f,2.279699f,0f,2.361298f,2.673686f,0f,2.280989f,2.279699f,0.075f,2.361298f,2.673686f,0.075f,2.280989f,2.673686f,0f,2.280989f,2.401452f,0f,0.9454336f,2.673686f,0.075f,2.280989f,2.401452f,0.075f,0.9454336f});
  }
}
private class MFInt321293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1});
  }
}
private class MFInt321294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,8,11,13,-1,8,13,10,-1,11,5,12,-1,11,12,13,-1,16,15,5,-1,16,5,11,-1,14,16,11,-1,14,11,8,-1,13,12,4,-1,16,6,15,-1,13,4,7,-1,9,16,14,-1,6,16,9,-1,7,10,13,-1,18,17,19,-1,18,19,20,-1,25,28,30,-1,25,30,27,-1,28,22,29,-1,28,29,30,-1,33,32,22,-1,33,22,28,-1,31,33,28,-1,31,28,25,-1,30,29,21,-1,33,23,32,-1,30,21,24,-1,26,33,31,-1,23,33,26,-1,24,27,30,-1});
  }
}
private class MFVec3f1295 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.676922f,0f,0.1835542f,1.869351f,0f,0.3481656f,2.676922f,0.075f,0.1835542f,1.869351f,0.075f,0.3481656f,1.869351f,0f,0.3481656f,1.936411f,0f,0.6771553f,2.003471f,0f,1.006145f,1.869351f,0.075f,0.3481656f,1.936411f,0.075f,0.6771553f,2.003471f,0.075f,1.006145f,1.902881f,0.075f,0.5126605f,1.936411f,0.0375f,0.6771553f,1.902881f,0f,0.5126605f,1.902881f,0.0375f,0.5126605f,1.969941f,0.075f,0.8416502f,1.969941f,0f,0.8416502f,1.969941f,0.0375f,0.8416502f,2.003471f,0f,1.006145f,2.811042f,0f,0.8415336f,2.003471f,0.075f,1.006145f,2.811042f,0.075f,0.8415336f,2.811042f,0f,0.8415336f,2.743982f,0f,0.5125439f,2.676922f,0f,0.1835542f,2.811042f,0.075f,0.8415336f,2.743982f,0.075f,0.5125439f,2.676922f,0.075f,0.1835542f,2.777512f,0.075f,0.6770387f,2.743982f,0.0375f,0.5125439f,2.777512f,0f,0.6770387f,2.777512f,0.0375f,0.6770387f,2.710452f,0.075f,0.348049f,2.710452f,0f,0.348049f,2.710452f,0.0375f,0.348049f});
  }
}
private class MFInt321296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.540324f,0f,3.740042f,1.732753f,0f,3.904654f,2.540324f,0.075f,3.740042f,1.732753f,0.075f,3.904654f,1.732753f,0f,3.904654f,1.866873f,0f,4.562633f,1.732753f,0.075f,3.904654f,1.866873f,0.075f,4.562633f,1.866873f,0f,4.562633f,2.674444f,0f,4.398022f,1.866873f,0.075f,4.562633f,2.674444f,0.075f,4.398022f,2.674444f,0f,4.398022f,2.540324f,0f,3.740042f,2.674444f,0.075f,4.398022f,2.540324f,0.075f,3.740042f});
  }
}
private class MFInt321299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321300 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1301 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.264096f,0f,2.38489f,1.870109f,0f,2.465198f,2.264096f,0.075f,2.38489f,1.870109f,0.075f,2.465198f,1.870109f,0f,2.465198f,2.142343f,0f,3.800754f,1.870109f,0.075f,2.465198f,2.142343f,0.075f,3.800754f,2.142343f,0f,3.800754f,2.53633f,0f,3.720445f,2.142343f,0.075f,3.800754f,2.53633f,0.075f,3.720445f,2.53633f,0f,3.720445f,2.264096f,0f,2.38489f,2.53633f,0.075f,3.720445f,2.264096f,0.075f,2.38489f});
  }
}
private class MFInt321302 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1304 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.850512f,0f,2.469193f,1.456525f,0f,2.549501f,1.850512f,0.075f,2.469193f,1.456525f,0.075f,2.549501f,1.456525f,0f,2.549501f,1.728759f,0f,3.885057f,1.456525f,0.075f,2.549501f,1.728759f,0.075f,3.885057f,1.728759f,0f,3.885057f,2.122746f,0f,3.804748f,1.728759f,0.075f,3.885057f,2.122746f,0.075f,3.804748f,2.122746f,0f,3.804748f,1.850512f,0f,2.469193f,2.122746f,0.075f,3.804748f,1.850512f,0.075f,2.469193f});
  }
}
private class MFInt321305 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321306 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1307 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.125982f,0f,1.707313f,1.318411f,0f,1.871925f,2.125982f,0.075f,1.707313f,1.318411f,0.075f,1.871925f,1.318411f,0f,1.871925f,1.452531f,0f,2.529904f,1.318411f,0.075f,1.871925f,1.452531f,0.075f,2.529904f,1.452531f,0f,2.529904f,2.260102f,0f,2.365293f,1.452531f,0.075f,2.529904f,2.260102f,0.075f,2.365293f,2.260102f,0f,2.365293f,2.125982f,0f,1.707313f,2.260102f,0.075f,2.365293f,2.125982f,0.075f,1.707313f});
  }
}
private class MFInt321308 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1});
  }
}
private class MFInt321309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,16,19,21,-1,16,21,18,-1,19,13,20,-1,19,20,21,-1,24,23,13,-1,24,13,19,-1,22,24,19,-1,22,19,16,-1,21,20,12,-1,24,14,23,-1,21,12,15,-1,17,24,22,-1,14,24,17,-1,15,18,21,-1});
  }
}
private class MFVec3f1310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.987868f,0f,1.029737f,1.180297f,0f,1.194348f,1.987868f,0.075f,1.029737f,1.180297f,0.075f,1.194348f,1.180297f,0f,1.194348f,1.314417f,0f,1.852327f,1.180297f,0.075f,1.194348f,1.314417f,0.075f,1.852327f,1.314417f,0f,1.852327f,2.121988f,0f,1.687716f,1.314417f,0.075f,1.852327f,2.121988f,0.075f,1.687716f,2.121988f,0f,1.687716f,2.054928f,0f,1.358726f,1.987868f,0f,1.029737f,2.121988f,0.075f,1.687716f,2.054928f,0.075f,1.358726f,1.987868f,0.075f,1.029737f,2.088458f,0.075f,1.523221f,2.054928f,0.0375f,1.358726f,2.088458f,0f,1.523221f,2.088458f,0.0375f,1.523221f,2.021398f,0.075f,1.194232f,2.021398f,0f,1.194232f,2.021398f,0.0375f,1.194232f});
  }
}
private class MFInt321311 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321312 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1313 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.71164f,0f,-0.3254162f,1.317653f,0f,-0.2451078f,1.71164f,0.075f,-0.3254162f,1.317653f,0.075f,-0.2451078f,1.317653f,0f,-0.2451078f,1.589887f,0f,1.090448f,1.317653f,0.075f,-0.2451078f,1.589887f,0.075f,1.090448f,1.589887f,0f,1.090448f,1.983874f,0f,1.01014f,1.589887f,0.075f,1.090448f,1.983874f,0.075f,1.01014f,1.983874f,0f,1.01014f,1.71164f,0f,-0.3254162f,1.983874f,0.075f,1.01014f,1.71164f,0.075f,-0.3254162f});
  }
}
private class MFInt321314 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1316 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.298056f,0f,-0.2411132f,0.9040694f,0f,-0.1608048f,1.298056f,0.075f,-0.2411132f,0.9040694f,0.075f,-0.1608048f,0.9040694f,0f,-0.1608048f,1.176303f,0f,1.174751f,0.9040694f,0.075f,-0.1608048f,1.176303f,0.075f,1.174751f,1.176303f,0f,1.174751f,1.57029f,0f,1.094443f,1.176303f,0.075f,1.174751f,1.57029f,0.075f,1.094443f,1.57029f,0f,1.094443f,1.298056f,0f,-0.2411132f,1.57029f,0.075f,1.094443f,1.298056f,0.075f,-0.2411132f});
  }
}
private class MFInt321317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321318 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1319 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.1607f,0f,1.198343f,0.7667135f,0f,1.278651f,1.1607f,0.075f,1.198343f,0.7667135f,0.075f,1.278651f,0.7667135f,0f,1.278651f,1.038947f,0f,2.614207f,0.7667135f,0.075f,1.278651f,1.038947f,0.075f,2.614207f,1.038947f,0f,2.614207f,1.432934f,0f,2.533899f,1.038947f,0.075f,2.614207f,1.432934f,0.075f,2.533899f,1.432934f,0f,2.533899f,1.1607f,0f,1.198343f,1.432934f,0.075f,2.533899f,1.1607f,0.075f,1.198343f});
  }
}
private class MFInt321320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.022586f,0f,0.5207662f,0.2150155f,0f,0.6853777f,1.022586f,0.075f,0.5207662f,0.2150155f,0.075f,0.6853777f,0.2150155f,0f,0.6853777f,0.349135f,0f,1.343357f,0.2150155f,0.075f,0.6853777f,0.349135f,0.075f,1.343357f,0.349135f,0f,1.343357f,1.156706f,0f,1.178746f,0.349135f,0.075f,1.343357f,1.156706f,0.075f,1.178746f,1.156706f,0f,1.178746f,1.022586f,0f,0.5207662f,1.156706f,0.075f,1.178746f,1.022586f,0.075f,0.5207662f});
  }
}
private class MFInt321323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFInt321324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,5,4,6,-1,5,6,7,-1,9,8,10,-1,9,10,11,-1,13,12,14,-1,13,14,15,-1});
  }
}
private class MFVec3f1325 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.8844724f,0f,-0.1568102f,0.07690154f,0f,0.007801231f,0.8844724f,0.075f,-0.1568102f,0.07690154f,0.075f,0.007801231f,0.07690154f,0f,0.007801231f,0.211021f,0f,0.6657807f,0.07690154f,0.075f,0.007801231f,0.211021f,0.075f,0.6657807f,0.211021f,0f,0.6657807f,1.018592f,0f,0.5011692f,0.211021f,0.075f,0.6657807f,1.018592f,0.075f,0.5011692f,1.018592f,0f,0.5011692f,0.8844724f,0f,-0.1568102f,1.018592f,0.075f,0.5011692f,0.8844724f,0.075f,-0.1568102f});
  }
}
}
