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
    model.toFileJSON("../data/CaliforniaCampuses.new.java.x3dj");
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
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("Geospatial")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("CaliforniaCampuses.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Viewpoints and tour of California campuses")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("4 March 2010")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("20 October 2019")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("CaliforniaCampuses.kml")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/x3d-earth")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://x3d-earth.nps.edu")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://hamming.uc.nps.edu")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("X3D Earth")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://mmog.ern.nps.edu/California/California.x3d")))
        .addMeta(new meta().setName(new SFString("warning")).setContent(new SFString("under development")))
        .addMeta(new meta().setName(new SFString("warning")).setContent(new SFString("mmog.ern.nps.edu restricted to internal access within NPS firewall only")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("KmlToX3dViewpoints.xslt")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("https://savage.nps.edu/Savage/license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("CaliforniaCampuses.x3d")))
        .addChild(new Switch().setDEF(new SFString("SwitchGlobes")).setWhichChoice(0)
          .addComments(new CommentsBlock("Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching."))
          .addChild(new Inline().setUrl(new MFString0().getArray()))
          .addComments(new CommentsBlock("<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>")))
        .addChild(new NavigationInfo().setTransitionType(new MFString1().getArray()))
        .addChild(new Group().setDEF(new SFString("PlacemarkGroup"))
          .addChild(new GeoViewpoint().setDEF(new SFString("View01")).setDescription(new SFString("Naval Postgraduate School")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {36.595599d,-121.877148d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View02")).setDescription(new SFString("University of California Davis")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {38.53650615157984d,-121.7489628616831d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View03")).setDescription(new SFString("University of California Berkeley")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {37.86963434512325d,-122.2593873127355d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View04")).setDescription(new SFString("University of California San Francisco")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {37.76340647188392d,-122.4582475377715d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View05")).setDescription(new SFString("University of California Santa Cruz")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {36.99628443046043d,-122.0534325473795d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View06")).setDescription(new SFString("University of California Merced")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {37.365508575977d,-120.4252597059142d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View07")).setDescription(new SFString("University of California Santa Barbara")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {34.41124450961521d,-119.8479940053906d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View08")).setDescription(new SFString("University of California Los Angeles")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {34.07224474392262d,-118.4408472225642d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View09")).setDescription(new SFString("University of California Irvine")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {33.64623283675919d,-117.8427064139082d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View10")).setDescription(new SFString("University of California Riverside")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {33.97350567066717d,-117.3281649569839d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View11")).setDescription(new SFString("University of California San Diego")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {32.87612136607509d,-117.2367298240259d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View12")).setDescription(new SFString("Humboldt State University")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {40.87630235623448d,-124.0785789217266d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View13")).setDescription(new SFString("California State University, Chico")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {39.73031527724385d,-121.8453722745223d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View14")).setDescription(new SFString("California State University Sacramento")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {38.5626517618963d,-121.4244636520556d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View15")).setDescription(new SFString("Sonoma State University")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {38.33922929793606d,-122.6744333530031d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View16")).setDescription(new SFString("California Maritime Academy")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {38.06907065059484d,-122.2309147135222d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View17")).setDescription(new SFString("San Francisco State University")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {37.722876d,-122.4781512190666d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View18")).setDescription(new SFString("California State University, East Bay")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {37.65707914139907d,-122.0569190659761d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View19")).setDescription(new SFString("California State University Stanislaus")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {37.52552478005697d,-120.8563508560606d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View20")).setDescription(new SFString("San Jose State University")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {37.33580940527095d,-121.8815343755784d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View21")).setDescription(new SFString("California State University, Monterey Bay")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {36.6538071781493d,-121.7984465276711d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View22")).setDescription(new SFString("Fresno State University")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {36.812166d,-119.7451552005852d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View23")).setDescription(new SFString("California State University, Bakersfield")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {35.350804d,-119.1043226128032d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View24")).setDescription(new SFString("California Polytechnic State University")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {35.30115692599171d,-120.6595761796351d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View25")).setDescription(new SFString("California State University, Channel Islands")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {34.1624126428852d,-119.0425264841287d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View26")).setDescription(new SFString("California State University, Northridge")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {34.23959265263849d,-118.5284272400904d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View27")).setDescription(new SFString("California State University, Los Angeles")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {34.06645996626264d,-118.1682050902557d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View28")).setDescription(new SFString("California State Polytechnic University, Pomona")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {34.05727150000314d,-117.8215320234812d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View29")).setDescription(new SFString("California State University, San Bernardino")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {34.18180116432101d,-117.3243676664719d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View30")).setDescription(new SFString("California State University, Fullerton")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {33.882522d,-117.8868367869023d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View31")).setDescription(new SFString("California State University Dominguez Hills")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {33.86463396857103d,-118.2553596272055d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View32")).setDescription(new SFString("California State University, Long Beach")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {33.78196696470824d,-118.112678253688d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View33")).setDescription(new SFString("California State University, San Marcos")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {33.12837619265174d,-117.1600194071002d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View34")).setDescription(new SFString("San Diego State University")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {32.77593126586385d,-117.0722876242553d,250000d}))
          .addChild(new GeoViewpoint().setDEF(new SFString("View35")).setDescription(new SFString("CENIC")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new double[] {33.879947d,-118.027903d,250000d})))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ExternProtoDeclare().setName(new SFString("CrossHair")).setAppinfo(new SFString("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point")).setUrl(new MFString2().getArray())
          .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("whether CrossHair prototype is enabled or not")))
          .addField(new field().setType("SFBool").setName(new SFString("set_enabled")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("control whether enabled/disabled")))
          .addField(new field().setType("SFColor").setName(new SFString("markerColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("color of CrossHair marker")))
          .addField(new field().setType("SFVec3f").setName(new SFString("scale")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("size of CrossHair in meters")))
          .addField(new field().setType("SFVec3f").setName(new SFString("positionOffsetFromCamera")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("distance in front of HUD viewpoint"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("CrossHair")).setDEF(new SFString("CrossHairInstance")))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ExternProtoDeclare().setName(new SFString("HeadsUpDisplay")).setAppinfo(new SFString("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location")).setUrl(new MFString3().getArray())
          .addField(new field().setType("MFNode").setName(new SFString("children")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("X3D content positioned at HUD offset")))
          .addField(new field().setType("SFVec3f").setName(new SFString("screenOffset")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("offset position for HUD relative to current view location, default 0 0 -5")))
          .addField(new field().setType("SFVec3f").setName(new SFString("position_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("HUD position update (in world coordinates) relative to original location")))
          .addField(new field().setType("SFRotation").setName(new SFString("orientation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("HUD orientation update relative to original location"))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ExternProtoDeclare().setName(new SFString("ViewpointSequencer")).setAppinfo(new SFString("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene")).setUrl(new MFString4().getArray())
          .addField(new field().setType("MFNode").setName(new SFString("viewpoints")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("Viewpoint USE nodes that are sequentially bound")))
          .addField(new field().setType("SFTime").setName(new SFString("interval")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("number of seconds between viewpoint shifts")))
          .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("whether ViewpointSequencer is enabled or not")))
          .addField(new field().setType("SFBool").setName(new SFString("set_enabled")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("whether ViewpointSequencer is enabled or not")))
          .addField(new field().setType("SFBool").setName(new SFString("previous")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("bind previous Viewpoint in list")))
          .addField(new field().setType("SFBool").setName(new SFString("next")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("bind next Viewpoint in list")))
          .addField(new field().setType("MFString").setName(new SFString("toggleMessage")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("Select message to toggle ViewpointSequencer")))
          .addField(new field().setType("SFFloat").setName(new SFString("toggleMessageFontSize")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("Color for toggleMessage text")))
          .addField(new field().setType("SFColor").setName(new SFString("toggleMessageColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("Color for toggleMessage text")))
          .addField(new field().setType("SFBool").setName(new SFString("traceEnabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("enable console output"))))
        .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("ViewpointSequencer")).setDEF(new SFString("ViewpointTour"))
          .addComments(new CommentsBlock("initially enabled is off, scene provides selectable text to activate")))
        .addComments(new CommentsBlock("===================="))
        .addChild(new GeoLocation().setGeoCoords(new double[] {36.595599d,-121.877148d,624990d})
          .addChild(new Billboard().setAxisOfRotation(new float[] {0f ,0f ,0f })
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString5().getArray())
                .setFontStyle(new FontStyle().setJustify(new MFString6().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.25f ).setDiffuseColor(new float[] {0.795918f ,0.505869f ,0.093315f }).setShininess(0.39f ).setSpecularColor(new float[] {0.923469f ,0.428866f ,0.006369f })))))
          .addChild(new TouchSensor().setDEF(new SFString("TourTouch")).setDescription(new SFString("Touch text to turn tour on/off")))
          .addChild(new BooleanToggle().setDEF(new SFString("TourToggle")))
          .addChild(new ROUTE().setFromField(new SFString("isActive")).setFromNode(new SFString("TourTouch")).setToField(new SFString("set_boolean")).setToNode(new SFString("TourToggle")))
          .addChild(new ROUTE().setFromField(new SFString("toggle")).setFromNode(new SFString("TourToggle")).setToField(new SFString("set_enabled")).setToNode(new SFString("ViewpointTour"))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ExternProtoDeclare().setName(new SFString("ViewPositionOrientation")).setAppinfo(new SFString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")).setUrl(new MFString7().getArray())
          .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("Whether or not ViewPositionOrientation sends output to console")))
          .addField(new field().setType("SFBool").setName(new SFString("traceEnabled")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("Output internal trace messages for debugging this node, intended for developer use only")))
          .addField(new field().setType("SFBool").setName(new SFString("set_traceEnabled")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("Ability to turn output tracing on/off at runtime")))
          .addField(new field().setType("SFVec3f").setName(new SFString("position_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("Output local position")))
          .addField(new field().setType("SFRotation").setName(new SFString("orientation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("Output local orientation")))
          .addField(new field().setType("MFString").setName(new SFString("outputViewpointString")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("MFString value of new Viewpoint"))))
        .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("ViewPositionOrientation")).setDEF(new SFString("ExampleViewPositionOrientation")))
        .addComments(new CommentsBlock("====================")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("markerColor")).setValue(new SFString("0.1 0.8 0.1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("scale")).setValue(new SFString("0.5 0.5 0.5")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("positionOffsetFromCamera")).setValue(new SFString("0 0 -5")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("interval")).setValue(new SFString("30")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("true")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("toggleMessage")).setValue(new SFString("\"ViewpointSequencer tour\"")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName(new SFString("viewpoints"))
            .addChild(new GeoViewpoint().setUSE(new SFString("View01")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View02")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View03")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View04")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View05")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View06")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View07")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View08")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View09")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View10")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View11")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View12")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View13")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View14")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View15")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View16")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View17")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View18")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View19")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View20")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View21")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View22")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View23")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View24")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View25")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View26")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View27")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View28")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View29")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View30")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View31")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View32")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View33")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View34")))
            .addChild(new GeoViewpoint().setUSE(new SFString("View35")))
            .addChild(new Viewpoint().setDEF(new SFString("View4")).setDescription(new SFString("View four (-X axis)")).setOrientation(new float[] {0f ,1f ,0f ,-1.57f }).setPosition(new float[] {-10f ,0f ,0f })));
ProtoInstance2
          .addFieldValue(new fieldValue().setName(new SFString("enabled")).setValue(new SFString("false")));
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
