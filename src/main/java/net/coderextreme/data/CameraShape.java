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
public class CameraShape {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new CameraShape().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/CameraShape.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interactive").setVersion("3.1")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("CameraShape.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple video camera shape"))
        .addMeta(new meta().setName("creator").setContent("Jeff Weekley and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("2 June 2009"))
        .addMeta(new meta().setName("translated").setContent("2 June 2009"))
        .addMeta(new meta().setName("modified").setContent("13 January 2014"))
        .addMeta(new meta().setName("reference").setContent("CameraExamples.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/SimpleCamera.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("SimpleCamera.x3d"))
        .addChild(new Viewpoint().setDEF("CameraShapeView").setDescription("Camera view, over the shoulder").setPosition(new float[] {0f ,0.75f ,3f }))
        .addChild(new Viewpoint().setDescription("Camera view through lens").setPosition(new float[] {0f ,0f ,0f }))
        .addChild(new Viewpoint().setDescription("Camera view from right side").setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setPosition(new float[] {12f ,0f ,-4f }))
        .addChild(new Viewpoint().setDescription("Camera view from above").setOrientation(new float[] {1f ,0f ,0f ,-1.5708f }).setPosition(new float[] {0f ,15f ,-5f }))
        .addChild(new Viewpoint().setDescription("Camera view from left side").setOrientation(new float[] {0f ,1f ,0f ,-1.5708f }).setPosition(new float[] {-12f ,0f ,-4f }))
        .addChild(new Transform().setScale(new float[] {0.1f ,0.1f ,0.1f }).setTranslation(new float[] {0f ,-0.165f ,0.02f })
          .addChild(new Switch().setWhichChoice(-1)
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("CameraAppearance")
                .setMaterial(new Material().setDEF("lambert1_0").setAmbientIntensity(0.25f ).setDiffuseColor(new float[] {0.372322f ,0.371574f ,0.373173f }).setShininess(0.02f ).setSpecularColor(new float[] {0.890909f ,0.887832f ,0.890909f })
                  .addComments("Universal Media Library: Metals 30"))))
            .addChild(new Shape()
              .setGeometry(new IndexedFaceSet().setDEF("pCylinder1_0Geo").setConvex(false).setCoordIndex(new MFInt321().getArray()).setCreaseAngle(0.7854f )
                .setCoord(new Coordinate().setDEF("pCylinder1GeoPoints").setPoint(new MFVec3f2().getArray())))
              .setAppearance(new Appearance().setUSE("CameraAppearance")))
            .addChild(new Shape()
              .setGeometry(new IndexedFaceSet().setDEF("pCube1_0Geo").setConvex(false).setCoordIndex(new MFInt323().getArray()).setCreaseAngle(0.7854f )
                .setCoord(new Coordinate().setDEF("pCube1GeoPoints").setPoint(new MFVec3f4().getArray())))
              .setAppearance(new Appearance().setUSE("CameraAppearance")))
            .addChild(new Shape()
              .setGeometry(new IndexedFaceSet().setDEF("pPipe1_0Geo").setConvex(false).setCoordIndex(new MFInt325().getArray().append(new MFInt326().getArray())).setCreaseAngle(0.7854f )
                .setCoord(new Coordinate().setDEF("pPipe1GeoPoints").setPoint(new MFVec3f7().getArray())))
              .setAppearance(new Appearance().setUSE("CameraAppearance")))
            .addChild(new Shape()
              .setGeometry(new IndexedFaceSet().setDEF("pSphere1_0Geo").setConvex(false).setCoordIndex(new MFInt328().getArray().append(new MFInt329().getArray())).setCreaseAngle(0.7854f )
                .setCoord(new Coordinate().setDEF("pSphere1GeoPoints").setPoint(new MFVec3f10().getArray())))
              .setAppearance(new Appearance().setUSE("CameraAppearance"))))
          .addChild(new Group()
            .addChild(new Transform().setDEF("pCylinder1").setRotation(new float[] {-1f ,0f ,0f ,0.373518f }).setTranslation(new float[] {-0.038462f ,3.596312f ,3.297562f })
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("CameraAppearance"))
                .setGeometry(new IndexedFaceSet().setUSE("pCylinder1_0Geo"))))
            .addChild(new Transform().setDEF("pCube1").setScale(new float[] {1f ,0.727134f ,0.801457f }).setTranslation(new float[] {-0.030769f ,1.738461f ,1.4436f })
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("CameraAppearance"))
                .setGeometry(new IndexedFaceSet().setUSE("pCube1_0Geo"))))
            .addChild(new Transform().setDEF("pPipe1").setScale(new float[] {1f ,1f ,0.569444f }).setTranslation(new float[] {0.015385f ,1.630769f ,-1.973274f })
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("CameraAppearance"))
                .setGeometry(new IndexedFaceSet().setUSE("pPipe1_0Geo"))))
            .addChild(new Transform().setDEF("pSphere1").setScale(new float[] {1.1f ,1.1f ,0.1f }).setTranslation(new float[] {-0.015385f ,1.628515f ,-2.569231f })
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("CameraAppearance"))
                .setGeometry(new IndexedFaceSet().setUSE("pSphere1_0Geo")))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"VRML2.0 created with Version 1.3, from Alias Maya 2008"});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,13,12,-1,1,2,14,13,-1,2,3,15,14,-1,3,4,16,15,-1,4,5,17,16,-1,5,6,18,17,-1,6,7,19,18,-1,7,8,20,19,-1,8,9,21,20,-1,9,10,22,21,-1,10,11,23,22,-1,11,0,12,23,-1,1,0,24,-1,2,1,24,-1,3,2,24,-1,4,3,24,-1,5,4,24,-1,6,5,24,-1,7,6,24,-1,8,7,24,-1,9,8,24,-1,10,9,24,-1,11,10,24,-1,0,11,24,-1,12,13,25,-1,13,14,25,-1,14,15,25,-1,15,16,25,-1,16,17,25,-1,17,18,25,-1,18,19,25,-1,19,20,25,-1,20,21,25,-1,21,22,25,-1,22,23,25,-1,23,12,25,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.36f ,-2.39f ,-0.26f ,-0.36f ,-1.77f ,-0.89f ,-0.36f ,0f ,-1.7f ,-0.36f ,0.85f ,-1.47f ,-0.36f ,1.47f ,-0.85f ,-0.36f ,1.7f ,0f ,-0.36f ,1.47f ,0.85f ,-0.36f ,-0.07f ,2.05f ,-0.36f ,-0.92f ,2.28f ,-0.36f ,-1.77f ,2.05f ,-0.36f ,-2.39f ,1.43f ,-0.36f ,-2.62f ,0.58f ,0.36f ,-2.39f ,-0.26f ,0.36f ,-1.77f ,-0.89f ,0.36f ,0f ,-1.7f ,0.36f ,0.85f ,-1.47f ,0.36f ,1.47f ,-0.85f ,0.36f ,1.7f ,0f ,0.36f ,1.47f ,0.85f ,0.36f ,-0.07f ,2.05f ,0.36f ,-0.92f ,2.28f ,0.36f ,-1.77f ,2.05f ,0.36f ,-2.39f ,1.43f ,0.36f ,-2.62f ,0.58f ,-0.36f ,-0.46f ,0.31f ,0.36f ,-0.46f ,0.31f });
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,13,12,-1,2,3,25,24,-1,4,5,11,10,-1,6,7,19,18,-1,1,29,31,13,-1,6,18,23,14,-1,8,9,3,2,-1,10,11,15,14,-1,9,30,25,3,-1,10,21,16,4,-1,12,13,9,8,-1,13,31,30,9,-1,14,23,21,10,-1,14,15,7,6,-1,16,17,5,4,-1,18,19,29,28,-1,22,19,7,15,-1,23,18,28,27,-1,17,20,11,5,-1,16,21,26,24,-1,20,22,15,11,-1,21,23,27,26,-1,24,25,17,16,-1,31,29,19,22,-1,25,30,20,17,-1,30,31,22,20,-1,28,29,1,0,-1,27,28,0,12,-1,24,26,8,2,-1,26,27,12,8,-1});
  }
}
private class MFVec3f4 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.03f ,-1.26f ,3f ,1.03f ,-1.26f ,3f ,-1.03f ,1.74f ,3f ,1.03f ,1.74f ,3f ,-0.78f ,1.21f ,-3f ,0.78f ,1.21f ,-3f ,-0.78f ,-1.3f ,-3f ,0.78f ,-1.3f ,-3f ,-1.03f ,0.27f ,3f ,1.03f ,0.27f ,3f ,-0.78f ,0.27f ,-3.43f ,0.78f ,0.27f ,-3.43f ,-1.03f ,-0.99f ,3f ,1.03f ,-0.99f ,3f ,-0.78f ,-1.05f ,-3.43f ,0.78f ,-1.05f ,-3.43f ,-0.79f ,1.56f ,-2.76f ,0.79f ,1.56f ,-2.76f ,-0.79f ,-1.56f ,-2.76f ,0.79f ,-1.56f ,-2.76f ,1.13f ,0.27f ,-2.76f ,-1.13f ,0.27f ,-2.76f ,1.13f ,-1.31f ,-2.76f ,-1.13f ,-1.31f ,-2.76f ,-1.02f ,1.73f ,2.69f ,1.02f ,1.73f ,2.69f ,-1.36f ,0.27f ,2.69f ,-1.36f ,-1.45f ,2.69f ,-1.02f ,-1.73f ,2.69f ,1.02f ,-1.73f ,2.69f ,1.36f ,0.27f ,2.69f ,1.36f ,-1.45f ,2.69f });
  }
}
private class MFInt325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,144,145,-1,2,1,145,146,-1,3,2,146,147,-1,4,3,147,148,-1,5,4,148,149,-1,6,5,149,150,-1,7,6,150,151,-1,8,7,151,152,-1,9,8,152,153,-1,10,9,153,154,-1,11,10,154,155,-1,0,11,155,144,-1,13,12,24,25,-1,14,13,25,26,-1,15,14,26,27,-1,16,15,27,28,-1,17,16,28,29,-1,18,17,29,30,-1,19,18,30,31,-1,20,19,31,32,-1,21,20,32,33,-1,22,21,33,34,-1,23,22,34,35,-1,12,23,35,24,-1,25,24,36,37,-1,26,25,37,38,-1,27,26,38,39,-1,28,27,39,40,-1,29,28,40,41,-1,30,29,41,42,-1,31,30,42,43,-1,32,31,43,44,-1,33,32,44,45,-1,34,33,45,46,-1,35,34,46,47,-1,24,35,47,36,-1,37,36,84,85,-1,38,37,85,86,-1,39,38,86,87,-1,40,39,87,88,-1,41,40,88,89,-1,42,41,89,90,-1,43,42,90,91,-1,44,43,91,92,-1,45,44,92,93,-1,46,45,93,94,-1,47,46,94,95,-1,36,47,95,84,-1,49,48,60,61,-1,50,49,61,62,-1,51,50,62,63,-1,52,51,63,64,-1,53,52,64,65,-1,54,53,65,66,-1,55,54,66,67,-1,56,55,67,68,-1,57,56,68,69,-1,58,57,69,70,-1,59,58,70,71,-1,48,59,71,60,-1,61,60,0,1,-1,62,61,1,2,-1,63,62,2,3,-1,64,63,3,4,-1,65,64,4,5,-1,66,65,5,6,-1,67,66,6,7,-1,68,67,7,8,-1,69,68,8,9,-1,70,69,9,10,-1,71,70,10,11,-1,60,71,11,0,-1,73,72,12,13,-1,74,73,13,14,-1,75,74,14,15,-1,76,75,15,16,-1,77,76,16,17,-1,78,77,17,18,-1,79,78,18,19,-1,80,79,19,20,-1,81,80,20,21,-1,82,81,21,22,-1,83,82,22,23,-1,72,83,23,12,-1,85,84,108,109,-1,86,85,109,110,-1,87,86,110,111,-1,88,87,111,112,-1,89,88,112,113,-1,90,89,113,114,-1,91,90,114,115,-1,92,91,115,116,-1,93,92,116,117,-1,94,93,117,118,-1,95,94,118,119,-1,84,95,119,108,-1,97,96,72,73,-1,98,97,73,74,-1,99,98,74,75,-1,100,99,75,76,-1,101,100,76,77,-1,102,101,77,78,-1,103,102,78,79,-1,104,103,79,80,-1,105,104,80,81,-1,106,105,81,82,-1,107,106,82,83,-1,96,107,83,72,-1,109,108,132,133,-1,110,109,133,134,-1,111,110,134,135,-1,112,111,135,136,-1,113,112,136,137,-1,114,113,137,138,-1,115,114,138,139,-1,116,115,139,140,-1,117,116,140,141,-1,118,117,141,142,-1,119,118,142,143,-1,108,119,143,132,-1,121,120,96,97,-1,122,121,97,98,-1,123,122,98,99,-1,124,123,99,100,-1,125,124,100,101,-1,126,125,101,102,-1,127,126,102,103,-1,128,127,103,104,-1,129,128,104,105,-1,130,129,105,106,-1,131,130,106,107,-1,120,131,107,96,-1,133,132,168,169,-1,134,133,169,170,-1,135,134,170,171,-1,136,135,171,172,-1,137,136,172,173,-1,138,137,173,174,-1,139,138,174,175,-1,140,139,175,176,-1,141,140,176,177,-1,142,141,177,178,-1,143,142,178,179,-1,132,143,179,168,-1,145,144,180,181,-1,146,145,181,182,-1,147,146,182,183,-1,148,147,183,184,-1,149,148,184,185,-1,150,149,185,186,-1,151,150,186,187,-1,152,151,187,188,-1,153,152,188,189,-1,154,153,189,190,-1,155,154,190,191,-1,144,155,191,180,-1,157,156,48,49,-1,158,157,49,50,-1,159,158,50,51,-1,160,159,51,52,-1,161,160,52,53,-1,162,161,53,54,-1,163,162,54,55,-1,164,163,55,56,-1,165,164,56,57,-1,166,165,57,58,-1,167,166,58,59,-1,156,167,59,48,-1});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {169,168,156,157,-1,170,169,157,158,-1,171,170,158,159,-1,172,171,159,160,-1,173,172,160,161,-1,174,173,161,162,-1,175,174,162,163,-1,176,175,163,164,-1,177,176,164,165,-1,178,177,165,166,-1,179,178,166,167,-1,168,179,167,156,-1,181,180,120,121,-1,182,181,121,122,-1,183,182,122,123,-1,184,183,123,124,-1,185,184,124,125,-1,186,185,125,126,-1,187,186,126,127,-1,188,187,127,128,-1,189,188,128,129,-1,190,189,129,130,-1,191,190,130,131,-1,180,191,131,120,-1});
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.58f ,0f ,-1.44f ,0.5f ,0.3f ,-1.44f ,0.29f ,0.51f ,-1.44f ,0f ,0.59f ,-1.44f ,-0.29f ,0.51f ,-1.44f ,-0.5f ,0.3f ,-1.44f ,-0.58f ,0f ,-1.44f ,-0.5f ,-0.3f ,-1.44f ,-0.29f ,-0.51f ,-1.44f ,0f ,-0.59f ,-1.44f ,0.29f ,-0.51f ,-1.44f ,0.5f ,-0.3f ,-1.44f ,0.34f ,0f ,1.44f ,0.29f ,0.2f ,1.44f ,0.17f ,0.34f ,1.44f ,0f ,0.4f ,1.44f ,-0.17f ,0.34f ,1.44f ,-0.29f ,0.2f ,1.44f ,-0.34f ,0f ,1.44f ,-0.29f ,-0.2f ,1.44f ,-0.17f ,-0.34f ,1.44f ,0f ,-0.4f ,1.44f ,0.17f ,-0.34f ,1.44f ,0.29f ,-0.2f ,1.44f ,0.4f ,0f ,1.44f ,0.34f ,0.23f ,1.44f ,0.2f ,0.4f ,1.44f ,0f ,0.47f ,1.44f ,-0.2f ,0.4f ,1.44f ,-0.34f ,0.23f ,1.44f ,-0.4f ,0f ,1.44f ,-0.34f ,-0.23f ,1.44f ,-0.2f ,-0.4f ,1.44f ,0f ,-0.47f ,1.44f ,0.2f ,-0.4f ,1.44f ,0.34f ,-0.23f ,1.44f ,0.46f ,0f ,1.44f ,0.4f ,0.27f ,1.44f ,0.23f ,0.46f ,1.44f ,0f ,0.53f ,1.44f ,-0.23f ,0.46f ,1.44f ,-0.4f ,0.27f ,1.44f ,-0.46f ,0f ,1.44f ,-0.4f ,-0.27f ,1.44f ,-0.23f ,-0.46f ,1.44f ,0f ,-0.53f ,1.44f ,0.23f ,-0.46f ,1.44f ,0.4f ,-0.27f ,1.44f ,0.78f ,0f ,-1.44f ,0.68f ,0.4f ,-1.44f ,0.39f ,0.69f ,-1.44f ,0f ,0.8f ,-1.44f ,-0.39f ,0.69f ,-1.44f ,-0.68f ,0.4f ,-1.44f ,-0.78f ,0f ,-1.44f ,-0.68f ,-0.4f ,-1.44f ,-0.39f ,-0.69f ,-1.44f ,0f ,-0.8f ,-1.44f ,0.39f ,-0.69f ,-1.44f ,0.68f ,-0.4f ,-1.44f ,0.68f ,0f ,-1.44f ,0.59f ,0.35f ,-1.44f ,0.34f ,0.6f ,-1.44f ,0f ,0.69f ,-1.44f ,-0.34f ,0.6f ,-1.44f ,-0.59f ,0.35f ,-1.44f ,-0.68f ,0f ,-1.44f ,-0.59f ,-0.35f ,-1.44f ,-0.34f ,-0.6f ,-1.44f ,0f ,-0.69f ,-1.44f ,0.34f ,-0.6f ,-1.44f ,0.59f ,-0.35f ,-1.44f ,0.34f ,0f ,0.99f ,0.29f ,0.2f ,0.99f ,0.17f ,0.34f ,0.99f ,0f ,0.4f ,0.99f ,-0.17f ,0.34f ,0.99f ,-0.29f ,0.2f ,0.99f ,-0.34f ,0f ,0.99f ,-0.29f ,-0.2f ,0.99f ,-0.17f ,-0.34f ,0.99f ,0f ,-0.4f ,0.99f ,0.17f ,-0.34f ,0.99f ,0.29f ,-0.2f ,0.99f ,0.46f ,0f ,0.99f ,0.4f ,0.27f ,0.99f ,0.23f ,0.46f ,0.99f ,0f ,0.53f ,0.99f ,-0.23f ,0.46f ,0.99f ,-0.4f ,0.27f ,0.99f ,-0.46f ,0f ,0.99f ,-0.4f ,-0.27f ,0.99f ,-0.23f ,-0.46f ,0.99f ,0f ,-0.53f ,0.99f ,0.23f ,-0.46f ,0.99f ,0.4f ,-0.27f ,0.99f ,0.46f ,0f ,0.07f ,0.4f ,0.23f ,0.07f ,0.23f ,0.4f ,0.07f ,0f ,0.47f ,0.07f ,-0.23f ,0.4f ,0.07f ,-0.4f ,0.23f ,0.07f ,-0.46f ,0f ,0.07f ,-0.4f ,-0.23f ,0.07f ,-0.23f ,-0.4f ,0.07f ,0f ,-0.47f ,0.07f ,0.23f ,-0.4f ,0.07f ,0.4f ,-0.23f ,0.07f ,0.62f ,0f ,0.07f ,0.54f ,0.31f ,0.07f ,0.31f ,0.55f ,0.07f ,0f ,0.63f ,0.07f ,-0.31f ,0.55f ,0.07f ,-0.54f ,0.31f ,0.07f ,-0.62f ,0f ,0.07f ,-0.54f ,-0.31f ,0.07f ,-0.31f ,-0.55f ,0.07f ,0f ,-0.63f ,0.07f ,0.31f ,-0.55f ,0.07f ,0.54f ,-0.31f ,0.07f ,0.46f ,0f ,-0.08f ,0.4f ,0.23f ,-0.08f ,0.23f ,0.4f ,-0.08f ,0f ,0.47f ,-0.08f ,-0.23f ,0.4f ,-0.08f ,-0.4f ,0.23f ,-0.08f ,-0.46f ,0f ,-0.08f ,-0.4f ,-0.23f ,-0.08f ,-0.23f ,-0.4f ,-0.08f ,0f ,-0.47f ,-0.08f ,0.23f ,-0.4f ,-0.08f ,0.4f ,-0.23f ,-0.08f ,0.62f ,0f ,-0.08f ,0.54f ,0.31f ,-0.08f ,0.31f ,0.55f ,-0.08f ,0f ,0.63f ,-0.08f ,-0.31f ,0.55f ,-0.08f ,-0.54f ,0.31f ,-0.08f ,-0.62f ,0f ,-0.08f ,-0.54f ,-0.31f ,-0.08f ,-0.31f ,-0.55f ,-0.08f ,0f ,-0.63f ,-0.08f ,0.31f ,-0.55f ,-0.08f ,0.54f ,-0.31f ,-0.08f ,0.46f ,0f ,-1.19f ,0.4f ,0.23f ,-1.19f ,0.23f ,0.4f ,-1.19f ,0f ,0.47f ,-1.19f ,-0.23f ,0.4f ,-1.19f ,-0.4f ,0.23f ,-1.19f ,-0.46f ,0f ,-1.19f ,-0.4f ,-0.23f ,-1.19f ,-0.23f ,-0.4f ,-1.19f ,0f ,-0.47f ,-1.19f ,0.23f ,-0.4f ,-1.19f ,0.4f ,-0.23f ,-1.19f ,0.62f ,0f ,-1.19f ,0.54f ,0.31f ,-1.19f ,0.31f ,0.55f ,-1.19f ,0f ,0.63f ,-1.19f ,-0.31f ,0.55f ,-1.19f ,-0.54f ,0.31f ,-1.19f ,-0.62f ,0f ,-1.19f ,-0.54f ,-0.31f ,-1.19f ,-0.31f ,-0.55f ,-1.19f ,0f ,-0.63f ,-1.19f ,0.31f ,-0.55f ,-1.19f ,0.54f ,-0.31f ,-1.19f ,0.62f ,0f ,-0.98f ,0.54f ,0.31f ,-0.98f ,0.31f ,0.55f ,-0.98f ,0f ,0.63f ,-0.98f ,-0.31f ,0.55f ,-0.98f ,-0.54f ,0.31f ,-0.98f ,-0.62f ,0f ,-0.98f ,-0.54f ,-0.31f ,-0.98f ,-0.31f ,-0.55f ,-0.98f ,0f ,-0.63f ,-0.98f ,0.31f ,-0.55f ,-0.98f ,0.54f ,-0.31f ,-0.98f ,0.46f ,0f ,-0.98f ,0.4f ,0.23f ,-0.98f ,0.23f ,0.4f ,-0.98f ,0f ,0.47f ,-0.98f ,-0.23f ,0.4f ,-0.98f ,-0.4f ,0.23f ,-0.98f ,-0.46f ,0f ,-0.98f ,-0.4f ,-0.23f ,-0.98f ,-0.23f ,-0.4f ,-0.98f ,0f ,-0.47f ,-0.98f ,0.23f ,-0.4f ,-0.98f ,0.4f ,-0.23f ,-0.98f });
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,11,-1,1,2,13,12,-1,2,3,14,13,-1,3,4,15,14,-1,4,5,16,15,-1,5,6,17,16,-1,6,7,18,17,-1,7,8,19,18,-1,8,9,20,19,-1,10,0,11,21,-1,11,12,23,22,-1,12,13,24,23,-1,13,14,25,24,-1,14,15,26,25,-1,15,16,27,26,-1,16,17,28,27,-1,17,18,29,28,-1,18,19,30,29,-1,19,20,31,30,-1,21,11,22,32,-1,22,23,34,33,-1,23,24,35,34,-1,24,25,36,35,-1,25,26,37,36,-1,26,27,38,37,-1,27,28,39,38,-1,28,29,40,39,-1,29,30,41,40,-1,30,31,42,41,-1,32,22,33,43,-1,33,34,45,44,-1,34,35,46,45,-1,35,36,47,46,-1,36,37,48,47,-1,37,38,49,48,-1,38,39,50,49,-1,39,40,51,50,-1,40,41,52,51,-1,41,42,53,52,-1,43,33,44,54,-1,44,45,56,55,-1,45,46,57,56,-1,46,47,58,57,-1,47,48,59,58,-1,48,49,60,59,-1,49,50,61,60,-1,50,51,62,61,-1,51,52,63,62,-1,52,53,64,63,-1,54,44,55,65,-1,55,56,67,66,-1,56,57,68,67,-1,57,58,69,68,-1,58,59,70,69,-1,59,60,71,70,-1,60,61,72,71,-1,61,62,73,72,-1,62,63,74,73,-1,63,64,75,74,-1,65,55,66,76,-1,66,67,78,77,-1,67,68,79,78,-1,68,69,80,79,-1,69,70,81,80,-1,70,71,82,81,-1,71,72,83,82,-1,72,73,84,83,-1,73,74,85,84,-1,74,75,86,85,-1,76,66,77,87,-1,77,78,89,88,-1,78,79,90,89,-1,79,80,91,90,-1,80,81,92,91,-1,81,82,93,92,-1,82,83,94,93,-1,83,84,95,94,-1,84,85,96,95,-1,85,86,97,96,-1,87,77,88,98,-1,88,89,100,99,-1,89,90,101,100,-1,90,91,102,101,-1,91,92,103,102,-1,92,93,104,103,-1,93,94,105,104,-1,94,95,106,105,-1,95,96,107,106,-1,96,97,108,107,-1,98,88,99,109,-1,99,100,111,110,-1,100,101,112,111,-1,101,102,113,112,-1,102,103,114,113,-1,103,104,115,114,-1,104,105,116,115,-1,105,106,117,116,-1,106,107,118,117,-1,107,108,119,118,-1,109,99,110,120,-1,110,111,122,121,-1,111,112,123,122,-1,112,113,124,123,-1,113,114,125,124,-1,114,115,126,125,-1,115,116,127,126,-1,116,117,128,127,-1,117,118,129,128,-1,118,119,130,129,-1,120,110,121,131,-1,121,122,133,132,-1,122,123,134,133,-1,123,124,135,134,-1,124,125,136,135,-1,125,126,137,136,-1,126,127,138,137,-1,127,128,139,138,-1,128,129,140,139,-1,129,130,141,140,-1,131,121,132,142,-1,132,133,144,143,-1,133,134,145,144,-1,134,135,146,145,-1,135,136,147,146,-1,136,137,148,147,-1,137,138,149,148,-1,138,139,150,149,-1,139,140,151,150,-1,140,141,152,151,-1,142,132,143,153,-1,143,144,155,154,-1,144,145,156,155,-1,145,146,157,156,-1,146,147,158,157,-1,147,148,159,158,-1,148,149,160,159,-1,149,150,161,160,-1,150,151,162,161,-1,151,152,163,162,-1,153,143,154,164,-1,154,155,166,165,-1,155,156,167,166,-1,156,157,168,167,-1,157,158,169,168,-1,158,159,170,169,-1,159,160,171,170,-1,160,161,172,171,-1,161,162,173,172,-1,162,163,174,173,-1,164,154,165,175,-1,165,166,177,176,-1,166,167,178,177,-1,167,168,179,178,-1,168,169,180,179,-1,169,170,181,180,-1,170,171,182,181,-1,171,172,183,182,-1,172,173,184,183,-1,173,174,185,184,-1,175,165,176,186,-1,176,177,188,187,-1,177,178,189,188,-1,178,179,190,189,-1,179,180,191,190,-1,180,181,192,191,-1,181,182,193,192,-1,182,183,194,193,-1,183,184,195,194,-1});
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {184,185,196,195,-1,186,176,187,197,-1,187,188,199,198,-1,188,189,200,199,-1,189,190,201,200,-1,190,191,202,201,-1,191,192,203,202,-1,192,193,204,203,-1,193,194,205,204,-1,194,195,206,205,-1,195,196,207,206,-1,197,187,198,208,-1,1,0,209,-1,2,1,209,-1,3,2,209,-1,4,3,209,-1,5,4,209,-1,6,5,209,-1,7,6,209,-1,8,7,209,-1,198,199,210,-1,199,200,210,-1,200,201,210,-1,201,202,210,-1,202,203,210,-1,203,204,210,-1,204,205,210,-1,205,206,210,-1});
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.06f ,-0.43f ,-0.02f ,0.05f ,-0.43f ,-0.04f ,0.04f ,-0.43f ,-0.05f ,0.02f ,-0.43f ,-0.06f ,0f ,-0.43f ,-0.07f ,-0.02f ,-0.43f ,-0.06f ,-0.04f ,-0.43f ,-0.05f ,-0.05f ,-0.43f ,-0.04f ,-0.06f ,-0.43f ,-0.02f ,-0.07f ,-0.43f ,0f ,0.07f ,-0.43f ,0f ,0.13f ,-0.41f ,-0.04f ,0.11f ,-0.41f ,-0.08f ,0.08f ,-0.41f ,-0.11f ,0.04f ,-0.41f ,-0.13f ,0f ,-0.41f ,-0.13f ,-0.04f ,-0.41f ,-0.13f ,-0.08f ,-0.41f ,-0.11f ,-0.11f ,-0.41f ,-0.08f ,-0.13f ,-0.41f ,-0.04f ,-0.13f ,-0.41f ,0f ,0.13f ,-0.41f ,0f ,0.19f ,-0.38f ,-0.06f ,0.16f ,-0.38f ,-0.11f ,0.11f ,-0.38f ,-0.16f ,0.06f ,-0.38f ,-0.19f ,0f ,-0.38f ,-0.2f ,-0.06f ,-0.38f ,-0.19f ,-0.11f ,-0.38f ,-0.16f ,-0.16f ,-0.38f ,-0.11f ,-0.19f ,-0.38f ,-0.06f ,-0.2f ,-0.38f ,0f ,0.2f ,-0.38f ,0f ,0.24f ,-0.35f ,-0.08f ,0.2f ,-0.35f ,-0.15f ,0.15f ,-0.35f ,-0.2f ,0.08f ,-0.35f ,-0.24f ,0f ,-0.35f ,-0.25f ,-0.08f ,-0.35f ,-0.24f ,-0.15f ,-0.35f ,-0.2f ,-0.2f ,-0.35f ,-0.15f ,-0.24f ,-0.35f ,-0.08f ,-0.25f ,-0.35f ,0f ,0.25f ,-0.35f ,0f ,0.29f ,-0.3f ,-0.09f ,0.25f ,-0.3f ,-0.18f ,0.18f ,-0.3f ,-0.25f ,0.09f ,-0.3f ,-0.29f ,0f ,-0.3f ,-0.3f ,-0.09f ,-0.3f ,-0.29f ,-0.18f ,-0.3f ,-0.25f ,-0.25f ,-0.3f ,-0.18f ,-0.29f ,-0.3f ,-0.09f ,-0.3f ,-0.3f ,0f ,0.3f ,-0.3f ,0f ,0.33f ,-0.25f ,-0.11f ,0.28f ,-0.25f ,-0.2f ,0.2f ,-0.25f ,-0.28f ,0.11f ,-0.25f ,-0.33f ,0f ,-0.25f ,-0.35f ,-0.11f ,-0.25f ,-0.33f ,-0.2f ,-0.25f ,-0.28f ,-0.28f ,-0.25f ,-0.2f ,-0.33f ,-0.25f ,-0.11f ,-0.35f ,-0.25f ,0f ,0.35f ,-0.25f ,0f ,0.37f ,-0.2f ,-0.12f ,0.31f ,-0.2f ,-0.23f ,0.23f ,-0.2f ,-0.31f ,0.12f ,-0.2f ,-0.37f ,0f ,-0.2f ,-0.38f ,-0.12f ,-0.2f ,-0.37f ,-0.23f ,-0.2f ,-0.31f ,-0.31f ,-0.2f ,-0.23f ,-0.37f ,-0.2f ,-0.12f ,-0.38f ,-0.2f ,0f ,0.38f ,-0.2f ,0f ,0.39f ,-0.13f ,-0.13f ,0.33f ,-0.13f ,-0.24f ,0.24f ,-0.13f ,-0.33f ,0.13f ,-0.13f ,-0.39f ,0f ,-0.13f ,-0.41f ,-0.13f ,-0.13f ,-0.39f ,-0.24f ,-0.13f ,-0.33f ,-0.33f ,-0.13f ,-0.24f ,-0.39f ,-0.13f ,-0.13f ,-0.41f ,-0.13f ,0f ,0.41f ,-0.13f ,0f ,0.4f ,-0.07f ,-0.13f ,0.34f ,-0.07f ,-0.25f ,0.25f ,-0.07f ,-0.34f ,0.13f ,-0.07f ,-0.4f ,0f ,-0.07f ,-0.43f ,-0.13f ,-0.07f ,-0.4f ,-0.25f ,-0.07f ,-0.34f ,-0.34f ,-0.07f ,-0.25f ,-0.4f ,-0.07f ,-0.13f ,-0.43f ,-0.07f ,0f ,0.43f ,-0.07f ,0f ,0.41f ,0f ,-0.13f ,0.35f ,0f ,-0.25f ,0.25f ,0f ,-0.35f ,0.13f ,0f ,-0.41f ,0f ,0f ,-0.43f ,-0.13f ,0f ,-0.41f ,-0.25f ,0f ,-0.35f ,-0.35f ,0f ,-0.25f ,-0.41f ,0f ,-0.13f ,-0.43f ,0f ,0f ,0.43f ,0f ,0f ,0.4f ,0.07f ,-0.13f ,0.34f ,0.07f ,-0.25f ,0.25f ,0.07f ,-0.34f ,0.13f ,0.07f ,-0.4f ,0f ,0.07f ,-0.43f ,-0.13f ,0.07f ,-0.4f ,-0.25f ,0.07f ,-0.34f ,-0.34f ,0.07f ,-0.25f ,-0.4f ,0.07f ,-0.13f ,-0.43f ,0.07f ,0f ,0.43f ,0.07f ,0f ,0.39f ,0.13f ,-0.13f ,0.33f ,0.13f ,-0.24f ,0.24f ,0.13f ,-0.33f ,0.13f ,0.13f ,-0.39f ,0f ,0.13f ,-0.41f ,-0.13f ,0.13f ,-0.39f ,-0.24f ,0.13f ,-0.33f ,-0.33f ,0.13f ,-0.24f ,-0.39f ,0.13f ,-0.13f ,-0.41f ,0.13f ,0f ,0.41f ,0.13f ,0f ,0.37f ,0.2f ,-0.12f ,0.31f ,0.2f ,-0.23f ,0.23f ,0.2f ,-0.31f ,0.12f ,0.2f ,-0.37f ,0f ,0.2f ,-0.38f ,-0.12f ,0.2f ,-0.37f ,-0.23f ,0.2f ,-0.31f ,-0.31f ,0.2f ,-0.23f ,-0.37f ,0.2f ,-0.12f ,-0.38f ,0.2f ,0f ,0.38f ,0.2f ,0f ,0.33f ,0.25f ,-0.11f ,0.28f ,0.25f ,-0.2f ,0.2f ,0.25f ,-0.28f ,0.11f ,0.25f ,-0.33f ,0f ,0.25f ,-0.35f ,-0.11f ,0.25f ,-0.33f ,-0.2f ,0.25f ,-0.28f ,-0.28f ,0.25f ,-0.2f ,-0.33f ,0.25f ,-0.11f ,-0.35f ,0.25f ,0f ,0.35f ,0.25f ,0f ,0.29f ,0.3f ,-0.09f ,0.25f ,0.3f ,-0.18f ,0.18f ,0.3f ,-0.25f ,0.09f ,0.3f ,-0.29f ,0f ,0.3f ,-0.3f ,-0.09f ,0.3f ,-0.29f ,-0.18f ,0.3f ,-0.25f ,-0.25f ,0.3f ,-0.18f ,-0.29f ,0.3f ,-0.09f ,-0.3f ,0.3f ,0f ,0.3f ,0.3f ,0f ,0.24f ,0.35f ,-0.08f ,0.2f ,0.35f ,-0.15f ,0.15f ,0.35f ,-0.2f ,0.08f ,0.35f ,-0.24f ,0f ,0.35f ,-0.25f ,-0.08f ,0.35f ,-0.24f ,-0.15f ,0.35f ,-0.2f ,-0.2f ,0.35f ,-0.15f ,-0.24f ,0.35f ,-0.08f ,-0.25f ,0.35f ,0f ,0.25f ,0.35f ,0f ,0.19f ,0.38f ,-0.06f ,0.16f ,0.38f ,-0.11f ,0.11f ,0.38f ,-0.16f ,0.06f ,0.38f ,-0.19f ,0f ,0.38f ,-0.2f ,-0.06f ,0.38f ,-0.19f ,-0.11f ,0.38f ,-0.16f ,-0.16f ,0.38f ,-0.11f ,-0.19f ,0.38f ,-0.06f ,-0.2f ,0.38f ,0f ,0.2f ,0.38f ,0f ,0.13f ,0.41f ,-0.04f ,0.11f ,0.41f ,-0.08f ,0.08f ,0.41f ,-0.11f ,0.04f ,0.41f ,-0.13f ,0f ,0.41f ,-0.13f ,-0.04f ,0.41f ,-0.13f ,-0.08f ,0.41f ,-0.11f ,-0.11f ,0.41f ,-0.08f ,-0.13f ,0.41f ,-0.04f ,-0.13f ,0.41f ,0f ,0.13f ,0.41f ,0f ,0.06f ,0.43f ,-0.02f ,0.05f ,0.43f ,-0.04f ,0.04f ,0.43f ,-0.05f ,0.02f ,0.43f ,-0.06f ,0f ,0.43f ,-0.07f ,-0.02f ,0.43f ,-0.06f ,-0.04f ,0.43f ,-0.05f ,-0.05f ,0.43f ,-0.04f ,-0.06f ,0.43f ,-0.02f ,-0.07f ,0.43f ,0f ,0.07f ,0.43f ,0f ,0f ,-0.43f ,0f ,0f ,0.43f ,0f });
  }
}
}
