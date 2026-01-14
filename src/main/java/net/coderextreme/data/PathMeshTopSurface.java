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
public class PathMeshTopSurface implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new PathMeshTopSurface().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/PathMeshTopSurface.new.java.x3d");
    model.toFileJSON("../data/PathMeshTopSurface.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("PathMeshTopSurface.x3d"))
        .addMeta(new meta().setName("description").setContent("Pathway for HAnim scene Winter and Spring."))
        .addMeta(new meta().setName("creator").setContent("Carol McDonald"))
        .addMeta(new meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("27 May 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:53 GMT"))
        .addMeta(new meta().setName("source").setContent("originals/PathMeshTopSurface.x3dv"))
        .addMeta(new meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/pathway.x3dv"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d"))
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setDEF("pathTop").setHeadlight(false))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setTexCoordIndex(new MFInt320().getArray()).setCoordIndex(new MFInt321().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt323().getArray()).setCoordIndex(new MFInt324().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt326().getArray()).setCoordIndex(new MFInt327().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt329().getArray()).setCoordIndex(new MFInt3210().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3212().getArray()).setCoordIndex(new MFInt3213().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3215().getArray()).setCoordIndex(new MFInt3216().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3218().getArray()).setCoordIndex(new MFInt3219().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3221().getArray()).setCoordIndex(new MFInt3222().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3224().getArray()).setCoordIndex(new MFInt3225().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3227().getArray()).setCoordIndex(new MFInt3228().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3230().getArray()).setCoordIndex(new MFInt3231().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3233().getArray()).setCoordIndex(new MFInt3234().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3236().getArray()).setCoordIndex(new MFInt3237().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3239().getArray()).setCoordIndex(new MFInt3240().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3242().getArray()).setCoordIndex(new MFInt3243().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3245().getArray()).setCoordIndex(new MFInt3246().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3248().getArray()).setCoordIndex(new MFInt3249().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3251().getArray()).setCoordIndex(new MFInt3252().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3254().getArray()).setCoordIndex(new MFInt3255().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3257().getArray()).setCoordIndex(new MFInt3258().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3260().getArray()).setCoordIndex(new MFInt3261().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3263().getArray()).setCoordIndex(new MFInt3264().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3266().getArray()).setCoordIndex(new MFInt3267().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3269().getArray()).setCoordIndex(new MFInt3270().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3272().getArray()).setCoordIndex(new MFInt3273().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3275().getArray()).setCoordIndex(new MFInt3276().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3278().getArray()).setCoordIndex(new MFInt3279().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3281().getArray()).setCoordIndex(new MFInt3282().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3284().getArray()).setCoordIndex(new MFInt3285().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3287().getArray()).setCoordIndex(new MFInt3288().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3290().getArray()).setCoordIndex(new MFInt3291().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3293().getArray()).setCoordIndex(new MFInt3294().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3296().getArray()).setCoordIndex(new MFInt3297().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3299().getArray()).setCoordIndex(new MFInt32100().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32102().getArray()).setCoordIndex(new MFInt32103().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32105().getArray()).setCoordIndex(new MFInt32106().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32108().getArray()).setCoordIndex(new MFInt32109().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32111().getArray()).setCoordIndex(new MFInt32112().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32114().getArray()).setCoordIndex(new MFInt32115().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32117().getArray()).setCoordIndex(new MFInt32118().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32120().getArray()).setCoordIndex(new MFInt32121().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32123().getArray()).setCoordIndex(new MFInt32124().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32126().getArray()).setCoordIndex(new MFInt32127().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32129().getArray()).setCoordIndex(new MFInt32130().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f131().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32132().getArray()).setCoordIndex(new MFInt32133().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32135().getArray()).setCoordIndex(new MFInt32136().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32138().getArray()).setCoordIndex(new MFInt32139().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32141().getArray()).setCoordIndex(new MFInt32142().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32144().getArray()).setCoordIndex(new MFInt32145().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32147().getArray()).setCoordIndex(new MFInt32148().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32150().getArray()).setCoordIndex(new MFInt32151().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32153().getArray()).setCoordIndex(new MFInt32154().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f155().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32156().getArray()).setCoordIndex(new MFInt32157().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32159().getArray()).setCoordIndex(new MFInt32160().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32162().getArray()).setCoordIndex(new MFInt32163().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32165().getArray()).setCoordIndex(new MFInt32166().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f167().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32168().getArray()).setCoordIndex(new MFInt32169().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32171().getArray()).setCoordIndex(new MFInt32172().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f173().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32174().getArray()).setCoordIndex(new MFInt32175().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32177().getArray()).setCoordIndex(new MFInt32178().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f179().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32180().getArray()).setCoordIndex(new MFInt32181().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32183().getArray()).setCoordIndex(new MFInt32184().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f185().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32186().getArray()).setCoordIndex(new MFInt32187().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32189().getArray()).setCoordIndex(new MFInt32190().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f191().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32192().getArray()).setCoordIndex(new MFInt32193().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32195().getArray()).setCoordIndex(new MFInt32196().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32198().getArray()).setCoordIndex(new MFInt32199().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32201().getArray()).setCoordIndex(new MFInt32202().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f203().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32204().getArray()).setCoordIndex(new MFInt32205().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32207().getArray()).setCoordIndex(new MFInt32208().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32210().getArray()).setCoordIndex(new MFInt32211().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32213().getArray()).setCoordIndex(new MFInt32214().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f215().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32216().getArray()).setCoordIndex(new MFInt32217().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32219().getArray()).setCoordIndex(new MFInt32220().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32222().getArray()).setCoordIndex(new MFInt32223().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32225().getArray()).setCoordIndex(new MFInt32226().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f227().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32228().getArray()).setCoordIndex(new MFInt32229().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32231().getArray()).setCoordIndex(new MFInt32232().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32234().getArray()).setCoordIndex(new MFInt32235().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32237().getArray()).setCoordIndex(new MFInt32238().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32240().getArray()).setCoordIndex(new MFInt32241().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32243().getArray()).setCoordIndex(new MFInt32244().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32246().getArray()).setCoordIndex(new MFInt32247().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32249().getArray()).setCoordIndex(new MFInt32250().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32252().getArray()).setCoordIndex(new MFInt32253().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32255().getArray()).setCoordIndex(new MFInt32256().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f257().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32258().getArray()).setCoordIndex(new MFInt32259().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32261().getArray()).setCoordIndex(new MFInt32262().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32264().getArray()).setCoordIndex(new MFInt32265().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32267().getArray()).setCoordIndex(new MFInt32268().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f269().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32270().getArray()).setCoordIndex(new MFInt32271().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32273().getArray()).setCoordIndex(new MFInt32274().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32276().getArray()).setCoordIndex(new MFInt32277().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32279().getArray()).setCoordIndex(new MFInt32280().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f281().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32282().getArray()).setCoordIndex(new MFInt32283().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32285().getArray()).setCoordIndex(new MFInt32286().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f287().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32288().getArray()).setCoordIndex(new MFInt32289().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32291().getArray()).setCoordIndex(new MFInt32292().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f293().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32294().getArray()).setCoordIndex(new MFInt32295().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32297().getArray()).setCoordIndex(new MFInt32298().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f299().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32300().getArray()).setCoordIndex(new MFInt32301().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32303().getArray()).setCoordIndex(new MFInt32304().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32306().getArray()).setCoordIndex(new MFInt32307().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32309().getArray()).setCoordIndex(new MFInt32310().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f311().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32312().getArray()).setCoordIndex(new MFInt32313().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32315().getArray()).setCoordIndex(new MFInt32316().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f317().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32318().getArray()).setCoordIndex(new MFInt32319().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32321().getArray()).setCoordIndex(new MFInt32322().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f323().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32324().getArray()).setCoordIndex(new MFInt32325().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32327().getArray()).setCoordIndex(new MFInt32328().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32330().getArray()).setCoordIndex(new MFInt32331().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f332().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32333().getArray()).setCoordIndex(new MFInt32334().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32336().getArray()).setCoordIndex(new MFInt32337().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32339().getArray()).setCoordIndex(new MFInt32340().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32342().getArray()).setCoordIndex(new MFInt32343().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f344().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32345().getArray()).setCoordIndex(new MFInt32346().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32348().getArray()).setCoordIndex(new MFInt32349().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f350().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32351().getArray()).setCoordIndex(new MFInt32352().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32354().getArray()).setCoordIndex(new MFInt32355().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32357().getArray()).setCoordIndex(new MFInt32358().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32360().getArray()).setCoordIndex(new MFInt32361().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f362().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32363().getArray()).setCoordIndex(new MFInt32364().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32366().getArray()).setCoordIndex(new MFInt32367().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32369().getArray()).setCoordIndex(new MFInt32370().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32372().getArray()).setCoordIndex(new MFInt32373().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f374().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32375().getArray()).setCoordIndex(new MFInt32376().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32378().getArray()).setCoordIndex(new MFInt32379().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32381().getArray()).setCoordIndex(new MFInt32382().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32384().getArray()).setCoordIndex(new MFInt32385().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f386().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32387().getArray()).setCoordIndex(new MFInt32388().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32390().getArray()).setCoordIndex(new MFInt32391().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32393().getArray()).setCoordIndex(new MFInt32394().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32396().getArray()).setCoordIndex(new MFInt32397().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32399().getArray()).setCoordIndex(new MFInt32400().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f401().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32402().getArray()).setCoordIndex(new MFInt32403().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f404().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32405().getArray()).setCoordIndex(new MFInt32406().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f407().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32408().getArray()).setCoordIndex(new MFInt32409().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f410().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32411().getArray()).setCoordIndex(new MFInt32412().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f413().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32414().getArray()).setCoordIndex(new MFInt32415().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32417().getArray()).setCoordIndex(new MFInt32418().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f419().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32420().getArray()).setCoordIndex(new MFInt32421().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f422().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32423().getArray()).setCoordIndex(new MFInt32424().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f425().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32426().getArray()).setCoordIndex(new MFInt32427().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32429().getArray()).setCoordIndex(new MFInt32430().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f431().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32432().getArray()).setCoordIndex(new MFInt32433().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f434().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32435().getArray()).setCoordIndex(new MFInt32436().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f437().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32438().getArray()).setCoordIndex(new MFInt32439().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32441().getArray()).setCoordIndex(new MFInt32442().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f443().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32444().getArray()).setCoordIndex(new MFInt32445().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32447().getArray()).setCoordIndex(new MFInt32448().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32450().getArray()).setCoordIndex(new MFInt32451().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32453().getArray()).setCoordIndex(new MFInt32454().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f455().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32456().getArray()).setCoordIndex(new MFInt32457().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32459().getArray()).setCoordIndex(new MFInt32460().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f461().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32462().getArray()).setCoordIndex(new MFInt32463().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f464().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32465().getArray()).setCoordIndex(new MFInt32466().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f467().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32468().getArray()).setCoordIndex(new MFInt32469().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f470().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32471().getArray()).setCoordIndex(new MFInt32472().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f473().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32474().getArray()).setCoordIndex(new MFInt32475().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32477().getArray()).setCoordIndex(new MFInt32478().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f479().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32480().getArray()).setCoordIndex(new MFInt32481().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f482().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32483().getArray()).setCoordIndex(new MFInt32484().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f485().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32486().getArray()).setCoordIndex(new MFInt32487().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32489().getArray()).setCoordIndex(new MFInt32490().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f491().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32492().getArray()).setCoordIndex(new MFInt32493().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32495().getArray()).setCoordIndex(new MFInt32496().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f497().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32498().getArray()).setCoordIndex(new MFInt32499().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f500().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32501().getArray()).setCoordIndex(new MFInt32502().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f503().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32504().getArray()).setCoordIndex(new MFInt32505().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32507().getArray()).setCoordIndex(new MFInt32508().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f509().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32510().getArray()).setCoordIndex(new MFInt32511().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f512().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32513().getArray()).setCoordIndex(new MFInt32514().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f515().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32516().getArray()).setCoordIndex(new MFInt32517().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f518().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32519().getArray()).setCoordIndex(new MFInt32520().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f521().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32522().getArray()).setCoordIndex(new MFInt32523().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f524().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32525().getArray()).setCoordIndex(new MFInt32526().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f527().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32528().getArray()).setCoordIndex(new MFInt32529().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f530().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32531().getArray()).setCoordIndex(new MFInt32532().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f533().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32534().getArray()).setCoordIndex(new MFInt32535().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f536().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32537().getArray()).setCoordIndex(new MFInt32538().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f539().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32540().getArray()).setCoordIndex(new MFInt32541().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f542().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32543().getArray()).setCoordIndex(new MFInt32544().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f545().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32546().getArray()).setCoordIndex(new MFInt32547().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f548().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32549().getArray()).setCoordIndex(new MFInt32550().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f551().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32552().getArray()).setCoordIndex(new MFInt32553().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f554().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32555().getArray()).setCoordIndex(new MFInt32556().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f557().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32558().getArray()).setCoordIndex(new MFInt32559().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f560().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32561().getArray()).setCoordIndex(new MFInt32562().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f563().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32564().getArray()).setCoordIndex(new MFInt32565().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f566().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32567().getArray()).setCoordIndex(new MFInt32568().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f569().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32570().getArray()).setCoordIndex(new MFInt32571().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f572().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32573().getArray()).setCoordIndex(new MFInt32574().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f575().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32576().getArray()).setCoordIndex(new MFInt32577().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f578().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32579().getArray()).setCoordIndex(new MFInt32580().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f581().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32582().getArray()).setCoordIndex(new MFInt32583().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f584().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32585().getArray()).setCoordIndex(new MFInt32586().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f587().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32588().getArray()).setCoordIndex(new MFInt32589().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f590().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32591().getArray()).setCoordIndex(new MFInt32592().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f593().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32594().getArray()).setCoordIndex(new MFInt32595().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f596().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32597().getArray()).setCoordIndex(new MFInt32598().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f599().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32600().getArray()).setCoordIndex(new MFInt32601().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f602().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32603().getArray()).setCoordIndex(new MFInt32604().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f605().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32606().getArray()).setCoordIndex(new MFInt32607().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f608().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32609().getArray()).setCoordIndex(new MFInt32610().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f611().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32612().getArray()).setCoordIndex(new MFInt32613().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f614().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32615().getArray()).setCoordIndex(new MFInt32616().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f617().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32618().getArray()).setCoordIndex(new MFInt32619().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f620().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32621().getArray()).setCoordIndex(new MFInt32622().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f623().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32624().getArray()).setCoordIndex(new MFInt32625().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f626().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32627().getArray()).setCoordIndex(new MFInt32628().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f629().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32630().getArray()).setCoordIndex(new MFInt32631().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f632().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32633().getArray()).setCoordIndex(new MFInt32634().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f635().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32636().getArray()).setCoordIndex(new MFInt32637().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f638().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32639().getArray()).setCoordIndex(new MFInt32640().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f641().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32642().getArray()).setCoordIndex(new MFInt32643().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f644().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32645().getArray()).setCoordIndex(new MFInt32646().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f647().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32648().getArray()).setCoordIndex(new MFInt32649().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f650().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32651().getArray()).setCoordIndex(new MFInt32652().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f653().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32654().getArray()).setCoordIndex(new MFInt32655().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f656().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32657().getArray()).setCoordIndex(new MFInt32658().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f659().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32660().getArray()).setCoordIndex(new MFInt32661().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f662().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32663().getArray()).setCoordIndex(new MFInt32664().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f665().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32666().getArray()).setCoordIndex(new MFInt32667().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f668().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32669().getArray()).setCoordIndex(new MFInt32670().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f671().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32672().getArray()).setCoordIndex(new MFInt32673().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f674().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32675().getArray()).setCoordIndex(new MFInt32676().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f677().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32678().getArray()).setCoordIndex(new MFInt32679().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f680().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32681().getArray()).setCoordIndex(new MFInt32682().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f683().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32684().getArray()).setCoordIndex(new MFInt32685().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f686().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32687().getArray()).setCoordIndex(new MFInt32688().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f689().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32690().getArray()).setCoordIndex(new MFInt32691().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f692().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32693().getArray()).setCoordIndex(new MFInt32694().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f695().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32696().getArray()).setCoordIndex(new MFInt32697().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f698().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32699().getArray()).setCoordIndex(new MFInt32700().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f701().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32702().getArray()).setCoordIndex(new MFInt32703().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f704().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32705().getArray()).setCoordIndex(new MFInt32706().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f707().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32708().getArray()).setCoordIndex(new MFInt32709().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f710().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32711().getArray()).setCoordIndex(new MFInt32712().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f713().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32714().getArray()).setCoordIndex(new MFInt32715().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f716().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32717().getArray()).setCoordIndex(new MFInt32718().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f719().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32720().getArray()).setCoordIndex(new MFInt32721().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f722().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32723().getArray()).setCoordIndex(new MFInt32724().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f725().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32726().getArray()).setCoordIndex(new MFInt32727().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f728().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32729().getArray()).setCoordIndex(new MFInt32730().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f731().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32732().getArray()).setCoordIndex(new MFInt32733().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f734().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32735().getArray()).setCoordIndex(new MFInt32736().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f737().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32738().getArray()).setCoordIndex(new MFInt32739().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f740().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32741().getArray()).setCoordIndex(new MFInt32742().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f743().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32744().getArray()).setCoordIndex(new MFInt32745().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f746().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32747().getArray()).setCoordIndex(new MFInt32748().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f749().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32750().getArray()).setCoordIndex(new MFInt32751().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f752().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32753().getArray()).setCoordIndex(new MFInt32754().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f755().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32756().getArray()).setCoordIndex(new MFInt32757().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f758().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32759().getArray()).setCoordIndex(new MFInt32760().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f761().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32762().getArray()).setCoordIndex(new MFInt32763().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f764().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32765().getArray()).setCoordIndex(new MFInt32766().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f767().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32768().getArray()).setCoordIndex(new MFInt32769().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f770().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32771().getArray()).setCoordIndex(new MFInt32772().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f773().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32774().getArray()).setCoordIndex(new MFInt32775().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f776().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32777().getArray()).setCoordIndex(new MFInt32778().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f779().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32780().getArray()).setCoordIndex(new MFInt32781().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f782().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32783().getArray()).setCoordIndex(new MFInt32784().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f785().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32786().getArray()).setCoordIndex(new MFInt32787().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f788().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32789().getArray()).setCoordIndex(new MFInt32790().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f791().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32792().getArray()).setCoordIndex(new MFInt32793().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f794().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32795().getArray()).setCoordIndex(new MFInt32796().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f797().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32798().getArray()).setCoordIndex(new MFInt32799().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f800().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32801().getArray()).setCoordIndex(new MFInt32802().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f803().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32804().getArray()).setCoordIndex(new MFInt32805().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f806().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32807().getArray()).setCoordIndex(new MFInt32808().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f809().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32810().getArray()).setCoordIndex(new MFInt32811().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f812().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32813().getArray()).setCoordIndex(new MFInt32814().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f815().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32816().getArray()).setCoordIndex(new MFInt32817().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f818().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32819().getArray()).setCoordIndex(new MFInt32820().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f821().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32822().getArray()).setCoordIndex(new MFInt32823().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f824().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32825().getArray()).setCoordIndex(new MFInt32826().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f827().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32828().getArray()).setCoordIndex(new MFInt32829().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f830().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32831().getArray()).setCoordIndex(new MFInt32832().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f833().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32834().getArray()).setCoordIndex(new MFInt32835().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f836().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32837().getArray()).setCoordIndex(new MFInt32838().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f839().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32840().getArray()).setCoordIndex(new MFInt32841().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f842().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32843().getArray()).setCoordIndex(new MFInt32844().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f845().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32846().getArray()).setCoordIndex(new MFInt32847().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f848().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32849().getArray()).setCoordIndex(new MFInt32850().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f851().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32852().getArray()).setCoordIndex(new MFInt32853().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f854().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32855().getArray()).setCoordIndex(new MFInt32856().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f857().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32858().getArray()).setCoordIndex(new MFInt32859().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f860().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32861().getArray()).setCoordIndex(new MFInt32862().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f863().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32864().getArray()).setCoordIndex(new MFInt32865().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f866().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32867().getArray()).setCoordIndex(new MFInt32868().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f869().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32870().getArray()).setCoordIndex(new MFInt32871().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f872().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32873().getArray()).setCoordIndex(new MFInt32874().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f875().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32876().getArray()).setCoordIndex(new MFInt32877().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f878().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32879().getArray()).setCoordIndex(new MFInt32880().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f881().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32882().getArray()).setCoordIndex(new MFInt32883().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f884().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32885().getArray()).setCoordIndex(new MFInt32886().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f887().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32888().getArray()).setCoordIndex(new MFInt32889().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f890().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32891().getArray()).setCoordIndex(new MFInt32892().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f893().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32894().getArray()).setCoordIndex(new MFInt32895().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f896().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32897().getArray()).setCoordIndex(new MFInt32898().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f899().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32900().getArray()).setCoordIndex(new MFInt32901().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f902().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32903().getArray()).setCoordIndex(new MFInt32904().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f905().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32906().getArray()).setCoordIndex(new MFInt32907().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f908().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32909().getArray()).setCoordIndex(new MFInt32910().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f911().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32912().getArray()).setCoordIndex(new MFInt32913().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f914().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32915().getArray()).setCoordIndex(new MFInt32916().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f917().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32918().getArray()).setCoordIndex(new MFInt32919().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f920().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32921().getArray()).setCoordIndex(new MFInt32922().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f923().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32924().getArray()).setCoordIndex(new MFInt32925().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f926().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32927().getArray()).setCoordIndex(new MFInt32928().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f929().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32930().getArray()).setCoordIndex(new MFInt32931().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f932().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32933().getArray()).setCoordIndex(new MFInt32934().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f935().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32936().getArray()).setCoordIndex(new MFInt32937().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f938().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32939().getArray()).setCoordIndex(new MFInt32940().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f941().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32942().getArray()).setCoordIndex(new MFInt32943().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f944().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32945().getArray()).setCoordIndex(new MFInt32946().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f947().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32948().getArray()).setCoordIndex(new MFInt32949().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f950().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32951().getArray()).setCoordIndex(new MFInt32952().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f953().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32954().getArray()).setCoordIndex(new MFInt32955().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f956().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32957().getArray()).setCoordIndex(new MFInt32958().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f959().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32960().getArray()).setCoordIndex(new MFInt32961().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f962().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32963().getArray()).setCoordIndex(new MFInt32964().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f965().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32966().getArray()).setCoordIndex(new MFInt32967().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f968().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32969().getArray()).setCoordIndex(new MFInt32970().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f971().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32972().getArray()).setCoordIndex(new MFInt32973().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f974().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32975().getArray()).setCoordIndex(new MFInt32976().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f977().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32978().getArray()).setCoordIndex(new MFInt32979().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f980().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32981().getArray()).setCoordIndex(new MFInt32982().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f983().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32984().getArray()).setCoordIndex(new MFInt32985().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f986().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32987().getArray()).setCoordIndex(new MFInt32988().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f989().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32990().getArray()).setCoordIndex(new MFInt32991().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f992().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32993().getArray()).setCoordIndex(new MFInt32994().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f995().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32996().getArray()).setCoordIndex(new MFInt32997().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f998().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt32999().getArray()).setCoordIndex(new MFInt321000().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1001().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321002().getArray()).setCoordIndex(new MFInt321003().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1004().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321005().getArray()).setCoordIndex(new MFInt321006().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1007().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321008().getArray()).setCoordIndex(new MFInt321009().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1010().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321011().getArray()).setCoordIndex(new MFInt321012().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1013().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321014().getArray()).setCoordIndex(new MFInt321015().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1016().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321017().getArray()).setCoordIndex(new MFInt321018().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1019().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321020().getArray()).setCoordIndex(new MFInt321021().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1022().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321023().getArray()).setCoordIndex(new MFInt321024().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1025().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321026().getArray()).setCoordIndex(new MFInt321027().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1028().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321029().getArray()).setCoordIndex(new MFInt321030().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1031().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321032().getArray()).setCoordIndex(new MFInt321033().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1034().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321035().getArray()).setCoordIndex(new MFInt321036().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1037().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321038().getArray()).setCoordIndex(new MFInt321039().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1040().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321041().getArray()).setCoordIndex(new MFInt321042().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1043().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321044().getArray()).setCoordIndex(new MFInt321045().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1046().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321047().getArray()).setCoordIndex(new MFInt321048().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1049().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321050().getArray()).setCoordIndex(new MFInt321051().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1052().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321053().getArray()).setCoordIndex(new MFInt321054().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1055().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321056().getArray()).setCoordIndex(new MFInt321057().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1058().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321059().getArray()).setCoordIndex(new MFInt321060().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1061().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321062().getArray()).setCoordIndex(new MFInt321063().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1064().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321065().getArray()).setCoordIndex(new MFInt321066().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1067().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321068().getArray()).setCoordIndex(new MFInt321069().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1070().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321071().getArray()).setCoordIndex(new MFInt321072().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1073().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321074().getArray()).setCoordIndex(new MFInt321075().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1076().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321077().getArray()).setCoordIndex(new MFInt321078().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1079().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321080().getArray()).setCoordIndex(new MFInt321081().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1082().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321083().getArray()).setCoordIndex(new MFInt321084().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1085().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321086().getArray()).setCoordIndex(new MFInt321087().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1088().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321089().getArray()).setCoordIndex(new MFInt321090().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1091().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321092().getArray()).setCoordIndex(new MFInt321093().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1094().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321095().getArray()).setCoordIndex(new MFInt321096().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1097().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321098().getArray()).setCoordIndex(new MFInt321099().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1100().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321101().getArray()).setCoordIndex(new MFInt321102().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1103().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321104().getArray()).setCoordIndex(new MFInt321105().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1106().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321107().getArray()).setCoordIndex(new MFInt321108().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1109().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321110().getArray()).setCoordIndex(new MFInt321111().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1112().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321113().getArray()).setCoordIndex(new MFInt321114().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1115().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321116().getArray()).setCoordIndex(new MFInt321117().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1118().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321119().getArray()).setCoordIndex(new MFInt321120().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1121().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321122().getArray()).setCoordIndex(new MFInt321123().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1124().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321125().getArray()).setCoordIndex(new MFInt321126().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1127().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321128().getArray()).setCoordIndex(new MFInt321129().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1130().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321131().getArray()).setCoordIndex(new MFInt321132().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1133().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321134().getArray()).setCoordIndex(new MFInt321135().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1136().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321137().getArray()).setCoordIndex(new MFInt321138().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1139().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321140().getArray()).setCoordIndex(new MFInt321141().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1142().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321143().getArray()).setCoordIndex(new MFInt321144().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1145().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321146().getArray()).setCoordIndex(new MFInt321147().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1148().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321149().getArray()).setCoordIndex(new MFInt321150().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1151().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321152().getArray()).setCoordIndex(new MFInt321153().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1154().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321155().getArray()).setCoordIndex(new MFInt321156().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1157().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321158().getArray()).setCoordIndex(new MFInt321159().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1160().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321161().getArray()).setCoordIndex(new MFInt321162().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1163().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321164().getArray()).setCoordIndex(new MFInt321165().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1166().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321167().getArray()).setCoordIndex(new MFInt321168().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1169().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321170().getArray()).setCoordIndex(new MFInt321171().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1172().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321173().getArray()).setCoordIndex(new MFInt321174().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1175().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321176().getArray()).setCoordIndex(new MFInt321177().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1178().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321179().getArray()).setCoordIndex(new MFInt321180().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1181().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321182().getArray()).setCoordIndex(new MFInt321183().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1184().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321185().getArray()).setCoordIndex(new MFInt321186().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1187().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321188().getArray()).setCoordIndex(new MFInt321189().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1190().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321191().getArray()).setCoordIndex(new MFInt321192().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1193().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321194().getArray()).setCoordIndex(new MFInt321195().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1196().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321197().getArray()).setCoordIndex(new MFInt321198().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1199().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321200().getArray()).setCoordIndex(new MFInt321201().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1202().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321203().getArray()).setCoordIndex(new MFInt321204().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1205().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321206().getArray()).setCoordIndex(new MFInt321207().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1208().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321209().getArray()).setCoordIndex(new MFInt321210().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1211().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321212().getArray()).setCoordIndex(new MFInt321213().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1214().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321215().getArray()).setCoordIndex(new MFInt321216().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1217().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321218().getArray()).setCoordIndex(new MFInt321219().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1220().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321221().getArray()).setCoordIndex(new MFInt321222().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1223().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321224().getArray()).setCoordIndex(new MFInt321225().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1226().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321227().getArray()).setCoordIndex(new MFInt321228().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1229().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321230().getArray()).setCoordIndex(new MFInt321231().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1232().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321233().getArray()).setCoordIndex(new MFInt321234().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1235().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321236().getArray()).setCoordIndex(new MFInt321237().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1238().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321239().getArray()).setCoordIndex(new MFInt321240().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1241().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321242().getArray()).setCoordIndex(new MFInt321243().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1244().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321245().getArray()).setCoordIndex(new MFInt321246().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1247().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321248().getArray()).setCoordIndex(new MFInt321249().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1250().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321251().getArray()).setCoordIndex(new MFInt321252().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1253().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321254().getArray()).setCoordIndex(new MFInt321255().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1256().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321257().getArray()).setCoordIndex(new MFInt321258().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1259().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321260().getArray()).setCoordIndex(new MFInt321261().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1262().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321263().getArray()).setCoordIndex(new MFInt321264().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1265().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321266().getArray()).setCoordIndex(new MFInt321267().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1268().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321269().getArray()).setCoordIndex(new MFInt321270().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1271().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321272().getArray()).setCoordIndex(new MFInt321273().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1274().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321275().getArray()).setCoordIndex(new MFInt321276().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1277().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321278().getArray()).setCoordIndex(new MFInt321279().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1280().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321281().getArray()).setCoordIndex(new MFInt321282().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1283().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321284().getArray()).setCoordIndex(new MFInt321285().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1286().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321287().getArray()).setCoordIndex(new MFInt321288().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1289().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321290().getArray()).setCoordIndex(new MFInt321291().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1292().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321293().getArray()).setCoordIndex(new MFInt321294().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1295().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321296().getArray()).setCoordIndex(new MFInt321297().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1298().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321299().getArray()).setCoordIndex(new MFInt321300().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1301().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321302().getArray()).setCoordIndex(new MFInt321303().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1304().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321305().getArray()).setCoordIndex(new MFInt321306().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1307().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321308().getArray()).setCoordIndex(new MFInt321309().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1310().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321311().getArray()).setCoordIndex(new MFInt321312().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1313().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321314().getArray()).setCoordIndex(new MFInt321315().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1316().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321317().getArray()).setCoordIndex(new MFInt321318().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1319().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321320().getArray()).setCoordIndex(new MFInt321321().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1322().getArray()))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0.5f ,0.5f ,0.5f }).setShininess(0f )))
          .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321323().getArray()).setCoordIndex(new MFInt321324().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1325().getArray())))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.39594f ,0.075f ,25.67472f ,26.00195f ,0.075f ,25.75502f ,26.25982f ,0.075f ,25.00694f ,25.86584f ,0.075f ,25.08724f ,26.1237f ,0.075f ,24.33916f ,25.72972f ,0.075f ,24.41947f });
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.39918f ,0.075f ,23.57728f ,26.53329f ,0.075f ,24.23526f ,25.5916f ,0.075f ,23.74189f ,25.72572f ,0.075f ,24.39987f });
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.58761f ,0.075f ,23.72229f ,25.45349f ,0.075f ,23.06431f ,26.39518f ,0.075f ,23.55768f ,26.26106f ,0.075f ,22.8997f });
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f11 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.84348f ,0.075f ,22.96441f ,25.4495f ,0.075f ,23.04472f ,25.57125f ,0.075f ,21.62885f ,25.17726f ,0.075f ,21.70916f });
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.72724f ,0.075f ,28.63393f ,25.59312f ,0.075f ,27.97596f ,26.53481f ,0.075f ,28.46932f ,26.40069f ,0.075f ,27.81134f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {26.26258f ,0.075f ,27.13377f ,26.3967f ,0.075f ,27.79175f ,25.85879f ,0.075f ,27.21607f ,25.99291f ,0.075f ,27.87405f ,25.45501f ,0.075f ,27.29838f ,25.58913f ,0.075f ,27.95636f });
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.59236f ,0.075f ,25.85892f ,25.78936f ,0.075f ,25.81877f ,25.98635f ,0.075f ,25.77861f ,25.72848f ,0.075f ,26.5267f ,25.92547f ,0.075f ,26.48655f ,26.12247f ,0.075f ,26.44639f ,25.8646f ,0.075f ,27.19448f ,26.06159f ,0.075f ,27.15432f ,26.25858f ,0.075f ,27.11417f });
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f23 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.17878f ,0.075f ,25.94323f ,25.57277f ,0.075f ,25.86292f ,25.3149f ,0.075f ,26.611f ,25.70888f ,0.075f ,26.53069f ,25.45101f ,0.075f ,27.27878f ,25.845f ,0.075f ,27.19847f });
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.17478f ,0.075f ,25.92363f ,25.04066f ,0.075f ,25.26565f ,25.98236f ,0.075f ,25.75902f ,25.84824f ,0.075f ,25.10104f });
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f29 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.03667f ,0.075f ,25.24605f ,24.90255f ,0.075f ,24.58807f ,25.44046f ,0.075f ,25.16375f ,25.30634f ,0.075f ,24.50577f ,25.84424f ,0.075f ,25.08144f ,25.71012f ,0.075f ,24.42346f });
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.03991f ,0.075f ,23.14862f ,25.43389f ,0.075f ,23.06831f ,25.17602f ,0.075f ,23.81639f ,25.57001f ,0.075f ,23.73609f ,25.31214f ,0.075f ,24.48417f ,25.70613f ,0.075f ,24.40386f });
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f35 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.62632f ,0.075f ,23.23292f ,25.02031f ,0.075f ,23.15261f ,24.89856f ,0.075f ,24.56848f ,25.29254f ,0.075f ,24.48817f });
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.62233f ,0.075f ,23.21332f ,24.48821f ,0.075f ,22.55534f ,25.4299f ,0.075f ,23.04871f ,25.29578f ,0.075f ,22.39073f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.48421f ,0.075f ,22.53575f ,24.3501f ,0.075f ,21.87777f ,25.29178f ,0.075f ,22.37114f ,25.15767f ,0.075f ,21.71316f });
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.48745f ,0.075f ,20.43831f ,24.88144f ,0.075f ,20.358f ,24.75968f ,0.075f ,21.77387f ,25.15367f ,0.075f ,21.69356f });
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f47 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.74009f ,0.075f ,21.77786f ,24.3461f ,0.075f ,21.85817f ,24.46785f ,0.075f ,20.44231f ,24.07387f ,0.075f ,20.52261f });
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.1763f ,0.075f ,30.15769f ,25.04218f ,0.075f ,29.49971f ,25.58009f ,0.075f ,30.07539f ,25.44597f ,0.075f ,29.41741f ,25.98387f ,0.075f ,29.99308f ,25.84975f ,0.075f ,29.3351f });
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.03819f ,0.075f ,29.48012f ,24.90407f ,0.075f ,28.82214f ,25.44197f ,0.075f ,29.39781f ,25.30785f ,0.075f ,28.73983f ,25.84576f ,0.075f ,29.31551f ,25.71164f ,0.075f ,28.65753f });
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.04142f ,0.075f ,27.38268f ,25.43541f ,0.075f ,27.30237f ,25.17754f ,0.075f ,28.05046f ,25.57153f ,0.075f ,27.97015f ,25.31366f ,0.075f ,28.71824f ,25.70764f ,0.075f ,28.63793f });
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.62784f ,0.075f ,27.46698f ,24.82483f ,0.075f ,27.42683f ,25.02183f ,0.075f ,27.38668f ,24.76396f ,0.075f ,28.13476f ,24.96095f ,0.075f ,28.09461f ,25.15794f ,0.075f ,28.05445f ,24.90007f ,0.075f ,28.80254f ,25.09706f ,0.075f ,28.76239f ,25.29406f ,0.075f ,28.72223f });
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.62384f ,0.075f ,27.44739f ,24.55679f ,0.075f ,27.1184f ,24.48973f ,0.075f ,26.78941f ,25.43142f ,0.075f ,27.28278f ,25.36436f ,0.075f ,26.95379f ,25.2973f ,0.075f ,26.6248f });
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.48573f ,0.075f ,26.76981f ,24.35161f ,0.075f ,26.11183f ,25.2933f ,0.075f ,26.6052f ,25.15918f ,0.075f ,25.94722f });
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.15519f ,0.075f ,25.92762f ,24.7612f ,0.075f ,26.00793f ,24.88295f ,0.075f ,24.59207f ,24.48897f ,0.075f ,24.67238f });
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.07538f ,0.075f ,24.75668f ,24.46937f ,0.075f ,24.67637f ,24.34762f ,0.075f ,26.09224f ,24.7416f ,0.075f ,26.01193f });
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.07139f ,0.075f ,24.73708f ,23.93727f ,0.075f ,24.0791f ,24.87896f ,0.075f ,24.57247f ,24.74484f ,0.075f ,23.91449f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.60673f ,0.075f ,23.23692f ,24.74084f ,0.075f ,23.89489f ,24.20294f ,0.075f ,23.31922f ,24.33706f ,0.075f ,23.9772f ,23.79915f ,0.075f ,23.40153f ,23.93328f ,0.075f ,24.05951f });
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.60273f ,0.075f ,23.21732f ,24.40574f ,0.075f ,23.25747f ,24.20874f ,0.075f ,23.29763f ,24.46661f ,0.075f ,22.54954f ,24.26962f ,0.075f ,22.58969f ,24.07263f ,0.075f ,22.62985f ,24.3305f ,0.075f ,21.88176f ,24.1335f ,0.075f ,21.92192f ,23.93651f ,0.075f ,21.96207f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f83 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.52293f ,0.075f ,22.04637f ,23.91691f ,0.075f ,21.96606f ,23.65904f ,0.075f ,22.71415f ,24.05303f ,0.075f ,22.63384f ,23.79516f ,0.075f ,23.38193f ,24.18915f ,0.075f ,23.30162f });
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.51893f ,0.075f ,22.02678f ,23.38481f ,0.075f ,21.3688f ,24.3265f ,0.075f ,21.86217f ,24.19238f ,0.075f ,21.20419f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f89 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.05427f ,0.075f ,20.52661f ,24.18839f ,0.075f ,21.18459f ,23.2467f ,0.075f ,20.69122f ,23.38082f ,0.075f ,21.3492f });
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.05028f ,0.075f ,20.50701f ,23.65629f ,0.075f ,20.58732f ,23.91416f ,0.075f ,19.83923f ,23.52017f ,0.075f ,19.91954f ,23.77804f ,0.075f ,19.17146f ,23.38405f ,0.075f ,19.25176f });
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f95 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.97047f ,0.075f ,19.33607f ,23.36446f ,0.075f ,19.25576f ,23.2427f ,0.075f ,20.67162f ,23.63669f ,0.075f ,20.59131f });
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.49048f ,0.075f ,28.90644f ,24.88447f ,0.075f ,28.82613f ,24.76272f ,0.075f ,30.242f ,25.1567f ,0.075f ,30.16169f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f101 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.0769f ,0.075f ,28.99074f ,24.47089f ,0.075f ,28.91043f ,24.34913f ,0.075f ,30.3263f ,24.74312f ,0.075f ,30.24599f });
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.0729f ,0.075f ,28.97115f ,24.00584f ,0.075f ,28.64216f ,23.93879f ,0.075f ,28.31317f ,24.47669f ,0.075f ,28.88884f ,24.40963f ,0.075f ,28.55985f ,24.34257f ,0.075f ,28.23086f ,24.88048f ,0.075f ,28.80654f ,24.81342f ,0.075f ,28.47754f ,24.74636f ,0.075f ,28.14856f });
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f107 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.93479f ,0.075f ,28.29357f ,23.80067f ,0.075f ,27.63559f ,24.33858f ,0.075f ,28.21126f ,24.20446f ,0.075f ,27.55329f ,24.74236f ,0.075f ,28.12896f ,24.60824f ,0.075f ,27.47098f });
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.93803f ,0.075f ,26.19613f ,24.13502f ,0.075f ,26.15598f ,24.33201f ,0.075f ,26.11583f ,24.07414f ,0.075f ,26.86391f ,24.27114f ,0.075f ,26.82376f ,24.46813f ,0.075f ,26.7836f ,24.21026f ,0.075f ,27.53169f ,24.40725f ,0.075f ,27.49154f ,24.60425f ,0.075f ,27.45138f });
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f113 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.52444f ,0.075f ,26.28044f ,23.72144f ,0.075f ,26.24028f ,23.91843f ,0.075f ,26.20013f ,23.66056f ,0.075f ,26.94822f ,23.85755f ,0.075f ,26.90806f ,24.05455f ,0.075f ,26.86791f ,23.79668f ,0.075f ,27.61599f ,23.99367f ,0.075f ,27.57584f ,24.19066f ,0.075f ,27.53568f });
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.52045f ,0.075f ,26.26084f ,23.38633f ,0.075f ,25.60286f ,24.32802f ,0.075f ,26.09623f ,24.1939f ,0.075f ,25.43825f });
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f119 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.38233f ,0.075f ,25.58327f ,23.24821f ,0.075f ,24.92529f ,24.18991f ,0.075f ,25.41865f ,24.05579f ,0.075f ,24.76067f });
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.38557f ,0.075f ,23.48583f ,23.77956f ,0.075f ,23.40552f ,23.52169f ,0.075f ,24.15361f ,23.91567f ,0.075f ,24.0733f ,23.6578f ,0.075f ,24.82138f ,24.05179f ,0.075f ,24.74108f });
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f125 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.97199f ,0.075f ,23.57013f ,23.36597f ,0.075f ,23.48982f ,23.1081f ,0.075f ,24.23791f ,23.50209f ,0.075f ,24.1576f ,23.24422f ,0.075f ,24.90569f ,23.63821f ,0.075f ,24.82538f });
  }
}
private class MFInt32126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.96799f ,0.075f ,23.55054f ,22.83387f ,0.075f ,22.89256f ,23.77556f ,0.075f ,23.38592f ,23.64144f ,0.075f ,22.72794f });
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f131 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.82988f ,0.075f ,22.87296f ,22.69576f ,0.075f ,22.21498f ,23.63745f ,0.075f ,22.70835f ,23.50333f ,0.075f ,22.05037f });
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.83311f ,0.075f ,20.77552f ,23.2271f ,0.075f ,20.69522f ,23.10535f ,0.075f ,22.11108f ,23.49934f ,0.075f ,22.03077f });
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f137 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.41953f ,0.075f ,20.85983f ,22.81352f ,0.075f ,20.77952f ,22.69176f ,0.075f ,22.19538f ,23.08575f ,0.075f ,22.11507f });
  }
}
private class MFInt32138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f140 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.41554f ,0.075f ,20.84023f ,22.28142f ,0.075f ,20.18225f ,23.22311f ,0.075f ,20.67562f ,23.08899f ,0.075f ,20.01764f });
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f143 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.27742f ,0.075f ,20.16265f ,22.1433f ,0.075f ,19.50467f ,23.08499f ,0.075f ,19.99804f ,22.95087f ,0.075f ,19.34006f });
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.28066f ,0.075f ,18.06522f ,22.67465f ,0.075f ,17.98491f ,22.41678f ,0.075f ,18.733f ,22.81076f ,0.075f ,18.65269f ,22.55289f ,0.075f ,19.40077f ,22.94688f ,0.075f ,19.32047f });
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f149 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.86707f ,0.075f ,18.14952f ,22.26106f ,0.075f ,18.06921f ,22.13931f ,0.075f ,19.48508f ,22.53329f ,0.075f ,19.40477f });
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.0573f ,0.075f ,28.99474f ,24.19142f ,0.075f ,29.65272f ,23.24973f ,0.075f ,29.15935f ,23.38385f ,0.075f ,29.81733f });
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32154 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f155 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.05331f ,0.075f ,28.97514f ,23.85631f ,0.075f ,29.0153f ,23.65932f ,0.075f ,29.05545f ,23.91719f ,0.075f ,28.30736f ,23.7202f ,0.075f ,28.34752f ,23.5232f ,0.075f ,28.38767f ,23.78107f ,0.075f ,27.63959f ,23.58408f ,0.075f ,27.67974f ,23.38709f ,0.075f ,27.71989f });
  }
}
private class MFInt32156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.63972f ,0.075f ,29.05944f ,23.24574f ,0.075f ,29.13975f ,23.50361f ,0.075f ,28.39167f ,23.10962f ,0.075f ,28.47198f ,23.36749f ,0.075f ,27.72389f ,22.9735f ,0.075f ,27.8042f });
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f161 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.64296f ,0.075f ,26.96201f ,23.77708f ,0.075f ,27.61999f ,22.83539f ,0.075f ,27.12662f ,22.96951f ,0.075f ,27.7846f });
  }
}
private class MFInt32162 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f164 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.83139f ,0.075f ,27.10702f ,22.69728f ,0.075f ,26.44904f ,23.23518f ,0.075f ,27.02472f ,23.10106f ,0.075f ,26.36674f ,23.63897f ,0.075f ,26.94241f ,23.50485f ,0.075f ,26.28443f });
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32166 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f167 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.83463f ,0.075f ,25.00959f ,23.22862f ,0.075f ,24.92928f ,22.97075f ,0.075f ,25.67737f ,23.36473f ,0.075f ,25.59706f ,23.10686f ,0.075f ,26.34514f ,23.50085f ,0.075f ,26.26484f });
  }
}
private class MFInt32168 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.08727f ,0.075f ,26.34914f ,22.69328f ,0.075f ,26.42945f ,22.95115f ,0.075f ,25.68136f ,22.55716f ,0.075f ,25.76167f ,22.81503f ,0.075f ,25.01358f ,22.42105f ,0.075f ,25.09389f });
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32172 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f173 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.0905f ,0.075f ,24.2517f ,23.22462f ,0.075f ,24.90968f ,22.28293f ,0.075f ,24.41632f ,22.41705f ,0.075f ,25.07429f });
  }
}
private class MFInt32174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f176 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.27894f ,0.075f ,24.39672f ,22.14482f ,0.075f ,23.73874f ,23.08651f ,0.075f ,24.23211f ,22.95239f ,0.075f ,23.57413f });
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32178 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f179 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.28218f ,0.075f ,22.29928f ,22.67616f ,0.075f ,22.21897f ,22.55441f ,0.075f ,23.63484f ,22.94839f ,0.075f ,23.55453f });
  }
}
private class MFInt32180 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.53481f ,0.075f ,23.63883f ,22.33782f ,0.075f ,23.67899f ,22.14083f ,0.075f ,23.71914f ,22.39869f ,0.075f ,22.97105f ,22.2017f ,0.075f ,23.01121f ,22.00471f ,0.075f ,23.05136f ,22.26258f ,0.075f ,22.30328f ,22.06558f ,0.075f ,22.34343f ,21.86859f ,0.075f ,22.38358f });
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32184 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f185 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.53805f ,0.075f ,21.5414f ,22.67217f ,0.075f ,22.19938f ,21.73048f ,0.075f ,21.70601f ,21.8646f ,0.075f ,22.36399f });
  }
}
private class MFInt32186 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.72648f ,0.075f ,21.68641f ,21.59236f ,0.075f ,21.02843f ,22.53405f ,0.075f ,21.5218f ,22.39993f ,0.075f ,20.86382f });
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32190 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f191 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.72972f ,0.075f ,19.58898f ,22.12371f ,0.075f ,19.50867f ,22.00195f ,0.075f ,20.92453f ,22.39594f ,0.075f ,20.84422f });
  }
}
private class MFInt32192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.98236f ,0.075f ,20.92853f ,21.58837f ,0.075f ,21.00883f ,21.71012f ,0.075f ,19.59297f ,21.31614f ,0.075f ,19.67328f });
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32196 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f197 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.31214f ,0.075f ,19.65368f ,21.17802f ,0.075f ,18.9957f ,22.11971f ,0.075f ,19.48907f ,21.98559f ,0.075f ,18.83109f });
  }
}
private class MFInt32198 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f200 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.17403f ,0.075f ,18.97611f ,21.03991f ,0.075f ,18.31813f ,21.9816f ,0.075f ,18.81149f ,21.84748f ,0.075f ,18.15351f });
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32202 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f203 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.17726f ,0.075f ,16.87867f ,21.57125f ,0.075f ,16.79836f ,21.4495f ,0.075f ,18.21423f ,21.84348f ,0.075f ,18.13392f });
  }
}
private class MFInt32204 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.76368f ,0.075f ,16.96297f ,20.96067f ,0.075f ,16.92282f ,21.15767f ,0.075f ,16.88267f ,20.8998f ,0.075f ,17.63075f ,21.09679f ,0.075f ,17.5906f ,21.29378f ,0.075f ,17.55044f ,21.03591f ,0.075f ,18.29853f ,21.23291f ,0.075f ,18.25838f ,21.4299f ,0.075f ,18.21822f });
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32208 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f209 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.65877f ,0.075f ,11.54236f ,20.05275f ,0.075f ,11.46205f ,19.79488f ,0.075f ,12.21014f ,20.18887f ,0.075f ,12.12983f ,19.931f ,0.075f ,12.87792f ,20.32499f ,0.075f ,12.79761f });
  }
}
private class MFInt32210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.65477f ,0.075f ,11.52277f ,19.52065f ,0.075f ,10.86479f ,20.05856f ,0.075f ,11.44046f ,19.92444f ,0.075f ,10.78248f ,20.46234f ,0.075f ,11.35815f ,20.32822f ,0.075f ,10.70017f });
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f215 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.19011f ,0.075f ,10.0226f ,20.32423f ,0.075f ,10.68058f ,19.38254f ,0.075f ,10.18721f ,19.51666f ,0.075f ,10.84519f });
  }
}
private class MFInt32216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f218 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.5199f ,0.075f ,8.747754f ,19.91388f ,0.075f ,8.667445f ,19.65601f ,0.075f ,9.415531f ,20.05f ,0.075f ,9.335223f ,19.79213f ,0.075f ,10.08331f ,20.18612f ,0.075f ,10.003f });
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f221 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.77253f ,0.075f ,10.0873f ,19.57554f ,0.075f ,10.12746f ,19.37854f ,0.075f ,10.16761f ,19.63642f ,0.075f ,9.419526f ,19.43942f ,0.075f ,9.459681f ,19.24243f ,0.075f ,9.499835f ,19.5003f ,0.075f ,8.751748f ,19.3033f ,0.075f ,8.791903f ,19.10631f ,0.075f ,8.832057f });
  }
}
private class MFInt32222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f224 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.77577f ,0.075f ,7.989869f ,19.84283f ,0.075f ,8.318858f ,19.90989f ,0.075f ,8.647848f ,18.9682f ,0.075f ,8.15448f ,19.03526f ,0.075f ,8.48347f ,19.10232f ,0.075f ,8.81246f });
  }
}
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f227 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.9642f ,0.075f ,8.134883f ,18.83008f ,0.075f ,7.476904f ,19.36799f ,0.075f ,8.052578f ,19.23387f ,0.075f ,7.394598f ,19.77177f ,0.075f ,7.970272f ,19.63765f ,0.075f ,7.312293f });
  }
}
private class MFInt32228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f230 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.96744f ,0.075f ,6.037448f ,19.16443f ,0.075f ,5.997294f ,19.36143f ,0.075f ,5.957139f ,19.10356f ,0.075f ,6.705226f ,19.30055f ,0.075f ,6.665071f ,19.49754f ,0.075f ,6.624918f ,19.23967f ,0.075f ,7.373004f ,19.43667f ,0.075f ,7.33285f ,19.63366f ,0.075f ,7.292696f });
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f233 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.55386f ,0.075f ,6.121751f ,18.94784f ,0.075f ,6.041442f ,18.68997f ,0.075f ,6.789529f ,19.08396f ,0.075f ,6.70922f ,18.82609f ,0.075f ,7.457307f ,19.22008f ,0.075f ,7.376998f });
  }
}
private class MFInt32234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.54986f ,0.075f ,6.102154f ,18.41574f ,0.075f ,5.444175f ,18.95365f ,0.075f ,6.019848f ,18.81953f ,0.075f ,5.361869f ,19.35743f ,0.075f ,5.937542f ,19.22331f ,0.075f ,5.279563f });
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f239 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.83615f ,0.075f ,29.24365f ,23.23013f ,0.075f ,29.16334f ,23.10838f ,0.075f ,30.57921f ,23.50237f ,0.075f ,30.4989f });
  }
}
private class MFInt32240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f242 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.08878f ,0.075f ,30.5832f ,22.89179f ,0.075f ,30.62336f ,22.6948f ,0.075f ,30.66351f ,22.95267f ,0.075f ,29.91542f ,22.75567f ,0.075f ,29.95558f ,22.55868f ,0.075f ,29.99573f ,22.81655f ,0.075f ,29.24765f ,22.61956f ,0.075f ,29.2878f ,22.42256f ,0.075f ,29.32796f });
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f245 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.09202f ,0.075f ,28.48577f ,23.22614f ,0.075f ,29.14375f ,22.28445f ,0.075f ,28.65038f ,22.41857f ,0.075f ,29.30836f });
  }
}
private class MFInt32246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f248 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.28045f ,0.075f ,28.63078f ,22.14634f ,0.075f ,27.9728f ,23.08803f ,0.075f ,28.46617f ,22.95391f ,0.075f ,27.80819f });
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f251 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.94991f ,0.075f ,27.7886f ,22.55593f ,0.075f ,27.8689f ,22.67768f ,0.075f ,26.45304f ,22.28369f ,0.075f ,26.53335f });
  }
}
private class MFInt32252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.87011f ,0.075f ,26.61765f ,22.0671f ,0.075f ,26.5775f ,22.26409f ,0.075f ,26.53734f ,22.00622f ,0.075f ,27.28543f ,22.20322f ,0.075f ,27.24527f ,22.40021f ,0.075f ,27.20512f ,22.14234f ,0.075f ,27.95321f ,22.33933f ,0.075f ,27.91305f ,22.53633f ,0.075f ,27.8729f });
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f257 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.53956f ,0.075f ,25.77546f ,22.67368f ,0.075f ,26.43344f ,21.73199f ,0.075f ,25.94007f ,21.86611f ,0.075f ,26.59805f });
  }
}
private class MFInt32258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f260 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.728f ,0.075f ,25.92048f ,21.66094f ,0.075f ,25.59149f ,21.59388f ,0.075f ,25.2625f ,22.53557f ,0.075f ,25.75587f ,22.46851f ,0.075f ,25.42688f ,22.40145f ,0.075f ,25.09789f });
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f263 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.39746f ,0.075f ,25.07829f ,22.20046f ,0.075f ,25.11844f ,22.00347f ,0.075f ,25.1586f ,22.26134f ,0.075f ,24.41051f ,22.06435f ,0.075f ,24.45066f ,21.86735f ,0.075f ,24.49082f ,22.12522f ,0.075f ,23.74273f ,21.92823f ,0.075f ,23.78289f ,21.73124f ,0.075f ,23.82304f });
  }
}
private class MFInt32264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.31765f ,0.075f ,23.90734f ,21.71164f ,0.075f ,23.82704f ,21.58988f ,0.075f ,25.2429f ,21.98387f ,0.075f ,25.16259f });
  }
}
private class MFInt32267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f269 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.31366f ,0.075f ,23.88775f ,21.17954f ,0.075f ,23.22977f ,22.12123f ,0.075f ,23.72313f ,21.98711f ,0.075f ,23.06516f });
  }
}
private class MFInt32270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f272 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.17554f ,0.075f ,23.21017f ,21.04142f ,0.075f ,22.55219f ,21.98311f ,0.075f ,23.04556f ,21.84899f ,0.075f ,22.38758f });
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f275 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.845f ,0.075f ,22.36798f ,21.45101f ,0.075f ,22.44829f ,21.57277f ,0.075f ,21.03243f ,21.17878f ,0.075f ,21.11274f });
  }
}
private class MFInt32276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.7652f ,0.075f ,21.19704f ,21.15918f ,0.075f ,21.11673f ,21.03743f ,0.075f ,22.53259f ,21.43142f ,0.075f ,22.45229f });
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f281 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.7612f ,0.075f ,21.17744f ,20.62708f ,0.075f ,20.51946f ,21.16499f ,0.075f ,21.09514f ,21.03087f ,0.075f ,20.43716f ,21.56877f ,0.075f ,21.01283f ,21.43465f ,0.075f ,20.35485f });
  }
}
private class MFInt32282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.62309f ,0.075f ,20.49986f ,20.48897f ,0.075f ,19.84189f ,21.02687f ,0.075f ,20.41756f ,20.89275f ,0.075f ,19.75958f ,21.43066f ,0.075f ,20.33525f ,21.29654f ,0.075f ,19.67727f });
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f287 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.62632f ,0.075f ,18.40243f ,20.82332f ,0.075f ,18.36228f ,21.02031f ,0.075f ,18.32212f ,20.76244f ,0.075f ,19.07021f ,20.95943f ,0.075f ,19.03005f ,21.15643f ,0.075f ,18.9899f ,20.89856f ,0.075f ,19.73799f ,21.09555f ,0.075f ,19.69783f ,21.29254f ,0.075f ,19.65768f });
  }
}
private class MFInt32288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.21274f ,0.075f ,18.48673f ,20.40973f ,0.075f ,18.44658f ,20.60673f ,0.075f ,18.40642f ,20.34886f ,0.075f ,19.15451f ,20.54585f ,0.075f ,19.11436f ,20.74284f ,0.075f ,19.0742f ,20.48497f ,0.075f ,19.82229f ,20.68197f ,0.075f ,19.78214f ,20.87896f ,0.075f ,19.74198f });
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f293 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.20874f ,0.075f ,18.46714f ,20.07463f ,0.075f ,17.80916f ,20.61253f ,0.075f ,18.38483f ,20.47841f ,0.075f ,17.72685f ,21.01632f ,0.075f ,18.30252f ,20.8822f ,0.075f ,17.64454f });
  }
}
private class MFInt32294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.74408f ,0.075f ,16.96697f ,20.8782f ,0.075f ,17.62495f ,20.3403f ,0.075f ,17.04927f ,20.47442f ,0.075f ,17.70725f ,19.93651f ,0.075f ,17.13158f ,20.07063f ,0.075f ,17.78956f });
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f299 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.74009f ,0.075f ,16.94737f ,20.3461f ,0.075f ,17.02768f ,20.60397f ,0.075f ,16.27959f ,20.20998f ,0.075f ,16.3599f ,20.46785f ,0.075f ,15.61182f ,20.07387f ,0.075f ,15.69212f });
  }
}
private class MFInt32300 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f302 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.66028f ,0.075f ,15.77643f ,19.85728f ,0.075f ,15.73627f ,20.05427f ,0.075f ,15.69612f ,19.7964f ,0.075f ,16.4442f ,19.99339f ,0.075f ,16.40405f ,20.19039f ,0.075f ,16.3639f ,19.93252f ,0.075f ,17.11198f ,20.12951f ,0.075f ,17.07183f ,20.3265f ,0.075f ,17.03168f });
  }
}
private class MFInt32303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32304 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f305 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.65629f ,0.075f ,15.75683f ,19.58923f ,0.075f ,15.42784f ,19.52217f ,0.075f ,15.09885f ,20.06007f ,0.075f ,15.67452f ,19.99302f ,0.075f ,15.34553f ,19.92595f ,0.075f ,15.01655f ,20.46386f ,0.075f ,15.59222f ,20.3968f ,0.075f ,15.26323f ,20.32974f ,0.075f ,14.93424f });
  }
}
private class MFInt32306 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32307 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f308 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.19163f ,0.075f ,14.25666f ,20.32575f ,0.075f ,14.91464f ,19.38406f ,0.075f ,14.42127f ,19.51818f ,0.075f ,15.07925f });
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32310 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f311 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.52141f ,0.075f ,12.98182f ,19.9154f ,0.075f ,12.90151f ,19.65753f ,0.075f ,13.6496f ,20.05152f ,0.075f ,13.56929f ,19.79364f ,0.075f ,14.31737f ,20.18763f ,0.075f ,14.23707f });
  }
}
private class MFInt32312 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.10783f ,0.075f ,13.06612f ,19.50181f ,0.075f ,12.98581f ,19.38006f ,0.075f ,14.40168f ,19.77405f ,0.075f ,14.32137f });
  }
}
private class MFInt32315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32316 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f317 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.10383f ,0.075f ,13.04652f ,18.96971f ,0.075f ,12.38855f ,19.50762f ,0.075f ,12.96422f ,19.3735f ,0.075f ,12.30624f ,19.9114f ,0.075f ,12.88191f ,19.77728f ,0.075f ,12.22393f });
  }
}
private class MFInt32318 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32319 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f320 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.96572f ,0.075f ,12.36895f ,18.8316f ,0.075f ,11.71097f ,19.3695f ,0.075f ,12.28664f ,19.23538f ,0.075f ,11.62866f ,19.77329f ,0.075f ,12.20434f ,19.63917f ,0.075f ,11.54636f });
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f323 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.96896f ,0.075f ,10.27151f ,19.36294f ,0.075f ,10.1912f ,19.10507f ,0.075f ,10.93929f ,19.49906f ,0.075f ,10.85898f ,19.24119f ,0.075f ,11.60707f ,19.63518f ,0.075f ,11.52676f });
  }
}
private class MFInt32324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f326 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.55537f ,0.075f ,10.35582f ,18.75237f ,0.075f ,10.31566f ,18.94936f ,0.075f ,10.27551f ,18.69149f ,0.075f ,11.02359f ,18.88848f ,0.075f ,10.98344f ,19.08548f ,0.075f ,10.94328f ,18.8276f ,0.075f ,11.69137f ,19.0246f ,0.075f ,11.65122f ,19.22159f ,0.075f ,11.61106f });
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f329 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.22483f ,0.075f ,9.513628f ,19.29189f ,0.075f ,9.842617f ,19.35895f ,0.075f ,10.17161f ,18.82104f ,0.075f ,9.595933f ,18.8881f ,0.075f ,9.924923f ,18.95516f ,0.075f ,10.25391f ,18.41726f ,0.075f ,9.678239f ,18.48432f ,0.075f ,10.00723f ,18.55138f ,0.075f ,10.33622f });
  }
}
private class MFInt32330 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32331 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f332 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.41326f ,0.075f ,9.658642f ,18.27914f ,0.075f ,9.000663f ,19.22083f ,0.075f ,9.494031f ,19.08671f ,0.075f ,8.836051f });
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32334 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f335 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.08272f ,0.075f ,8.816454f ,18.68873f ,0.075f ,8.896763f ,18.9466f ,0.075f ,8.148676f ,18.55262f ,0.075f ,8.228985f ,18.81049f ,0.075f ,7.480898f ,18.4165f ,0.075f ,7.561207f });
  }
}
private class MFInt32336 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32337 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f338 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.00292f ,0.075f ,7.64551f ,18.19991f ,0.075f ,7.605356f ,18.3969f ,0.075f ,7.565201f ,18.13903f ,0.075f ,8.313288f ,18.33603f ,0.075f ,8.273133f ,18.53302f ,0.075f ,8.23298f ,18.27515f ,0.075f ,8.981066f ,18.47214f ,0.075f ,8.940911f ,18.66914f ,0.075f ,8.900757f });
  }
}
private class MFInt32339 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32340 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f341 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.99892f ,0.075f ,7.625913f ,17.8648f ,0.075f ,6.967933f ,18.40271f ,0.075f ,7.543607f ,18.26859f ,0.075f ,6.885628f ,18.80649f ,0.075f ,7.461301f ,18.67237f ,0.075f ,6.803322f });
  }
}
private class MFInt32342 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32343 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f344 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86081f ,0.075f ,6.948337f ,17.72669f ,0.075f ,6.290357f ,18.26459f ,0.075f ,6.866031f ,18.13047f ,0.075f ,6.208051f ,18.66838f ,0.075f ,6.783725f ,18.53426f ,0.075f ,6.125745f });
  }
}
private class MFInt32345 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32346 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f347 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86404f ,0.075f ,4.850901f ,18.25803f ,0.075f ,4.770593f ,18.13628f ,0.075f ,6.186457f ,18.53026f ,0.075f ,6.106149f });
  }
}
private class MFInt32348 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32349 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f350 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.45046f ,0.075f ,4.935204f ,17.84445f ,0.075f ,4.854896f ,17.72269f ,0.075f ,6.27076f ,18.11668f ,0.075f ,6.190452f });
  }
}
private class MFInt32351 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32352 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f353 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.44646f ,0.075f ,4.915607f ,17.31235f ,0.075f ,4.257627f ,17.85025f ,0.075f ,4.833302f ,17.71613f ,0.075f ,4.175322f ,18.25404f ,0.075f ,4.750996f ,18.11992f ,0.075f ,4.093016f });
  }
}
private class MFInt32354 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32355 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f356 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.9818f ,0.075f ,3.41544f ,18.11592f ,0.075f ,4.073419f ,17.57802f ,0.075f ,3.497746f ,17.71214f ,0.075f ,4.155725f ,17.17423f ,0.075f ,3.580051f ,17.30835f ,0.075f ,4.23803f });
  }
}
private class MFInt32357 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32358 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f359 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.40297f ,0.075f ,29.33195f ,22.53709f ,0.075f ,29.98993f ,21.5954f ,0.075f ,29.49656f ,21.72952f ,0.075f ,30.15454f });
  }
}
private class MFInt32360 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32361 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f362 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.73275f ,0.075f ,28.05711f ,22.12674f ,0.075f ,27.9768f ,21.86887f ,0.075f ,28.72488f ,22.26286f ,0.075f ,28.64458f ,22.00498f ,0.075f ,29.39266f ,22.39897f ,0.075f ,29.31235f });
  }
}
private class MFInt32363 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32364 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f365 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.98539f ,0.075f ,29.39666f ,21.5914f ,0.075f ,29.47696f ,21.84927f ,0.075f ,28.72888f ,21.45528f ,0.075f ,28.80919f ,21.71315f ,0.075f ,28.0611f ,21.31917f ,0.075f ,28.14141f });
  }
}
private class MFInt32366 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32367 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f368 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.98862f ,0.075f ,27.29922f ,22.12274f ,0.075f ,27.9572f ,21.18105f ,0.075f ,27.46383f ,21.31517f ,0.075f ,28.12181f });
  }
}
private class MFInt32369 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f371 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.17706f ,0.075f ,27.44423f ,21.04294f ,0.075f ,26.78626f ,21.58084f ,0.075f ,27.36193f ,21.44672f ,0.075f ,26.70395f ,21.98463f ,0.075f ,27.27962f ,21.85051f ,0.075f ,26.62164f });
  }
}
private class MFInt32372 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32373 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f374 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.1803f ,0.075f ,25.3468f ,21.57428f ,0.075f ,25.26649f ,21.45253f ,0.075f ,26.68236f ,21.84652f ,0.075f ,26.60205f });
  }
}
private class MFInt32375 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32376 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f377 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.43293f ,0.075f ,26.68635f ,21.23594f ,0.075f ,26.72651f ,21.03894f ,0.075f ,26.76666f ,21.29682f ,0.075f ,26.01857f ,21.09982f ,0.075f ,26.05873f ,20.90283f ,0.075f ,26.09888f ,21.1607f ,0.075f ,25.35079f ,20.96371f ,0.075f ,25.39095f ,20.76671f ,0.075f ,25.4311f });
  }
}
private class MFInt32378 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32379 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f380 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.43617f ,0.075f ,24.58891f ,21.57029f ,0.075f ,25.24689f ,20.6286f ,0.075f ,24.75353f ,20.76272f ,0.075f ,25.41151f });
  }
}
private class MFInt32381 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32382 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f383 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.6246f ,0.075f ,24.73393f ,20.49048f ,0.075f ,24.07595f ,21.43217f ,0.075f ,24.56932f ,21.29805f ,0.075f ,23.91134f });
  }
}
private class MFInt32384 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32385 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f386 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.62784f ,0.075f ,22.63649f ,21.02183f ,0.075f ,22.55619f ,20.76396f ,0.075f ,23.30427f ,21.15794f ,0.075f ,23.22396f ,20.90007f ,0.075f ,23.97205f ,21.29406f ,0.075f ,23.89174f });
  }
}
private class MFInt32387 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32388 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f389 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.21426f ,0.075f ,22.7208f ,20.41125f ,0.075f ,22.68064f ,20.60824f ,0.075f ,22.64049f ,20.35037f ,0.075f ,23.38857f ,20.54737f ,0.075f ,23.34842f ,20.74436f ,0.075f ,23.30827f ,20.48649f ,0.075f ,24.05635f ,20.68348f ,0.075f ,24.0162f ,20.88048f ,0.075f ,23.97605f });
  }
}
private class MFInt32390 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32391 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f392 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.21026f ,0.075f ,22.7012f ,20.07614f ,0.075f ,22.04322f ,21.01783f ,0.075f ,22.53659f ,20.88371f ,0.075f ,21.87861f });
  }
}
private class MFInt32393 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32394 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f395 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.07215f ,0.075f ,22.02362f ,19.93803f ,0.075f ,21.36564f ,20.87972f ,0.075f ,21.85901f ,20.7456f ,0.075f ,21.20103f });
  }
}
private class MFInt32396 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32397 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f398 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.07538f ,0.075f ,19.92619f ,20.27238f ,0.075f ,19.88603f ,20.46937f ,0.075f ,19.84588f ,20.2115f ,0.075f ,20.59397f ,20.40849f ,0.075f ,20.55381f ,20.60549f ,0.075f ,20.51366f ,20.34762f ,0.075f ,21.26174f ,20.54461f ,0.075f ,21.22159f ,20.7416f ,0.075f ,21.18144f });
  }
}
private class MFInt32399 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32400 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f401 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.6618f ,0.075f ,20.01049f ,19.85879f ,0.075f ,19.97034f ,20.05579f ,0.075f ,19.93018f ,19.79792f ,0.075f ,20.67827f ,19.99491f ,0.075f ,20.63811f ,20.1919f ,0.075f ,20.59796f ,19.93403f ,0.075f ,21.34605f ,20.13103f ,0.075f ,21.30589f ,20.32802f ,0.075f ,21.26574f });
  }
}
private class MFInt32402 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32403 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f404 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.6578f ,0.075f ,19.99089f ,19.52369f ,0.075f ,19.33291f ,20.46538f ,0.075f ,19.82628f ,20.33126f ,0.075f ,19.1683f });
  }
}
private class MFInt32405 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32406 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f407 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.51969f ,0.075f ,19.31332f ,19.38557f ,0.075f ,18.65534f ,19.92348f ,0.075f ,19.23101f ,19.78936f ,0.075f ,18.57303f ,20.32726f ,0.075f ,19.14871f ,20.19314f ,0.075f ,18.49073f });
  }
}
private class MFInt32408 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32409 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f410 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.52293f ,0.075f ,17.21588f ,19.91691f ,0.075f ,17.13557f ,19.79516f ,0.075f ,18.55144f ,20.18915f ,0.075f ,18.47113f });
  }
}
private class MFInt32411 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32412 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f413 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.10934f ,0.075f ,17.30019f ,19.30634f ,0.075f ,17.26003f ,19.50333f ,0.075f ,17.21988f ,19.24546f ,0.075f ,17.96796f ,19.44245f ,0.075f ,17.92781f ,19.63945f ,0.075f ,17.88766f ,19.38158f ,0.075f ,18.63574f ,19.57857f ,0.075f ,18.59559f ,19.77556f ,0.075f ,18.55543f });
  }
}
private class MFInt32414 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32415 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f416 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.10535f ,0.075f ,17.28059f ,18.97123f ,0.075f ,16.62261f ,19.91292f ,0.075f ,17.11598f ,19.7788f ,0.075f ,16.458f });
  }
}
private class MFInt32417 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32418 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f419 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.64069f ,0.075f ,15.78042f ,19.77481f ,0.075f ,16.4384f ,19.2369f ,0.075f ,15.86273f ,19.37102f ,0.075f ,16.52071f ,18.83311f ,0.075f ,15.94503f ,18.96724f ,0.075f ,16.60301f });
  }
}
private class MFInt32420 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32421 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f422 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.63669f ,0.075f ,15.76082f ,19.2427f ,0.075f ,15.84113f ,19.36446f ,0.075f ,14.42527f ,18.97047f ,0.075f ,14.50558f });
  }
}
private class MFInt32423 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32424 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f425 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.55689f ,0.075f ,14.58988f ,18.75388f ,0.075f ,14.54973f ,18.95087f ,0.075f ,14.50957f ,18.693f ,0.075f ,15.25766f ,18.89f ,0.075f ,15.2175f ,19.08699f ,0.075f ,15.17735f ,18.82912f ,0.075f ,15.92544f ,19.02611f ,0.075f ,15.88528f ,19.22311f ,0.075f ,15.84513f });
  }
}
private class MFInt32426 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32427 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f428 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.55289f ,0.075f ,14.57028f ,18.41877f ,0.075f ,13.9123f ,18.95668f ,0.075f ,14.48798f ,18.82256f ,0.075f ,13.83f ,19.36046f ,0.075f ,14.40567f ,19.22635f ,0.075f ,13.74769f });
  }
}
private class MFInt32429 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32430 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f431 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.08823f ,0.075f ,13.07012f ,19.22235f ,0.075f ,13.7281f ,18.68444f ,0.075f ,13.15242f ,18.81856f ,0.075f ,13.8104f ,18.28066f ,0.075f ,13.23473f ,18.41478f ,0.075f ,13.89271f });
  }
}
private class MFInt32432 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32433 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f434 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.08424f ,0.075f ,13.05052f ,18.69025f ,0.075f ,13.13083f ,18.812f ,0.075f ,11.71496f ,18.41801f ,0.075f ,11.79527f });
  }
}
private class MFInt32435 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32436 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f437 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.00443f ,0.075f ,11.87957f ,18.20143f ,0.075f ,11.83942f ,18.39842f ,0.075f ,11.79927f ,18.14055f ,0.075f ,12.54735f ,18.33754f ,0.075f ,12.5072f ,18.53453f ,0.075f ,12.46704f ,18.27666f ,0.075f ,13.21513f ,18.47366f ,0.075f ,13.17498f ,18.67065f ,0.075f ,13.13482f });
  }
}
private class MFInt32438 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32439 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f440 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.00044f ,0.075f ,11.85998f ,17.86632f ,0.075f ,11.202f ,18.80801f ,0.075f ,11.69537f ,18.67389f ,0.075f ,11.03739f });
  }
}
private class MFInt32441 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32442 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f443 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86232f ,0.075f ,11.1824f ,17.79526f ,0.075f ,10.85341f ,17.7282f ,0.075f ,10.52442f ,18.66989f ,0.075f ,11.01779f ,18.60283f ,0.075f ,10.6888f ,18.53577f ,0.075f ,10.35981f });
  }
}
private class MFInt32444 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32445 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f446 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86556f ,0.075f ,9.084966f ,18.25955f ,0.075f ,9.004658f ,18.13779f ,0.075f ,10.42052f ,18.53178f ,0.075f ,10.34021f });
  }
}
private class MFInt32447 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32448 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f449 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.1182f ,0.075f ,10.42452f ,17.9212f ,0.075f ,10.46467f ,17.72421f ,0.075f ,10.50482f ,17.98208f ,0.075f ,9.756739f ,17.78509f ,0.075f ,9.796892f ,17.58809f ,0.075f ,9.837047f ,17.84596f ,0.075f ,9.088961f ,17.64897f ,0.075f ,9.129114f ,17.45197f ,0.075f ,9.169269f });
  }
}
private class MFInt32450 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32451 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f452 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12143f ,0.075f ,8.327081f ,18.25555f ,0.075f ,8.985061f ,17.31386f ,0.075f ,8.491693f ,17.44798f ,0.075f ,9.149672f });
  }
}
private class MFInt32453 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32454 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f455 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.30987f ,0.075f ,8.472095f ,17.24281f ,0.075f ,8.143106f ,17.17575f ,0.075f ,7.814116f ,17.71365f ,0.075f ,8.38979f ,17.64659f ,0.075f ,8.0608f ,17.57953f ,0.075f ,7.73181f ,18.11744f ,0.075f ,8.307484f ,18.05038f ,0.075f ,7.978494f ,17.98332f ,0.075f ,7.649504f });
  }
}
private class MFInt32456 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32457 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f458 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.3131f ,0.075f ,6.37466f ,17.5101f ,0.075f ,6.334506f ,17.70709f ,0.075f ,6.294352f ,17.44922f ,0.075f ,7.042438f ,17.64621f ,0.075f ,7.002284f ,17.84321f ,0.075f ,6.96213f ,17.58534f ,0.075f ,7.710216f ,17.78233f ,0.075f ,7.670062f ,17.97932f ,0.075f ,7.629908f });
  }
}
private class MFInt32459 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32460 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f461 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.89952f ,0.075f ,6.458963f ,17.29351f ,0.075f ,6.378654f ,17.17175f ,0.075f ,7.794519f ,17.56574f ,0.075f ,7.714211f });
  }
}
private class MFInt32462 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32463 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f464 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.89552f ,0.075f ,6.439366f ,16.76141f ,0.075f ,5.781386f ,17.29931f ,0.075f ,6.35706f ,17.16519f ,0.075f ,5.699081f ,17.7031f ,0.075f ,6.274755f ,17.56898f ,0.075f ,5.616775f });
  }
}
private class MFInt32465 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32466 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f467 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.75741f ,0.075f ,5.761789f ,16.62329f ,0.075f ,5.10381f ,17.1612f ,0.075f ,5.679484f ,17.02708f ,0.075f ,5.021504f ,17.56498f ,0.075f ,5.597178f ,17.43086f ,0.075f ,4.939198f });
  }
}
private class MFInt32468 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32469 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f470 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.42687f ,0.075f ,4.919601f ,17.03288f ,0.075f ,4.99991f ,17.29075f ,0.075f ,4.251824f ,16.89676f ,0.075f ,4.332132f ,17.15463f ,0.075f ,3.584046f ,16.76065f ,0.075f ,3.664354f });
  }
}
private class MFInt32471 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32472 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f473 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.34706f ,0.075f ,3.748657f ,16.74105f ,0.075f ,3.668349f ,16.6193f ,0.075f ,5.084213f ,17.01328f ,0.075f ,5.003905f });
  }
}
private class MFInt32474 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32475 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f476 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.34307f ,0.075f ,3.72906f ,16.20895f ,0.075f ,3.071081f ,16.74685f ,0.075f ,3.646755f ,16.61274f ,0.075f ,2.988775f ,17.15064f ,0.075f ,3.564449f ,17.01652f ,0.075f ,2.906469f });
  }
}
private class MFInt32477 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32478 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f479 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.76423f ,0.075f ,29.64557f ,20.63011f ,0.075f ,28.98759f ,21.5718f ,0.075f ,29.48096f ,21.43769f ,0.075f ,28.82298f });
  }
}
private class MFInt32480 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32481 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f482 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.29957f ,0.075f ,28.1454f ,21.43369f ,0.075f ,28.80338f ,20.492f ,0.075f ,28.31001f ,20.62612f ,0.075f ,28.96799f });
  }
}
private class MFInt32483 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32484 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f485 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.62935f ,0.075f ,26.87056f ,21.02334f ,0.075f ,26.79025f ,20.76547f ,0.075f ,27.53834f ,21.15946f ,0.075f ,27.45803f ,20.90159f ,0.075f ,28.20612f ,21.29558f ,0.075f ,28.12581f });
  }
}
private class MFInt32486 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32487 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f488 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.21577f ,0.075f ,26.95486f ,20.41277f ,0.075f ,26.91471f ,20.60976f ,0.075f ,26.87455f ,20.35189f ,0.075f ,27.62264f ,20.54888f ,0.075f ,27.58249f ,20.74587f ,0.075f ,27.54233f ,20.488f ,0.075f ,28.29042f ,20.685f ,0.075f ,28.25026f ,20.88199f ,0.075f ,28.21011f });
  }
}
private class MFInt32489 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32490 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f491 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.21178f ,0.075f ,26.93526f ,20.07766f ,0.075f ,26.27728f ,21.01935f ,0.075f ,26.77065f ,20.88523f ,0.075f ,26.11267f });
  }
}
private class MFInt32492 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32493 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f494 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.07366f ,0.075f ,26.25769f ,19.93954f ,0.075f ,25.59971f ,20.88123f ,0.075f ,26.09308f ,20.74711f ,0.075f ,25.4351f });
  }
}
private class MFInt32495 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32496 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f497 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.0769f ,0.075f ,24.16025f ,20.47089f ,0.075f ,24.07994f ,20.21302f ,0.075f ,24.82803f ,20.607f ,0.075f ,24.74772f ,20.34913f ,0.075f ,25.49581f ,20.74312f ,0.075f ,25.4155f });
  }
}
private class MFInt32498 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32499 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f500 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.32954f ,0.075f ,25.4998f ,20.13254f ,0.075f ,25.53996f ,19.93555f ,0.075f ,25.58011f ,20.19342f ,0.075f ,24.83203f ,19.99643f ,0.075f ,24.87218f ,19.79943f ,0.075f ,24.91233f ,20.0573f ,0.075f ,24.16425f ,19.86031f ,0.075f ,24.2044f ,19.66331f ,0.075f ,24.24456f });
  }
}
private class MFInt32501 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32502 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f503 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.33277f ,0.075f ,23.40237f ,20.46689f ,0.075f ,24.06035f ,19.5252f ,0.075f ,23.56698f ,19.65932f ,0.075f ,24.22496f });
  }
}
private class MFInt32504 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32505 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f506 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.52121f ,0.075f ,23.54738f ,19.38709f ,0.075f ,22.8894f ,20.32878f ,0.075f ,23.38277f ,20.19466f ,0.075f ,22.72479f });
  }
}
private class MFInt32507 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32508 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f509 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.52444f ,0.075f ,21.44995f ,19.72144f ,0.075f ,21.40979f ,19.91843f ,0.075f ,21.36964f ,19.66056f ,0.075f ,22.11773f ,19.85755f ,0.075f ,22.07757f ,20.05455f ,0.075f ,22.03742f ,19.79668f ,0.075f ,22.7855f ,19.99367f ,0.075f ,22.74535f ,20.19066f ,0.075f ,22.70519f });
  }
}
private class MFInt32510 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32511 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f512 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.77708f ,0.075f ,22.7895f ,19.38309f ,0.075f ,22.86981f ,19.50485f ,0.075f ,21.45394f ,19.11086f ,0.075f ,21.53425f });
  }
}
private class MFInt32513 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32514 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f515 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.78032f ,0.075f ,20.69206f ,19.91444f ,0.075f ,21.35004f ,18.97275f ,0.075f ,20.85667f ,19.10686f ,0.075f ,21.51465f });
  }
}
private class MFInt32516 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32517 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f518 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.96875f ,0.075f ,20.83708f ,18.83463f ,0.075f ,20.1791f ,19.77632f ,0.075f ,20.67247f ,19.6422f ,0.075f ,20.01449f });
  }
}
private class MFInt32519 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32520 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f521 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.97199f ,0.075f ,18.73964f ,19.16898f ,0.075f ,18.69949f ,19.36597f ,0.075f ,18.65933f ,19.1081f ,0.075f ,19.40742f ,19.3051f ,0.075f ,19.36727f ,19.50209f ,0.075f ,19.32711f ,19.24422f ,0.075f ,20.0752f ,19.44121f ,0.075f ,20.03504f ,19.63821f ,0.075f ,19.99489f });
  }
}
private class MFInt32522 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32523 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f524 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.5584f ,0.075f ,18.82394f ,18.7554f ,0.075f ,18.78379f ,18.95239f ,0.075f ,18.74364f ,18.69452f ,0.075f ,19.49172f ,18.89151f ,0.075f ,19.45157f ,19.08851f ,0.075f ,19.41142f ,18.83064f ,0.075f ,20.1595f ,19.02763f ,0.075f ,20.11935f ,19.22462f ,0.075f ,20.07919f });
  }
}
private class MFInt32525 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32526 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f527 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.55441f ,0.075f ,18.80435f ,18.42029f ,0.075f ,18.14637f ,19.36198f ,0.075f ,18.63974f ,19.22786f ,0.075f ,17.98176f });
  }
}
private class MFInt32528 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32529 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f530 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.41629f ,0.075f ,18.12677f ,18.28218f ,0.075f ,17.46879f ,19.22387f ,0.075f ,17.96216f ,19.08975f ,0.075f ,17.30418f });
  }
}
private class MFInt32531 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32532 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f533 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.08575f ,0.075f ,17.28458f ,18.69176f ,0.075f ,17.36489f ,18.81352f ,0.075f ,15.94903f ,18.41953f ,0.075f ,16.02934f });
  }
}
private class MFInt32534 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32535 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f536 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.00595f ,0.075f ,16.11364f ,18.39993f ,0.075f ,16.03333f ,18.27818f ,0.075f ,17.44919f ,18.67217f ,0.075f ,17.36889f });
  }
}
private class MFInt32537 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32538 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f539 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.00195f ,0.075f ,16.09404f ,17.86783f ,0.075f ,15.43606f ,18.80952f ,0.075f ,15.92943f ,18.6754f ,0.075f ,15.27145f });
  }
}
private class MFInt32540 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32541 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f542 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86384f ,0.075f ,15.41647f ,17.72972f ,0.075f ,14.75849f ,18.67141f ,0.075f ,15.25185f ,18.53729f ,0.075f ,14.59387f });
  }
}
private class MFInt32543 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32544 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f545 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.5333f ,0.075f ,14.57428f ,18.13931f ,0.075f ,14.65459f ,18.39718f ,0.075f ,13.9065f ,18.00319f ,0.075f ,13.98681f ,18.26106f ,0.075f ,13.23872f ,17.86707f ,0.075f ,13.31903f });
  }
}
private class MFInt32546 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32547 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f548 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.45349f ,0.075f ,13.40333f ,17.84748f ,0.075f ,13.32302f ,17.72573f ,0.075f ,14.73889f ,18.11971f ,0.075f ,14.65858f });
  }
}
private class MFInt32549 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32550 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f551 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.4495f ,0.075f ,13.38374f ,17.31538f ,0.075f ,12.72576f ,17.85328f ,0.075f ,13.30143f ,17.71916f ,0.075f ,12.64345f ,18.25707f ,0.075f ,13.21912f ,18.12295f ,0.075f ,12.56115f });
  }
}
private class MFInt32552 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32553 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f554 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98483f ,0.075f ,11.88357f ,18.11895f ,0.075f ,12.54155f ,17.17726f ,0.075f ,12.04818f ,17.31138f ,0.075f ,12.70616f });
  }
}
private class MFInt32555 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32556 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f557 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98084f ,0.075f ,11.86397f ,17.58685f ,0.075f ,11.94428f ,17.70861f ,0.075f ,10.52842f ,17.31462f ,0.075f ,10.60872f });
  }
}
private class MFInt32558 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32559 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f560 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.90104f ,0.075f ,10.69303f ,17.09803f ,0.075f ,10.65287f ,17.29502f ,0.075f ,10.61272f ,17.03715f ,0.075f ,11.36081f ,17.23415f ,0.075f ,11.32065f ,17.43114f ,0.075f ,11.2805f ,17.17327f ,0.075f ,12.02858f ,17.37026f ,0.075f ,11.98843f ,17.56726f ,0.075f ,11.94827f });
  }
}
private class MFInt32561 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32562 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f563 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.89704f ,0.075f ,10.67343f ,16.76292f ,0.075f ,10.01545f ,17.30083f ,0.075f ,10.59112f ,17.16671f ,0.075f ,9.933146f ,17.70461f ,0.075f ,10.50882f ,17.57049f ,0.075f ,9.85084f });
  }
}
private class MFInt32564 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32565 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f566 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.43238f ,0.075f ,9.173264f ,17.5665f ,0.075f ,9.831243f ,16.62481f ,0.075f ,9.337874f ,16.75893f ,0.075f ,9.995854f });
  }
}
private class MFInt32567 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32568 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f569 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.76216f ,0.075f ,7.898419f ,17.15615f ,0.075f ,7.81811f ,16.89828f ,0.075f ,8.566196f ,17.29227f ,0.075f ,8.485888f ,17.0344f ,0.075f ,9.233974f ,17.42838f ,0.075f ,9.153666f });
  }
}
private class MFInt32570 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32571 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f572 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.34858f ,0.075f ,7.982722f ,16.74257f ,0.075f ,7.902413f ,16.62081f ,0.075f ,9.318277f ,17.0148f ,0.075f ,9.237969f });
  }
}
private class MFInt32573 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32574 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f575 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.01804f ,0.075f ,7.140534f ,17.15216f ,0.075f ,7.798513f ,16.21047f ,0.075f ,7.305145f ,16.34459f ,0.075f ,7.963125f });
  }
}
private class MFInt32576 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32577 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f578 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.20647f ,0.075f ,7.285548f ,16.07235f ,0.075f ,6.627569f ,17.01404f ,0.075f ,7.120937f ,16.87992f ,0.075f ,6.462957f });
  }
}
private class MFInt32579 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32580 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f581 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.20971f ,0.075f ,5.188113f ,16.4067f ,0.075f ,5.147959f ,16.60369f ,0.075f ,5.107805f ,16.34583f ,0.075f ,5.855891f ,16.54282f ,0.075f ,5.815737f ,16.73981f ,0.075f ,5.775583f ,16.48194f ,0.075f ,6.523669f ,16.67893f ,0.075f ,6.483515f ,16.87593f ,0.075f ,6.44336f });
  }
}
private class MFInt32582 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32583 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f584 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.79612f ,0.075f ,5.272416f ,15.99312f ,0.075f ,5.232262f ,16.19011f ,0.075f ,5.192108f ,15.93224f ,0.075f ,5.940194f ,16.12923f ,0.075f ,5.90004f ,16.32623f ,0.075f ,5.859886f ,16.06836f ,0.075f ,6.607972f ,16.26535f ,0.075f ,6.567818f ,16.46234f ,0.075f ,6.527664f });
  }
}
private class MFInt32585 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32586 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f587 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.79213f ,0.075f ,5.252819f ,15.65801f ,0.075f ,4.59484f ,16.5997f ,0.075f ,5.088208f ,16.46558f ,0.075f ,4.430228f });
  }
}
private class MFInt32588 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32589 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f590 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.32747f ,0.075f ,3.752652f ,16.46159f ,0.075f ,4.410631f ,15.5199f ,0.075f ,3.917263f ,15.65402f ,0.075f ,4.575243f });
  }
}
private class MFInt32591 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32592 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f593 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.65725f ,0.075f ,2.477808f ,16.05124f ,0.075f ,2.397499f ,15.92949f ,0.075f ,3.813363f ,16.32347f ,0.075f ,3.733055f });
  }
}
private class MFInt32594 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32595 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f596 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.24367f ,0.075f ,2.56211f ,15.63765f ,0.075f ,2.481802f ,15.5159f ,0.075f ,3.897666f ,15.90989f ,0.075f ,3.817358f });
  }
}
private class MFInt32597 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32598 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f599 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.07841f ,0.075f ,28.39432f ,20.27541f ,0.075f ,28.35416f ,20.4724f ,0.075f ,28.31401f ,20.21453f ,0.075f ,29.0621f ,20.41153f ,0.075f ,29.02194f ,20.60852f ,0.075f ,28.98179f ,20.35065f ,0.075f ,29.72987f ,20.54764f ,0.075f ,29.68972f ,20.74464f ,0.075f ,29.64956f });
  }
}
private class MFInt32600 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32601 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f602 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.19218f ,0.075f ,26.93926f ,19.79819f ,0.075f ,27.01957f ,19.91995f ,0.075f ,25.6037f ,19.52596f ,0.075f ,25.68401f });
  }
}
private class MFInt32603 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32604 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f605 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.10838f ,0.075f ,25.74872f ,18.97426f ,0.075f ,25.09074f ,19.91595f ,0.075f ,25.58411f ,19.78183f ,0.075f ,24.92613f });
  }
}
private class MFInt32606 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32607 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f608 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.64372f ,0.075f ,24.24855f ,19.77784f ,0.075f ,24.90653f ,18.83615f ,0.075f ,24.41316f ,18.97027f ,0.075f ,25.07114f });
  }
}
private class MFInt32609 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32610 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f611 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.63972f ,0.075f ,24.22895f ,19.24574f ,0.075f ,24.30926f ,19.36749f ,0.075f ,22.8934f ,18.9735f ,0.075f ,22.97371f });
  }
}
private class MFInt32612 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32613 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f614 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.55992f ,0.075f ,23.05801f ,18.75691f ,0.075f ,23.01785f ,18.95391f ,0.075f ,22.9777f ,18.69604f ,0.075f ,23.72579f ,18.89303f ,0.075f ,23.68563f ,19.09002f ,0.075f ,23.64548f ,18.83215f ,0.075f ,24.39357f ,19.02915f ,0.075f ,24.35341f ,19.22614f ,0.075f ,24.31326f });
  }
}
private class MFInt32615 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32616 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f617 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.55593f ,0.075f ,23.03841f ,18.42181f ,0.075f ,22.38043f ,19.3635f ,0.075f ,22.8738f ,19.22938f ,0.075f ,22.21582f });
  }
}
private class MFInt32618 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32619 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f620 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {19.09126f ,0.075f ,21.53824f ,19.22538f ,0.075f ,22.19622f ,18.28369f ,0.075f ,21.70286f ,18.41781f ,0.075f ,22.36084f });
  }
}
private class MFInt32621 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32622 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f623 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.42105f ,0.075f ,20.2634f ,18.81503f ,0.075f ,20.18309f ,18.69328f ,0.075f ,21.59896f ,19.08727f ,0.075f ,21.51865f });
  }
}
private class MFInt32624 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32625 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f626 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.00746f ,0.075f ,20.3477f ,18.40145f ,0.075f ,20.2674f ,18.14358f ,0.075f ,21.01548f ,18.53757f ,0.075f ,20.93517f ,18.2797f ,0.075f ,21.68326f ,18.67368f ,0.075f ,21.60295f });
  }
}
private class MFInt32627 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32628 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f629 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.00347f ,0.075f ,20.32811f ,17.86935f ,0.075f ,19.67013f ,18.81104f ,0.075f ,20.1635f ,18.67692f ,0.075f ,19.50552f });
  }
}
private class MFInt32630 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32631 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f632 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86535f ,0.075f ,19.65053f ,17.73124f ,0.075f ,18.99255f ,18.67293f ,0.075f ,19.48592f ,18.53881f ,0.075f ,18.82794f });
  }
}
private class MFInt32633 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32634 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f635 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86859f ,0.075f ,17.55309f ,18.06558f ,0.075f ,17.51294f ,18.26258f ,0.075f ,17.47279f ,18.00471f ,0.075f ,18.22087f ,18.2017f ,0.075f ,18.18072f ,18.39869f ,0.075f ,18.14056f ,18.14083f ,0.075f ,18.88865f ,18.33782f ,0.075f ,18.8485f ,18.53481f ,0.075f ,18.80834f });
  }
}
private class MFInt32636 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32637 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f638 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12123f ,0.075f ,18.89264f ,17.72724f ,0.075f ,18.97295f ,17.849f ,0.075f ,17.55709f ,17.45501f ,0.075f ,17.6374f });
  }
}
private class MFInt32639 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32640 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f641 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12446f ,0.075f ,16.79521f ,18.25858f ,0.075f ,17.45319f ,17.31689f ,0.075f ,16.95982f ,17.45101f ,0.075f ,17.6178f });
  }
}
private class MFInt32642 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32643 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f644 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.3129f ,0.075f ,16.94022f ,17.17878f ,0.075f ,16.28225f ,18.12047f ,0.075f ,16.77561f ,17.98635f ,0.075f ,16.11763f });
  }
}
private class MFInt32645 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32646 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f647 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98236f ,0.075f ,16.09804f ,17.58837f ,0.075f ,16.17834f ,17.84624f ,0.075f ,15.43026f ,17.45225f ,0.075f ,15.51057f ,17.71012f ,0.075f ,14.76248f ,17.31614f ,0.075f ,14.84279f });
  }
}
private class MFInt32648 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32649 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f650 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.56877f ,0.075f ,16.18234f ,17.37178f ,0.075f ,16.22249f ,17.17479f ,0.075f ,16.26265f ,17.43266f ,0.075f ,15.51456f ,17.23566f ,0.075f ,15.55472f ,17.03867f ,0.075f ,15.59487f ,17.29654f ,0.075f ,14.84678f ,17.09954f ,0.075f ,14.88694f ,16.90255f ,0.075f ,14.92709f });
  }
}
private class MFInt32651 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32652 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f653 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.57201f ,0.075f ,14.0849f ,17.70613f ,0.075f ,14.74288f ,16.76444f ,0.075f ,14.24952f ,16.89856f ,0.075f ,14.9075f });
  }
}
private class MFInt32654 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32655 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f656 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.76044f ,0.075f ,14.22992f ,16.62632f ,0.075f ,13.57194f ,17.16423f ,0.075f ,14.14761f ,17.03011f ,0.075f ,13.48963f ,17.56801f ,0.075f ,14.06531f ,17.4339f ,0.075f ,13.40733f });
  }
}
private class MFInt32657 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32658 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f659 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.76368f ,0.075f ,12.13248f ,17.15767f ,0.075f ,12.05217f ,17.03591f ,0.075f ,13.46804f ,17.4299f ,0.075f ,13.38773f });
  }
}
private class MFInt32660 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32661 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f662 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.3501f ,0.075f ,12.21679f ,16.54709f ,0.075f ,12.17663f ,16.74408f ,0.075f ,12.13648f ,16.48621f ,0.075f ,12.88456f ,16.68321f ,0.075f ,12.84441f ,16.8802f ,0.075f ,12.80426f ,16.62233f ,0.075f ,13.55234f ,16.81932f ,0.075f ,13.51219f ,17.01632f ,0.075f ,13.47203f });
  }
}
private class MFInt32663 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32664 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f665 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.3461f ,0.075f ,12.19719f ,16.21198f ,0.075f ,11.53921f ,16.74989f ,0.075f ,12.11488f ,16.61577f ,0.075f ,11.4569f ,17.15367f ,0.075f ,12.03258f ,17.01955f ,0.075f ,11.3746f });
  }
}
private class MFInt32666 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32667 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f668 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.20799f ,0.075f ,11.51961f ,16.07387f ,0.075f ,10.86163f ,16.61177f ,0.075f ,11.43731f ,16.47765f ,0.075f ,10.77933f ,17.01556f ,0.075f ,11.355f ,16.88144f ,0.075f ,10.69702f });
  }
}
private class MFInt32669 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32670 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f671 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.87744f ,0.075f ,10.67743f ,16.48346f ,0.075f ,10.75773f ,16.74133f ,0.075f ,10.00965f ,16.34734f ,0.075f ,10.08996f ,16.60521f ,0.075f ,9.341869f ,16.21122f ,0.075f ,9.422177f });
  }
}
private class MFInt32672 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32673 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f674 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.79764f ,0.075f ,9.506481f ,16.19163f ,0.075f ,9.426172f ,15.93376f ,0.075f ,10.17426f ,16.32774f ,0.075f ,10.09395f ,16.06987f ,0.075f ,10.84204f ,16.46386f ,0.075f ,10.76173f });
  }
}
private class MFInt32675 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32676 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f677 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.4671f ,0.075f ,8.664293f ,16.60122f ,0.075f ,9.322272f ,16.06331f ,0.075f ,8.746598f ,16.19743f ,0.075f ,9.404578f ,15.65953f ,0.075f ,8.828904f ,15.79364f ,0.075f ,9.486884f });
  }
}
private class MFInt32678 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32679 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f680 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.32898f ,0.075f ,7.986716f ,16.4631f ,0.075f ,8.644696f ,15.52141f ,0.075f ,8.151328f ,15.65553f ,0.075f ,8.809307f });
  }
}
private class MFInt32681 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32682 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f683 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.65877f ,0.075f ,6.711872f ,16.05276f ,0.075f ,6.631564f ,15.79488f ,0.075f ,7.37965f ,16.18887f ,0.075f ,7.299342f ,15.931f ,0.075f ,8.047428f ,16.32499f ,0.075f ,7.967119f });
  }
}
private class MFInt32684 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32685 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f686 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.24518f ,0.075f ,6.796175f ,15.44218f ,0.075f ,6.756021f ,15.63917f ,0.075f ,6.715867f ,15.3813f ,0.075f ,7.463953f ,15.57829f ,0.075f ,7.423799f ,15.77529f ,0.075f ,7.383645f ,15.51742f ,0.075f ,8.131731f ,15.71441f ,0.075f ,8.091577f ,15.9114f ,0.075f ,8.051422f });
  }
}
private class MFInt32687 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32688 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f689 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91464f ,0.075f ,5.953987f ,16.04876f ,0.075f ,6.611967f ,15.10707f ,0.075f ,6.118598f ,15.24119f ,0.075f ,6.776578f });
  }
}
private class MFInt32690 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32691 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f692 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.10308f ,0.075f ,6.099001f ,15.03602f ,0.075f ,5.770012f ,14.96896f ,0.075f ,5.441022f ,15.91065f ,0.075f ,5.93439f ,15.84359f ,0.075f ,5.605401f ,15.77653f ,0.075f ,5.276411f });
  }
}
private class MFInt32693 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32694 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f695 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.77253f ,0.075f ,5.256814f ,15.37854f ,0.075f ,5.337122f ,15.63642f ,0.075f ,4.589036f ,15.24243f ,0.075f ,4.669344f ,15.5003f ,0.075f ,3.921258f ,15.10631f ,0.075f ,4.001566f });
  }
}
private class MFInt32696 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32697 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f698 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.69273f ,0.075f ,4.085869f ,14.88972f ,0.075f ,4.045715f ,15.08671f ,0.075f ,4.005561f ,14.82884f ,0.075f ,4.753647f ,15.02584f ,0.075f ,4.713493f ,15.22283f ,0.075f ,4.673339f ,14.96496f ,0.075f ,5.421425f ,15.16195f ,0.075f ,5.381271f ,15.35895f ,0.075f ,5.341117f });
  }
}
private class MFInt32699 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32700 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f701 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36218f ,0.075f ,3.243681f ,15.4963f ,0.075f ,3.901661f ,14.9584f ,0.075f ,3.325987f ,15.09252f ,0.075f ,3.983967f ,14.55461f ,0.075f ,3.408293f ,14.68873f ,0.075f ,4.066272f });
  }
}
private class MFInt32702 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32703 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f704 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.55062f ,0.075f ,3.388696f ,14.4165f ,0.075f ,2.730716f ,15.35819f ,0.075f ,3.224084f ,15.22407f ,0.075f ,2.566105f });
  }
}
private class MFInt32705 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32706 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f707 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.86687f ,0.075f ,23.88459f ,17.73275f ,0.075f ,23.22662f ,18.27066f ,0.075f ,23.80229f ,18.13654f ,0.075f ,23.14431f ,18.67444f ,0.075f ,23.71998f ,18.54032f ,0.075f ,23.062f });
  }
}
private class MFInt32708 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32709 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f710 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.87011f ,0.075f ,21.78716f ,18.0671f ,0.075f ,21.74701f ,18.2641f ,0.075f ,21.70685f ,18.00622f ,0.075f ,22.45494f ,18.20322f ,0.075f ,22.41478f ,18.40021f ,0.075f ,22.37463f ,18.14234f ,0.075f ,23.12271f ,18.33933f ,0.075f ,23.08256f ,18.53633f ,0.075f ,23.04241f });
  }
}
private class MFInt32711 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32712 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f713 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.12274f ,0.075f ,23.12671f ,17.92575f ,0.075f ,23.16686f ,17.72876f ,0.075f ,23.20702f ,17.98663f ,0.075f ,22.45893f ,17.78963f ,0.075f ,22.49909f ,17.59264f ,0.075f ,22.53924f ,17.85051f ,0.075f ,21.79115f ,17.65352f ,0.075f ,21.83131f ,17.45652f ,0.075f ,21.87146f });
  }
}
private class MFInt32714 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32715 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f716 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.45253f ,0.075f ,21.85187f ,17.31841f ,0.075f ,21.19389f ,17.85631f ,0.075f ,21.76956f ,17.72219f ,0.075f ,21.11158f ,18.2601f ,0.075f ,21.68725f ,18.12598f ,0.075f ,21.02927f });
  }
}
private class MFInt32717 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32718 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f719 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98787f ,0.075f ,20.3517f ,18.12199f ,0.075f ,21.00968f ,17.1803f ,0.075f ,20.51631f ,17.31441f ,0.075f ,21.17429f });
  }
}
private class MFInt32720 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32721 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f722 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.98387f ,0.075f ,20.3321f ,17.78688f ,0.075f ,20.37226f ,17.58989f ,0.075f ,20.41241f ,17.84776f ,0.075f ,19.66432f ,17.65076f ,0.075f ,19.70448f ,17.45377f ,0.075f ,19.74463f ,17.71164f ,0.075f ,18.99655f ,17.51464f ,0.075f ,19.0367f ,17.31765f ,0.075f ,19.07685f });
  }
}
private class MFInt32723 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32724 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f725 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.90407f ,0.075f ,19.16116f ,17.10106f ,0.075f ,19.121f ,17.29805f ,0.075f ,19.08085f ,17.04018f ,0.075f ,19.82894f ,17.23718f ,0.075f ,19.78878f ,17.43417f ,0.075f ,19.74863f ,17.1763f ,0.075f ,20.49671f ,17.37329f ,0.075f ,20.45656f ,17.57029f ,0.075f ,20.4164f });
  }
}
private class MFInt32726 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32727 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f728 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.57352f ,0.075f ,18.31897f ,17.70764f ,0.075f ,18.97695f ,17.16974f ,0.075f ,18.40127f ,17.30386f ,0.075f ,19.05925f ,16.76595f ,0.075f ,18.48358f ,16.90007f ,0.075f ,19.14156f });
  }
}
private class MFInt32729 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32730 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f731 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.43541f ,0.075f ,17.64139f ,17.56953f ,0.075f ,18.29937f ,17.03163f ,0.075f ,17.7237f ,17.16574f ,0.075f ,18.38168f ,16.62784f ,0.075f ,17.806f ,16.76196f ,0.075f ,18.46398f });
  }
}
private class MFInt32732 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32733 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f734 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.7652f ,0.075f ,16.36655f ,16.96219f ,0.075f ,16.32639f ,17.15918f ,0.075f ,16.28624f ,16.90131f ,0.075f ,17.03433f ,17.09831f ,0.075f ,16.99417f ,17.2953f ,0.075f ,16.95402f ,17.03743f ,0.075f ,17.7021f ,17.23442f ,0.075f ,17.66195f ,17.43142f ,0.075f ,17.6218f });
  }
}
private class MFInt32735 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32736 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f737 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.35161f ,0.075f ,16.45085f ,16.7456f ,0.075f ,16.37054f ,16.48773f ,0.075f ,17.11863f ,16.88172f ,0.075f ,17.03832f ,16.62385f ,0.075f ,17.78641f ,17.01783f ,0.075f ,17.7061f });
  }
}
private class MFInt32738 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32739 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f740 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.02107f ,0.075f ,15.60866f ,17.15519f ,0.075f ,16.26664f ,16.2135f ,0.075f ,15.77327f ,16.34762f ,0.075f ,16.43125f });
  }
}
private class MFInt32741 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32742 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f743 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.2095f ,0.075f ,15.75368f ,16.07538f ,0.075f ,15.0957f ,16.61329f ,0.075f ,15.67137f ,16.47917f ,0.075f ,15.01339f ,17.01707f ,0.075f ,15.58907f ,16.88296f ,0.075f ,14.93109f });
  }
}
private class MFInt32744 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32745 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f746 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.87896f ,0.075f ,14.91149f ,16.48497f ,0.075f ,14.9918f ,16.60673f ,0.075f ,13.57593f ,16.21274f ,0.075f ,13.65624f });
  }
}
private class MFInt32747 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32748 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f749 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.46538f ,0.075f ,14.99579f ,16.07139f ,0.075f ,15.0761f ,16.19314f ,0.075f ,13.66024f ,15.79916f ,0.075f ,13.74055f });
  }
}
private class MFInt32750 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32751 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f752 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.46861f ,0.075f ,12.89836f ,16.60273f ,0.075f ,13.55634f ,15.66104f ,0.075f ,13.06297f ,15.79516f ,0.075f ,13.72095f });
  }
}
private class MFInt32753 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32754 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f755 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.65705f ,0.075f ,13.04337f ,15.52293f ,0.075f ,12.38539f ,16.06083f ,0.075f ,12.96107f ,15.92671f ,0.075f ,12.30309f ,16.46462f ,0.075f ,12.87876f ,16.3305f ,0.075f ,12.22078f });
  }
}
private class MFInt32756 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32757 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f758 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.3265f ,0.075f ,12.20118f ,15.93252f ,0.075f ,12.28149f ,16.05427f ,0.075f ,10.86563f ,15.66028f ,0.075f ,10.94594f });
  }
}
private class MFInt32759 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32760 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f761 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91292f ,0.075f ,12.28549f ,15.51893f ,0.075f ,12.3658f ,15.64069f ,0.075f ,10.94993f ,15.2467f ,0.075f ,11.03024f });
  }
}
private class MFInt32762 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32763 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f764 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.24271f ,0.075f ,11.01064f ,15.10859f ,0.075f ,10.35266f ,16.05028f ,0.075f ,10.84603f ,15.91616f ,0.075f ,10.18805f });
  }
}
private class MFInt32765 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32766 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f767 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.10459f ,0.075f ,10.33307f ,14.97047f ,0.075f ,9.675087f ,15.91216f ,0.075f ,10.16846f ,15.77804f ,0.075f ,9.510475f });
  }
}
private class MFInt32768 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32769 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f770 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.77405f ,0.075f ,9.490878f ,15.38006f ,0.075f ,9.571187f ,15.50181f ,0.075f ,8.155322f ,15.10783f ,0.075f ,8.235631f });
  }
}
private class MFInt32771 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32772 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f773 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36046f ,0.075f ,9.575181f ,15.16347f ,0.075f ,9.615335f ,14.96648f ,0.075f ,9.65549f ,15.22435f ,0.075f ,8.907403f ,15.02735f ,0.075f ,8.947557f ,14.83036f ,0.075f ,8.987712f ,15.08823f ,0.075f ,8.239626f ,14.89124f ,0.075f ,8.279779f ,14.69424f ,0.075f ,8.319934f });
  }
}
private class MFInt32774 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32775 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f776 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.69025f ,0.075f ,8.300337f ,14.55613f ,0.075f ,7.642357f ,15.49782f ,0.075f ,8.135725f ,15.3637f ,0.075f ,7.477746f });
  }
}
private class MFInt32777 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32778 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f779 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.55214f ,0.075f ,7.62276f ,14.41802f ,0.075f ,6.964781f ,15.35971f ,0.075f ,7.458149f ,15.22559f ,0.075f ,6.800169f });
  }
}
private class MFInt32780 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32781 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f782 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.55537f ,0.075f ,5.525325f ,14.94936f ,0.075f ,5.445017f ,14.82761f ,0.075f ,6.860881f ,15.22159f ,0.075f ,6.780572f });
  }
}
private class MFInt32783 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32784 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f785 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.14179f ,0.075f ,5.609628f ,14.53578f ,0.075f ,5.52932f ,14.41402f ,0.075f ,6.945184f ,14.80801f ,0.075f ,6.864876f });
  }
}
private class MFInt32786 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32787 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f788 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.13779f ,0.075f ,5.590031f ,14.00367f ,0.075f ,4.932052f ,14.94536f ,0.075f ,5.42542f ,14.81124f ,0.075f ,4.76744f });
  }
}
private class MFInt32789 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32790 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f791 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.99968f ,0.075f ,4.912455f ,13.86556f ,0.075f ,4.254475f ,14.80725f ,0.075f ,4.747843f ,14.67313f ,0.075f ,4.089864f });
  }
}
private class MFInt32792 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32793 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f794 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.00292f ,0.075f ,2.815019f ,14.3969f ,0.075f ,2.734711f ,14.13903f ,0.075f ,3.482797f ,14.53302f ,0.075f ,3.402489f ,14.27515f ,0.075f ,4.150575f ,14.66914f ,0.075f ,4.070267f });
  }
}
private class MFInt32795 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32796 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f797 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.58933f ,0.075f ,2.899323f ,13.98332f ,0.075f ,2.819014f ,13.86157f ,0.075f ,4.234878f ,14.25555f ,0.075f ,4.15457f });
  }
}
private class MFInt32798 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32799 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f800 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.90159f ,0.075f ,23.37562f ,16.76747f ,0.075f ,22.71765f ,17.70916f ,0.075f ,23.21101f ,17.57504f ,0.075f ,22.55303f });
  }
}
private class MFInt32801 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32802 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f803 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.76348f ,0.075f ,22.69805f ,16.69641f ,0.075f ,22.36906f ,16.62936f ,0.075f ,22.04007f ,17.16726f ,0.075f ,22.61574f ,17.1002f ,0.075f ,22.28675f ,17.03314f ,0.075f ,21.95776f ,17.57105f ,0.075f ,22.53344f ,17.50399f ,0.075f ,22.20445f ,17.43693f ,0.075f ,21.87546f });
  }
}
private class MFInt32804 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32805 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f806 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.76671f ,0.075f ,20.60061f ,16.96371f ,0.075f ,20.56046f ,17.1607f ,0.075f ,20.5203f ,16.90283f ,0.075f ,21.26839f ,17.09982f ,0.075f ,21.22824f ,17.29682f ,0.075f ,21.18808f ,17.03895f ,0.075f ,21.93617f ,17.23594f ,0.075f ,21.89602f ,17.43293f ,0.075f ,21.85586f });
  }
}
private class MFInt32807 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32808 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f809 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.35313f ,0.075f ,20.68492f ,16.74711f ,0.075f ,20.60461f ,16.48924f ,0.075f ,21.35269f ,16.88323f ,0.075f ,21.27238f ,16.62536f ,0.075f ,22.02047f ,17.01935f ,0.075f ,21.94016f });
  }
}
private class MFInt32810 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32811 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f812 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.34913f ,0.075f ,20.66532f ,16.21501f ,0.075f ,20.00734f ,17.1567f ,0.075f ,20.50071f ,17.02258f ,0.075f ,19.84273f });
  }
}
private class MFInt32813 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32814 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f815 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.21102f ,0.075f ,19.98774f ,16.0769f ,0.075f ,19.32976f ,17.01859f ,0.075f ,19.82313f ,16.88447f ,0.075f ,19.16515f });
  }
}
private class MFInt32816 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32817 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f818 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.21426f ,0.075f ,17.89031f ,16.60824f ,0.075f ,17.81f ,16.48649f ,0.075f ,19.22586f ,16.88048f ,0.075f ,19.14555f });
  }
}
private class MFInt32819 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32820 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f821 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.80067f ,0.075f ,17.97461f ,16.19466f ,0.075f ,17.8943f ,16.0729f ,0.075f ,19.31017f ,16.46689f ,0.075f ,19.22986f });
  }
}
private class MFInt32822 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32823 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f824 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.79668f ,0.075f ,17.95501f ,15.66256f ,0.075f ,17.29703f ,16.60425f ,0.075f ,17.7904f ,16.47013f ,0.075f ,17.13242f });
  }
}
private class MFInt32825 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32826 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f827 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.33201f ,0.075f ,16.45485f ,16.46614f ,0.075f ,17.11283f ,15.52444f ,0.075f ,16.61946f ,15.65856f ,0.075f ,17.27744f });
  }
}
private class MFInt32828 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32829 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f830 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.32802f ,0.075f ,16.43525f ,16.13103f ,0.075f ,16.4754f ,15.93403f ,0.075f ,16.51556f ,16.1919f ,0.075f ,15.76747f ,15.99491f ,0.075f ,15.80762f ,15.79792f ,0.075f ,15.84778f ,16.05579f ,0.075f ,15.09969f ,15.85879f ,0.075f ,15.13985f ,15.6618f ,0.075f ,15.18f });
  }
}
private class MFInt32831 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32832 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f833 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91444f ,0.075f ,16.51955f ,15.52045f ,0.075f ,16.59986f ,15.6422f ,0.075f ,15.184f ,15.24822f ,0.075f ,15.2643f });
  }
}
private class MFInt32834 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32835 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f836 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91767f ,0.075f ,14.42212f ,16.05179f ,0.075f ,15.0801f ,15.1101f ,0.075f ,14.58673f ,15.24422f ,0.075f ,15.24471f });
  }
}
private class MFInt32837 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32838 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f839 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.77956f ,0.075f ,13.74454f ,15.91368f ,0.075f ,14.40252f ,14.97199f ,0.075f ,13.90915f ,15.10611f ,0.075f ,14.56713f });
  }
}
private class MFInt32840 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32841 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f842 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.77556f ,0.075f ,13.72494f ,15.38158f ,0.075f ,13.80525f ,15.63945f ,0.075f ,13.05717f ,15.24546f ,0.075f ,13.13747f ,15.50333f ,0.075f ,12.38939f ,15.10934f ,0.075f ,12.4697f });
  }
}
private class MFInt32843 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32844 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f845 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.69576f ,0.075f ,12.554f ,15.08975f ,0.075f ,12.47369f ,14.96799f ,0.075f ,13.88955f ,15.36198f ,0.075f ,13.80925f });
  }
}
private class MFInt32846 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32847 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f848 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36522f ,0.075f ,11.71181f ,15.43228f ,0.075f ,12.0408f ,15.49934f ,0.075f ,12.36979f ,14.55765f ,0.075f ,11.87642f ,14.62471f ,0.075f ,12.20541f ,14.69177f ,0.075f ,12.5344f });
  }
}
private class MFInt32849 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32850 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f851 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.55365f ,0.075f ,11.85682f ,14.41953f ,0.075f ,11.19885f ,14.95744f ,0.075f ,11.77452f ,14.82332f ,0.075f ,11.11654f ,15.36122f ,0.075f ,11.69221f ,15.2271f ,0.075f ,11.03423f });
  }
}
private class MFInt32852 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32853 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f854 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.22311f ,0.075f ,11.01464f ,14.82912f ,0.075f ,11.09495f ,14.95088f ,0.075f ,9.679081f ,14.55689f ,0.075f ,9.75939f });
  }
}
private class MFInt32855 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32856 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f857 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.1433f ,0.075f ,9.843693f ,14.53729f ,0.075f ,9.763384f ,14.41554f ,0.075f ,11.17925f ,14.80952f ,0.075f ,11.09894f });
  }
}
private class MFInt32858 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32859 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f860 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.13931f ,0.075f ,9.824096f ,14.07225f ,0.075f ,9.495106f ,14.00519f ,0.075f ,9.166117f ,14.94688f ,0.075f ,9.659484f ,14.87982f ,0.075f ,9.330495f ,14.81276f ,0.075f ,9.001505f });
  }
}
private class MFInt32861 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32862 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f863 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67465f ,0.075f ,8.323929f ,14.74171f ,0.075f ,8.652918f ,14.80877f ,0.075f ,8.981908f ,14.27086f ,0.075f ,8.406234f ,14.33792f ,0.075f ,8.735224f ,14.40498f ,0.075f ,9.064214f ,13.86708f ,0.075f ,8.48854f ,13.93414f ,0.075f ,8.81753f ,14.00119f ,0.075f ,9.14652f });
  }
}
private class MFInt32864 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32865 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f866 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67065f ,0.075f ,8.304332f ,14.27667f ,0.075f ,8.38464f ,14.39842f ,0.075f ,6.968776f ,14.00443f ,0.075f ,7.049084f });
  }
}
private class MFInt32867 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32868 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f869 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.59085f ,0.075f ,7.133387f ,13.98483f ,0.075f ,7.053079f ,13.72696f ,0.075f ,7.801165f ,14.12095f ,0.075f ,7.720857f ,13.86308f ,0.075f ,8.468943f ,14.25707f ,0.075f ,8.388635f });
  }
}
private class MFInt32870 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32871 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f872 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.2603f ,0.075f ,6.291199f ,14.39442f ,0.075f ,6.949179f ,13.85652f ,0.075f ,6.373505f ,13.99064f ,0.075f ,7.031484f ,13.45273f ,0.075f ,6.455811f ,13.58685f ,0.075f ,7.11379f });
  }
}
private class MFInt32873 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32874 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f875 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.44874f ,0.075f ,6.436213f ,13.31462f ,0.075f ,5.778234f ,13.85252f ,0.075f ,6.353908f ,13.71841f ,0.075f ,5.695929f ,14.25631f ,0.075f ,6.271602f ,14.12219f ,0.075f ,5.613623f });
  }
}
private class MFInt32876 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32877 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f878 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.1182f ,0.075f ,5.594026f ,13.72421f ,0.075f ,5.674334f ,13.98208f ,0.075f ,4.926248f ,13.58809f ,0.075f ,5.006556f ,13.84596f ,0.075f ,4.25847f ,13.45198f ,0.075f ,4.338778f });
  }
}
private class MFInt32879 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32880 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f881 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.03839f ,0.075f ,4.423081f ,13.43238f ,0.075f ,4.342773f ,13.17451f ,0.075f ,5.090859f ,13.5685f ,0.075f ,5.010551f ,13.31063f ,0.075f ,5.758637f ,13.70461f ,0.075f ,5.678329f });
  }
}
private class MFInt32882 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32883 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f884 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.0344f ,0.075f ,4.403484f ,12.90028f ,0.075f ,3.745505f ,13.84197f ,0.075f ,4.238873f ,13.70785f ,0.075f ,3.580894f });
  }
}
private class MFInt32885 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32886 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f887 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.56973f ,0.075f ,2.903317f ,13.70385f ,0.075f ,3.561296f ,12.76216f ,0.075f ,3.067929f ,12.89628f ,0.075f ,3.725908f });
  }
}
private class MFInt32888 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32889 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f890 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.47165f ,0.075f ,21.36649f ,16.60576f ,0.075f ,22.02447f ,15.66407f ,0.075f ,21.5311f ,15.79819f ,0.075f ,22.18908f });
  }
}
private class MFInt32891 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32892 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f893 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.66008f ,0.075f ,21.5115f ,15.52596f ,0.075f ,20.85352f ,16.46765f ,0.075f ,21.34689f ,16.33353f ,0.075f ,20.68891f });
  }
}
private class MFInt32894 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32895 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f896 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.66332f ,0.075f ,19.41407f ,15.86031f ,0.075f ,19.37391f ,16.0573f ,0.075f ,19.33376f ,15.79943f ,0.075f ,20.08184f ,15.99643f ,0.075f ,20.04169f ,16.19342f ,0.075f ,20.00154f ,15.93555f ,0.075f ,20.74962f ,16.13254f ,0.075f ,20.70947f ,16.32954f ,0.075f ,20.66931f });
  }
}
private class MFInt32897 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32898 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f899 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.24973f ,0.075f ,19.49837f ,15.64372f ,0.075f ,19.41806f ,15.38585f ,0.075f ,20.16615f ,15.77984f ,0.075f ,20.08584f ,15.52197f ,0.075f ,20.83393f ,15.91595f ,0.075f ,20.75362f });
  }
}
private class MFInt32900 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32901 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f902 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.91919f ,0.075f ,18.65618f ,16.05331f ,0.075f ,19.31416f ,15.11162f ,0.075f ,18.82079f ,15.24574f ,0.075f ,19.47877f });
  }
}
private class MFInt32903 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32904 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f905 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.10762f ,0.075f ,18.8012f ,14.9735f ,0.075f ,18.14322f ,15.91519f ,0.075f ,18.63658f ,15.78107f ,0.075f ,17.97861f });
  }
}
private class MFInt32906 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32907 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f908 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.11086f ,0.075f ,16.70376f ,15.50485f ,0.075f ,16.62345f ,15.38309f ,0.075f ,18.03932f ,15.77708f ,0.075f ,17.95901f });
  }
}
private class MFInt32909 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32910 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f911 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.69728f ,0.075f ,16.78806f ,15.09126f ,0.075f ,16.70775f ,14.96951f ,0.075f ,18.12362f ,15.3635f ,0.075f ,18.04331f });
  }
}
private class MFInt32912 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32913 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f914 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36673f ,0.075f ,15.94588f ,15.43379f ,0.075f ,16.27486f ,15.50085f ,0.075f ,16.60386f ,14.96295f ,0.075f ,16.02818f ,15.03001f ,0.075f ,16.35717f ,15.09707f ,0.075f ,16.68616f ,14.55916f ,0.075f ,16.11049f ,14.62622f ,0.075f ,16.43948f ,14.69328f ,0.075f ,16.76847f });
  }
}
private class MFInt32915 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32916 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f917 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.55517f ,0.075f ,16.09089f ,14.42105f ,0.075f ,15.43291f ,15.36274f ,0.075f ,15.92628f ,15.22862f ,0.075f ,15.2683f });
  }
}
private class MFInt32918 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32919 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f920 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.5584f ,0.075f ,13.99345f ,14.95239f ,0.075f ,13.91315f ,14.83064f ,0.075f ,15.32901f ,15.22462f ,0.075f ,15.2487f });
  }
}
private class MFInt32921 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32922 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f923 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.14482f ,0.075f ,14.07776f ,14.53881f ,0.075f ,13.99745f ,14.41705f ,0.075f ,15.41331f ,14.81104f ,0.075f ,15.333f });
  }
}
private class MFInt32924 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32925 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f926 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.14083f ,0.075f ,14.05816f ,14.07377f ,0.075f ,13.72917f ,14.00671f ,0.075f ,13.40018f ,14.54461f ,0.075f ,13.97585f ,14.47755f ,0.075f ,13.64686f ,14.41049f ,0.075f ,13.31787f ,14.9484f ,0.075f ,13.89355f ,14.88134f ,0.075f ,13.56456f ,14.81428f ,0.075f ,13.23557f });
  }
}
private class MFInt32927 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32928 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f929 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67616f ,0.075f ,12.55799f ,14.81028f ,0.075f ,13.21597f ,13.86859f ,0.075f ,12.7226f ,14.00271f ,0.075f ,13.38058f });
  }
}
private class MFInt32930 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32931 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f932 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.00595f ,0.075f ,11.28315f ,14.20294f ,0.075f ,11.24299f ,14.39993f ,0.075f ,11.20284f ,14.14207f ,0.075f ,11.95093f ,14.33906f ,0.075f ,11.91077f ,14.53605f ,0.075f ,11.87062f ,14.27818f ,0.075f ,12.6187f ,14.47517f ,0.075f ,12.57855f ,14.67217f ,0.075f ,12.5384f });
  }
}
private class MFInt32933 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32934 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f935 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.59236f ,0.075f ,11.36745f ,13.98635f ,0.075f ,11.28714f ,13.8646f ,0.075f ,12.70301f ,14.25858f ,0.075f ,12.6227f });
  }
}
private class MFInt32936 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32937 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f938 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.58837f ,0.075f ,11.34785f ,13.45425f ,0.075f ,10.68988f ,13.99216f ,0.075f ,11.26555f ,13.85804f ,0.075f ,10.60757f ,14.39594f ,0.075f ,11.18324f ,14.26182f ,0.075f ,10.52526f });
  }
}
private class MFInt32939 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32940 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f941 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.45026f ,0.075f ,10.67028f ,13.3832f ,0.075f ,10.34129f ,13.31614f ,0.075f ,10.0123f ,14.25783f ,0.075f ,10.50567f ,14.19077f ,0.075f ,10.17668f ,14.12371f ,0.075f ,9.847688f });
  }
}
private class MFInt32942 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32943 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f944 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.11971f ,0.075f ,9.828091f ,13.72573f ,0.075f ,9.908399f ,13.9836f ,0.075f ,9.160313f ,13.58961f ,0.075f ,9.240621f ,13.84748f ,0.075f ,8.492535f ,13.45349f ,0.075f ,8.572843f });
  }
}
private class MFInt32945 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt32946 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f947 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.03991f ,0.075f ,8.657146f ,13.2369f ,0.075f ,8.616992f ,13.4339f ,0.075f ,8.576838f ,13.17602f ,0.075f ,9.324924f ,13.37302f ,0.075f ,9.28477f ,13.57001f ,0.075f ,9.244616f ,13.31214f ,0.075f ,9.992702f ,13.50914f ,0.075f ,9.952547f ,13.70613f ,0.075f ,9.912394f });
  }
}
private class MFInt32948 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32949 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f950 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.70936f ,0.075f ,7.814958f ,13.84348f ,0.075f ,8.472938f ,12.90179f ,0.075f ,7.979569f ,13.03591f ,0.075f ,8.637548f });
  }
}
private class MFInt32951 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32952 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f953 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.57125f ,0.075f ,7.137382f ,13.70537f ,0.075f ,7.795361f ,12.76368f ,0.075f ,7.301993f ,12.8978f ,0.075f ,7.959972f });
  }
}
private class MFInt32954 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32955 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f956 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.90104f ,0.075f ,5.862537f ,13.29502f ,0.075f ,5.782229f ,13.17327f ,0.075f ,7.198093f ,13.56726f ,0.075f ,7.117785f });
  }
}
private class MFInt32957 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32958 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f959 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.48745f ,0.075f ,5.94684f ,12.88144f ,0.075f ,5.866532f ,12.75969f ,0.075f ,7.282396f ,13.15367f ,0.075f ,7.202087f });
  }
}
private class MFInt32960 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32961 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f962 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.48346f ,0.075f ,5.927243f ,12.34934f ,0.075f ,5.269264f ,13.29103f ,0.075f ,5.762632f ,13.15691f ,0.075f ,5.104652f });
  }
}
private class MFInt32963 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32964 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f965 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.34534f ,0.075f ,5.249667f ,12.21122f ,0.075f ,4.591687f ,13.15291f ,0.075f ,5.085055f ,13.0188f ,0.075f ,4.427076f });
  }
}
private class MFInt32966 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32967 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f968 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.34858f ,0.075f ,3.152231f ,12.74257f ,0.075f ,3.071923f ,12.62081f ,0.075f ,4.487787f ,13.0148f ,0.075f ,4.407479f });
  }
}
private class MFInt32969 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32970 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f971 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.935f ,0.075f ,3.236535f ,12.32898f ,0.075f ,3.156226f ,12.07111f ,0.075f ,3.904312f ,12.4651f ,0.075f ,3.824004f ,12.20723f ,0.075f ,4.57209f ,12.60122f ,0.075f ,4.491782f });
  }
}
private class MFInt32972 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32973 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f974 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.931f ,0.075f ,3.216938f ,11.79688f ,0.075f ,2.558958f ,12.73857f ,0.075f ,3.052326f ,12.60445f ,0.075f ,2.394347f });
  }
}
private class MFInt32975 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32976 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f977 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.36825f ,0.075f ,20.17994f ,15.50237f ,0.075f ,20.83792f ,14.56068f ,0.075f ,20.34455f ,14.6948f ,0.075f ,21.00253f });
  }
}
private class MFInt32978 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32979 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f980 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.55668f ,0.075f ,20.32495f ,14.48962f ,0.075f ,19.99596f ,14.42256f ,0.075f ,19.66698f ,15.36425f ,0.075f ,20.16034f ,15.29719f ,0.075f ,19.83135f ,15.23013f ,0.075f ,19.50236f });
  }
}
private class MFInt32981 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32982 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f983 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.55992f ,0.075f ,18.22752f ,14.95391f ,0.075f ,18.14721f ,14.83215f ,0.075f ,19.56307f ,15.22614f ,0.075f ,19.48277f });
  }
}
private class MFInt32984 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32985 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f986 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.14634f ,0.075f ,18.31182f ,14.54032f ,0.075f ,18.23151f ,14.28245f ,0.075f ,18.9796f ,14.67644f ,0.075f ,18.89929f ,14.41857f ,0.075f ,19.64738f ,14.81256f ,0.075f ,19.56707f });
  }
}
private class MFInt32987 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt32988 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f989 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.14234f ,0.075f ,18.29222f ,14.00822f ,0.075f ,17.63424f ,14.94991f ,0.075f ,18.12761f ,14.81579f ,0.075f ,17.46964f });
  }
}
private class MFInt32990 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt32991 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f992 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.00423f ,0.075f ,17.61465f ,13.93717f ,0.075f ,17.28566f ,13.87011f ,0.075f ,16.95667f ,14.8118f ,0.075f ,17.45004f ,14.74474f ,0.075f ,17.12105f ,14.67768f ,0.075f ,16.79206f });
  }
}
private class MFInt32993 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32994 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f995 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.67368f ,0.075f ,16.77246f ,14.2797f ,0.075f ,16.85277f ,14.53757f ,0.075f ,16.10468f ,14.14358f ,0.075f ,16.18499f ,14.40145f ,0.075f ,15.4369f ,14.00746f ,0.075f ,15.51721f });
  }
}
private class MFInt32996 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt32997 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f998 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.2601f ,0.075f ,16.85676f ,13.86611f ,0.075f ,16.93707f ,14.12398f ,0.075f ,16.18899f ,13.73f ,0.075f ,16.26929f ,13.98787f ,0.075f ,15.52121f ,13.59388f ,0.075f ,15.60152f });
  }
}
private class MFInt32999 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321000 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1001 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.58989f ,0.075f ,15.58192f ,13.45577f ,0.075f ,14.92394f ,14.39746f ,0.075f ,15.41731f ,14.26334f ,0.075f ,14.75933f });
  }
}
private class MFInt321002 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321003 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1004 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.3501f ,0.075f ,7.386296f ,12.54709f ,0.075f ,7.346142f ,12.74408f ,0.075f ,7.305988f ,12.48621f ,0.075f ,8.054074f ,12.68321f ,0.075f ,8.01392f ,12.8802f ,0.075f ,7.973765f ,12.62233f ,0.075f ,8.721852f ,12.81932f ,0.075f ,8.681698f ,13.01632f ,0.075f ,8.641543f });
  }
}
private class MFInt321005 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321006 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1007 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.93651f ,0.075f ,7.470599f ,12.3305f ,0.075f ,7.390291f ,12.20875f ,0.075f ,8.806155f ,12.60273f ,0.075f ,8.725846f });
  }
}
private class MFInt321008 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321009 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1010 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.60597f ,0.075f ,6.628411f ,12.74009f ,0.075f ,7.286391f ,12.20218f ,0.075f ,6.710717f ,12.3363f ,0.075f ,7.368696f ,11.7984f ,0.075f ,6.793023f ,11.93252f ,0.075f ,7.451002f });
  }
}
private class MFInt321011 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321012 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1013 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {12.46786f ,0.075f ,5.950835f ,12.60197f ,0.075f ,6.608814f ,11.66028f ,0.075f ,6.115446f ,11.7944f ,0.075f ,6.773426f });
  }
}
private class MFInt321014 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321015 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1016 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.79764f ,0.075f ,4.675991f ,11.99463f ,0.075f ,4.635836f ,12.19163f ,0.075f ,4.595682f ,11.93376f ,0.075f ,5.343768f ,12.13075f ,0.075f ,5.303614f ,12.32774f ,0.075f ,5.26346f ,12.06987f ,0.075f ,6.011546f ,12.26687f ,0.075f ,5.971392f ,12.46386f ,0.075f ,5.931238f });
  }
}
private class MFInt321017 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321018 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1019 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.38406f ,0.075f ,4.760293f ,11.58105f ,0.075f ,4.720139f ,11.77804f ,0.075f ,4.679985f ,11.52017f ,0.075f ,5.428071f ,11.71717f ,0.075f ,5.387917f ,11.91416f ,0.075f ,5.347763f ,11.65629f ,0.075f ,6.095849f ,11.85328f ,0.075f ,6.055695f ,12.05028f ,0.075f ,6.015541f });
  }
}
private class MFInt321020 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321021 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1022 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.38006f ,0.075f ,4.740696f ,11.24594f ,0.075f ,4.082717f ,12.18763f ,0.075f ,4.576085f ,12.05351f ,0.075f ,3.918105f });
  }
}
private class MFInt321023 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321024 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1025 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.9154f ,0.075f ,3.240529f ,12.04952f ,0.075f ,3.898509f ,11.10783f ,0.075f ,3.40514f ,11.24195f ,0.075f ,4.06312f });
  }
}
private class MFInt321026 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321027 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1028 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.24518f ,0.075f ,1.965685f ,11.63917f ,0.075f ,1.885376f ,11.51742f ,0.075f ,3.30124f ,11.9114f ,0.075f ,3.220932f });
  }
}
private class MFInt321029 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321030 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1031 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.8316f ,0.075f ,2.049988f ,11.02859f ,0.075f ,2.009833f ,11.22559f ,0.075f ,1.969679f ,10.96772f ,0.075f ,2.717766f ,11.16471f ,0.075f ,2.677611f ,11.3617f ,0.075f ,2.637457f ,11.10383f ,0.075f ,3.385544f ,11.30083f ,0.075f ,3.345389f ,11.49782f ,0.075f ,3.305235f });
  }
}
private class MFInt321032 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321033 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1034 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.45652f ,0.075f ,17.04097f ,13.85051f ,0.075f ,16.96066f ,13.59264f ,0.075f ,17.70875f ,13.98663f ,0.075f ,17.62844f ,13.72876f ,0.075f ,18.37653f ,14.12274f ,0.075f ,18.29622f });
  }
}
private class MFInt321035 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321036 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1037 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.2467f ,0.075f ,6.199749f ,11.44369f ,0.075f ,6.159595f ,11.64069f ,0.075f ,6.119441f ,11.38282f ,0.075f ,6.867527f ,11.57981f ,0.075f ,6.827373f ,11.7768f ,0.075f ,6.787219f ,11.51893f ,0.075f ,7.535305f ,11.71593f ,0.075f ,7.495151f ,11.91292f ,0.075f ,7.454997f });
  }
}
private class MFInt321038 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321039 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1040 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.83312f ,0.075f ,6.284052f ,11.03011f ,0.075f ,6.243898f ,11.2271f ,0.075f ,6.203744f ,10.96923f ,0.075f ,6.95183f ,11.16623f ,0.075f ,6.911676f ,11.36322f ,0.075f ,6.871522f ,11.10535f ,0.075f ,7.619608f ,11.30234f ,0.075f ,7.579454f ,11.49934f ,0.075f ,7.539299f });
  }
}
private class MFInt321041 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321042 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1043 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.82912f ,0.075f ,6.264455f ,10.695f ,0.075f ,5.606476f ,11.63669f ,0.075f ,6.099844f ,11.50257f ,0.075f ,5.441864f });
  }
}
private class MFInt321044 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321045 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1046 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.69101f ,0.075f ,5.586879f ,10.55689f ,0.075f ,4.928899f ,11.49858f ,0.075f ,5.422267f ,11.36446f ,0.075f ,4.764288f });
  }
}
private class MFInt321047 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321048 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1049 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.69424f ,0.075f ,3.489444f ,11.08823f ,0.075f ,3.409135f ,10.96648f ,0.075f ,4.824999f ,11.36047f ,0.075f ,4.744691f });
  }
}
private class MFInt321050 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321051 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1052 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.28066f ,0.075f ,3.573746f ,10.47765f ,0.075f ,3.533592f ,10.67465f ,0.075f ,3.493438f ,10.41678f ,0.075f ,4.241524f ,10.61377f ,0.075f ,4.20137f ,10.81076f ,0.075f ,4.161216f ,10.55289f ,0.075f ,4.909302f ,10.74989f ,0.075f ,4.869148f ,10.94688f ,0.075f ,4.828994f });
  }
}
private class MFInt321053 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321054 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1055 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.27667f ,0.075f ,3.554149f ,10.14255f ,0.075f ,2.89617f ,11.08424f ,0.075f ,3.389538f ,10.95012f ,0.075f ,2.731559f });
  }
}
private class MFInt321056 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321057 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1058 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.13855f ,0.075f ,2.876573f ,10.00443f ,0.075f ,2.218594f ,10.94612f ,0.075f ,2.711962f ,10.812f ,0.075f ,2.053982f });
  }
}
private class MFInt321059 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321060 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1061 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.14007f ,0.075f ,7.110638f ,10.00595f ,0.075f ,6.452658f ,10.94764f ,0.075f ,6.946026f ,10.81352f ,0.075f ,6.288047f });
  }
}
private class MFInt321062 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321063 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1064 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.1433f ,0.075f ,5.013202f ,10.53729f ,0.075f ,4.932894f ,10.27942f ,0.075f ,5.68098f ,10.67341f ,0.075f ,5.600672f ,10.41554f ,0.075f ,6.348758f ,10.80952f ,0.075f ,6.26845f });
  }
}
private class MFInt321065 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321066 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1067 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.72972f ,0.075f ,5.097506f ,10.12371f ,0.075f ,5.017197f ,9.865837f ,0.075f ,5.765283f ,10.25982f ,0.075f ,5.684975f ,10.00195f ,0.075f ,6.433061f ,10.39594f ,0.075f ,6.352753f });
  }
}
private class MFInt321068 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321069 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1070 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.39918f ,0.075f ,4.255318f ,10.5333f ,0.075f ,4.913297f ,9.591606f ,0.075f ,4.419929f ,9.725726f ,0.075f ,5.077909f });
  }
}
private class MFInt321071 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321072 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1073 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.587612f ,0.075f ,4.400332f ,9.453492f ,0.075f ,3.742352f ,10.39518f ,0.075f ,4.235721f ,10.26106f ,0.075f ,3.577741f });
  }
}
private class MFInt321074 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321075 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1076 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.590848f ,0.075f ,2.302897f ,9.984836f ,0.075f ,2.222588f ,9.863082f ,0.075f ,3.638453f ,10.25707f ,0.075f ,3.558144f });
  }
}
private class MFInt321077 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321078 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1079 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.177264f ,0.075f ,2.3872f ,9.571251f ,0.075f ,2.306891f ,9.449498f ,0.075f ,3.722755f ,9.843485f ,0.075f ,3.642447f });
  }
}
private class MFInt321080 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321081 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1082 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.17327f ,0.075f ,2.367603f ,9.03915f ,0.075f ,1.709623f ,9.577055f ,0.075f ,2.285297f ,9.442936f ,0.075f ,1.627318f ,9.980841f ,0.075f ,2.202991f ,9.846722f ,0.075f ,1.545012f });
  }
}
private class MFInt321083 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321084 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1085 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.174786f ,0.075f ,6.601667f ,9.040667f ,0.075f ,5.943688f ,9.982357f ,0.075f ,6.437056f ,9.848237f ,0.075f ,5.779077f });
  }
}
private class MFInt321086 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321087 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1088 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.036672f ,0.075f ,5.924091f ,8.902553f ,0.075f ,5.266111f ,9.844243f ,0.075f ,5.75948f ,9.710123f ,0.075f ,5.1015f });
  }
}
private class MFInt321089 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321090 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1091 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.039908f ,0.075f ,3.826656f ,9.236902f ,0.075f ,3.786501f ,9.433895f ,0.075f ,3.746347f ,9.176025f ,0.075f ,4.494433f ,9.373018f ,0.075f ,4.454279f ,9.570012f ,0.075f ,4.414125f ,9.312142f ,0.075f ,5.162211f ,9.509135f ,0.075f ,5.122057f ,9.706129f ,0.075f ,5.081903f });
  }
}
private class MFInt321092 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321093 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1094 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.292545f ,0.075f ,5.166206f ,8.898558f ,0.075f ,5.246514f ,9.156428f ,0.075f ,4.498428f ,8.762442f ,0.075f ,4.578736f ,9.020311f ,0.075f ,3.83065f ,8.626325f ,0.075f ,3.910959f });
  }
}
private class MFInt321095 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321096 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1097 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.62233f ,0.075f ,3.891361f ,8.488211f ,0.075f ,3.233382f ,9.429901f ,0.075f ,3.72675f ,9.295781f ,0.075f ,3.068771f });
  }
}
private class MFInt321098 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321099 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.484216f ,0.075f ,3.213785f ,8.350097f ,0.075f ,2.555806f ,9.291787f ,0.075f ,3.049174f ,9.157667f ,0.075f ,2.391194f });
  }
}
private class MFInt321101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1103 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.487453f ,0.075f ,1.11635f ,8.684446f ,0.075f ,1.076196f ,8.881439f ,0.075f ,1.036041f ,8.623569f ,0.075f ,1.784128f ,8.820562f ,0.075f ,1.743973f ,9.017556f ,0.075f ,1.703819f ,8.759686f ,0.075f ,2.451906f ,8.956679f ,0.075f ,2.411752f ,9.153673f ,0.075f ,2.371597f });
  }
}
private class MFInt321104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.073869f ,0.075f ,1.200653f ,8.270862f ,0.075f ,1.160499f ,8.467855f ,0.075f ,1.120344f ,8.209986f ,0.075f ,1.868431f ,8.406979f ,0.075f ,1.828277f ,8.603972f ,0.075f ,1.788122f ,8.346102f ,0.075f ,2.536209f ,8.543096f ,0.075f ,2.496054f ,8.740088f ,0.075f ,2.4559f });
  }
}
private class MFInt321107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt321108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f1109 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.743325f ,0.075f ,0.3584649f ,8.810385f ,0.075f ,0.6874546f ,8.877445f ,0.075f ,1.016444f ,7.935755f ,0.075f ,0.5230764f ,8.002814f ,0.075f ,0.8520661f ,8.069874f ,0.075f ,1.181056f });
  }
}
private class MFInt321110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1112 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.488969f ,0.075f ,5.350414f ,8.882956f ,0.075f ,5.270106f ,8.761202f ,0.075f ,6.68597f ,9.155189f ,0.075f ,6.605662f });
  }
}
private class MFInt321113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1115 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.741605f ,0.075f ,6.689965f ,8.544612f ,0.075f ,6.730119f ,8.347618f ,0.075f ,6.770273f ,8.605488f ,0.075f ,6.022187f ,8.408495f ,0.075f ,6.062341f ,8.211501f ,0.075f ,6.102495f ,8.469372f ,0.075f ,5.354409f ,8.272378f ,0.075f ,5.394563f ,8.075385f ,0.075f ,5.434718f });
  }
}
private class MFInt321116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.07139f ,0.075f ,5.415121f ,7.937271f ,0.075f ,4.757141f ,8.878961f ,0.075f ,5.250509f ,8.744842f ,0.075f ,4.59253f });
  }
}
private class MFInt321119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1121 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.933276f ,0.075f ,4.737544f ,7.799157f ,0.075f ,4.079565f ,8.337062f ,0.075f ,4.655238f ,8.202942f ,0.075f ,3.997259f ,8.740847f ,0.075f ,4.572933f ,8.606728f ,0.075f ,3.914953f });
  }
}
private class MFInt321122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1124 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.936512f ,0.075f ,2.640109f ,8.3305f ,0.075f ,2.5598f ,8.208746f ,0.075f ,3.975665f ,8.602733f ,0.075f ,3.895356f });
  }
}
private class MFInt321125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1127 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.189149f ,0.075f ,3.979659f ,7.992156f ,0.075f ,4.019814f ,7.795162f ,0.075f ,4.059968f ,8.053032f ,0.075f ,3.311881f ,7.856039f ,0.075f ,3.352035f ,7.659045f ,0.075f ,3.39219f ,7.916915f ,0.075f ,2.644103f ,7.719922f ,0.075f ,2.684258f ,7.522929f ,0.075f ,2.724412f });
  }
}
private class MFInt321128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.518934f ,0.075f ,2.704815f ,7.384815f ,0.075f ,2.046835f ,8.326505f ,0.075f ,2.540203f ,8.192386f ,0.075f ,1.882224f });
  }
}
private class MFInt321131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1133 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.38082f ,0.075f ,2.027238f ,7.246701f ,0.075f ,1.369259f ,8.188391f ,0.075f ,1.862627f ,8.054272f ,0.075f ,1.204647f });
  }
}
private class MFInt321134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.384057f ,0.075f ,-0.07019704f ,7.58105f ,0.075f ,-0.1103513f ,7.778044f ,0.075f ,-0.1505055f ,7.520174f ,0.075f ,0.5975809f ,7.717167f ,0.075f ,0.5574267f ,7.91416f ,0.075f ,0.5172724f ,7.65629f ,0.075f ,1.265359f ,7.853283f ,0.075f ,1.225205f ,8.050277f ,0.075f ,1.18505f });
  }
}
private class MFInt321137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1139 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.970473f ,0.075f ,0.01410597f ,7.36446f ,0.075f ,-0.06620247f ,7.242706f ,0.075f ,1.349662f ,7.636693f ,0.075f ,1.269353f });
  }
}
private class MFInt321140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.382336f ,0.075f ,6.261303f ,7.315277f ,0.075f ,5.932313f ,7.248217f ,0.075f ,5.603323f ,7.786121f ,0.075f ,6.178997f ,7.719062f ,0.075f ,5.850008f ,7.652002f ,0.075f ,5.521018f ,8.189907f ,0.075f ,6.096692f ,8.122848f ,0.075f ,5.767702f ,8.055788f ,0.075f ,5.438712f });
  }
}
private class MFInt321143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1145 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.385573f ,0.075f ,4.163867f ,7.77956f ,0.075f ,4.083559f ,7.657806f ,0.075f ,5.499424f ,8.051793f ,0.075f ,5.419115f });
  }
}
private class MFInt321146 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1148 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.971989f ,0.075f ,4.24817f ,7.365976f ,0.075f ,4.167862f ,7.244222f ,0.075f ,5.583726f ,7.638209f ,0.075f ,5.503418f });
  }
}
private class MFInt321149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1151 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.967994f ,0.075f ,4.228573f ,6.833875f ,0.075f ,3.570594f ,7.775565f ,0.075f ,4.063962f ,7.641446f ,0.075f ,3.405983f });
  }
}
private class MFInt321152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.82988f ,0.075f ,3.550997f ,6.695761f ,0.075f ,2.893018f ,7.637451f ,0.075f ,3.386386f ,7.503332f ,0.075f ,2.728406f });
  }
}
private class MFInt321155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1157 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.499337f ,0.075f ,2.708809f ,7.302343f ,0.075f ,2.748963f ,7.10535f ,0.075f ,2.789118f ,7.36322f ,0.075f ,2.041031f ,7.166227f ,0.075f ,2.081186f ,6.969234f ,0.075f ,2.12134f ,7.227104f ,0.075f ,1.373253f ,7.03011f ,0.075f ,1.413408f ,6.833117f ,0.075f ,1.453562f });
  }
}
private class MFInt321158 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1160 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.419533f ,0.075f ,1.537865f ,6.813519f ,0.075f ,1.457556f ,6.691766f ,0.075f ,2.873421f ,7.085753f ,0.075f ,2.793112f });
  }
}
private class MFInt321161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321162 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1163 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {7.08899f ,0.075f ,0.695677f ,7.223109f ,0.075f ,1.353656f ,6.281419f ,0.075f ,0.8602884f ,6.415538f ,0.075f ,1.518268f });
  }
}
private class MFInt321164 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.277424f ,0.075f ,0.8406914f ,6.143305f ,0.075f ,0.182712f ,7.084995f ,0.075f ,0.6760799f ,6.950876f ,0.075f ,0.01810054f });
  }
}
private class MFInt321167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321168 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1169 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.417054f ,0.075f ,5.752332f ,6.282935f ,0.075f ,5.094353f ,7.224625f ,0.075f ,5.587721f ,7.090506f ,0.075f ,4.929741f });
  }
}
private class MFInt321170 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1172 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.27894f ,0.075f ,5.074756f ,6.144821f ,0.075f ,4.416777f ,6.682726f ,0.075f ,4.99245f ,6.548606f ,0.075f ,4.334471f ,7.086511f ,0.075f ,4.910144f ,6.952392f ,0.075f ,4.252165f });
  }
}
private class MFInt321173 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1175 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.282177f ,0.075f ,2.977321f ,6.676164f ,0.075f ,2.897012f ,6.55441f ,0.075f ,4.312877f ,6.948397f ,0.075f ,4.232568f });
  }
}
private class MFInt321176 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.868593f ,0.075f ,3.061624f ,6.26258f ,0.075f ,2.981315f ,6.140826f ,0.075f ,4.39718f ,6.534813f ,0.075f ,4.316871f });
  }
}
private class MFInt321179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321180 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1181 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.53805f ,0.075f ,2.219436f ,6.672169f ,0.075f ,2.877415f ,5.730479f ,0.075f ,2.384047f ,5.864598f ,0.075f ,3.042027f });
  }
}
private class MFInt321182 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.726484f ,0.075f ,2.36445f ,5.592365f ,0.075f ,1.706471f ,6.534055f ,0.075f ,2.199839f ,6.399936f ,0.075f ,1.541859f });
  }
}
private class MFInt321185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321186 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1187 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.395941f ,0.075f ,1.522262f ,6.001954f ,0.075f ,1.602571f ,6.123708f ,0.075f ,0.1867066f ,5.729721f ,0.075f ,0.267015f });
  }
}
private class MFInt321188 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.316137f ,0.075f ,0.351318f ,5.710124f ,0.075f ,0.2710096f ,5.58837f ,0.075f ,1.686874f ,5.982357f ,0.075f ,1.606565f });
  }
}
private class MFInt321191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1193 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.731237f ,0.075f ,4.50108f ,6.125224f ,0.075f ,4.420771f ,6.00347f ,0.075f ,5.836636f ,6.397457f ,0.075f ,5.756327f });
  }
}
private class MFInt321194 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1196 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.983873f ,0.075f ,5.84063f ,5.589886f ,0.075f ,5.920938f ,5.71164f ,0.075f ,4.505074f ,5.317653f ,0.075f ,4.585382f });
  }
}
private class MFInt321197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321198 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1199 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.313658f ,0.075f ,4.565785f ,5.179539f ,0.075f ,3.907806f ,6.121229f ,0.075f ,4.401174f ,5.98711f ,0.075f ,3.743195f });
  }
}
private class MFInt321200 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.175544f ,0.075f ,3.888209f ,5.041425f ,0.075f ,3.23023f ,5.983115f ,0.075f ,3.723598f ,5.848996f ,0.075f ,3.065618f });
  }
}
private class MFInt321203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321204 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1205 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.178781f ,0.075f ,1.790774f ,5.375774f ,0.075f ,1.75062f ,5.572768f ,0.075f ,1.710465f ,5.314898f ,0.075f ,2.458552f ,5.511891f ,0.075f ,2.418398f ,5.708885f ,0.075f ,2.378243f ,5.451015f ,0.075f ,3.12633f ,5.648008f ,0.075f ,3.086175f ,5.845001f ,0.075f ,3.046021f });
  }
}
private class MFInt321206 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1208 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.765197f ,0.075f ,1.875077f ,5.159184f ,0.075f ,1.794768f ,5.03743f ,0.075f ,3.210633f ,5.431417f ,0.075f ,3.130324f });
  }
}
private class MFInt321209 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1211 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.434654f ,0.075f ,1.032889f ,5.568773f ,0.075f ,1.690868f ,4.627083f ,0.075f ,1.1975f ,4.761202f ,0.075f ,1.85548f });
  }
}
private class MFInt321212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.623088f ,0.075f ,1.177903f ,4.488969f ,0.075f ,0.519924f ,5.430659f ,0.075f ,1.013292f ,5.29654f ,0.075f ,0.3553126f });
  }
}
private class MFInt321215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1217 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.762719f ,0.075f ,6.089544f ,4.628599f ,0.075f ,5.431565f ,5.570289f ,0.075f ,5.924933f ,5.43617f ,0.075f ,5.266953f });
  }
}
private class MFInt321218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFInt321219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1});
  }
}
private class MFVec3f1220 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.624605f ,0.075f ,5.411968f ,4.557545f ,0.075f ,5.082978f ,4.490485f ,0.075f ,4.753989f ,5.432175f ,0.075f ,5.247356f ,5.365116f ,0.075f ,4.918367f ,5.298056f ,0.075f ,4.589377f });
  }
}
private class MFInt321221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1223 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.627841f ,0.075f ,3.314533f ,5.021828f ,0.075f ,3.234224f ,4.900074f ,0.075f ,4.650089f ,5.294061f ,0.075f ,4.56978f });
  }
}
private class MFInt321224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.214257f ,0.075f ,3.398836f ,4.608244f ,0.075f ,3.318527f ,4.350374f ,0.075f ,4.066614f ,4.744361f ,0.075f ,3.986305f ,4.486491f ,0.075f ,4.734392f ,4.880477f ,0.075f ,4.654083f });
  }
}
private class MFInt321227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1229 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.210262f ,0.075f ,3.379239f ,4.076143f ,0.075f ,2.721259f ,5.017833f ,0.075f ,3.214627f ,4.883714f ,0.075f ,2.556648f });
  }
}
private class MFInt321230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1232 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.7456f ,0.075f ,1.879071f ,4.879719f ,0.075f ,2.537051f ,4.341815f ,0.075f ,1.961377f ,4.475934f ,0.075f ,2.619357f ,3.938029f ,0.075f ,2.043683f ,4.072148f ,0.075f ,2.701662f });
  }
}
private class MFInt321233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1235 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.741605f ,0.075f ,1.859474f ,4.347619f ,0.075f ,1.939783f ,4.469372f ,0.075f ,0.5239186f ,4.075385f ,0.075f ,0.604227f });
  }
}
private class MFInt321236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1238 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.328022f ,0.075f ,1.943777f ,3.934035f ,0.075f ,2.024086f ,4.055788f ,0.075f ,0.6082216f ,3.661801f ,0.075f ,0.68853f });
  }
}
private class MFInt321239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1241 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.331258f ,0.075f ,-0.1536579f ,4.465377f ,0.075f ,0.5043216f ,3.523687f ,0.075f ,0.0109536f ,3.657807f ,0.075f ,0.668933f });
  }
}
private class MFInt321242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1244 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.076901f ,0.075f ,4.838292f ,4.470888f ,0.075f ,4.757983f ,4.349134f ,0.075f ,6.173848f ,4.743122f ,0.075f ,6.093539f });
  }
}
private class MFInt321245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1247 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.663317f ,0.075f ,4.922595f ,4.057304f ,0.075f ,4.842286f ,3.935551f ,0.075f ,6.258151f ,4.329537f ,0.075f ,6.177842f });
  }
}
private class MFInt321248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.659323f ,0.075f ,4.902997f ,3.525203f ,0.075f ,4.245018f ,4.063108f ,0.075f ,4.820692f ,3.928989f ,0.075f ,4.162713f ,4.466894f ,0.075f ,4.738386f ,4.332774f ,0.075f ,4.080407f });
  }
}
private class MFInt321251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1253 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.19466f ,0.075f ,3.40283f ,4.32878f ,0.075f ,4.06081f ,3.387089f ,0.075f ,3.567442f ,3.521209f ,0.075f ,4.225421f });
  }
}
private class MFInt321254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1256 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.524445f ,0.075f ,2.127986f ,3.918432f ,0.075f ,2.047678f ,3.796679f ,0.075f ,3.463542f ,4.190666f ,0.075f ,3.383233f });
  }
}
private class MFInt321257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1259 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.777081f ,0.075f ,3.467536f ,3.383095f ,0.075f ,3.547845f ,3.504848f ,0.075f ,2.13198f ,3.110861f ,0.075f ,2.212289f });
  }
}
private class MFInt321260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.106867f ,0.075f ,2.192692f ,2.972747f ,0.075f ,1.534712f ,3.914438f ,0.075f ,2.02808f ,3.780318f ,0.075f ,1.370101f });
  }
}
private class MFInt321263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1265 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.968753f ,0.075f ,1.515115f ,2.834633f ,0.075f ,0.8571361f ,3.372538f ,0.075f ,1.43281f ,3.238419f ,0.075f ,0.7748303f ,3.776324f ,0.075f ,1.350504f ,3.642204f ,0.075f ,0.6925246f });
  }
}
private class MFInt321266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1268 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.63821f ,0.075f ,0.6729276f ,3.441216f ,0.075f ,0.7130818f ,3.244223f ,0.075f ,0.753236f ,3.502093f ,0.075f ,0.005149654f ,3.305099f ,0.075f ,0.04530387f ,3.108106f ,0.075f ,0.08545809f ,3.365976f ,0.075f ,-0.6626283f ,3.168983f ,0.075f ,-0.622474f ,2.971989f ,0.075f ,-0.5823198f });
  }
}
private class MFInt321269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1271 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.558405f ,0.075f ,-0.4980168f ,2.952392f ,0.075f ,-0.5783253f ,2.830639f ,0.075f ,0.837539f ,3.224626f ,0.075f ,0.7572306f });
  }
}
private class MFInt321272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.970269f ,0.075f ,5.74918f ,2.903209f ,0.075f ,5.42019f ,2.836149f ,0.075f ,5.091201f ,3.374054f ,0.075f ,5.666874f ,3.306994f ,0.075f ,5.337884f ,3.239935f ,0.075f ,5.008895f ,3.77784f ,0.075f ,5.584569f ,3.71078f ,0.075f ,5.255579f ,3.64372f ,0.075f ,4.926589f });
  }
}
private class MFInt321275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1277 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.973505f ,0.075f ,3.651745f ,3.367492f ,0.075f ,3.571436f ,3.245739f ,0.075f ,4.9873f ,3.639726f ,0.075f ,4.906992f });
  }
}
private class MFInt321278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1280 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.559921f ,0.075f ,3.736048f ,2.953908f ,0.075f ,3.655739f ,2.832155f ,0.075f ,5.071604f ,3.226142f ,0.075f ,4.991295f });
  }
}
private class MFInt321281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1283 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.229378f ,0.075f ,2.89386f ,3.363497f ,0.075f ,3.551839f ,2.421807f ,0.075f ,3.058471f ,2.555927f ,0.075f ,3.716451f });
  }
}
private class MFInt321284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.417813f ,0.075f ,3.038874f ,2.283693f ,0.075f ,2.380895f ,3.225384f ,0.075f ,2.874263f ,3.091264f ,0.075f ,2.216284f });
  }
}
private class MFInt321287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1289 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.08727f ,0.075f ,2.196687f ,2.693283f ,0.075f ,2.276995f ,2.815036f ,0.075f ,0.8611306f ,2.421049f ,0.075f ,0.941439f });
  }
}
private class MFInt321290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.673686f ,0.075f ,2.280989f ,2.279699f ,0.075f ,2.361298f ,2.401452f ,0.075f ,0.9454336f ,2.007465f ,0.075f ,1.025742f });
  }
}
private class MFInt321293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1295 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.003471f ,0.075f ,1.006145f ,1.869351f ,0.075f ,0.3481656f ,2.811042f ,0.075f ,0.8415336f ,2.676922f ,0.075f ,0.1835542f });
  }
}
private class MFInt321296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.866873f ,0.075f ,4.562633f ,1.732753f ,0.075f ,3.904654f ,2.270658f ,0.075f ,4.480328f ,2.136539f ,0.075f ,3.822348f ,2.674444f ,0.075f ,4.398022f ,2.540324f ,0.075f ,3.740042f });
  }
}
private class MFInt321299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321300 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1301 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.870109f ,0.075f ,2.465198f ,2.067103f ,0.075f ,2.425044f ,2.264096f ,0.075f ,2.38489f ,2.006226f ,0.075f ,3.132976f ,2.203219f ,0.075f ,3.092822f ,2.400213f ,0.075f ,3.052667f ,2.142343f ,0.075f ,3.800754f ,2.339336f ,0.075f ,3.7606f ,2.53633f ,0.075f ,3.720445f });
  }
}
private class MFInt321302 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1304 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.456525f ,0.075f ,2.549501f ,1.850512f ,0.075f ,2.469193f ,1.728759f ,0.075f ,3.885057f ,2.122746f ,0.075f ,3.804748f });
  }
}
private class MFInt321305 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321306 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1307 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.452531f ,0.075f ,2.529904f ,1.385471f ,0.075f ,2.200914f ,1.318411f ,0.075f ,1.871925f ,1.856316f ,0.075f ,2.447598f ,1.789257f ,0.075f ,2.118608f ,1.722197f ,0.075f ,1.789619f ,2.260102f ,0.075f ,2.365293f ,2.193042f ,0.075f ,2.036303f ,2.125982f ,0.075f ,1.707313f });
  }
}
private class MFInt321308 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFInt321309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1});
  }
}
private class MFVec3f1310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.314417f ,0.075f ,1.852327f ,1.180297f ,0.075f ,1.194348f ,1.718202f ,0.075f ,1.770022f ,1.584083f ,0.075f ,1.112042f ,2.121988f ,0.075f ,1.687716f ,1.987868f ,0.075f ,1.029737f });
  }
}
private class MFInt321311 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321312 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1313 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.983874f ,0.075f ,1.01014f ,1.78688f ,0.075f ,1.050294f ,1.589887f ,0.075f ,1.090448f ,1.847757f ,0.075f ,0.3423617f ,1.650764f ,0.075f ,0.3825159f ,1.45377f ,0.075f ,0.4226701f ,1.71164f ,0.075f ,-0.3254162f ,1.514647f ,0.075f ,-0.285262f ,1.317653f ,0.075f ,-0.2451078f });
  }
}
private class MFInt321314 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1316 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.9040694f ,0.075f ,-0.1608048f ,1.101063f ,0.075f ,-0.200959f ,1.298056f ,0.075f ,-0.2411132f ,1.040186f ,0.075f ,0.5069731f ,1.23718f ,0.075f ,0.4668189f ,1.434173f ,0.075f ,0.4266647f ,1.176303f ,0.075f ,1.174751f ,1.373296f ,0.075f ,1.134597f ,1.57029f ,0.075f ,1.094443f });
  }
}
private class MFInt321317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFInt321318 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1});
  }
}
private class MFVec3f1319 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.7667135f ,0.075f ,1.278651f ,0.9637069f ,0.075f ,1.238497f ,1.1607f ,0.075f ,1.198343f ,0.9028302f ,0.075f ,1.946429f ,1.099824f ,0.075f ,1.906275f ,1.296817f ,0.075f ,1.866121f ,1.038947f ,0.075f ,2.614207f ,1.23594f ,0.075f ,2.574053f ,1.432934f ,0.075f ,2.533899f });
  }
}
private class MFInt321320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.349135f ,0.075f ,1.343357f ,0.2150155f ,0.075f ,0.6853777f ,1.156706f ,0.075f ,1.178746f ,1.022586f ,0.075f ,0.5207662f });
  }
}
private class MFInt321323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFInt321324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,3,0,2,-1});
  }
}
private class MFVec3f1325 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.211021f ,0.075f ,0.6657807f ,0.07690154f ,0.075f ,0.007801231f ,1.018592f ,0.075f ,0.5011692f ,0.8844724f ,0.075f ,-0.1568102f });
  }
}
}
