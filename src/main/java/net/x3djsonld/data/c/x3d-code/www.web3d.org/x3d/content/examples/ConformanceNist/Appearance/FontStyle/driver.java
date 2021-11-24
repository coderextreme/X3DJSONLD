package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test all possible combinations of "horizontal", "justify", "leftToRight" and "topToBottom" for major and minor Text axes. The viewer can select any combination of buttons and verify the correct Text orientation and spacing using the example images to the left of the browser window. </p>
 <p> Related links: <a href="../../../../Appearance/FontStyle/driver.java">driver.java</a> source, <a href="../../../../Appearance/FontStyle/driverIndex.html" target="_top">driver catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Appearance/FontStyle/driver.x3d">driver.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/vrml.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/members.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/members.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> disclaimer </i> </td>
			<td> This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, <a href="https://www.web3d.org/working-groups/x3d" target="_blank">https://www.web3d.org/working-groups/x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Michael Kass NIST, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 21 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3dForWebAuthorsTextFontStyleFigure2.11.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3dForWebAuthorsTextFontStyleFigure2.12.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test all possible combinations of "horizontal", "justify", "leftToRight" and "topToBottom" for major and minor Text axes. The viewer can select any combination of buttons and verify the correct Text orientation and spacing using the example images to the left of the browser window. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/driver.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/driver.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Appearance/FontStyle/../../license.html">../../license.html</a> </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
 */

