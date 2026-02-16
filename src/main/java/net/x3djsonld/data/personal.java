package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> John's Portfolio. </p>
 <p> Related links:  source personal.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.personal&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://someAddress/somePath/personal.x3d">personal.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://someAddress/somePath/personal.x3d" target="_blank">https://someAddress/somePath/personal.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> John's Portfolio </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> vim and X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

 */

public class personal
{
	/** Default constructor to create this object. */
	public personal ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("personal.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://someAddress/somePath/personal.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("John's Portfolio"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Tour Views").setPosition(0.0,0.0,12.0))
    .addChild(new Switch("SceneSwitcher").setWhichChoice(0)
      .addComments(" <Inline url='\"../data/myextrusion.x3d\"  \"https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d\"'/> ")
      .addComments(" <Inline url='\"../data/ballx_ite.x3d\"  \"https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d\"'/> ")
      .addComments(" <Inline url='\"../data/flower.x3d\"     \"https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d\"'/> ")
      .addComments(" <Inline url='\"../data/flower3.x3d\"    \"https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d\"'/> ")
      .addComments(" <Inline url='\"../data/flowers.x3d\"    \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d\"'/> ")
      .addComments(" <Inline url='\"../data/flowers2.x3d\"   \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d\"'/> ")
      .addComments(" <Inline url='\"../data/flowers4.x3d\"   \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d\"'/> ")
      .addComments(" <Inline url='\"../data/flowers7.x3d\"   \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d\"'/> ")
      .addChild(new Inline().setUrl(new String[] {"../data/force-tidy.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"})))
    .addComments(" <Script DEF=\"Choice0\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 4 0\"> ")
    .addComments(" <TouchSensor description=\"Ball Prism\" DEF=\"BallPrism_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Ball Prism\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"BallPrism_Sensor\" fromField=\"touchTime\" toNode=\"Choice0\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice0\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice1\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 3 0\"> ")
    .addComments(" <TouchSensor description=\"Floating Extrusion\" DEF=\"FloatingExtrusion_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Floating Extrusion\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"FloatingExtrusion_Sensor\" fromField=\"touchTime\" toNode=\"Choice1\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice1\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice2\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 2 0\"> ")
    .addComments(" <TouchSensor description=\"Flower\" DEF=\"Flower_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Flower\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"Flower_Sensor\" fromField=\"touchTime\" toNode=\"Choice2\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice2\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice3\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 1 0\"> ")
    .addComments(" <TouchSensor description=\"Flower 3\" DEF=\"Flower3_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Flower 3\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"Flower3_Sensor\" fromField=\"touchTime\" toNode=\"Choice3\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice3\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice4\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform> ")
    .addComments(" <TouchSensor description=\"Flowers\" DEF=\"Flowers_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Flowers\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"Flowers_Sensor\" fromField=\"touchTime\" toNode=\"Choice4\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice4\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice5\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 -1 0\"> ")
    .addComments(" <TouchSensor description=\"Flowers 2\" DEF=\"Flowers2_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Flowers 2\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"Flowers2_Sensor\" fromField=\"touchTime\" toNode=\"Choice5\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice5\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice6\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 -2 0\"> ")
    .addComments(" <TouchSensor description=\"Flowers 4\" DEF=\"Flowers4_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Flowers 4\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"Flowers4_Sensor\" fromField=\"touchTime\" toNode=\"Choice6\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice6\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice7\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 -3 0\"> ")
    .addComments(" <TouchSensor description=\"Flowers 7 Inner Brow Raiser\" DEF=\"Flowers7_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Flowers 7\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"Flowers7_Sensor\" fromField=\"touchTime\" toNode=\"Choice7\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice7\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> ")
    .addComments(" <Script DEF=\"Choice8\"> ")
    .addComments(" <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> ")
    .addComments(" <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> ")
    .addComments(" <![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]> ")
    .addComments(" </Script> ")
    .addComments(" <Transform translation=\"0 -4 0\"> ")
    .addComments(" <TouchSensor description=\"Force\" DEF=\"Force_Sensor\"/> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"1 1 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <Text string='\"Force\"'> ")
    .addComments(" <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> ")
    .addComments(" </Text> ")
    .addComments(" </Shape> ")
    .addComments(" <Shape> ")
    .addComments(" <Appearance> ")
    .addComments(" <Material diffuseColor=\"0 0 1\"/> ")
    .addComments(" </Appearance> ")
    .addComments(" <IndexedFaceSet coordIndex='0 1 2 3 -1'> ")
    .addComments(" <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> ")
    .addComments(" </IndexedFaceSet> ")
    .addComments(" </Shape> ")
    .addComments(" </Transform> ")
    .addComments(" <ROUTE fromNode=\"Force_Sensor\" fromField=\"touchTime\" toNode=\"Choice8\" toField=\"touchTime\"/> ")
    .addComments(" <ROUTE fromNode=\"Choice8\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> "));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return personal model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
     * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new personal().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
        boolean hasArguments = (args != null) && (args.length > 0);
        boolean validate = true; // default
        boolean argumentsLoadNewModel = false;
        String  fileName = new String();

        if (args != null)
        {
                for (String arg : args)
                {
                        if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
                        {
                                validate = true; // making sure
                        }
                        if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
                        {
                                argumentsLoadNewModel = true;
                                fileName = arg;
                        }
                }
        }
        if      (argumentsLoadNewModel)
                System.out.println("WARNING: \"net.x3djsonld.data.personal\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.personal self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./personal_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./personal_JavaExport.x3d"; 
                String filenameX3DV = "./personal_JavaExport.x3dv"; 
                String filenameJSON = "./personal_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
