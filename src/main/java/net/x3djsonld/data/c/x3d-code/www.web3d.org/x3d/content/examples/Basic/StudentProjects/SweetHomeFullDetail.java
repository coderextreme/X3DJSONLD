package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Model of one of the housing types in La Mesa Housing Area. The model is mostly in scale.this file contains the detailed version of the model. </p>
 <p> Related links: <a href="../../../StudentProjects/SweetHomeFullDetail.java">SweetHomeFullDetail.java</a> source, <a href="../../../StudentProjects/SweetHomeFullDetailIndex.html" target="_top">SweetHomeFullDetail catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/SweetHomeFullDetail.x3d">SweetHomeFullDetail.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> La Mesa Military Housing Model, Engin UZUNCAOVA [August, 2001] </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Engin UZUNCAOVA </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 September 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Model of one of the housing types in La Mesa Housing Area. The model is mostly in scale.this file contains the detailed version of the model. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d</a> </td>
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

	* @author La Mesa Military Housing Model, Engin UZUNCAOVA [August, 2001]
 */

public class SweetHomeFullDetail
{
	/** Default constructor to create this object. */
	public SweetHomeFullDetail ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SweetHomeFullDetail.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("La Mesa Military Housing Model, Engin UZUNCAOVA [August, 2001]"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Engin UZUNCAOVA"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("16 September 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Model of one of the housing types in La Mesa Housing Area. The model is mostly in scale.this file contains the detailed version of the model."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SweetHomeFullDetail.x3d"))
    .addChild(new NavigationInfo().setAvatarSize(new double[] {0.01,1.7,0.2}).setHeadlight(false).setSpeed(2).setType("\"EXAMINE\""))
    .addChild(new Group("FLOOR")
      .addChild(new Shape("Floor")
        .setAppearance(new Appearance("WALL")
          .setTexture(new ImageTexture().setUrl(new String[] {"WallColorTexture.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallColorTexture.jpg"})))
        .setGeometry(new Extrusion().setConvex(false).setCrossSection(new MFVec2f(new double[] {-6.225,4.8,-6.225,-4.8,6.225,-4.8,6.225,2.1,1.425,2.1,1.425,4.8,-6.225,4.8})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.1,0.0,0.0,0.15,0.0}))))
      .addChild(new Shape("FLOOR_FACESET")
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"FloorTexture.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FloorTexture.jpg"})))
        .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(new int[] {0,1,2,3,4,5,6})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-6.2,0.56,4.7,-6.2,0.16,-4.7,6.2,0.16,-4.7,6.2,0.16,2.0,1.4,0.16,2.0,1.4,0.16,4.7,-6.2,0.16,4.7}))))))
    .addChild(new Group("FRONT_SIDE")
      .addChild(new Transform("BABY_STUDY_ROOM").setTranslation(-2.4,0.15,4.725)
        .addChild(new Group("FRONT_WALLS")
          .addChild(new Transform("FRONT_LOWER").setTranslation(0.0,0.4,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(7.65,0.80,0.15))))
          .addChild(new Transform("FRONT_LEFT").setTranslation(-3.2,1.45,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(1.25,1.3,0.15))))
          .addChild(new Transform("FRONT_UPPER").setTranslation(0.0,2.3,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(7.65,0.4,0.15))))
          .addChild(new Transform("FRONT_MIDDLE").setTranslation(0.125,1.45,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(1.70,1.3,0.15))))
          .addChild(new Transform("FRONT_RIGHT").setTranslation(3.325,1.45,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(1.0,1.3,0.15)))))
        .addChild(new Transform().setTranslation(-1.65,0.83,0.0)
          .addChild(new Group("WINDOW")
            .addChild(new Shape()
              .setAppearance(new Appearance("WINDOWFRAME")
                .setMaterial(new Material().setDiffuseColor(.2,.2,.2)))
              .setGeometry(new Box().setSize(1.85,0.06,0.06)))
            .addChild(new Transform().setTranslation(0.0,1.24,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("WINDOWFRAME"))
                .setGeometry(new Box().setSize(1.85,0.06,0.06))))
            .addChild(new Transform().setTranslation(-0.895,0.62,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("WINDOWFRAME"))
                .setGeometry(new Box().setSize(0.06,1.18,0.06))))
            .addChild(new Transform().setTranslation(0.895,0.62,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("WINDOWFRAME"))
                .setGeometry(new Box().setSize(0.06,1.18,0.06))))
            .addChild(new Transform().setTranslation(0.0,0.62,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("WINDOWFRAME"))
                .setGeometry(new Box().setSize(0.06,1.18,0.06))))
            .addChild(new Transform("WINDOWGLASS").setTranslation(0.0,0.62,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance("GLASS")
                  .setMaterial(new Material().setEmissiveColor(0.757,0.804,0.804).setShininess(0.5).setTransparency(0.5)))
                .setGeometry(new Box().setSize(1.73,1.18,0.005))))))
        .addChild(new Transform().setTranslation(1.9,0.83,0.0)
          .addChild(new Group().setUSE("WINDOW"))))
      .addChild(new Transform("DOOR_SIDEWALL").setTranslation(1.35,1.4,3.25)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(0.15,2.5,2.82))))
      .addChild(new Transform("KITCHEN_FRONT").setTranslation(4.65,0.85,2.025)
        .addChild(new Group("KITCHEN_WALLS")
          .addChild(new Shape("UNDER_WINDOW")
            .setAppearance(new Appearance().setUSE("WALL"))
            .setGeometry(new Box().setSize(3.15,1.4,0.15)))
          .addChild(new Transform("LEFTOFWINDOW").setTranslation(-1.175,1.25,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(0.8,1.1,0.15))))
          .addChild(new Transform("RIGHTOFWINDOW").setTranslation(1.325,1.25,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(0.5,1.1,0.15))))
          .addChild(new Transform("UPPEROFWINDOW").setTranslation(0.15,1.6,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(1.85,0.4,0.15))))
          .addChild(new Transform("LEFTOFDOOR").setTranslation(-3.2,0.55,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(0.05,2.5,0.15))))
          .addChild(new Transform("UPPEROFDOOR").setTranslation(-2.4,1.6,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("WALL"))
              .setGeometry(new Box().setSize(1.65,0.4,0.15)))))
        .addChild(new Transform("FRONT_DOOR").setTranslation(-2.725,0.35,0.0)
          .addChild(new Transform("FrontDoor").setCenter(-0.45,0.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Box().setSize(0.9,2.1,0.1))
              .setAppearance(new Appearance("DOOR_COLOR")
                .setTexture(new ImageTexture().setUrl(new String[] {"DoorColor.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DoorColor.jpg"}))))
            .addChild(new Transform("DOOR_KNOP1").setTranslation(0.2,0.0,0.08)
              .addChild(new Shape("DOOR_LOCK")
                .setGeometry(new Sphere().setRadius(0.05))
                .setAppearance(new Appearance("DOOR_LOCK_COLOR")
                  .setTexture(new ImageTexture("DoorKnobColor").setUrl(new String[] {"DoorKnobColor.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DoorKnobColor.jpg"})))))
            .addChild(new Transform("DOOR_KNOP2").setTranslation(0.2,0.0,-0.08)
              .addChild(new Shape().setUSE("DOOR_LOCK")))
            .addChild(new CylinderSensor("DoorSensorFront").setDescription("front door").setMaxAngle(1.57))))
        .addChild(new Transform("KITCHEN_WINDOW").setScale(1.0,0.54,1.0).setTranslation(0.15,0.72,0.0)
          .addChild(new Group().setUSE("WINDOW")))
        .addChild(new Transform("DOORSIDE").setTranslation(-2.225,0.35,0.0)
          .addChild(new Transform("LEFTBAR").setTranslation(0.01,0.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))
              .setGeometry(new Box().setSize(0.1,2.1,0.1))))
          .addChild(new Transform("RIGHTBAR").setTranslation(0.6,0.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))
              .setGeometry(new Box().setSize(0.1,2.1,0.1))))
          .addChild(new Transform("UPPERBAR").setTranslation(0.325,1.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))
              .setGeometry(new Box().setSize(0.55,0.1,0.1))))
          .addChild(new Transform("LOWERBAR").setTranslation(0.325,-1.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))
              .setGeometry(new Box().setSize(0.55,0.1,0.1))))
          .addChild(new Transform("MIDDLE1BAR").setTranslation(0.325,0.325,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))
              .setGeometry(new Box().setSize(0.55,0.05,0.1))))
          .addChild(new Transform("MIDDLE2BAR").setTranslation(0.325,-0.325,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))
              .setGeometry(new Box().setSize(0.55,0.05,0.1))))
          .addChild(new Group("SIDEGLASS")
            .addChild(new Transform().setTranslation(0.325,0.65,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("GLASS"))
                .setGeometry(new Box().setSize(0.5,0.6,0.005))))
            .addChild(new Transform().setTranslation(0.325,0.0,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("GLASS"))
                .setGeometry(new Box().setSize(0.5,0.6,0.005))))
            .addChild(new Transform().setTranslation(0.325,-0.65,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("GLASS"))
                .setGeometry(new Box().setSize(0.5,0.6,0.005))))))))
    .addChild(new Transform("RIGHT_SIDE").setRotation(0.0,1.0,0.0,1.57).setTranslation(6.15,1.4,0.95)
      .addChild(new Shape("WALLBEFOREDOOR")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new Box().setSize(2.32,2.5,0.15)))
      .addChild(new Transform("WALLAFTERDOOR").setTranslation(3.86,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(3.8,2.5,0.15))))
      .addChild(new Transform("WALLOVERDOOR").setTranslation(1.56,1.05,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(0.84,0.4,0.15))))
      .addChild(new Transform("KITCHEN_DOOR").setTranslation(1.56,-0.85,0.0)
        .addChild(new Transform("KitchenDoor").setCenter(0.4,0.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(0.8,0.8,0.1))
            .setAppearance(new Appearance().setUSE("DOOR_COLOR")))
          .addChild(new Transform().setTranslation(-0.325,1.05,0.0)
            .addChild(new Shape("BAR")
              .setGeometry(new Box().setSize(0.15,1.3,0.1))
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))))
          .addChild(new Transform().setTranslation(0.325,1.05,0.0)
            .addChild(new Shape().setUSE("BAR")))
          .addChild(new Transform().setTranslation(0.0,1.625,0.0)
            .addChild(new Shape()
              .setGeometry(new Box().setSize(0.5,0.15,0.1))
              .setAppearance(new Appearance().setUSE("DOOR_COLOR"))))
          .addChild(new Transform("DOORGLASS").setTranslation(0.0,0.975,0.0)
            .addChild(new Shape()
              .setGeometry(new Box().setSize(0.5,1.15,0.005))
              .setAppearance(new Appearance().setUSE("GLASS"))))
          .addChild(new Transform().setTranslation(-0.25,0.3,0.08)
            .addChild(new Shape().setUSE("DOOR_LOCK")))
          .addChild(new Transform().setTranslation(-0.25,0.3,-0.08)
            .addChild(new Shape().setUSE("DOOR_LOCK")))
          .addChild(new CylinderSensor("DoorSensorKitchen").setDescription("kitchen door").setMaxAngle(0).setMinAngle(-1.57)))))
    .addChild(new Transform("LEFTSIDE").setRotation(0.0,1.0,0.0,-1.57).setTranslation(-6.15,1.4,2.675)
      .addChild(new Shape("RIGHT_OF_WINDOW")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new Box().setSize(3.95,2.5,0.15)))
      .addChild(new Transform("UPPER_OF_WINDOW").setTranslation(-4.725,1.05,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(5.5,0.4,0.15))))
      .addChild(new Transform("UNDERWINDOW").setTranslation(-4.725,-0.55,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(5.5,1.4,0.15))))
      .addChild(new Transform("LEFT_OF_WINDOW").setTranslation(-5.225,0.5,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(4.5,0.7,0.15))))
      .addChild(new Transform("BATHROOM_WINDOW").setScale(0.54,0.54,1.0).setTranslation(-2.475,0.16,0.0)
        .addChild(new Group().setUSE("WINDOW"))))
    .addChild(new Transform("BACKSIDE").setRotation(0.0,1.0,0.0,3.14).setTranslation(-0.675,1.4,-4.725)
      .addChild(new Transform("RIGHTMOSTWALL").setTranslation(5.0,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(1.1,2.5,0.15))))
      .addChild(new Transform("RIGHTWINDOW").setTranslation(3.525,-0.42,0.0)
        .addChild(new Group().setUSE("WINDOW")))
      .addChild(new Transform("RIGHTUPPERWALL").setTranslation(0.775,1.05,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(7.35,0.4,0.15))))
      .addChild(new Transform("RIGHTLOWERWALL").setTranslation(0.775,-0.85,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(7.35,0.8,0.15))))
      .addChild(new Transform("RIGHTMIDDLEWALL").setTranslation(1.55,0.2,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(2.1,1.3,0.15))))
      .addChild(new Transform("MIDDLEWINDOW").setScale(1.297,1.0,1.0).setTranslation(-0.7,-0.42,0.0)
        .addChild(new Group().setUSE("WINDOW")))
      .addChild(new Transform("MIDDLEWALL").setTranslation(-2.4,0.2,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(1.0,1.3,0.15))))
      .addChild(new Transform("BACK_DOOR").setTranslation(-3.35,-0.2,0.0)
        .addChild(new Transform("BackDoor").setCenter(-0.45,0.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(0.9,2.1,0.1))
            .setAppearance(new Appearance().setUSE("DOOR_COLOR")))
          .addChild(new Transform("DOORKNOP1").setTranslation(0.2,0.0,0.08)
            .addChild(new Shape().setUSE("DOOR_LOCK")))
          .addChild(new Transform("DOORKNOP2").setTranslation(0.2,0.0,-0.08)
            .addChild(new Shape().setUSE("DOOR_LOCK")))
          .addChild(new CylinderSensor("DoorSensorBack").setDescription("back door").setMaxAngle(1.57))))
      .addChild(new Transform("LEFTUPPERWALL").setTranslation(-4.825,1.05,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(3.85,0.4,0.15))))
      .addChild(new Transform("LEFT_OF_DOOR").setTranslation(-4.075,-0.2,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(0.55,2.1,0.15))))
      .addChild(new Transform("LEFTLOWERWALL").setTranslation(-5.55,-0.85,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(2.4,0.8,0.15))))
      .addChild(new Transform("LEFTWINDOW").setTranslation(-5.275,-0.42,0.0)
        .addChild(new Group().setUSE("WINDOW")))
      .addChild(new Transform("LEFTMOSTWALL").setTranslation(-6.475,0.2,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("WALL"))
          .setGeometry(new Box().setSize(0.55,1.3,0.15)))))
    .addChild(new Transform("INSIDE_WALLS").setTranslation(0.0,0.01,0.0)
      .addChild(new Shape("BEDROOM_CORIDOR")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new Extrusion().setConvex(false).setCrossSection(new MFVec2f(new double[] {-2.075,-4.650,-1.925,-4.650,-1.925,-0.600,1.425,-0.600,1.425,-0.250,1.275,-0.250,1.275,-0.450,-2.200,-0.450,-2.200,-0.600,-2.075,-0.600,-2.075,-4.650})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.14,0.0,0.0,2.65,0.0}))))
      .addChild(new Shape("BATHROOM_BEDROOM")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new Extrusion().setConvex(false).setCrossSection(new MFVec2f(new double[] {-6.075,-0.600,-4.175,-0.600,-4.175,-1.300,-3.125,-1.300,-3.125,-0.600,-3.0,-0.600,-3.0,-0.450,-3.225,-0.450,-3.225,-1.200,-4.075,-1.200,-4.075,-0.600,-3.775,-0.600,-3.775,-0.450,-3.875,-0.450,-3.875,-0.375,-4.025,-0.375,-4.025,-0.450,-6.075,-0.450,-6.075,-0.600})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.14,0.0,0.0,2.65,0.0}))))
      .addChild(new Shape("BATHROOM_BABYROOM")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new Extrusion().setConvex(false).setCrossSection(new MFVec2f(new double[] {-6.075,1.550,-4.475,1.550,-4.475,0.550,-4.025,0.550,-4.025,0.425,-3.875,0.425,-3.875,0.550,-3.0,0.550,-3.0,0.700,-3.125,0.700,-3.125,1.700,-3.225,1.700,-3.225,0.700,-4.325,0.700,-4.325,1.700,-6.075,1.700,-6.075,1.550})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.14,0.0,0.0,2.65,0.0}))))
      .addChild(new Shape("BABYROOM_STUDYROOM")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new Extrusion().setConvex(false).setCrossSection(new MFVec2f(new double[] {-2.075,0.550,-1.800,0.550,-1.800,0.700,-1.925,0.700,-1.925,4.650,-2.075,4.650,-2.075,0.700,-2.200,0.700,-2.200,0.550,-2.075,0.550})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.14,0.0,0.0,2.65,0.0}))))
      .addChild(new Shape("STUDYROOM_CORIDOR")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new Extrusion().setConvex(false).setCrossSection(new MFVec2f(new double[] {-1.100,0.550,0.675,0.550,0.675,1.250,1.275,1.250,1.275,0.550,1.425,0.550,1.425,1.850,1.275,1.850,1.275,1.350,0.575,1.350,0.575,0.650,-0.875,0.650,-0.875,1.350,-0.975,1.350,-0.975,0.700,-1.100,0.700,-1.100,0.550})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.14,0.0,0.0,2.65,0.0})))))
    .addChild(new Group("ROOF")
      .addChild(new Transform("ROOF_TRANSFORM").setTranslation(0.0,2.64,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"RoofTexture.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/RoofTexture.jpg"})))
          .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {-6.525,5.1,-6.525,-5.1,6.525,-5.1,6.525,2.4,3.225,2.4,3.225,5.1,-6.525,5.1})).setScale(new MFVec2f(new double[] {1.0,1.0,1.01,1.01,0.01,0.01})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.2,0.0,0.0,0.8,0.0})))))
      .addChild(new Shape("CEILING_FACESET")
        .setAppearance(new Appearance().setUSE("WALL"))
        .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setSolid(false).setCoordIndex(new int[] {0,1,2,3,4,5,6})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-6.2,2.63,4.7,-6.2,2.63,-4.7,6.2,2.63,-4.7,6.2,2.63,2.0,1.4,2.63,2.0,1.4,2.63,4.7,-6.2,2.63,4.7}))))))
    .addChild(new ROUTE().setFromNode("DoorSensorFront").setFromField("rotation_changed").setToNode("FrontDoor").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("DoorSensorKitchen").setFromField("rotation_changed").setToNode("KitchenDoor").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("DoorSensorBack").setFromField("rotation_changed").setToNode("BackDoor").setToField("set_rotation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SweetHomeFullDetail model
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
        X3D thisExampleX3dModel = new SweetHomeFullDetail().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SweetHomeFullDetail\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SweetHomeFullDetail\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
