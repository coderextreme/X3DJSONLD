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
public class CaliforniaCampuses implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new CaliforniaCampuses().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/CaliforniaCampuses.new.java.x3d");
    model.toFileJSON("../data/CaliforniaCampuses.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Geospatial").setLevel(1))
        .addMeta(new meta().setName("title").setContent("CaliforniaCampuses.x3d"))
        .addMeta(new meta().setName("description").setContent("Viewpoints and tour of California campuses"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"))
        .addMeta(new meta().setName("created").setContent("4 March 2010"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("reference").setContent("CaliforniaCampuses.kml"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d-earth"))
        .addMeta(new meta().setName("reference").setContent("http://x3d-earth.nps.edu"))
        .addMeta(new meta().setName("reference").setContent("http://hamming.uc.nps.edu"))
        .addMeta(new meta().setName("subject").setContent("X3D Earth"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://mmog.ern.nps.edu/California/California.x3d"))
        .addMeta(new meta().setName("warning").setContent("under development"))
        .addMeta(new meta().setName("warning").setContent("mmog.ern.nps.edu restricted to internal access within NPS firewall only"))
        .addMeta(new meta().setName("generator").setContent("KmlToX3dViewpoints.xslt"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("https://savage.nps.edu/Savage/license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("CaliforniaCampuses.x3d"))
        .addChild(new Switch().setDEF("SwitchGlobes").setWhichChoice(0)
          .addComments("Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.")
          .addChild(new Inline().setUrl(new MFString0().getArray()))
          .addComments("<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>")
          .addComments("<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>")
          .addComments("<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>")
          .addComments("<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>"))
        .addChild(new NavigationInfo().setTransitionType(new MFString1().getArray()))
        .addChild(new Group().setDEF("PlacemarkGroup")
          .addChild(new GeoViewpoint().setDEF("View01").setDescription("Naval Postgraduate School").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {36.595599,-121.877148,250000}))
          .addChild(new GeoViewpoint().setDEF("View02").setDescription("University of California Davis").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {38.53650615157984,-121.7489628616831,250000}))
          .addChild(new GeoViewpoint().setDEF("View03").setDescription("University of California Berkeley").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {37.86963434512325,-122.2593873127355,250000}))
          .addChild(new GeoViewpoint().setDEF("View04").setDescription("University of California San Francisco").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {37.76340647188392,-122.4582475377715,250000}))
          .addChild(new GeoViewpoint().setDEF("View05").setDescription("University of California Santa Cruz").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {36.99628443046043,-122.0534325473795,250000}))
          .addChild(new GeoViewpoint().setDEF("View06").setDescription("University of California Merced").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {37.365508575977,-120.4252597059142,250000}))
          .addChild(new GeoViewpoint().setDEF("View07").setDescription("University of California Santa Barbara").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {34.41124450961521,-119.8479940053906,250000}))
          .addChild(new GeoViewpoint().setDEF("View08").setDescription("University of California Los Angeles").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {34.07224474392262,-118.4408472225642,250000}))
          .addChild(new GeoViewpoint().setDEF("View09").setDescription("University of California Irvine").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {33.64623283675919,-117.8427064139082,250000}))
          .addChild(new GeoViewpoint().setDEF("View10").setDescription("University of California Riverside").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {33.97350567066717,-117.3281649569839,250000}))
          .addChild(new GeoViewpoint().setDEF("View11").setDescription("University of California San Diego").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {32.87612136607509,-117.2367298240259,250000}))
          .addChild(new GeoViewpoint().setDEF("View12").setDescription("Humboldt State University").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {40.87630235623448,-124.0785789217266,250000}))
          .addChild(new GeoViewpoint().setDEF("View13").setDescription("California State University, Chico").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {39.73031527724385,-121.8453722745223,250000}))
          .addChild(new GeoViewpoint().setDEF("View14").setDescription("California State University Sacramento").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {38.5626517618963,-121.4244636520556,250000}))
          .addChild(new GeoViewpoint().setDEF("View15").setDescription("Sonoma State University").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {38.33922929793606,-122.6744333530031,250000}))
          .addChild(new GeoViewpoint().setDEF("View16").setDescription("California Maritime Academy").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {38.06907065059484,-122.2309147135222,250000}))
          .addChild(new GeoViewpoint().setDEF("View17").setDescription("San Francisco State University").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {37.722876,-122.4781512190666,250000}))
          .addChild(new GeoViewpoint().setDEF("View18").setDescription("California State University, East Bay").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {37.65707914139907,-122.0569190659761,250000}))
          .addChild(new GeoViewpoint().setDEF("View19").setDescription("California State University Stanislaus").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {37.52552478005697,-120.8563508560606,250000}))
          .addChild(new GeoViewpoint().setDEF("View20").setDescription("San Jose State University").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {37.33580940527095,-121.8815343755784,250000}))
          .addChild(new GeoViewpoint().setDEF("View21").setDescription("California State University, Monterey Bay").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {36.6538071781493,-121.7984465276711,250000}))
          .addChild(new GeoViewpoint().setDEF("View22").setDescription("Fresno State University").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {36.812166,-119.7451552005852,250000}))
          .addChild(new GeoViewpoint().setDEF("View23").setDescription("California State University, Bakersfield").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {35.350804,-119.1043226128032,250000}))
          .addChild(new GeoViewpoint().setDEF("View24").setDescription("California Polytechnic State University").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {35.30115692599171,-120.6595761796351,250000}))
          .addChild(new GeoViewpoint().setDEF("View25").setDescription("California State University, Channel Islands").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {34.1624126428852,-119.0425264841287,250000}))
          .addChild(new GeoViewpoint().setDEF("View26").setDescription("California State University, Northridge").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {34.23959265263849,-118.5284272400904,250000}))
          .addChild(new GeoViewpoint().setDEF("View27").setDescription("California State University, Los Angeles").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {34.06645996626264,-118.1682050902557,250000}))
          .addChild(new GeoViewpoint().setDEF("View28").setDescription("California State Polytechnic University, Pomona").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {34.05727150000314,-117.8215320234812,250000}))
          .addChild(new GeoViewpoint().setDEF("View29").setDescription("California State University, San Bernardino").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {34.18180116432101,-117.3243676664719,250000}))
          .addChild(new GeoViewpoint().setDEF("View30").setDescription("California State University, Fullerton").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {33.882522,-117.8868367869023,250000}))
          .addChild(new GeoViewpoint().setDEF("View31").setDescription("California State University Dominguez Hills").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {33.86463396857103,-118.2553596272055,250000}))
          .addChild(new GeoViewpoint().setDEF("View32").setDescription("California State University, Long Beach").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {33.78196696470824,-118.112678253688,250000}))
          .addChild(new GeoViewpoint().setDEF("View33").setDescription("California State University, San Marcos").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {33.12837619265174,-117.1600194071002,250000}))
          .addChild(new GeoViewpoint().setDEF("View34").setDescription("San Diego State University").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {32.77593126586385,-117.0722876242553,250000}))
          .addChild(new GeoViewpoint().setDEF("View35").setDescription("CENIC").setOrientation(new double[] {1,0,0,-1.57}).setPosition(new double[] {33.879947,-118.027903,250000})))
        .addComments("====================")
        .addChild(new ExternProtoDeclare().setName("CrossHair").setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point").setUrl(new MFString2().getArray())
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether CrossHair prototype is enabled or not"))
          .addField(new field().setType("SFBool").setName("set_enabled").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("control whether enabled/disabled"))
          .addField(new field().setType("SFColor").setName("markerColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of CrossHair marker"))
          .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("size of CrossHair in meters"))
          .addField(new field().setType("SFVec3f").setName("positionOffsetFromCamera").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("distance in front of HUD viewpoint")))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("CrossHair").setDEF("CrossHairInstance"))
        .addComments("====================")
        .addChild(new ExternProtoDeclare().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new MFString3().getArray())
          .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
          .addField(new field().setType("SFVec3f").setName("screenOffset").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
          .addField(new field().setType("SFVec3f").setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
          .addField(new field().setType("SFRotation").setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
        .addComments("====================")
        .addChild(new ExternProtoDeclare().setName("ViewpointSequencer").setAppinfo("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene").setUrl(new MFString4().getArray())
          .addField(new field().setType("MFNode").setName("viewpoints").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Viewpoint USE nodes that are sequentially bound"))
          .addField(new field().setType("SFTime").setName("interval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("number of seconds between viewpoint shifts"))
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether ViewpointSequencer is enabled or not"))
          .addField(new field().setType("SFBool").setName("set_enabled").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("whether ViewpointSequencer is enabled or not"))
          .addField(new field().setType("SFBool").setName("previous").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("bind previous Viewpoint in list"))
          .addField(new field().setType("SFBool").setName("next").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("bind next Viewpoint in list"))
          .addField(new field().setType("MFString").setName("toggleMessage").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Select message to toggle ViewpointSequencer"))
          .addField(new field().setType("SFFloat").setName("toggleMessageFontSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Color for toggleMessage text"))
          .addField(new field().setType("SFColor").setName("toggleMessageColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color for toggleMessage text"))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("enable console output")))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("ViewpointSequencer").setDEF("ViewpointTour")
          .addComments("initially enabled is off, scene provides selectable text to activate"))
        .addComments("====================")
        .addChild(new GeoLocation().setGeoCoords(new double[] {36.595599,-121.877148,624990})
          .addChild(new Billboard().setAxisOfRotation(new double[] {0,0,0})
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString5().getArray())
                .setFontStyle(new FontStyle().setJustify(new MFString6().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.25).setDiffuseColor(new double[] {0.795918,0.505869,0.093315}).setShininess(0.39).setSpecularColor(new double[] {0.923469,0.428866,0.006369})))))
          .addChild(new TouchSensor().setDEF("TourTouch").setDescription("Touch text to turn tour on/off"))
          .addChild(new BooleanToggle().setDEF("TourToggle"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("TourTouch").setToField("set_boolean").setToNode("TourToggle"))
          .addChild(new ROUTE().setFromField("toggle").setFromNode("TourToggle").setToField("set_enabled").setToNode("ViewpointTour")))
        .addComments("====================")
        .addChild(new ExternProtoDeclare().setName("ViewPositionOrientation").setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates").setUrl(new MFString7().getArray())
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not ViewPositionOrientation sends output to console"))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output internal trace messages for debugging this node, intended for developer use only"))
          .addField(new field().setType("SFBool").setName("set_traceEnabled").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Ability to turn output tracing on/off at runtime"))
          .addField(new field().setType("SFVec3f").setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local position"))
          .addField(new field().setType("SFRotation").setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local orientation"))
          .addField(new field().setType("MFString").setName("outputViewpointString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("MFString value of new Viewpoint")))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("ViewPositionOrientation").setDEF("ExampleViewPositionOrientation"))
        .addComments("===================="))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("markerColor").setValue("0.1 0.8 0.1"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("scale").setValue("0.5 0.5 0.5"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("positionOffsetFromCamera").setValue("0 0 -5"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("interval").setValue("30"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("toggleMessage").setValue("\"ViewpointSequencer tour\""));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("viewpoints")
            .addChild(new GeoViewpoint().setUSE("View01"))
            .addChild(new GeoViewpoint().setUSE("View02"))
            .addChild(new GeoViewpoint().setUSE("View03"))
            .addChild(new GeoViewpoint().setUSE("View04"))
            .addChild(new GeoViewpoint().setUSE("View05"))
            .addChild(new GeoViewpoint().setUSE("View06"))
            .addChild(new GeoViewpoint().setUSE("View07"))
            .addChild(new GeoViewpoint().setUSE("View08"))
            .addChild(new GeoViewpoint().setUSE("View09"))
            .addChild(new GeoViewpoint().setUSE("View10"))
            .addChild(new GeoViewpoint().setUSE("View11"))
            .addChild(new GeoViewpoint().setUSE("View12"))
            .addChild(new GeoViewpoint().setUSE("View13"))
            .addChild(new GeoViewpoint().setUSE("View14"))
            .addChild(new GeoViewpoint().setUSE("View15"))
            .addChild(new GeoViewpoint().setUSE("View16"))
            .addChild(new GeoViewpoint().setUSE("View17"))
            .addChild(new GeoViewpoint().setUSE("View18"))
            .addChild(new GeoViewpoint().setUSE("View19"))
            .addChild(new GeoViewpoint().setUSE("View20"))
            .addChild(new GeoViewpoint().setUSE("View21"))
            .addChild(new GeoViewpoint().setUSE("View22"))
            .addChild(new GeoViewpoint().setUSE("View23"))
            .addChild(new GeoViewpoint().setUSE("View24"))
            .addChild(new GeoViewpoint().setUSE("View25"))
            .addChild(new GeoViewpoint().setUSE("View26"))
            .addChild(new GeoViewpoint().setUSE("View27"))
            .addChild(new GeoViewpoint().setUSE("View28"))
            .addChild(new GeoViewpoint().setUSE("View29"))
            .addChild(new GeoViewpoint().setUSE("View30"))
            .addChild(new GeoViewpoint().setUSE("View31"))
            .addChild(new GeoViewpoint().setUSE("View32"))
            .addChild(new GeoViewpoint().setUSE("View33"))
            .addChild(new GeoViewpoint().setUSE("View34"))
            .addChild(new GeoViewpoint().setUSE("View35"))
            .addChild(new Viewpoint().setDEF("View4").setDescription("View four (-X axis)").setOrientation(new double[] {0,1,0,-1.57}).setPosition(new double[] {-10,0,0})));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("enabled").setValue("false"));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"http://x3d-earth.nps.edu/osmdemo.x3d"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ANIMATE"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ViewpointSequencer tour"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"});
  }
}
}