public class driver
{
	/** Default constructor to create this object. */
	public driver ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("driver.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("X3dForWebAuthorsTextFontStyleFigure2.11.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("X3dForWebAuthorsTextFontStyleFigure2.12.png"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test all possible combinations of \"horizontal\", \"justify\", \"leftToRight\" and \"topToBottom\" for major and minor Text axes. The viewer can select any combination of buttons and verify the correct Text orientation and spacing using the example images to the left of the browser window."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/driver.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("driver.x3d"))
    .addChild(new Viewpoint().setDescription("Click white boxes to change settings").setPosition(0.0,0.0,26.0))
    .addChild(new Transform("MYTRANS").setScale(0.9,0.9,0.9)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material()))
        .setGeometry(new Text("MYTEXT").setString(new String[] {"Read","some text","today!"})
          .setFontStyle(new FontStyle("MYFONT").setCssStyle("BOLD")))))
    .addChild(new Transform().setScale(0.9,0.9,0.9)
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet("LINES").setDEF("LINES").setCoordIndex(new int[] {0,1,-1,1,2,-1,3,4,-1,4,5,-1,6,7,-1,7,8,-1,9,10,-1,10,11,-1,12,13,-1,13,14,-1,15,16,-1,16,17,-1,18,19,-1,19,20,-1,21,22,-1,22,23,-1,24,25,-1,25,26,-1,27,28,-1,28,29,-1,30,31,-1,31,32,-1,33,34,-1,34,35,-1,36,37,-1,37,38,-1,39,40,-1,40,41,-1,42,43,-1,43,44,-1,45,46,-1,46,47,-1,48,49,-1,49,50,-1,51,52,-1,52,53,-1,54,55,-1,55,56,-1,57,58,-1,58,59,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-10.0,-5.0,0.0,0.0,-5.0,0.0,10.0,-5.0,0.0,-10.0,-4.0,0.0,0.0,-4.0,0.0,10.0,-4.0,0.0,-10.0,-3.0,0.0,0.0,-3.0,0.0,10.0,-3.0,0.0,-10.0,-2.0,0.0,0.0,-2.0,0.0,10.0,-2.0,0.0,-10.0,-1.0,0.0,0.0,-1.0,0.0,10.0,-1.0,0.0,-10.0,1.0,0.0,0.0,1.0,0.0,10.0,1.0,0.0,-10.0,2.0,0.0,0.0,2.0,0.0,10.0,2.0,0.0,-10.0,3.0,0.0,0.0,3.0,0.0,10.0,3.0,0.0,-10.0,4.0,0.0,0.0,4.0,0.0,10.0,4.0,0.0,-10.0,5.0,0.0,0.0,5.0,0.0,10.0,5.0,0.0,-4.0,6.0,0.0,0.0,6.0,0.0,4.0,6.0,0.0,-4.0,7.0,0.0,0.0,7.0,0.0,4.0,7.0,0.0,-4.0,8.0,0.0,0.0,8.0,0.0,4.0,8.0,0.0,-4.0,9.0,0.0,0.0,9.0,0.0,4.0,9.0,0.0,-4.0,10.0,0.0,0.0,10.0,0.0,4.0,10.0,0.0,-4.0,-6.0,0.0,0.0,-6.0,0.0,4.0,-6.0,0.0,-4.0,-7.0,0.0,0.0,-7.0,0.0,4.0,-7.0,0.0,-4.0,-8.0,0.0,0.0,-8.0,0.0,4.0,-8.0,0.0,-4.0,-9.0,0.0,0.0,-9.0,0.0,4.0,-9.0,0.0,-4.0,-10.0,0.0,0.0,-10.0,0.0,4.0,-10.0,0.0}))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0)))))
    .addChild(new Transform("AXES").setScale(0.9,0.9,0.9)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0)))
        .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-10.0,0.0,0.0,10.0,0.0,0.0,0.0,10.0,0.0,0.0,-10.0,0.0}))))))
    .addChild(new Transform("BEGIN_TRANS")
      .addChild(new Transform().setTranslation(-12.5,7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("BEGINMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("BEGIN").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","BEGIN","(major)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHBEGIN").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("FIRST_TRANS")
      .addChild(new Transform().setTranslation(-6.0,7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("FIRSTMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("FIRST").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","FIRST","(major)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHFIRST").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("MIDDLE_TRANS")
      .addChild(new Transform().setTranslation(6.0,7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("MIDDLEMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("MIDDLE").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","MIDDLE","(major)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHMIDDLE").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("END_TRANS")
      .addChild(new Transform().setTranslation(12.5,7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("ENDMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("END").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","END","(major)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHEND").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("BEGIN_TRANS_MINOR")
      .addChild(new Transform().setTranslation(-12.5,-7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("BEGINMATERIAL_MINOR").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("BEGIN_MINOR").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","BEGIN","(minor)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHBEGIN_MINOR").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("FIRST_TRANS_MINOR")
      .addChild(new Transform().setTranslation(-6.0,-7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("FIRSTMATERIAL_MINOR").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("FIRST_MINOR").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","FIRST","(minor)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHFIRST_MINOR").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("MIDDLE_TRANS_MINOR")
      .addChild(new Transform().setTranslation(6.0,-7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("MIDDLEMATERIAL_MINOR").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("MIDDLE_MINOR").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","MIDDLE","(minor)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHMIDDLE_MINOR").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("END_TRANS_MINOR")
      .addChild(new Transform().setTranslation(12.5,-7.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("ENDMATERIAL_MINOR").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("END_MINOR").setSize(4.5,3.0,0.1)))
        .addChild(new Transform().setTranslation(-1.2,0.5,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"justify","END","(minor)"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHEND_MINOR").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("LEFTTORIGHT_true_TRANS")
      .addChild(new Transform().setTranslation(-12.5,-3.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("LEFTTORIGHT_trueMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("LEFTTORIGHT_true").setSize(4.5,2.0,0.1)))
        .addChild(new Transform().setTranslation(-2.0,0.2,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"leftToRight","true"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHLEFTTORIGHT_true").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("HORIZONTAL_true_TRANS")
      .addChild(new Transform().setTranslation(-12.5,3.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("HORIZONTAL_trueMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("HORIZONTAL_true").setSize(4.5,2.0,0.1)))
        .addChild(new Transform().setTranslation(-1.8,0.2,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"horizontal","true"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHHORIZONTAL_true").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("LEFTTORIGHT_false_TRANS")
      .addChild(new Transform().setTranslation(12.5,-3.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("LEFTTORIGHT_falseMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("LEFTTORIGHT_false").setSize(4.5,2.0,0.1)))
        .addChild(new Transform().setTranslation(-2.0,0.2,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"leftToRight","false"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHLEFTTORIGHT_false").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("HORIZONTAL_false_TRANS")
      .addChild(new Transform().setTranslation(12.5,3.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("HORIZONTAL_falseMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("HORIZONTAL_false").setSize(4.5,2.0,0.1)))
        .addChild(new Transform().setTranslation(-1.8,0.2,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"horizontal","false"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHHORIZONTAL_false").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("TOPTOBOTTOM_true_TRANS")
      .addChild(new Transform().setTranslation(-12.5,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("TOPTOBOTTOM_trueMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("TOPTOBOTTOM_true").setSize(4.5,2.0,0.1)))
        .addChild(new Transform().setTranslation(-1.8,0.2,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"topToBottom","true"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHTOPTOBOTTOM_true").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Transform("TOPTOBOTTOM_false_TRANS")
      .addChild(new Transform().setTranslation(12.5,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("TOPTOBOTTOM_falseMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box("TOPTOBOTTOM_false").setSize(4.5,2.0,0.1)))
        .addChild(new Transform().setTranslation(-1.8,0.2,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"topToBottom","false"})
              .setFontStyle(new FontStyle().setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new TouchSensor("TOUCHTOPTOBOTTOM_false").setDescription("reset Fontstyle to indicated setting")))
    .addChild(new Script("TEXT_SCRIPT").setDirectOutput(true).setUrl(new String[] {"driver.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/driver.js"})
      .addField(new field().setName("axes").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Transform().setUSE("AXES")))
      .addField(new field().setName("myTrans").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Transform().setUSE("MYTRANS")))
      .addField(new field().setName("myFont").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new FontStyle().setUSE("MYFONT")))
      .addField(new field().setName("justify").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"BEGIN"}))
      .addField(new field().setName("myURL").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("../../html/write_list.cgi?"))
      .addField(new field().setName("cgiString").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("+FontStyle+Appearance"))
      .addField(new field().setName("myParameter").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"target=_top"}))
      .addField(new field().setName("green").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.0,1.0,0.0)))
      .addField(new field().setName("white").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(1.0,1.0,1.0)))
      .addField(new field().setName("myFalse").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
      .addField(new field().setName("myTrue").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
      .addField(new field().setName("begin").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("BEGIN"))
      .addField(new field().setName("middle").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("MIDDLE"))
      .addField(new field().setName("end").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("END"))
      .addField(new field().setName("first").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("FIRST"))
      .addField(new field().setName("moveUp").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,4.0,0.0)))
      .addField(new field().setName("moveDown").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,-4.0,0.0)))
      .addField(new field().setName("topToBottomTrueMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("TOPTOBOTTOM_trueMATERIAL")))
      .addField(new field().setName("topToBottomFalseMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("TOPTOBOTTOM_falseMATERIAL")))
      .addField(new field().setName("leftToRightFalseMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("LEFTTORIGHT_falseMATERIAL")))
      .addField(new field().setName("leftToRightTrueMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("LEFTTORIGHT_trueMATERIAL")))
      .addField(new field().setName("horizontalFalseMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("HORIZONTAL_falseMATERIAL")))
      .addField(new field().setName("horizontalTrueMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("HORIZONTAL_trueMATERIAL")))
      .addField(new field().setName("beginMaterialMinor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("BEGINMATERIAL_MINOR")))
      .addField(new field().setName("firstMaterialMinor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("FIRSTMATERIAL_MINOR")))
      .addField(new field().setName("middleMaterialMinor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("MIDDLEMATERIAL_MINOR")))
      .addField(new field().setName("endMaterialMinor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("ENDMATERIAL_MINOR")))
      .addField(new field().setName("beginMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("BEGINMATERIAL")))
      .addField(new field().setName("firstMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("FIRSTMATERIAL")))
      .addField(new field().setName("middleMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("MIDDLEMATERIAL")))
      .addField(new field().setName("endMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("ENDMATERIAL")))
      .addField(new field().setName("topToBottomTrue").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("topToBottomFalse").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("leftToRightTrue").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("leftToRightFalse").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("horizontalTrue").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("horizontalFalse").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMajorBegin").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMajorFirst").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMajorMiddle").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMajorEnd").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMinorBegin").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMinorFirst").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMinorMiddle").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMinorEnd").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("getFile").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("justifyMajor").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("BEGIN"))
      .addField(new field().setName("justifyMinor").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("FIRST"))
      .addField(new field().setName("topToBottom").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
      .addField(new field().setName("leftToRight").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
      .addField(new field().setName("horizontal").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true")))
    .addChild(new ROUTE().setFromNode("TOUCHTOPTOBOTTOM_true").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("topToBottomTrue"))
    .addChild(new ROUTE().setFromNode("TOUCHTOPTOBOTTOM_false").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("topToBottomFalse"))
    .addChild(new ROUTE().setFromNode("TOUCHLEFTTORIGHT_true").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("leftToRightTrue"))
    .addChild(new ROUTE().setFromNode("TOUCHLEFTTORIGHT_false").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("leftToRightFalse"))
    .addChild(new ROUTE().setFromNode("TOUCHHORIZONTAL_true").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("horizontalTrue"))
    .addChild(new ROUTE().setFromNode("TOUCHHORIZONTAL_false").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("horizontalFalse"))
    .addChild(new ROUTE().setFromNode("TOUCHBEGIN").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMajorBegin"))
    .addChild(new ROUTE().setFromNode("TOUCHFIRST").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMajorFirst"))
    .addChild(new ROUTE().setFromNode("TOUCHMIDDLE").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMajorMiddle"))
    .addChild(new ROUTE().setFromNode("TOUCHEND").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMajorEnd"))
    .addChild(new ROUTE().setFromNode("TOUCHBEGIN_MINOR").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMinorBegin"))
    .addChild(new ROUTE().setFromNode("TOUCHFIRST_MINOR").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMinorFirst"))
    .addChild(new ROUTE().setFromNode("TOUCHMIDDLE_MINOR").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMinorMiddle"))
    .addChild(new ROUTE().setFromNode("TOUCHEND_MINOR").setFromField("touchTime").setToNode("TEXT_SCRIPT").setToField("justifyMinorEnd")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return driver model
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
        X3D thisExampleX3dModel = new driver().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.driver\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.driver\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
