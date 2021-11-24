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
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A pinball table with some ball animations. </p>
 <p> Related links: <a href="../../../StudentProjects/PinballTable.java">PinballTable.java</a> source, <a href="../../../StudentProjects/PinballTableIndex.html" target="_top">PinballTable catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/PinballTable.x3d">PinballTable.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A pinball table with some ball animations. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Jiradett Kerdsri and Kacha Jitpanya </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 August 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/PinballTableModel.png">PinballTableModel.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.pinballrebel.com/game/pins/tommy/tommy_pinball.htm" target="_blank">http://www.pinballrebel.com/game/pins/tommy/tommy_pinball.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="http://www.pinballrebel.com/game/pins/tommy/tombg.jpg" target="_blank">http://www.pinballrebel.com/game/pins/tommy/tombg.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PinballTable.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PinballTable.x3d</a> </td>
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

	* @author Jiradett Kerdsri and Kacha Jitpanya
 */

public class PinballTable
{
	/** Default constructor to create this object. */
	public PinballTable ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("PinballTable.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A pinball table with some ball animations."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jiradett Kerdsri and Kacha Jitpanya"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("6 August 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PinballTableModel.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.pinballrebel.com/game/pins/tommy/tommy_pinball.htm"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("http://www.pinballrebel.com/game/pins/tommy/tombg.jpg"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PinballTable.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("PinballTable.x3d"))
    .addChild(new Group()
      .addComments(" table ")
      .addChild(new Transform().setCenter(0.0,0.0,-4.0).setRotation(1.0,0.0,0.0,0.25)
        .addChild(new Group()
          .addChild(new Transform()
            .addChild(new Shape()
              .setGeometry(new Box().setSize(4.5,0.2,8.0))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))
                .setTexture(new ImageTexture("TommyPinballGame").setUrl(new String[] {"pinballFiles/TommyPinballGame.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/pinballFiles/TommyPinballGame.jpg"}))))
            .addComments(" side beam ")
            .addChild(new Transform().setTranslation(2.25,0.0,0.0)
              .addChild(new Shape("sideBeam")
                .setGeometry(new Box().setSize(0.3,0.6,8.8))
                .setAppearance(new Appearance("WoodAppearance")
                  .setTexture(new ImageTexture().setUrl(new String[] {"woodTexture.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/woodTexture.jpg"}))
                  .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
            .addComments(" side beam2 ")
            .addChild(new Transform().setTranslation(-2.25,0.0,0.0)
              .addChild(new Shape().setUSE("sideBeam")))
            .addComments(" back of the table ")
            .addChild(new Transform().setTranslation(0.0,-0.198,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(4.5,0.2,7.6))
                .setAppearance(new Appearance().setUSE("WoodAppearance"))))
            .addComments(" circle ")
            .addChild(new Transform().setTranslation(0.0,.17,-0.72)
              .addChild(new Shape("cylinder")
                .setGeometry(new Cylinder().setHeight(.15).setRadius(.2))
                .setAppearance(new Appearance()
                  .setMaterial(new Material("BALL_COLOR_2"))))
              .addChild(new Transform().setTranslation(-0.36,0.0,-0.66)
                .addChild(new Shape().setUSE("cylinder")))
              .addChild(new Transform().setTranslation(0.38,0.0,-0.82)
                .addChild(new Shape().setUSE("cylinder")))
              .addChild(new Transform().setTranslation(-1.57,0.0,-2.03)
                .addChild(new Shape().setUSE("cylinder")))
              .addChild(new TimeSensor("CLOCK_2").setCycleInterval(2.4).setLoop(true))
              .addChild(new ColorInterpolator("COLOR_PATH_2").setKey(new double[] {0.0,0.5,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0}))))
            .addComments(" center circle ")
            .addChild(new Transform().setTranslation(0.0,.1,2.05)
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.2).setRadius(.54))
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture().setUrl(new String[] {"pinballFiles/center.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/pinballFiles/center.jpg"}))
                  .setMaterial(new Material("BALL_COLOR_1"))))
              .addChild(new TimeSensor("CLOCK_1").setCycleInterval(2).setLoop(true))
              .addChild(new ColorInterpolator("COLOR_PATH_1").setKey(new double[] {0.0,0.5,0.5,1.0}).setKeyValue(new MFColor(new double[] {1.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0}))))
            .addComments(" beam ")
            .addChild(new Transform().setTranslation(0.0,0.0,4.25)
              .addChild(new Shape("beam")
                .setGeometry(new Box().setSize(4.5,0.6,0.3))
                .setAppearance(new Appearance().setUSE("WoodAppearance")))))
          .addComments(" overhead light ")
          .addChild(new DirectionalLight().setDirection(0.0,-1.0,0.0).setIntensity(0.7))
          .addComments(" blinking route for center ")
          .addChild(new ROUTE().setFromNode("CLOCK_1").setFromField("fraction_changed").setToNode("COLOR_PATH_1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("COLOR_PATH_1").setFromField("value_changed").setToNode("BALL_COLOR_1").setToField("set_emissiveColor"))
          .addComments(" blinking route for small circle ")
          .addChild(new ROUTE().setFromNode("CLOCK_2").setFromField("fraction_changed").setToNode("COLOR_PATH_2").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("COLOR_PATH_2").setFromField("value_changed").setToNode("BALL_COLOR_2").setToField("set_emissiveColor")))
        .addComments(" ball ")
        .addChild(new Group()
          .addChild(new Transform("BALL1").setTranslation(1.8,.2,3.6)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Sphere().setRadius(.1))))
          .addChild(new TouchSensor("Touch").setDescription("ball 1 - touch to activate")))
        .addComments(" stick1 ")
        .addChild(new Group()
          .addChild(new Transform("stck1").setRotation(0.0,1.0,0.0,.67).setScale(1.0,2.0,1.0).setTranslation(.5,.2,3.8)
            .addChild(new Shape("stick")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(.8,.8,.8)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {0.0,0.1,0.37,0.11,0.44,0.07,0.45,0.0,0.44,-0.07,0.37,-0.11,0.0,-0.1,-0.2,-0.08,-0.32,-0.06,-0.38,-0.04,-0.4,0.0,-0.38,0.04,-0.32,0.06,-0.2,0.08,0.0,0.1})).setSpine(new MFVec3f(new double[] {0.0,-0.03,0.0,0.0,0.03,0.0})))))
          .addChild(new TouchSensor("Touch1").setDescription("stick 1 - touch to activate")))
        .addComments(" stick2 ")
        .addChild(new Group()
          .addChild(new Transform("stck2").setRotation(0.0,1.0,0.0,2.47).setScale(1.0,2.0,1.0).setTranslation(-0.5,.2,3.8)
            .addChild(new Shape().setUSE("stick")))
          .addChild(new TouchSensor("Touch2").setDescription("stick 2 - touch to activate"))))
      .addChild(new TimeSensor("Clock").setCycleInterval(6))
      .addChild(new TimeSensor("Clock1_1").setCycleInterval(3))
      .addChild(new TimeSensor("Clock1_2").setCycleInterval(3))
      .addChild(new TimeSensor("Clock1_3").setCycleInterval(3))
      .addChild(new TimeSensor("Clock1_4").setCycleInterval(3))
      .addChild(new TimeSensor("Clock2_1").setCycleInterval(3))
      .addChild(new TimeSensor("Clock2_2").setCycleInterval(3))
      .addChild(new TimeSensor("Clock2_3").setCycleInterval(3))
      .addChild(new TimeSensor("Clock2_4").setCycleInterval(3))
      .addChild(new TimeSensor("ClockOrient1"))
      .addChild(new TimeSensor("ClockOrient2"))
      .addChild(new PositionInterpolator("PosBall1").setKey(new double[] {0.0,0.0625,0.125,0.1875,0.25,0.3125,0.375,0.4375,0.5,0.5625,0.625,0.6875,0.75,0.8125,0.875,0.9375,1.0}).setKeyValue(new MFVec3f(new double[] {1.8,.2,3.6,1.8,.2,-1.4,1.7,.2,-2.0,1.46,.2,-2.5,1.1,.2,-2.9,0.6,.2,-3.1,0.0,.2,-3.2,-0.6,.2,-3.1,-1.1,.2,-2.9,-1.5,.2,-2.5,-1.7,.2,-2.0,-1.8,.2,-1.4,-0.36,.2,-1.38,.36,.2,-1.54,0.0,.2,-0.74,0.562,.2,3.396,.242,.2,3.745})))
      .addChild(new PositionInterpolator("PosFlip1_1").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFVec3f(new double[] {1.2,.2,3.4,0.701,.2,-2.826,-1.774,.2,-0.675,-1.511,.2,2.791,-0.4,.2,3.6})))
      .addChild(new PositionInterpolator("PosFlip1_2").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFVec3f(new double[] {.242,.2,3.745,1.0,0.2,1.0,-1.2,0.2,0.8,0.8,0.2,-2.4,0.4,0.2,-2.6,-0.4,.2,3.6})))
      .addChild(new PositionInterpolator("PosFlip1_3").setKey(new double[] {0.0,0.076923077,0.153846154,0.230769231,0.307692308,0.384615385,0.461538462,0.538461538,0.615384615,0.692307692,0.769230769,0.846153846,0.923076923,1.0}).setKeyValue(new MFVec3f(new double[] {.242,.2,3.745,-1.5,0.2,0.0,0.3,0.2,-3.1,-1.4,0.2,-3.1,-0.2,0.2,-1.0,-0.3,0.2,-3.4,-1.8,0.2,-1.8,0.3,0.2,-2.8,-1.1,0.2,-3.4,-1.7,0.2,-2.4,1.8,0.2,-0.4,-0.8,0.2,1.8,2.0,0.2,-3.4,-0.4,.2,3.6})))
      .addChild(new PositionInterpolator("PosFlip1_4").setKey(new double[] {0.0,0.2,0.4,0.6,0.8,1.0}).setKeyValue(new MFVec3f(new double[] {.242,.2,3.745,2.2,0.2,1.0,0.0,0.2,0.0,1.5,0.2,-3.0,-1.0,0.2,2.5,-0.4,.2,3.6})))
      .addChild(new PositionInterpolator("PosFlip2_1").setKey(new double[] {0.0,0.166666667,0.333333333,0.5,0.666666667,0.833333333,1.0}).setKeyValue(new MFVec3f(new double[] {1.2,0.2,-3.0,-2.0,0.2,0.2,2.0,0.2,-0.6,-2.2,0.2,1.2,1.2,0.2,0.8,-1.2,0.2,-3.4,-0.4,.2,3.6})))
      .addChild(new PositionInterpolator("PosFlip2_2").setKey(new double[] {0.0,0.066666667,0.129166667,0.191666667,0.254166667,0.316666667,0.379166667,0.441666667,0.504166667,0.566666667,0.629166667,0.691666667,0.754166667,0.816666667,0.879166667,0.941666667}).setKeyValue(new MFVec3f(new double[] {0.0,.2,4.25,-2.0,0.2,-1.0,-1.8,0.2,-3.4,-0.4,0.2,-3.6,1.8,0.2,-3.4,1.6,0.2,-2.0,1.0,0.2,1.0,0.0,.2,4.25,-0.5,0.2,0.0,-1.0,0.2,-2.0,0.5,0.2,2.5,0.8,0.2,1.0,-2.2,0.2,1.0,2.2,0.2,-3.6,-0.5,0.2,3.0,-0.4,.2,3.6})))
      .addChild(new PositionInterpolator("PosFlip2_3").setKey(new double[] {0.0,0.0625,0.125,0.1875,0.25,0.3125,0.375,0.4375,0.5,0.5625,0.625,0.6875,0.75,0.8125,0.875,0.9375,1.0}).setKeyValue(new MFVec3f(new double[] {-1.6,0.2,0.0,-1.8,0.2,-1.0,-1.6,0.2,-2.4,-0.4,0.2,-2.5,0.0,0.2,-1.6,-0.2,0.2,-0.9,-1.0,0.2,-1.8,0.2,0.2,-2.2,0.2,0.2,-1.4,-0.6,0.2,-1.4,-0.6,0.2,-1.6,0.0,0.2,-1.4,-0.2,0.2,-1.3,0.8,0.2,0.0,-1.0,0.2,0.2,1.4,0.2,-1.6,-0.4,.2,3.6})))
      .addChild(new PositionInterpolator("PosFlip2_4").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFVec3f(new double[] {-0.4,.2,3.6,1.8,.2,0.0,0.936,.2,-2.842,0.0,.2,3.4,.242,.2,3.745})))
      .addChild(new OrientationInterpolator("orienFlip1").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,-0.5,0.0,1.0,0.0,-1.0,0.0,1.0,0.0,-1.57,0.0,1.0,0.0,-1.0,0.0,1.0,0.0,0.5})))
      .addChild(new OrientationInterpolator("orienFlip2").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.5,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.57,0.0,1.0,0.0,1.0,0.0,1.0,0.0,-0.5})))
      .addComments(" pinballBackground ")
      .addChild(new Group()
        .addComments(" beam for pinballBackground ")
        .addComments(" left beam ")
        .addChild(new Transform().setTranslation(2.245,2.0,-4.0)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(.3,4.5,0.8))
            .setAppearance(new Appearance().setUSE("WoodAppearance"))))
        .addComments(" right beam ")
        .addChild(new Transform().setTranslation(-2.245,2.0,-4.0)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(.3,4.5,0.8))
            .setAppearance(new Appearance().setUSE("WoodAppearance"))))
        .addComments(" upper beam ")
        .addChild(new Transform().setTranslation(0.0,4.4,-4.0)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(4.81,0.3,0.8))
            .setAppearance(new Appearance().setUSE("WoodAppearance"))))
        .addComments(" back of pinballBackground ")
        .addChild(new Transform().setTranslation(0.0,-0.6,-4.5)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(4.78,10.3,0.4))
            .setAppearance(new Appearance().setUSE("WoodAppearance"))))
        .addComments(" pinballBackground ")
        .addChild(new Transform().setTranslation(0.0,2.0,-3.95)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(4.5,4.5,0.5))
            .setAppearance(new Appearance()
              .setTexture(new ImageTexture().setUSE("TommyPinballGame"))
              .addComments(" animate color behind image ")
              .setMaterial(new Material("BALL_COLOR_3"))))
          .addChild(new TimeSensor("CLOCK_3").setCycleInterval(5).setLoop(true))
          .addChild(new ColorInterpolator("COLOR_PATH_3").setKey(new double[] {0.0,0.5,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.0,0.0,0.0,.91,.98,.36,0.0,0.0,0.0,0.0,0.0,0.0}))))
        .addComments(" Left front beam ")
        .addChild(new Transform().setTranslation(-2.25,-3.7,3.9)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(0.3,3.8,0.6))
            .setAppearance(new Appearance().setUSE("WoodAppearance"))))
        .addComments(" right front beam ")
        .addChild(new Transform().setTranslation(2.25,-3.7,3.9)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(0.3,3.8,0.6))
            .setAppearance(new Appearance().setUSE("WoodAppearance"))))
        .addChild(new ROUTE().setFromNode("CLOCK_3").setFromField("fraction_changed").setToNode("COLOR_PATH_3").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("COLOR_PATH_3").setFromField("value_changed").setToNode("BALL_COLOR_3").setToField("set_emissiveColor")))
      .addComments(" front ")
      .addChild(new Transform().setTranslation(0.0,-3.6,4.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(4.2,2.8,.05))
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new ImageTexture().setUrl(new String[] {"pinballFiles/pinballFront.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/pinballFiles/pinballFront.jpg"}))))
        .addChild(new Transform().setTranslation(0.0,-1.7,0.0)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(4.5,0.6,0.3))
            .setAppearance(new Appearance().setUSE("WoodAppearance")))))
      .addComments(" pinballSide ")
      .addChild(new Group()
        .addComments(" right side ")
        .addChild(new Transform().setRotation(0.0,1.0,0.0,-1.57).setTranslation(2.44,-5.6,4.0)
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("WoodAppearance"))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,0})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-8.7,0.0,0.0,-8.7,5.5,0.0,0.0,3.35,0.0}))))))
        .addComments(" left side ")
        .addChild(new Transform().setRotation(0.0,1.0,0.0,-1.57).setTranslation(-2.43,-5.6,4.0)
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("WoodAppearance"))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,3,2,1,0})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-8.7,0.0,0.0,-8.7,5.5,0.0,0.0,3.35,0.0}))))))
        .addComments(" floor ")
        .addChild(new Transform().setTranslation(0.0,-5.4,-0.3)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(4.9,0.4,8.4))
            .setAppearance(new Appearance().setUSE("WoodAppearance")))))
      .addComments(" routeSelecter is used to select different routes when a player clicks on flippers. ")
      .addChild(new Script("routeSelecter1").setMustEvaluate(true).setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_startTime( touchTime ) {" + "\n" + 
"	prob= Math.random();" + "\n" + 
"\n" + 
"	if ( prob < 0.25 ) {" + "\n" + 
"		startTime1 = touchTime;" + "\n" + 
"	}" + "\n" + 
"	else if ( (prob >= 0.25) && (prob < 0.50) ) {" + "\n" + 
"		startTime2 = touchTime;" + "\n" + 
"	}" + "\n" + 
"	else if ( ( prob >= 0.50) && (prob < 0.75) ) {" + "\n" + 
"		startTime3 = touchTime;" + "\n" + 
"	}" + "\n" + 
"	else {" + "\n" + 
"		startTime4 = touchTime;	" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
        .addField(new field().setName("set_startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("startTime1").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("startTime2").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("startTime3").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("startTime4").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .addChild(new Script("routeSelecter2").setMustEvaluate(true).setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_startTime( touchTime ) {" + "\n" + 
"	prob= Math.random();" + "\n" + 
"	if ( prob < 0.25 ) {" + "\n" + 
"		startTime1 = touchTime;" + "\n" + 
"	}" + "\n" + 
"	else if ( (prob >= 0.25) && (prob < 0.50) ) {" + "\n" + 
"		startTime2 = touchTime;" + "\n" + 
"	}" + "\n" + 
"	else if ( (prob >= 0.50) && (prob < 0.75) ) {" + "\n" + 
"		startTime3 = touchTime;" + "\n" + 
"	}" + "\n" + 
"	else {" + "\n" + 
"		startTime4 = touchTime;	" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
        .addField(new field().setName("set_startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("startTime1").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("startTime2").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("startTime3").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("startTime4").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))))
    .addComments(" Start game ")
    .addChild(new ROUTE().setFromNode("Touch").setFromField("touchTime").setToNode("Clock").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("PosBall1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosBall1").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path1 ")
    .addChild(new ROUTE().setFromNode("Touch1").setFromField("touchTime").setToNode("routeSelecter1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("routeSelecter1").setFromField("startTime1").setToNode("Clock1_1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock1_1").setFromField("fraction_changed").setToNode("PosFlip1_1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip1_1").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path2 ")
    .addChild(new ROUTE().setFromNode("routeSelecter1").setFromField("startTime2").setToNode("Clock1_2").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock1_2").setFromField("fraction_changed").setToNode("PosFlip1_2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip1_2").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path3 ")
    .addChild(new ROUTE().setFromNode("routeSelecter1").setFromField("startTime3").setToNode("Clock1_3").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock1_3").setFromField("fraction_changed").setToNode("PosFlip1_3").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip1_3").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path4 ")
    .addChild(new ROUTE().setFromNode("routeSelecter1").setFromField("startTime4").setToNode("Clock1_4").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock1_4").setFromField("fraction_changed").setToNode("PosFlip1_4").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip1_4").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path5 ")
    .addChild(new ROUTE().setFromNode("Touch2").setFromField("touchTime").setToNode("routeSelecter2").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("routeSelecter2").setFromField("startTime1").setToNode("Clock2_1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock2_1").setFromField("fraction_changed").setToNode("PosFlip2_1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip2_1").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path6 ")
    .addChild(new ROUTE().setFromNode("routeSelecter2").setFromField("startTime2").setToNode("Clock2_2").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock2_2").setFromField("fraction_changed").setToNode("PosFlip2_2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip2_2").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path7 ")
    .addChild(new ROUTE().setFromNode("routeSelecter2").setFromField("startTime3").setToNode("Clock2_3").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock2_3").setFromField("fraction_changed").setToNode("PosFlip2_3").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip2_3").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Path8 ")
    .addChild(new ROUTE().setFromNode("routeSelecter2").setFromField("startTime4").setToNode("Clock2_4").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Clock2_4").setFromField("fraction_changed").setToNode("PosFlip2_4").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PosFlip2_4").setFromField("value_changed").setToNode("BALL1").setToField("set_translation"))
    .addComments(" Rotating sticks ")
    .addChild(new ROUTE().setFromNode("Touch1").setFromField("touchTime").setToNode("ClockOrient1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("ClockOrient1").setFromField("fraction_changed").setToNode("orienFlip1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("orienFlip1").setFromField("value_changed").setToNode("stck1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Touch2").setFromField("touchTime").setToNode("ClockOrient2").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("ClockOrient2").setFromField("fraction_changed").setToNode("orienFlip2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("orienFlip2").setFromField("value_changed").setToNode("stck2").setToField("set_rotation"))
    .addComments(" View Point ")
    .addChild(new Viewpoint().setDescription("normal view").setPosition(0.0,0.0,8.5))
    .addChild(new Viewpoint().setDescription("far").setPosition(0.0,1.0,20.0))
    .addChild(new Viewpoint().setDescription("right").setFieldOfView(0.7).setOrientation(0.0,1.0,0.0,1.2).setPosition(15.0,0.0,15.0))
    .addChild(new Viewpoint().setDescription("left").setOrientation(0.0,1.0,0.0,-1.2).setPosition(-15.0,0.0,15.0))
    .addChild(new Viewpoint().setDescription("over").setOrientation(1.0,0.0,0.0,-1.2).setPosition(0.0,17.0,5.0))
    .addChild(new Background().setGroundAngle(new double[] {1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyAngle(new double[] {1.309,1.571}).setBackUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_back.jpg","../UniversalMediaPanoramas/space_1_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_back.jpg"}).setBottomUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_bottom.jpg","../UniversalMediaPanoramas/space_1_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_bottom.jpg"}).setFrontUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_front.jpg","../UniversalMediaPanoramas/space_1_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_front.jpg"}).setLeftUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_left.jpg","../UniversalMediaPanoramas/space_1_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_left.jpg"}).setRightUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_right.jpg","../UniversalMediaPanoramas/space_1_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_right.jpg"}).setTopUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_top.jpg","../UniversalMediaPanoramas/space_1_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_top.jpg"})));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return PinballTable model
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
        X3D thisExampleX3dModel = new PinballTable().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.PinballTable\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.PinballTable\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
