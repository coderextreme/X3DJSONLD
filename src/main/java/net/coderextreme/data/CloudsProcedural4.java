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
public class CloudsProcedural4 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CloudsProcedural4().initialize().toFileJSON("../data/CloudsProcedural4.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.2")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("CloudsProcedural4.x3d"))
        .addMeta(new meta().setName("description").setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes."))
        .addMeta(new meta().setName("creator").setContent("Capt Darren W. Murphy"))
        .addMeta(new meta().setName("created").setContent("1 November 2007"))
        .addMeta(new meta().setName("modified").setContent("14 January 2014"))
        .addMeta(new meta().setName("identifier").setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html"))
        .addMeta(new meta().setName("license").setContent("../../license.html"))
        .addMeta(new meta().setName("TODO").setContent("fix links")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("A png image file for the cloud texture must be designated in the ecmascript node."))
        .addChild(new Viewpoint().setDescription("Main").setJump(false).setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {50000f,1000f,42000f}))
        .addChild(new Viewpoint().setDescription("Light House Tower").setJump(false).setOrientation(new float[] {0f,1f,0f,1.3f}).setPosition(new float[] {45000f,1290f,44000f}))
        .addChild(new Viewpoint().setDescription("centerWest").setJump(false).setOrientation(new float[] {0f,1f,0f,2.5f}).setPosition(new float[] {48000f,1000f,20000f}))
        .addChild(new Background().setGroundColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor0().getArray())).setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor1().getArray())).setTransparency(0f))
        .addChild(new DirectionalLight().setAmbientIntensity(1f).setDirection(new float[] {-1f,0f,0f}).setGlobal(true))
        .addChild(new Group().setDEF("Terrain").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setScale(new float[] {50f,50f,50f}).setTranslation(new float[] {25000f,0f,25000f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Inline().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray())).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})))
          .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {25000f,0f,25000f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .setGeometry(new Rectangle2D().setSize(new float[] {77000f,55000f}))
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString3().getArray())))))))
        .addChild(new Group().setDEF("Placemarks").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setScale(new float[] {50f,50f,50f}).setTranslation(new float[] {45000f,30f,44000f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .addChild(new Inline().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString4().getArray())).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}))))
        .addChild(new Group().setDEF("Clouds").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Transform().setDEF("Cumulus").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}))
          .addChild(new Transform().setDEF("Cirrus").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}))
          .addChild(new Transform().setDEF("Fog").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}))
          .addChild(new DirectionalLight().setAmbientIntensity(1f).setColor(new float[] {1f,0f,0f}).setDirection(new float[] {-1f,-1f,0f}).setGlobal(true))
          .addX3DScript(new X3DScript().setDEF("PixelScript").setDirectOutput(true)
            .addField(new field().setType("SFNode").setName("Cumulus").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Transform().setUSE("Cumulus")))
            .addField(new field().setType("SFNode").setName("Cirrus").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Transform().setUSE("Cirrus")))
            .addField(new field().setType("SFNode").setName("Fog").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,1f});
  }
}
protected class MFColor1 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,1f});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"});
  }
}
}
