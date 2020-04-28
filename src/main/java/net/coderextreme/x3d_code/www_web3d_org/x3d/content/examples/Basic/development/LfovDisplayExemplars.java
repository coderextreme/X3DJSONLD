package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class LfovDisplayExemplars {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LfovDisplayExemplars().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/LfovDisplayExemplars.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("LfovDisplayExemplars.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Simple X3D example"))
        .addMeta(new metaObject().setName("created").setContent("13 March 2006"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LfovDisplayExemplars.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("LfovDisplayExemplars.x3d"))
        .addChild(new ViewpointObject().setDescription("hello, world!").setPosition(new float[] {0f,1.8f,-15f}))
        .addChild(new TransformObject().setTranslation(new float[] {-5f,1.5f,0f})
          .addChild(new TransformObject().setScale(new float[] {2.2f,1.3f,2.2f})
            .addChild(new ShapeObject()
              .setGeometry(new IndexedFaceSetObject().setDEF("BigIFS").setCoordIndex(new MFInt32Object(new MFInt320().getArray()).append(new MFInt321().getArray())).setCreaseAngle(0.01f).setSolid(false)
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f2().getArray()))))
              .setAppearance(new AppearanceObject()
                .setTexture(new ImageTextureObject().setDEF("WorldImage").setUrl(new MFStringObject(new MFString3().getArray()))))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-0.5f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(new float[] {4.4f,1.2f,4.4f}))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.95f}))))))
        .addChild(new TransformObject().setTranslation(new float[] {0f,0f,-5f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,2.25f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new CylinderObject().setHeight(1.2f).setRadius(2.2f))
              .setAppearance(new AppearanceObject()
                .setTexture(new ImageTextureObject().setUSE("WorldImage")))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,1f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new CylinderObject().setHeight(1.2f).setRadius(2.2f))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.95f})))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.5257f,0f,0.8507f,0.3477f,0f,0.9376f,0.4636f,0.1875f,0.866f,0.1227f,0f,0.9924f,0.2531f,0.2047f,0.9455f,0.368f,0.397f,0.8408f,-0.1227f,0f,0.9924f,0f,0.2116f,0.9773f,0.1308f,0.4233f,0.8965f,0.2453f,0.5955f,0.765f,-0.3477f,0f,0.9376f,-0.2531f,0.2047f,0.9455f,-0.1308f,0.4233f,0.8965f,0f,0.6142f,0.7891f,0.1159f,0.7501f,0.6511f,-0.5257f,0f,0.8507f,-0.4636f,0.1875f,0.866f,-0.368f,0.397f,0.8408f,-0.2453f,0.5955f,0.765f,-0.1159f,0.7501f,0.6511f,0f,0.8507f,0.5257f,0.8507f,0.5257f,0f,0.866f,0.4636f,0.1875f,0.7501f,0.6511f,0.1159f,0.8408f,0.368f,0.397f,0.7408f,0.5844f,0.3313f,0.5955f,0.765f,0.2453f,0.765f,0.2453f,0.5955f,0.6849f,0.4732f,0.5541f,0.5541f,0.6849f,0.4732f,0.397f,0.8408f,0.368f,0.6511f,0.1159f,0.7501f,0.5844f,0.3313f,0.7408f,0.4732f,0.5541f,0.6849f,0.3313f,0.7408f,0.5844f,0.1875f,0.866f,0.4636f,0.9376f,0.3477f,0f,0.9924f,0.1227f,0f,0.9455f,0.2531f,0.2047f,0.9924f,0f,0f,0.9773f,0f,0.2116f,0.8965f,0.1308f,0.4233f,0.8965f,0f,0.4233f,0.7891f,0f,0.6142f,0.6511f,0f,0.7501f,-0.6511f,0.1159f,0.7501f,-0.765f,0.2453f,0.5955f,-0.5844f,0.3313f,0.7408f,-0.8408f,0.368f,0.397f,-0.6849f,0.4732f,0.5541f,-0.4732f,0.5541f,0.6849f,-0.866f,0.4636f,0.1875f,-0.7408f,0.5844f,0.3313f,-0.5541f,0.6849f,0.4732f,-0.3313f,0.7408f,0.5844f,-0.8507f,0.5257f,0f,-0.7501f,0.6511f,0.1159f,-0.5955f,0.765f,0.2453f,-0.397f,0.8408f,0.368f,-0.1875f,0.866f,0.4636f,-0.6511f,0f,0.7501f,-0.7891f,0f,0.6142f,-0.8965f,0f,0.4233f,-0.8965f,0.1308f,0.4233f,-0.9773f,0f,0.2116f,-0.9455f,0.2531f,0.2047f,-0.9924f,0f,0f,-0.9924f,0.1227f,0f,-0.9376f,0.3477f,0f,-0.7501f,0.6511f,-0.1159f,-0.5955f,0.765f,-0.2453f,-0.6142f,0.7891f,0f,-0.397f,0.8408f,-0.368f,-0.4233f,0.8965f,-0.1308f,-0.4233f,0.8965f,0.1308f,-0.1875f,0.866f,-0.4636f,-0.2047f,0.9455f,-0.2531f,-0.2116f,0.9773f,0f,-0.2047f,0.9455f,0.2531f,0f,0.8507f,-0.5257f,0f,0.9376f,-0.3477f,0f,0.9924f,-0.1227f,0f,0.9924f,0.1227f,0f,0.9376f,0.3477f,-0.866f,0.4636f,-0.1875f,-0.8408f,0.368f,-0.397f,-0.7408f,0.5844f,-0.3313f,-0.765f,0.2453f,-0.5955f,-0.6849f,0.4732f,-0.5541f,-0.5541f,0.6849f,-0.4732f,-0.6511f,0.1159f,-0.7501f,-0.5844f,0.3313f,-0.7408f,-0.4732f,0.5541f,-0.6849f,-0.3313f,0.7408f,-0.5844f,-0.5257f,0f,-0.8507f,-0.4636f,0.1875f,-0.866f,-0.368f,0.397f,-0.8408f,-0.2453f,0.5955f,-0.765f,-0.1159f,0.7501f,-0.6511f,0.1875f,0.866f,-0.4636f,0.397f,0.8408f,-0.368f,0.2047f,0.9455f,-0.2531f,0.5955f,0.765f,-0.2453f,0.4233f,0.8965f,-0.1308f,0.2116f,0.9773f,0f,0.7501f,0.6511f,-0.1159f,0.6142f,0.7891f,0f,0.4233f,0.8965f,0.1308f,0.2047f,0.9455f,0.2531f,0.1159f,0.7501f,-0.6511f,0.2453f,0.5955f,-0.765f,0.3313f,0.7408f,-0.5844f,0.368f,0.397f,-0.8408f,0.4732f,0.5541f,-0.6849f,0.5541f,0.6849f,-0.4732f,0.4636f,0.1875f,-0.866f,0.5844f,0.3313f,-0.7408f,0.6849f,0.4732f,-0.5541f,0.7408f,0.5844f,-0.3313f,0.5257f,0f,-0.8507f,0.6511f,0.1159f,-0.7501f,0.765f,0.2453f,-0.5955f,0.8408f,0.368f,-0.397f,0.866f,0.4636f,-0.1875f,0.3477f,0f,-0.9376f,0.1227f,0f,-0.9924f,-0.1227f,0f,-0.9924f,-0.3477f,0f,-0.9376f,0.2531f,0.2047f,-0.9455f,0.1308f,0.4233f,-0.8965f,0f,0.2116f,-0.9773f,0f,0.6142f,-0.7891f,-0.1308f,0.4233f,-0.8965f,-0.2531f,0.2047f,-0.9455f,0.6511f,0f,-0.7501f,0.9773f,0f,-0.2116f,0.8965f,0f,-0.4233f,0.9455f,0.2531f,-0.2047f,0.8965f,0.1308f,-0.4233f,0.7891f,0f,-0.6142f,-0.6511f,0f,-0.7501f,-0.7891f,0f,-0.6142f,-0.8965f,0.1308f,-0.4233f,-0.8965f,0f,-0.4233f,-0.9455f,0.2531f,-0.2047f,-0.9773f,0f,-0.2116f});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"earth-topo.png","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"});
  }
}
}
