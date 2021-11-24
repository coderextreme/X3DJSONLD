package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A FormulaOne Race Car running in a predefined path. </p>
 <p> Related links: <a href="../../../StudentProjects/FormulaOneRaceCar.java">FormulaOneRaceCar.java</a> source, <a href="../../../StudentProjects/FormulaOneRaceCarIndex.html" target="_top">FormulaOneRaceCar catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/FormulaOneRaceCar.x3d">FormulaOneRaceCar.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A FormulaOne Race Car running in a predefined path </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Athanasopoulos,Vasileios </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 2 August 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Missing files: nplogo.jpg (npslogo.jpg?) front.jpg f1.wav f2.wav f3.wav </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Formula One Race Car </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FormulaOneRaceCar.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FormulaOneRaceCar.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Athanasopoulos,Vasileios
 */

public class FormulaOneRaceCar
{
	/** Default constructor to create this object. */
	public FormulaOneRaceCar ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("FormulaOneRaceCar.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A FormulaOne Race Car running in a predefined path"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Athanasopoulos,Vasileios"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("2 August 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Missing files: nplogo.jpg (npslogo.jpg?) front.jpg f1.wav f2.wav f3.wav"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Formula One Race Car"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FormulaOneRaceCar.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Formula One Race Car").setOrientation(-1.0,1.0,1.0,1.0).setPosition(6.0,8.0,8.0))
    .addChild(new DirectionalLight().setDirection(5.0,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Bottom").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-25.0,-8.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyColor(new MFColor(new double[] {0.0,0.0,1.0})))
    .addChild(new Transform("CAR").setRotation(0.0,1.0,0.0,-1.57)
      .addChild(new Group("ViewpointGroup")
        .addChild(new Group()
          .addChild(new Viewpoint().setDescription("Front").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,2.0,0.0))
          .addChild(new Viewpoint().setDescription("Right").setPosition(0.0,2.0,10.0))
          .addChild(new Viewpoint().setDescription("Left").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,1.5,-14.0))
          .addChild(new Viewpoint().setDescription("Back").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.85,0.0))
          .addChild(new Viewpoint().setDescription("Top").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,15.0,0.5)))
        .addChild(new WorldInfo().setInfo(new String[] {"null node"})))
      .addChild(new Group()
        .addChild(new Transform("FORMULA")
          .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57)
            .addComments(" \"BACK WHEELS & AXIS\" ")
            .addChild(new Group()
              .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,-2.8,0.0)
                .addChild(new Group()
                  .addChild(new Transform("BACK")
                    .addChild(new Transform("wheel1").setRotation(0.0,0.0,1.0,1.57).setTranslation(1.5,0.0,0.0)
                      .addComments(" \"OUTER WHEEL CYLINDER\" ")
                      .addChild(new Shape("elastic")
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))
                        .setGeometry(new Cylinder().setHeight(0.92).setRadius(0.65)))
                      .addComments(" \"INNER WHEEL CYLINDER\" ")
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(.5,.5,.5)))
                        .setGeometry(new Cylinder().setHeight(.92).setRadius(.45))))
                    .addChild(new Transform().setTranslation(1.912,0.0,0.0)
                      .addChild(new Shape("rad")
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new Box().setSize(0.1,0.90,0.05))))
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(1.912,0.0,0.0)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new Box().setSize(0.1,0.90,0.05))))
                    .addChild(new Transform("wheel2").setRotation(0.0,0.0,1.0,1.57).setTranslation(-1.5,0.0,0.0)
                      .addComments(" \"OUTER WHEEL CYLINDER\" ")
                      .addChild(new Shape().setUSE("elastic"))
                      .addComments(" \"INNER WHEEL CYLINDER\" ")
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(.5,.5,.5)))
                        .setGeometry(new Cylinder().setHeight(.92).setRadius(.45))))
                    .addChild(new Transform().setTranslation(-1.912,0.0,0.0)
                      .addChild(new Shape().setUSE("rad")))
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-1.912,0.0,0.0)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new Box().setSize(0.1,0.90,0.05))))
                    .addChild(new Transform("axis1").setRotation(0.0,0.0,1.0,1.57)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))
                        .setGeometry(new Cylinder().setHeight(3.96).setRadius(.12)))))
                  .addChild(new TimeSensor("CLOCK1").setCycleInterval(2).setLoop(true))
                  .addChild(new OrientationInterpolator("POS1").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,-3.14,1.0,0.0,0.0,-6.28}))))
                .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("POS1").setToField("set_fraction"))
                .addChild(new ROUTE().setFromNode("POS1").setFromField("value_changed").setToNode("BACK").setToField("set_rotation"))))
            .addComments(" \"FRONT WHEELS & AXIS\" ")
            .addChild(new Group()
              .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,2.65,0.0)
                .addChild(new Group()
                  .addChild(new Transform("FRONT")
                    .addChild(new Transform("wheel3").setRotation(0.0,0.0,1.0,1.57).setTranslation(1.5,0.0,0.0)
                      .addComments(" \"OUTER WHEEL CYLINDER\" ")
                      .addChild(new Shape("elastic1")
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))
                        .setGeometry(new Cylinder().setHeight(0.92).setRadius(0.65)))
                      .addComments(" \"INNER WHEEL CYLINDER\" ")
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(.5,.5,.5)))
                        .setGeometry(new Cylinder().setHeight(.92).setRadius(.45))))
                    .addChild(new Transform().setTranslation(1.912,0.0,0.0)
                      .addChild(new Shape().setUSE("rad")))
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(1.912,0.0,0.0)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new Box().setSize(0.1,.90,.05))))
                    .addChild(new Transform("wheel4").setRotation(0.0,0.0,1.0,1.57).setTranslation(-1.5,0.0,0.0)
                      .addComments(" \"OUTER WHEEL CYLINDER\" ")
                      .addChild(new Shape().setUSE("elastic"))
                      .addComments(" \"INNER WHEEL CYLINDER\" ")
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(.5,.5,.5)))
                        .setGeometry(new Cylinder().setHeight(.92).setRadius(.45))))
                    .addChild(new Transform().setTranslation(-1.912,0.0,0.0)
                      .addChild(new Shape().setUSE("rad")))
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-1.912,0.0,0.0)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new Box().setSize(0.1,.90,.05))))
                    .addChild(new Transform("axis2").setRotation(0.0,0.0,1.0,1.57)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))
                        .setGeometry(new Cylinder().setHeight(3.96).setRadius(.12)))))
                  .addChild(new TimeSensor("CLOCK2").setCycleInterval(2).setLoop(true))
                  .addChild(new OrientationInterpolator("POS2").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,-3.14,1.0,0.0,0.0,-6.28})))
                  .addChild(new ROUTE().setFromNode("CLOCK2").setFromField("fraction_changed").setToNode("POS2").setToField("set_fraction"))
                  .addChild(new ROUTE().setFromNode("POS2").setFromField("value_changed").setToNode("FRONT").setToField("set_rotation")))))
            .addComments(" \"CAR BODY\" ")
            .addChild(new Group()
              .addComments(" \"CAR BODY\" ")
              .addChild(new Transform().setScale(1.0,4.0,0.5)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
                  .setGeometry(new Sphere()))
                .addChild(new Transform().setRotation(1.0,0.0,0.0,0.0).setTranslation(0.0,0.2,0.976)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0).setTransparency(.5))
                      .setTexture(new ImageTexture("nplogo").setUrl(new String[] {"nplogo.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/nplogo.jpg"})))
                    .setGeometry(new Box().setSize(0.7,.2,.0000001)))))
              .addChild(new Group())
              .addComments(" \"PILOT'S COVER SHELL\" ")
              .addChild(new Transform("COVER").setCenter(0.0,0.0,0.535).setScale(.5,0.9,0.3).setTranslation(0.0,-1.0,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setTransparency(0.55)))
                  .setGeometry(new Sphere().setRadius(1.3)))
                .addChild(new CylinderSensor("COVERSENS").setDescription("touch to activate").setDiskAngle(0.262).setMaxAngle(3.57)))
              .addChild(new ROUTE().setFromNode("COVERSENS").setFromField("rotation_changed").setToNode("COVER").setToField("set_rotation"))
              .addComments(" \"PILOT'S HEAD\" ")
              .addChild(new Transform().setTranslation(0.0,-1.3,0.5)
                .addChild(new Viewpoint().setDescription("Driver").setOrientation(1.0,0.0,0.0,1.350).setPosition(0.0,0.25,-0.015))
                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.67).setTranslation(0.0,0.7,-0.2)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0).setTransparency(.5))
                      .setTexture(new ImageTexture().setUrl(new String[] {"front.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/front.jpg"})))
                    .setGeometry(new Box().setSize(0.9,0.8,0.01))))
                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.67).setTranslation(0.0,0.701,-0.2)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
                    .setGeometry(new Box().setSize(0.9,0.8,0.01))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
                  .setGeometry(new Sphere().setRadius(0.25))))
              .addComments(" \"FRONT-HORIZONTAL PANEL-TEXTURES \" ")
              .addChild(new Transform().setTranslation(0.0,3.80,-0.3)
                .addComments(" \"FRONT (HORIZONTAL) PANEL\" ")
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
                  .setGeometry(new Box().setSize(3.94,.6,.03)))
                .addComments(" \"FRONT-RIGHT (OUTER)VERTICAL PANEL\" ")
                .addChild(new Transform().setTranslation(0.35,-0.2,0.15)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                    .setGeometry(new Box().setSize(.03,0.16,0.28))))
                .addComments(" \"FRONT-LEFT (OUTER)VERTICAL PANEL ")
                .addChild(new Transform().setTranslation(-0.35,-0.2,0.15)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                    .setGeometry(new Box().setSize(.03,0.16,0.28))))
                .addComments(" \"BACK TEXT\" ")
                .addChild(new Transform().setRotation(0.0,0.0,1.0,-3.14).setTranslation(1.40,-7.20,1.05)
                  .addChild(new Transform().setRotation(1.0,0.0,0.0,0.266)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
                      .setGeometry(new Text().setString(new String[] {"MV-4204"})
                        .setFontStyle(new FontStyle().setSize(.8).setCssStyle("BOLD"))))))
                .addComments(" \"FRONT RIGHT TEXT\" ")
                .addChild(new Transform().setRotation(0.0,0.0,1.0,-3.14).setTranslation(2.2,0.2,0.0)
                  .addChild(new Transform().setTranslation(.5,.020,0.05)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
                      .setGeometry(new Text().setString(new String[] {"VRML"})
                        .setFontStyle(new FontStyle().setSize(.4).setCssStyle("BOLD"))))))
                .addComments(" \"FRONT LEFT TEXT\" ")
                .addChild(new Transform().setRotation(0.0,0.0,1.0,3.14).setTranslation(-2.1,0.2,0.0)
                  .addChild(new Transform().setTranslation(-1.5,0.01,0.05)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
                      .setGeometry(new Text().setString(new String[] {"VRML"})
                        .setFontStyle(new FontStyle().setSize(.4).setCssStyle("BOLD"))))))
                .addComments(" \"FRONT-RIGHT (INNER)VERTICAL PANEL ")
                .addChild(new Transform().setTranslation(1.95,0.01,0.05)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                    .setGeometry(new Box().setSize(0.03,.6,.1))))
                .addComments(" \"FRONT-LEFT (INNER)VERTICAL PANEL ")
                .addChild(new Transform().setTranslation(-1.95,0.01,0.05)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                    .setGeometry(new Box().setSize(0.03,.6,.1)))))
              .addComments(" \"BACK (INCLINED) UPPER PANEL\" ")
              .addChild(new Transform().setRotation(1.0,0.0,0.0,-0.2).setTranslation(0.0,-3.57,0.75)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
                  .setGeometry(new Box().setSize(3.94,0.8,0.04)))
                .addChild(new Transform().setTranslation(1.95,0.0,0.1)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                    .setGeometry(new Box().setSize(0.04,0.8,0.2))))
                .addChild(new Transform().setTranslation(-1.95,0.0,0.1)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                    .setGeometry(new Box().setSize(0.04,0.8,0.2)))))
              .addComments(" \"HORIZONTAL PART OF THE CAR\" ")
              .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57).setScale(1.0,1.0,0.05).setTranslation(0.0,-0.15,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(.2,1.0,0.0))
                    .setTexture(new ImageTexture().setUSE("nplogo")))
                  .setGeometry(new Cylinder().setHeight(3.95).setRadius(1.9)))
                .addComments(" \"RIGHT TEXT\" ")
                .addChild(new Transform().setRotation(0.0,0.0,1.0,-3.14).setTranslation(0.6,1.65,2.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
                    .setGeometry(new Text().setString(new String[] {"NPS"})
                      .setFontStyle(new FontStyle().setSize(.8).setCssStyle("BOLD")))))
                .addComments(" \"LEFT TEXT\" ")
                .addChild(new Transform().setRotation(0.0,0.0,1.0,-6.28).setTranslation(-0.8,-1.65,2.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
                    .setGeometry(new Text().setString(new String[] {"NPS"})
                      .setFontStyle(new FontStyle().setSize(.8).setCssStyle("BOLD"))))))
              .addComments(" \"BACK-LEFT VERTICAL PANEL\" ")
              .addChild(new Transform().setTranslation(-0.42,-3.4,0.35)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                  .setGeometry(new Box().setSize(.06,0.26,0.7))))
              .addComments(" \"BACK-RIGHT VERTICAL PANEL\" ")
              .addChild(new Transform().setTranslation(0.42,-3.4,0.35)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.2,1.0,0.0)))
                  .setGeometry(new Box().setSize(.06,0.26,0.7))))
              .addComments(" \"EXHAUST\" ")
              .addChild(new Transform().setTranslation(0.2,-3.88,0.0)
                .addChild(new Shape("exhaust")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))
                  .setGeometry(new Cylinder().setHeight(.25).setRadius(.05))))
              .addComments(" \"EXHAUST\" ")
              .addChild(new Transform().setTranslation(-0.2,-3.88,0.0)
                .addChild(new Shape().setUSE("exhaust")))))
          .addChild(new Sound("Engine1")
            .setSource(new AudioClip("SOUNDSOURCE1").setDescription("V1").setLoop(true).setUrl(new String[] {"f1.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/f1.wav"})))
          .addChild(new Sound("Engine2")
            .setSource(new AudioClip("SOUNDSOURCE2").setDescription("V2").setLoop(true).setUrl(new String[] {"f2.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/f2.wav"})))
          .addChild(new Sound("Engine3")
            .setSource(new AudioClip("SOUNDSOURCE3").setDescription("V3").setLoop(true).setUrl(new String[] {"f3.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/f3.wav"}))))
        .addChild(new Script("MOVE").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_fraction (fraction,eventTime)" + "\n" + 
"{" + "\n" + 
"    value_changed[0]=radius*Math.sin(turns*fraction*6.28);" + "\n" + 
"    value_changed[1]=0;" + "\n" + 
"    value_changed[2]=radius*Math.cos(turns*fraction*6.28);" + "\n" + 
" }" + "\n")
          .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("value_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(10))
          .addField(new field().setName("turns").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1)))
        .addChild(new Script("TURN").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_fraction (fraction,eventTime)" + "\n" + 
"{" + "\n" + 
"    value_changed[0]=0;" + "\n" + 
"    value_changed[1]=1;" + "\n" + 
"    value_changed[2]=0;" + "\n" + 
"    value_changed[3]=fraction*6.28;" + "\n" + 
" }" + "\n")
          .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("value_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
          .addField(new field().setName("turns").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1)))
        .addChild(new PlaneSensor("DRAG").setDescription("touch to activate"))
        .addChild(new TimeSensor("CLOCK").setCycleInterval(8.0).setLoop(true)))
      .addChild(new ROUTE().setFromNode("DRAG").setFromField("translation_changed").setToNode("CAR").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("CLOCK").setFromField("fraction_changed").setToNode("MOVE").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("MOVE").setFromField("value_changed").setToNode("CAR").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("CLOCK").setFromField("fraction_changed").setToNode("TURN").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("TURN").setFromField("value_changed").setToNode("FORMULA").setToField("set_rotation"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return FormulaOneRaceCar model
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
        X3D thisExampleX3dModel = new FormulaOneRaceCar().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.FormulaOneRaceCar\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.FormulaOneRaceCar\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
