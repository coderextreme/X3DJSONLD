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
public class CloudsProcedural4 {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CloudsProcedural4().initialize().toFileJSON("../data/CloudsProcedural4.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CloudsProcedural4.x3d"))
        .addMeta(new metaObject().setName("description").setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes."))
        .addMeta(new metaObject().setName("creator").setContent("Capt Darren W. Murphy"))
        .addMeta(new metaObject().setName("created").setContent("1 November 2007"))
        .addMeta(new metaObject().setName("modified").setContent("14 January 2014"))
        .addMeta(new metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html"))
        .addMeta(new metaObject().setName("TODO").setContent("fix links")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("A png image file for the cloud texture must be designated in the ecmascript node."))
        .addChild(new ViewpointObject().setDescription("Main").setJump(false).setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {50000f,1000f,42000f}))
        .addChild(new ViewpointObject().setDescription("Light House Tower").setJump(false).setOrientation(new float[] {0f,1f,0f,1.3f}).setPosition(new float[] {45000f,1290f,44000f}))
        .addChild(new ViewpointObject().setDescription("centerWest").setJump(false).setOrientation(new float[] {0f,1f,0f,2.5f}).setPosition(new float[] {48000f,1000f,20000f}))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor0().getArray())).setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new DirectionalLightObject().setAmbientIntensity(1f).setDirection(new float[] {-1f,0f,0f}).setGlobal(true))
        .addChild(new GroupObject().setDEF("Terrain")
          .addChild(new TransformObject().setScale(new float[] {50f,50f,50f}).setTranslation(new float[] {25000f,0f,25000f})
            .addChild(new InlineObject().setUrl(new MFStringObject(new MFString2().getArray()))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {25000f,0f,25000f})
            .addChild(new ShapeObject()
              .setGeometry(new Rectangle2DObject().setSize(new float[] {77000f,55000f}))
              .setAppearance(new AppearanceObject()
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString3().getArray())))))))
        .addChild(new GroupObject().setDEF("Placemarks")
          .addChild(new TransformObject().setScale(new float[] {50f,50f,50f}).setTranslation(new float[] {45000f,30f,44000f})
            .addChild(new InlineObject().setUrl(new MFStringObject(new MFString4().getArray())))))
        .addChild(new GroupObject().setDEF("Clouds")
          .addChild(new TransformObject().setDEF("Cumulus"))
          .addChild(new TransformObject().setDEF("Cirrus"))
          .addChild(new TransformObject().setDEF("Fog"))
          .addChild(new ScriptObject().setDEF("PixelScript").setDirectOutput(true)
            .addField(new fieldObject().setType("SFNode").setName("Cumulus").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new TransformObject().setUSE("Cumulus")))
            .addField(new fieldObject().setType("SFNode").setName("Cirrus").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new TransformObject().setUSE("Cirrus")))
            .addField(new fieldObject().setType("SFNode").setName("Fog").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .setSourceCode("ecmascript: function cumulustranslation() // These values designate the boundary location of the cloud { X = 50000*Math.random(); // X horizontal range Y = 1000 + 300*Math.random(); // Y vertical base + range Z = 50000*Math.random(); // z horizontal range randomt = new String(X+' '+Y+' '+Z); return randomt; } function cumulusscale() // these values scale a cloud within a designated size { maxscale = 1; scale = Math.round(9+maxscale*Math.random()); X = 1.5*scale; Y = scale; Z = scale; randomscale = new String(X+' '+Y+' '+Z); return randomscale; } function cirrustranslation() // These values designate the boundary location of the cloud { X = 50000*Math.random(); // X horizontal range Y = 8000 + 1000*Math.random(); // Y vertical base + range Z = 50000*Math.random(); // z horizontal range randomt = new String(X+' '+Y+' '+Z); return randomt; } function cirrusscale() // these values scale a cloud within a designated size { maxscale = 1; scale = Math.round(9+maxscale*Math.random()); X = 1.5*scale; Y = 2*Math.random(); Z = 1.5*scale; randomscale = new String(X+' '+Y+' '+Z); return randomscale; } function cumulussectiontranslation() // These random values place another portion of cumulus type cloud { randomtheta = 6.28319*Math.random(); randomphi = .7854*Math.random(); randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi); Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi); Y = randomradius*Math.cos(randomphi); randomt = new String(X+' '+Y+' '+Z); return randomt; } function cirrussectiontranslation() // These random values place another portion of cirrus type cloud { randomtheta = 6.28319*Math.random(); randomphi = .7854*Math.random(); randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi); Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi); Y = randomradius*Math.cos(randomphi); randomt = new String(X+' '+Y+' '+Z); return randomt; } function rotation() // This random value is for the billboard rotation not used in this script { radians = 6.28*Math.random(); randomr = new String('0 0 1 ' + radians ); return randomr; } function cumulus() { maxi = 20; // number of clouds maxj = 5; // denotes how many portions affecting the size of the cloud maxk = 8; // number of billboards indicating cloud density sectionradius = 100; //radius of individual cloud sections for (var i=0; i < maxi; i++) { CloudStringA = ' Transform { \\n' + ' scale '+ cumulusscale() + ' \\n' + ' translation '+ cumulustranslation() + ' \\n' + // cloud placement ' children [ \\n'; CloudStringB = new Array(); CloudStringF = new Array(); for (var j=0; j < maxj; j++) { radius = 0; CloudStringB[j]= ' Transform { \\n' + ' translation '+ cumulussectiontranslation() + ' \\n' + // section placement ' children [ \\n'; CloudStringC = new Array(); image = new String(); for (var k=1; k < maxk; k++) // maxk value denotes how many textured billboards make up the cloud { randomtheta = 6.28319*Math.random(); randomphi = 1.57079*Math.random(); radius = radius+(sectionradius/maxk); // radius incremental steps based on billow radius and max billboards X = radius*Math.cos(randomtheta)*Math.sin(randomphi); Z = radius*Math.sin(randomtheta)*Math.sin(randomphi); Y = radius*Math.cos(randomphi); if (Y <= 30) //cloud shading and lighting control { image = ' \"CloudTexture1_5.png\"\"https://savage.nps.edu/Savage/Environment/Spheretexture.png\"\\n'; } else { image = ' \"CloudTexture1_4.png\"\"https://savage.nps.edu/Savage/Environment/Spheretexture.png\"\\n'; } Billboardtranslation = new String(X+' '+Y+' '+Z); CloudStringC[k] = ' Transform { \\n' + ' translation '+ Billboardtranslation + ' \\n' + // random billboard placement within radius designated above ' children [ \\n' + ' Billboard { \\n' + ' axisOfRotation 0 0 0 \\n' + // 0 0 0 designates rotation on all axis ' children [ \\n' + ' Transform { \\n' + ' rotation 0 0 0 0 \\n' + // a rotation of the individual billboards can be defined ' children [ \\n' + ' Shape { \\n' + ' appearance Appearance { \\n' + ' material Material { \\n' + ' } \\n' + ' texture ImageTexture { \\n' + ' url [ ' + image + ' ] \\n' + ' } \\n' + ' } \\n' + ' geometry IndexedFaceSet { \\n' + // define type of geometry to texture ' coordIndex [ 0, 1, 2, 3 ] \\n' + ' solid FALSE \\n' + ' coord Coordinate { \\n' + ' point [ 50 50 0, \\n' + // define size of the geometry. Here 100 meter 2D square. ' 50 -50 0, \\n' + ' -50 -50 0, \\n' + ' -50 50 0 ] \\n' + ' } \\n' + ' } \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n'; } CloudStringD = CloudStringC.join(' '); CloudStringE = ' ] \\n' + ' } \\n'; CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE; } CloudStringG = CloudStringF.join(' '); CloudStringH = ' ] \\n' + ' } \\n' + '######################################################### \\n'; CloudString = CloudStringA + CloudStringG + CloudStringH; newNode = Browser.createVrmlFromString(CloudString); Cumulus.children[i] = newNode[0]; } } function cirrus() { maxi = 2; // number of clouds maxj = 5; // denotes how many portions affecting the size of the cloud maxk = 8; // number of billboards indicating cloud density sectionradius = 1000; //radius of individual cloud sections for (var i=0; i < maxi; i++) { CloudStringA = ' Transform { \\n' + ' scale '+ cirrusscale() + ' \\n' + ' translation '+ cirrustranslation() + ' \\n' + // cloud placement ' children [ \\n'; CloudStringB = new Array(); CloudStringF = new Array(); for (var j=0; j < maxj; j++) { radius = 0; CloudStringB[j]= ' Transform { \\n' + ' translation '+ cirrussectiontranslation() + ' \\n' + // section placement ' children [ \\n'; CloudStringC = new Array(); for (var k=1; k < maxk; k++) // maxk value denotes how many textured billboards make up the cloud { randomtheta = 6.28319*Math.random(); randomphi = 1.57079*Math.random(); radius = radius+(sectionradius/maxk); // radius incremental steps based on section radius and max billboards X = radius*Math.cos(randomtheta)*Math.sin(randomphi); Z = radius*Math.sin(randomtheta)*Math.sin(randomphi); Y = radius*Math.cos(randomphi); Billboardtranslation = new String(X+' '+Y+' '+Z); CloudStringC[k] = ' Transform { \\n' + ' translation '+ Billboardtranslation + ' \\n' + // random billboard placement within radius designated above ' children [ \\n' + ' Billboard { \\n' + ' axisOfRotation 0 0 0 \\n' + // 0 0 0 designates rotation on all axis ' children [ \\n' + ' Transform { \\n' + ' rotation ' + rotation() + ' \\n' + ' children [ \\n' + ' Shape { \\n' + ' appearance Appearance { \\n' + ' material Material { \\n' + ' } \\n' + ' texture ImageTexture { \\n' + ' url [\"cloudtexture3.png\"\"https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png\"] \\n' + ' } \\n' + ' } \\n' + ' geometry IndexedFaceSet { \\n' + // define type of geometry to texture ' coordIndex [ 0, 1, 2, 3 ] \\n' + ' solid FALSE \\n' + ' coord Coordinate { \\n' + ' point [ 500 500 0, \\n' + // define size of the geometry. Here 100 meter 2D square. ' 500 -500 0, \\n' + ' -500 -500 0, \\n' + ' -500 500 0 ] \\n' + ' } \\n' + ' } \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n' + ' ] \\n' + ' } \\n'; } CloudStringD = CloudStringC.join(' '); CloudStringE = ' ] \\n' + ' } \\n'; CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE; } CloudStringG = CloudStringF.join(' '); CloudStringH = ' ] \\n' + ' } \\n' + '######################################################### \\n'; CloudString = CloudStringA + CloudStringG + CloudStringH; newNode = Browser.createVrmlFromString(CloudString); Cirrus.children[i] = newNode[0]; } } function initialize() { cumulus(); cirrus(); }\n"+
""))
          .addChild(new DirectionalLightObject().setAmbientIntensity(1f).setColor(new float[] {1f,0f,0f}).setDirection(new float[] {-1f,-1f,0f}).setGlobal(true))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MontereyBayLargeMesh.x3d".replaceAll("\"", "\\\""),"https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d".replaceAll("\"", "\\\""),"MontereyBayLargeMesh.wrl".replaceAll("\"", "\\\""),"https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ocean.png".replaceAll("\"", "\\\""),"https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Lighthouse.x3d".replaceAll("\"", "\\\""),"https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d".replaceAll("\"", "\\\""),"Lighthouse.wrl".replaceAll("\"", "\\\""),"https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl".replaceAll("\"", "\\\"")});
  }
}
}
