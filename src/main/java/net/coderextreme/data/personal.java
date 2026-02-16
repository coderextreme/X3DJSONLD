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
public class personal implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new personal().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/personal.new.java.x3d");
    model.toFileJSON("../data/personal.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Full")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("personal.x3d")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://someAddress/somePath/personal.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("John's Portfolio")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit"))))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription(new SFString("Tour Views")).setPosition(new float[] {0f ,0f ,12f }))
        .addChild(new Switch().setDEF(new SFString("SceneSwitcher")).setWhichChoice(0)
          .addComments(new CommentsBlock("<Inline url='\"../data/myextrusion.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline url='\"../data/ballx_ite.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline url='\"../data/flower.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline url='\"../data/flower3.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline url='\"../data/flowers.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline url='\"../data/flowers2.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline url='\"../data/flowers4.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d\"'/>"))
          .addComments(new CommentsBlock("<Inline url='\"../data/flowers7.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d\"'/>"))
          .addChild(new Inline().setUrl(new MFString0().getArray())))
        .addComments(new CommentsBlock("<Script DEF=\"Choice0\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 4 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Ball Prism\" DEF=\"BallPrism_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Ball Prism\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"BallPrism_Sensor\" fromField=\"touchTime\" toNode=\"Choice0\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice0\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice1\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 3 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Floating Extrusion\" DEF=\"FloatingExtrusion_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Floating Extrusion\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"FloatingExtrusion_Sensor\" fromField=\"touchTime\" toNode=\"Choice1\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice1\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice2\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 2 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Flower\" DEF=\"Flower_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Flower\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Flower_Sensor\" fromField=\"touchTime\" toNode=\"Choice2\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice2\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice3\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 1 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Flower 3\" DEF=\"Flower3_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Flower 3\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Flower3_Sensor\" fromField=\"touchTime\" toNode=\"Choice3\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice3\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice4\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform>"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Flowers\" DEF=\"Flowers_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Flowers\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Flowers_Sensor\" fromField=\"touchTime\" toNode=\"Choice4\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice4\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice5\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 -1 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Flowers 2\" DEF=\"Flowers2_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Flowers 2\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Flowers2_Sensor\" fromField=\"touchTime\" toNode=\"Choice5\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice5\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice6\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 -2 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Flowers 4\" DEF=\"Flowers4_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Flowers 4\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Flowers4_Sensor\" fromField=\"touchTime\" toNode=\"Choice6\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice6\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice7\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 -3 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Flowers 7 Inner Brow Raiser\" DEF=\"Flowers7_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Flowers 7\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Flowers7_Sensor\" fromField=\"touchTime\" toNode=\"Choice7\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice7\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))
        .addComments(new CommentsBlock("<Script DEF=\"Choice8\">"))
        .addComments(new CommentsBlock("<field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>"))
        .addComments(new CommentsBlock("<field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>"))
        .addComments(new CommentsBlock("<![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]>"))
        .addComments(new CommentsBlock("</Script>"))
        .addComments(new CommentsBlock("<Transform translation=\"0 -4 0\">"))
        .addComments(new CommentsBlock("<TouchSensor description=\"Force\" DEF=\"Force_Sensor\"/>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"1 1 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<Text string='\"Force\"'>"))
        .addComments(new CommentsBlock("<FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>"))
        .addComments(new CommentsBlock("</Text>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("<Shape>"))
        .addComments(new CommentsBlock("<Appearance>"))
        .addComments(new CommentsBlock("<Material diffuseColor=\"0 0 1\"/>"))
        .addComments(new CommentsBlock("</Appearance>"))
        .addComments(new CommentsBlock("<IndexedFaceSet coordIndex='0 1 2 3 -1'>"))
        .addComments(new CommentsBlock("<Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>"))
        .addComments(new CommentsBlock("</IndexedFaceSet>"))
        .addComments(new CommentsBlock("</Shape>"))
        .addComments(new CommentsBlock("</Transform>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Force_Sensor\" fromField=\"touchTime\" toNode=\"Choice8\" toField=\"touchTime\"/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode=\"Choice8\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/force-tidy.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"});
  }
}
}
