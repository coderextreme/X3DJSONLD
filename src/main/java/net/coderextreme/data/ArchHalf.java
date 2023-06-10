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
public class ArchHalf {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ArchHalf().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/ArchHalf.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ArchHalf.x3d"))
        .addMeta(new meta().setName("description").setContent("Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform > scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information."))
        .addMeta(new meta().setName("creator").setContent("Michele Foti, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("15 December 2014"))
        .addMeta(new meta().setName("modified").setContent("16 February 2016"))
        .addMeta(new meta().setName("reference").setContent("ArchModelingDiagrams.pdf"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Arch"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Shape().setDEF("Arch")
          .addComments("note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly")
          .setGeometry(new IndexedFaceSet().setDEF("ArchIndex").setConvex(false).setCoordIndex(new MFInt320().getArray()).setSolid(false)
            .setCoord(new Coordinate().setDEF("ArchChord").setPoint(new MFVec3f1().getArray())))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDEF("MaterialNode").setDiffuseColor(new float[] {1f,0.75f,0.25f})))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.0000f,0.0000f,0.0000f,1.9975f,0.1000f,0.0000f,1.9900f,0.2000f,0.0000f,1.9774f,0.3000f,0.0000f,1.9596f,0.4000f,0.0000f,1.9365f,0.5000f,0.0000f,1.9079f,0.6000f,0.0000f,1.8735f,0.7000f,0.0000f,1.8330f,0.8000f,0.0000f,1.7861f,0.9000f,0.0000f,1.7321f,1.0000f,0.0000f,1.6703f,1.1000f,0.0000f,1.6000f,1.2000f,0.0000f,1.5199f,1.3000f,0.0000f,1.4283f,1.4000f,0.0000f,1.3229f,1.5000f,0.0000f,1.2000f,1.6000f,0.0000f,1.0536f,1.7000f,0.0000f,0.9021f,1.7850f,0.0000f,0.7599f,1.8500f,0.0000f,0.6245f,1.9000f,0.0000f,0.5426f,1.9250f,0.0000f,0.4444f,1.9500f,0.0000f,0.3618f,1.9670f,0.0000f,0.2821f,1.9800f,0.0000f,0.1997f,1.9900f,0.0000f,0.1672f,1.9930f,0.0000f,0.1413f,1.9950f,0.0000f,0.1095f,1.9970f,0.0000f,0.0894f,1.9980f,0.0000f,0.0632f,1.9990f,0.0000f,0.0000f,2.0000f,0.0000f,-0.0632f,1.9990f,0.0000f,-0.0894f,1.9980f,0.0000f,-0.1095f,1.9970f,0.0000f,-0.1413f,1.9950f,0.0000f,-0.1672f,1.9930f,0.0000f,-0.1997f,1.9900f,0.0000f,-0.2821f,1.9800f,0.0000f,-0.3618f,1.9670f,0.0000f,-0.4444f,1.9500f,0.0000f,-0.5426f,1.9250f,0.0000f,-0.6245f,1.9000f,0.0000f,-0.7599f,1.8500f,0.0000f,-0.9021f,1.7850f,0.0000f,-1.0536f,1.7000f,0.0000f,-1.2000f,1.6000f,0.0000f,-1.3229f,1.5000f,0.0000f,-1.4283f,1.4000f,0.0000f,-1.5199f,1.3000f,0.0000f,-1.6000f,1.2000f,0.0000f,-1.6703f,1.1000f,0.0000f,-1.7321f,1.0000f,0.0000f,-1.7861f,0.9000f,0.0000f,-1.8330f,0.8000f,0.0000f,-1.8735f,0.7000f,0.0000f,-1.9079f,0.6000f,0.0000f,-1.9365f,0.5000f,0.0000f,-1.9596f,0.4000f,0.0000f,-1.9774f,0.3000f,0.0000f,-1.9900f,0.2000f,0.0000f,-1.9975f,0.1000f,0.0000f,-2.0000f,0.0000f,0.0000f,2.0000f,0.0000f,3.0000f,1.9975f,0.1000f,3.0000f,1.9900f,0.2000f,3.0000f,1.9774f,0.3000f,3.0000f,1.9596f,0.4000f,3.0000f,1.9365f,0.5000f,3.0000f,1.9079f,0.6000f,3.0000f,1.8735f,0.7000f,3.0000f,1.8330f,0.8000f,3.0000f,1.7861f,0.9000f,3.0000f,1.7321f,1.0000f,3.0000f,1.6703f,1.1000f,3.0000f,1.6000f,1.2000f,3.0000f,1.5199f,1.3000f,3.0000f,1.4283f,1.4000f,3.0000f,1.3229f,1.5000f,3.0000f,1.2000f,1.6000f,3.0000f,1.0536f,1.7000f,3.0000f,0.9021f,1.7850f,3.0000f,0.7599f,1.8500f,3.0000f,0.6245f,1.9000f,3.0000f,0.5426f,1.9250f,3.0000f,0.4444f,1.9500f,3.0000f,0.3618f,1.9670f,3.0000f,0.2821f,1.9800f,3.0000f,0.1997f,1.9900f,3.0000f,0.1672f,1.9930f,3.0000f,0.1413f,1.9950f,3.0000f,0.1095f,1.9970f,3.0000f,0.0894f,1.9980f,3.0000f,0.0632f,1.9990f,3.0000f,0.0000f,2.0000f,3.0000f,-0.0632f,1.9990f,3.0000f,-0.0894f,1.9980f,3.0000f,-0.1095f,1.9970f,3.0000f,-0.1413f,1.9950f,3.0000f,-0.1672f,1.9930f,3.0000f,-0.1997f,1.9900f,3.0000f,-0.2821f,1.9800f,3.0000f,-0.3618f,1.9670f,3.0000f,-0.4444f,1.9500f,3.0000f,-0.5426f,1.9250f,3.0000f,-0.6245f,1.9000f,3.0000f,-0.7599f,1.8500f,3.0000f,-0.9021f,1.7850f,3.0000f,-1.0536f,1.7000f,3.0000f,-1.2000f,1.6000f,3.0000f,-1.3229f,1.5000f,3.0000f,-1.4283f,1.4000f,3.0000f,-1.5199f,1.3000f,3.0000f,-1.6000f,1.2000f,3.0000f,-1.6703f,1.1000f,3.0000f,-1.7321f,1.0000f,3.0000f,-1.7861f,0.9000f,3.0000f,-1.8330f,0.8000f,3.0000f,-1.8735f,0.7000f,3.0000f,-1.9079f,0.6000f,3.0000f,-1.9365f,0.5000f,3.0000f,-1.9596f,0.4000f,3.0000f,-1.9774f,0.3000f,3.0000f,-1.9900f,0.2000f,3.0000f,-1.9975f,0.1000f,3.0000f,-2.0000f,0.0000f,3.0000f,-2.0000f,-1.0000f,3.0000f,-2.5000f,-1.0000f,3.0000f,-2.5000f,2.5000f,3.0000f,2.5000f,2.5000f,3.0000f,2.5000f,-1.0000f,3.0000f,2.0000f,-1.0000f,3.0000f,-2.0000f,-1.0000f,0.0000f,-2.5000f,-1.0000f,0.0000f,-2.5000f,2.5000f,0.0000f,2.5000f,2.5000f,0.0000f,2.5000f,-1.0000f,0.0000f,2.0000f,-1.0000f,0.0000f,2.5000f,0.0000f,3.0000f,2.5000f,0.0000f,0.0000f,-2.5000f,0.0000f,3.0000f,-2.5000f,0.0000f,0.0000f,-2.5000f,2.0000f,3.0000f,-2.0000f,2.0000f,3.0000f,-2.0000f,2.0000f,0.0000f,-2.5000f,2.0000f,0.0000f,-2.0000f,2.5000f,3.0000f,-2.0000f,2.5000f,0.0000f,0.0000f,2.5000f,3.0000f,0.0000f,2.5000f,0.0000f,2.0000f,2.0000f,3.0000f,2.5000f,2.0000f,3.0000f,2.5000f,2.0000f,0.0000f,2.0000f,2.0000f,0.0000f,2.0000f,2.5000f,3.0000f,2.0000f,2.5000f,0.0000f});
  }
}
}
