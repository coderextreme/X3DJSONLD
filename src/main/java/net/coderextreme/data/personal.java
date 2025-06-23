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
    model.toFileJSON("../data/personal.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("personal.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://someAddress/somePath/personal.x3d"))
        .addMeta(new meta().setName("description").setContent("John's Portfolio"))
        .addMeta(new meta().setName("generator").setContent("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Tour Views").setPosition(new double[] {0,0,12}))
        .addChild(new Switch().setDEF("SceneSwitcher").setWhichChoice(0)
          .addComments("<Inline url='\"../data/myextrusion.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d\"'/> <Inline url='\"../data/ballx_ite.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d\"'/> <Inline url='\"../data/flower.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d\"'/> <Inline url='\"../data/flower3.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d\"'/> <Inline url='\"../data/flowers.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d\"'/> <Inline url='\"../data/flowers2.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d\"'/> <Inline url='\"../data/flowers4.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d\"'/> <Inline url='\"../data/flowers7.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d\"'/>")
          .addChild(new Inline().setUrl(new MFString0().getArray())))
        .addComments("<Script DEF=\"Choice0\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]> </Script> <Transform translation=\"0 4 0\"> <TouchSensor description=\"Ball Prism\" DEF=\"BallPrism_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Ball Prism\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"BallPrism_Sensor\" fromField=\"touchTime\" toNode=\"Choice0\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice0\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice1\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]> </Script> <Transform translation=\"0 3 0\"> <TouchSensor description=\"Floating Extrusion\" DEF=\"FloatingExtrusion_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Floating Extrusion\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"FloatingExtrusion_Sensor\" fromField=\"touchTime\" toNode=\"Choice1\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice1\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice2\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]> </Script> <Transform translation=\"0 2 0\"> <TouchSensor description=\"Flower\" DEF=\"Flower_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flower\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flower_Sensor\" fromField=\"touchTime\" toNode=\"Choice2\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice2\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice3\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]> </Script> <Transform translation=\"0 1 0\"> <TouchSensor description=\"Flower 3\" DEF=\"Flower3_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flower 3\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flower3_Sensor\" fromField=\"touchTime\" toNode=\"Choice3\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice3\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice4\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]> </Script> <Transform translation=\"0 0 0\"> <TouchSensor description=\"Flowers\" DEF=\"Flowers_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers_Sensor\" fromField=\"touchTime\" toNode=\"Choice4\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice4\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice5\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]> </Script> <Transform translation=\"0 -1 0\"> <TouchSensor description=\"Flowers 2\" DEF=\"Flowers2_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers 2\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers2_Sensor\" fromField=\"touchTime\" toNode=\"Choice5\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice5\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice6\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]> </Script> <Transform translation=\"0 -2 0\"> <TouchSensor description=\"Flowers 4\" DEF=\"Flowers4_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers 4\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers4_Sensor\" fromField=\"touchTime\" toNode=\"Choice6\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice6\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice7\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]> </Script> <Transform translation=\"0 -3 0\"> <TouchSensor description=\"Flowers 7 Inner Brow Raiser\" DEF=\"Flowers7_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers 7\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers7_Sensor\" fromField=\"touchTime\" toNode=\"Choice7\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice7\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice8\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]> </Script> <Transform translation=\"0 -4 0\"> <TouchSensor description=\"Force\" DEF=\"Force_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Force\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Force_Sensor\" fromField=\"touchTime\" toNode=\"Choice8\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice8\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/force-tidy.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"});
  }
}
}
