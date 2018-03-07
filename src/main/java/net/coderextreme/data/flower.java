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
public class flower {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new flower().initialize().toFileJSON("../data/flower.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","ANY"}))
        .addChild(new DirectionalLightObject().setDirection(new float[] {0f,-0.8f,-0.2f}).setIntensity(0.5f))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new ViewpointObject().setDescription("One mathematical orbital").setPosition(new float[] {0f,0f,50f}))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-1f,1f}).setRotation(new float[] {0f,1f,0f,3.1415926f}).setScale(new float[] {1.5f,1.5f,1.5f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.1f).setDiffuseColor(new float[] {0.9f,0.3f,0.3f}).setSpecularColor(new float[] {0.8f,0.8f,0.8f}).setShininess(0.145f)))
            .setGeometry(new IndexedFaceSetObject().setCcw(false).setConvex(false).setCoordIndex(new MFInt32Object(new MFInt321().getArray())).setCreaseAngle(0f).setDEF("ifs").setSolid(true)
              .setCoord(new CoordinateObject().setDEF("crd").setPoint(new MFVec3fObject(new MFVec3f2().getArray()))))))
        .addChild(new ScriptObject().setDEF("FlowerScript")
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
          .addField(new fieldObject().setType("MFVec3f").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordinates"))
          .addField(new fieldObject().setType("MFInt32").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordIndexes"))
          .setSourceCode("ecmascript:
    
var e = 5;
var f = 5;
var g = 5;
var h = 5;
var resolution = 150;
var t = 0;
var p = 0;

function initialize() {
     var localci = new Array();
     var ci = 0;
     var buf = [];
     for (var i = 0; i < resolution-1; i++) {
     	for (var j = 0; j < resolution-1; j++) {
	     localci[ci] = i*resolution+j;
	     localci[ci+1] = i*resolution+j+1;
	     localci[ci+2] = (i+1)*resolution+j+1;
	     localci[ci+3] = (i+1)*resolution+j;
	     localci[ci+4] = -1;
	     buf.push(localci[ci]);
	     buf.push(localci[ci+1]);
	     buf.push(localci[ci+3]);
	     buf.push(localci[ci+4]);

	     buf.push(localci[ci+1]);
	     buf.push(localci[ci+2]);
	     buf.push(localci[ci+3]);
	     buf.push(localci[ci+4]);
	     ci += 5;
	}
    }
    updateCoordinates(resolution);
    coordIndexes = new x3dom.fields.MFInt32(buf);
}

function updateCoordinates(resolution) {
     theta = 0.0;
     phi = 0.0;
     delta = (2 * 3.141592653) / (resolution-1);
     var buf = [];
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		rho = e + f * Math.cos(g * theta + t) * Math.cos(h * phi + p);
		var coord = new x3dom.fields.SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
	     	buf.push(coord);
		theta += delta;
	}
	phi += delta;
     }
     coordinates = new x3dom.fields.MFVec3f(buf);
}

function set_fraction() {
	choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	t += 0.5;
	p += 0.5;
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	updateCoordinates(resolution);
}
\n"+
""))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(16d).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordIndexes").setToNode("ifs").setToField("coordIndex"))
        .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordinates").setToNode("crd").setToField("point"))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("FlowerScript").setToField("set_fraction")))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,1f,0f,1f,0f,0f});
  }
}
}
