package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Working model of a 14th century Trebuchet Catapult. </p>
 <p> Related links: Catalog page <a href="../../../StudentProjects/TrebuchetIndex.html" target="_blank">Trebuchet</a>,  source <a href="../../../StudentProjects/Trebuchet.java">Trebuchet.java</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/Trebuchet.x3d">Trebuchet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Working model of a 14th century Trebuchet Catapult. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> LT Joe Roth </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 20 June 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> version </i> </td>
			<td> 7.8 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://trebuchet.com" target="_blank">http://trebuchet.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://members.home.net/dimona" target="_blank">http://members.home.net/dimona</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> trebuchet catapult Monty Python </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under "Fair Use" clause of the DMCA </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm" target="_blank">https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm" target="_blank">http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author LT Joe Roth
 */

public class Trebuchet
{
	/** Default constructor to create this object. */
	public Trebuchet ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Trebuchet.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Working model of a 14th century Trebuchet Catapult."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("LT Joe Roth"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("20 June 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_VERSION    ).setContent("7.8"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://trebuchet.com"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://members.home.net/dimona"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("trebuchet catapult Monty Python"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Trebuchet.x3d"))
    .addChild(new Background().setGroundAngle(new double[] {1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.1,0.1,0.0,0.4,0.25,0.2,0.6,0.6,0.6})).setSkyAngle(new double[] {1.309,1.57079}).setSkyColor(new MFColor(new double[] {0.0,0.2,0.7,0.0,0.5,1.0,1.0,1.0,1.0})).setBackUrl(new String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"}).setBottomUrl(new String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"}).setFrontUrl(new String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"}).setLeftUrl(new String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"}).setRightUrl(new String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"}).setTopUrl(new String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"}))
    .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
      .setSource(new AudioClip("HolyGrail").setDescription("HolyGrail").setLoop(true).setUrl(new String[] {"holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"})))
    .addChild(new Shape()
      .setGeometry(new Box().setSize(10000.0,1.0,10000.0))
      .setAppearance(new Appearance()
        .setTexture(new ImageTexture().setUrl(new String[] {"grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"}))))
    .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setScale(.5,.5,.5).setTranslation(10.5,6.5,4.5)
      .addChild(new Shape()
        .setAppearance(new Appearance("TextAppearance")
          .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,1.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Click Sling to Select Projectile"})
          .setFontStyle(new FontStyle()))))
    .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setScale(.5,.5,.5).setTranslation(11.0,5.5,6.0)
      .addChild(new Switch("Weight").setWhichChoice(0)
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("TextAppearance"))
            .setGeometry(new Text().setString(new String[] {"Click Here to Change Counter Weight (50 lbs)"}))))
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("TextAppearance"))
            .setGeometry(new Text().setString(new String[] {"Click Here to Change Counter Weight (500 lbs)"}))))
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("TextAppearance"))
            .setGeometry(new Text().setString(new String[] {"Click Here to Change Counter Weight (1000 lbs)"}))))
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("TextAppearance"))
            .setGeometry(new Text().setString(new String[] {"Click Here to Change Counter Weight (10000 lbs)"})))))
      .addChild(new TouchSensor("weightselector").setDescription("weight selector"))
      .addChild(new Transform().setTranslation(8.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(20.0,1.0,1.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setTransparency(1))))))
    .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setTranslation(10.0,.5,4.5)
      .addChild(new Transform("launch").setTranslation(0.0,2.0,5.0)
        .addChild(new Billboard()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"LAUNCH"})
              .setFontStyle(new FontStyle())))
          .addChild(new Transform().setTranslation(2.0,.3,0.0)
            .addChild(new Shape()
              .setGeometry(new Box().setSize(5.0,1.0,1.0))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1)))))
          .addChild(new Switch("PigdogMonk").setWhichChoice(-1)
            .addChild(new Group()
              .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
                .setSource(new AudioClip("PigDogSound").setDescription("PigDogSound").setUrl(new String[] {"pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"}))))
            .addChild(new Group()
              .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
                .setSource(new AudioClip("MonkSound").setDescription("MonkSound").setUrl(new String[] {"monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"}))))))
        .addChild(new TouchSensor("Launch").setDescription("launch!")))
      .addChild(new Transform()
        .addChild(new Switch("projectilename").setWhichChoice(0)
          .addChild(new Group()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("TextAppearance"))
              .setGeometry(new Text().setString(new String[] {"Bowling Ball (10 lbs)"})
                .setFontStyle(new FontStyle().setSize(.5))))
            .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setPriority(1)
              .setSource(new AudioClip("HolyHandGrenadeSound").setDescription("HolyHandGrenadeSound").setUrl(new String[] {"grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"}))))
          .addChild(new Group()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("TextAppearance"))
              .setGeometry(new Text().setString(new String[] {"Cow (1000 lbs)"})
                .setFontStyle(new FontStyle().setSize(.5))))
            .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
              .setSource(new AudioClip("CowSound").setDescription("CowSound").setUrl(new String[] {"lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"}))))
          .addChild(new Group()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("TextAppearance"))
              .setGeometry(new Text().setString(new String[] {"Chicken (5 lbs)"})
                .setFontStyle(new FontStyle().setSize(.5))))
            .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setPriority(1)
              .setSource(new AudioClip("HamsterSound").setDescription("HamsterSound").setUrl(new String[] {"hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"})))))))
    .addChild(new Transform().setRotation(0.0,1.0,0.0,-1.67)
      .addChild(new Transform("aft").setTranslation(5.0,5.0,15.0)
        .addChild(new Transform().setTranslation(-2.5,-4.5,-2.0)
          .addChild(new Transform().setUSE("launch")))))
    .addChild(new Transform().setTranslation(0.0,3.0,0.0)
      .addChild(new Shape("plank")
        .setGeometry(new Box().setSize(25.0,1.0,1.0))
        .setAppearance(new Appearance("wood")
          .setTexture(new ImageTexture("woodTexture").setUrl(new String[] {"wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"}))))
      .addChild(new Transform("angledsupport").setRotation(0.0,0.0,1.0,1.0).setTranslation(-5.0,10.0,0.0)
        .addChild(new Shape().setUSE("plank")))
      .addChild(new Transform("angledsupport2").setRotation(0.0,0.0,1.0,-1.0).setTranslation(5.0,10.0,0.0)
        .addChild(new Shape().setUSE("plank")))
      .addChild(new Transform("verticalsupport").setRotation(0.0,0.0,1.0,1.57).setScale(.9,1.0,1.0).setTranslation(0.0,11.0,0.0)
        .addChild(new Shape().setUSE("plank"))
        .addComments(" Main Verticle Support "))
      .addChild(new Transform("horizontalsupport").setScale(.4,1.0,1.0).setTranslation(0.0,10.0,0.0)
        .addChild(new Shape().setUSE("plank")))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57).setScale(.6,1.0,1.0).setTranslation(0.0,5.0,10.0)
        .addChild(new Transform().setRotation(0.0,1.0,0.0,.4)
          .addChild(new Shape().setUSE("plank"))))
      .addChild(new Transform("panel").setTranslation(0.0,18.2,-.3)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(5.0,5.0,.5))
          .setAppearance(new Appearance().setUSE("wood"))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.6,2.5)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Shape()
            .setGeometry(new Extrusion().setBeginCap(false).setCrossSection(new MFVec2f(new double[] {1.0,-.38,.92,-.38,.71,-.71,.38,-.92,0.0,-1.0,-.38,-.92,-.71,-.71,-.92,-.38,-1.0,-.38,-1.0,-1.1,1.0,-1.1,1.0,-.38})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,6.0,0.0,0.0,-11.0,0.0})))
            .setAppearance(new Appearance().setUSE("wood")))))
      .addChild(new Transform("flinger").setCenter(7.0,0.0,0.0).setRotation(0.0,0.0,1.0,.82).setScale(.9,1.0,1.0).setTranslation(-7.0,18.0,2.5)
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Box().setSize(35.0,1.0,1.0))
            .setAppearance(new Appearance().setUSE("wood")))
          .addChild(new Transform().setTranslation(7.0,0.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Box().setSize(8.0,2.0,2.0))
              .setAppearance(new Appearance().setUSE("wood")))))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setScale(.2,.2,.2).setTranslation(-15.0,-1.0,0.0)
          .addChild(new Shape("Torus")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setSpecularColor(1.0,1.0,1.0)))
            .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {.90,0.00,0.81,-0.34,0.63,-0.63,0.34,-0.83,0.00,-.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-.90,-0.00,-0.81,0.34,-0.63,0.63,-0.34,0.81,0.00,.90,0.38,0.81,0.63,0.63,0.81,0.34,.90,0.00})).setEndCap(false).setSpine(new MFVec3f(new double[] {2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00}))))
          .addChild(new Transform().setTranslation(1.0,0.0,2.0)
            .addChild(new Shape()
              .setAppearance(new Appearance("rope")
                .setTexture(new ImageTexture().setUSE("woodTexture")))
              .setGeometry(new Sphere().setRadius(1.5)))
            .addComments(" knott ")))
        .addComments(" The Unicorn ")
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.2).setScale(.2,.2,.2).setTranslation(-18.3,0.3,0.0)
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(10))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setSpecularColor(1.0,1.0,1.0))))
          .addChild(new Transform().setTranslation(0.0,-2.5,0.0)
            .addComments(" The Unicorn ")
            .addChild(new Shape().setUSE("Torus"))
            .addChild(new Transform().setTranslation(-2.0,-0.0,0.0)
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(1.5))
                .setAppearance(new Appearance().setUSE("rope")))
              .addComments(" Knott ")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.2).setTranslation(15.0,55.0,-11.0)
            .addChild(new Transform().setScale(5.0,5.0,5.0)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("rope"))
                .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(new MFVec2f(new double[] {.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {-15.2,1.4,2.2,-12.0,-.8,2.2})))))))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.7).setTranslation(-17.0,-4.5,0.0)
          .addChild(new Transform().setScale(.2,.2,.2)
            .addComments(" Knot ")
            .addChild(new Shape().setUSE("Torus"))
            .addChild(new Transform().setTranslation(-1.0,0.0,1.7)
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(1.5))
                .setAppearance(new Appearance().setUSE("rope"))))))
        .addChild(new Transform("RnS")
          .addChild(new Transform("ropes")
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-.82).setTranslation(7.0,-26.0,-2.5)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("rope"))
                .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(new MFVec2f(new double[] {.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {-33.0,.9,2.5,-18.5,1.9,2.55}))))
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("rope"))
                .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(new MFVec2f(new double[] {.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {-35.7,-.8,2.5,-18.8,-.8,2.55}))))))
          .addChild(new Transform("sling").setRotation(0.0,0.0,1.0,-.82).setTranslation(-4.0,-15.3,0.0)
            .addChild(new Transform()
              .addChild(new Transform().setRotation(0.0,1.0,0.0,-1.57).setScale(1.0,1.3,1.0).setTranslation(.5,0.0,-1.0)
                .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
                  .addChild(new Transform().setScale(.3,.3,.3)
                    .addChild(new Shape("halfsling")
                      .setAppearance(new Appearance("clear")
                        .setMaterial(new Material().setTransparency(.5)))
                      .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.0,0.0,0.0,5.0,.5,7.0,1.0,8.0,2.0,9.0,3.0,11.0,3.5,11.2,4.0,11.0,5.0,9.0,6.0,8.0,6.5,7.0,6.7,5.0,6.7,0.0,0.0,0.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,.1,0.0,0.0}))))
                    .addChild(new Transform().setScale(.3,.3,.3).setTranslation(0.0,-3.5,11.5)
                      .addChild(new Shape().setUSE("Torus"))
                      .addChild(new Transform().setTranslation(0.0,0.0,2.0)
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("rope"))
                          .setGeometry(new Sphere().setRadius(1.5))))))
                  .addChild(new Transform().setScale(.3,.3,.3).setTranslation(2.0,0.0,0.0)
                    .addChild(new Shape().setUSE("halfsling"))
                    .addChild(new Transform().setScale(.3,.3,.3).setTranslation(0.0,-3.5,11.3)
                      .addChild(new Shape().setUSE("Torus"))
                      .addChild(new Transform().setTranslation(0.0,0.0,2.0)
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("rope"))
                          .setGeometry(new Sphere().setRadius(1.5))))))
                  .addChild(new Transform().setTranslation(1.0,-1.0,0.0)
                    .addChild(new Shape()
                      .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-1.0,0.0,0.0,1.0,0.0})))
                      .setAppearance(new Appearance().setUSE("clear")))))
                .addChild(new TouchSensor("LauncheeChoice").setDescription("launcher choice")))
              .addChild(new Transform("projectiletransform").setScale(.01,.01,.01)
                .addChild(new Switch("projectile").setWhichChoice(0)
                  .addChild(new Group()
                    .addChild(new Transform().setTranslation(0.0,.7,0.0)
                      .addChild(new Shape()
                        .setGeometry(new Sphere().setRadius(.7))
                        .setAppearance(new Appearance("black")
                          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0))))))
                  .addChild(new Group()
                    .addChild(new Transform()
                      .addChild(new Inline().setUrl(new String[] {"cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"}))))
                  .addChild(new Group()
                    .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setScale(.4,.4,.4).setTranslation(0.0,.7,0.0)
                      .addChild(new Inline().setUrl(new String[] {"vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"}))))))))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,18.0,2.5)
        .addChild(new Shape()
          .setGeometry(new Cylinder().setHeight(8).setRadius(.4))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0))))
        .addComments(" Top Pivot "))
      .addChild(new Transform("verticalweight")
        .addChild(new Transform().setTranslation(4.0,18.0,1.8)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(1.0,10.0,.5))
            .setAppearance(new Appearance().setUSE("wood"))))
        .addChild(new Transform().setTranslation(4.0,18.0,3.2)
          .addChild(new Shape()
            .setGeometry(new Box().setSize(1.0,10.0,.5))
            .setAppearance(new Appearance().setUSE("wood"))))
        .addChild(new Transform().setTranslation(4.0,14.0,2.5)
          .addComments(" CounterWeight ")
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(4).setRadius(1.5))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0)))))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(4.0,22.0,2.5)
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(2.5).setRadius(.3))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setSpecularColor(1.0,1.0,1.0))))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57).setScale(.2,.2,.2).setTranslation(-11.5,-1.0,2.0)
        .addChild(new Transform("screw").setRotation(1.0,0.0,0.0,1.57)
          .addChild(new Shape().setUSE("Torus"))
          .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.0,7.0)
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(10).setRadius(.7))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setSpecularColor(1.0,1.0,1.0))))))
        .addChild(new Transform().setTranslation(0.0,0.0,7.0)
          .addChild(new Transform().setUSE("screw")))
        .addComments(" Release Pin ")
        .addChild(new Transform("Pin").setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.0,-3.0)
          .addChild(new Transform().setUSE("screw"))))
      .addChild(new Transform().setTranslation(0.0,0.0,5.0)
        .addChild(new Shape().setUSE("plank"))
        .addChild(new Transform().setUSE("angledsupport"))
        .addChild(new Transform().setUSE("angledsupport2"))
        .addChild(new Transform().setUSE("verticalsupport"))
        .addChild(new Transform().setUSE("horizontalsupport"))
        .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setScale(.6,1.0,1.0).setTranslation(0.0,-11.0,-2.5)
          .addChild(new Transform().setUSE("horizontalsupport")))
        .addChild(new Transform().setRotation(0.0,0.0,1.0,-1.57).setScale(.6,1.0,1.0).setTranslation(0.0,5.0,-10.0)
          .addChild(new Transform().setRotation(0.0,1.0,0.0,.4)
            .addChild(new Shape().setUSE("plank"))))
        .addChild(new Transform().setTranslation(0.0,0.0,.6)
          .addChild(new Transform().setUSE("panel"))))
      .addChild(new Transform().setTranslation(10.0,-1.0,2.5)
        .addChild(new Shape("Axle")
          .setGeometry(new Box().setSize(1.0,1.0,8.0))
          .setAppearance(new Appearance().setUSE("wood")))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,4.5)
          .addChild(new Shape("wheel")
            .setGeometry(new Cylinder().setRadius(2))
            .setAppearance(new Appearance().setUSE("wood")))
          .addChild(new Shape("tracks")
            .setGeometry(new Sphere().setRadius(1.5))
            .setAppearance(new Appearance().setUSE("black")))
          .addChild(new Transform().setTranslation(0.0,.55,0.0)
            .addChild(new Shape("hub")
              .setGeometry(new Sphere().setRadius(1.5))
              .setAppearance(new Appearance().setUSE("black")))))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,-4.5)
          .addChild(new Shape().setUSE("wheel"))
          .addChild(new Shape().setUSE("tracks"))
          .addChild(new Transform().setTranslation(0.0,-.55,0.0)
            .addChild(new Shape().setUSE("hub")))))
      .addChild(new Transform().setTranslation(-10.0,-1.0,2.5)
        .addChild(new Shape().setUSE("Axle"))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,4.5)
          .addChild(new Shape().setUSE("wheel"))
          .addChild(new Shape().setUSE("tracks"))
          .addChild(new Transform().setTranslation(0.0,.55,0.0)
            .addChild(new Shape().setUSE("hub"))))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,-4.5)
          .addChild(new Shape().setUSE("wheel"))
          .addChild(new Shape().setUSE("tracks"))
          .addChild(new Transform().setTranslation(0.0,-.55,0.0)
            .addChild(new Shape().setUSE("hub"))))
        .addChild(new Transform().setRotation(0.0,1.0,0.0,-.6).setTranslation(0.0,100.0,400.0)
          .addChild(new Transform().setTranslation(1.0,3.0,0.0)
            .addChild(new Viewpoint().setDescription("Side")))
          .addChild(new Transform().setUSE("launch"))
          .addChild(new Transform()
            .addChild(new TouchSensor().setUSE("LauncheeChoice"))
            .addChild(new Switch().setUSE("projectilename"))
            .addChild(new Transform().setTranslation(2.5,0.0,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(5.0,.5,.5))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(1))))))
          .addChild(new Transform().setScale(.5,.5,.5).setTranslation(0.0,-1.0,0.0)
            .addChild(new TouchSensor().setUSE("weightselector"))
            .addChild(new Switch().setUSE("Weight"))
            .addChild(new Transform().setTranslation(8.0,0.0,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(17.0,1.0,.5))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(1)))))))
        .addChild(new Transform("ProjectileTransform").setTranslation(14.25,1.25,0.0)
          .addChild(new Switch().setUSE("projectile"))
          .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setTranslation(0.0,1.0,0.0)
            .addChild(new Viewpoint().setDescription("Projectile Cam").setPosition(0.0,0.0,15.0))))
        .addChild(new Transform().setTranslation(20.0,2.0,0.0)
          .addChild(new Transform("Front").setRotation(0.0,1.0,0.0,1.57)
            .addChild(new Viewpoint().setDescription("Fore"))))
        .addChild(new Transform().setTranslation(-8.0,4.0,0.0)
          .addChild(new Transform().setRotation(0.0,1.0,0.0,-1.57)
            .addChild(new Viewpoint().setDescription("Aft"))))
        .addChild(new Script("WeightScript").setSourceCode("""
ecmascript:


function initialize ()
{
	whichchoice =0;
	CounterWeight=100;
}

function set_boolean ( boolean_input, eventTime)
{

	if ( boolean_input== false ) { return; } // ignore the unclick
        whichchoice = whichchoice +1;
	if (whichchoice == 0)CounterWeight=50.00;
	if (whichchoice == 1)CounterWeight=500.00;
	if (whichchoice == 2)CounterWeight=1000.00;
	if (whichchoice == 3)CounterWeight=10000.00;
        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }


        Browser.println ('CounterWeight ='+CounterWeight);
}
""")
          .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("whichchoice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("CounterWeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new Script("LauncheeScript").setSourceCode("""
ecmascript:

function set_boolean (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick
        whichchoice = whichchoice +1;
        if (whichchoice == 0)ProjectileWeight=10.00;
        if (whichchoice == 1)ProjectileWeight=1000.00;
	if (whichchoice == 2)ProjectileWeight=5;

	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }
	Browser.println ('Projectile Weight'+ProjectileWeight);
}
""")
          .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("whichchoice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("ProjectileWeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new Script("PigdogMonkScript").setSourceCode("""
ecmascript:

function set_boolean (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick

        whichchoice = whichchoice +1;

        if ( whichchoice ==2 )  whichchoice = 0;


}
""")
          .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("whichchoice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new Script("Mover").setSourceCode("""
ecmascript:

function initialize ()
{
	MassCounterWeight=100;
	MassProjectileWeight=10;
	Browser.println ('MassCounterWeight =' + MassCounterWeight);
	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);
}

function set_MassProjectileWeight (value, timestamp)
{
	MassProjectileWeight = value;
	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);
}
function set_MassCounterWeight (value2, timestamp)
{
	MassCounterWeight = value2;
	Browser.println ('new MassCounterWeight =' + MassCounterWeight);
}


function set_fraction ( fraction, eventTime )
{
	var TrebuchetHeight=45;
	var Height =25;
      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;
	// start at TrebuchetHeight and keep along z axis (z=zero)
	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);
        z = 0;
        transparent = new SFVec3f (1,1,1);
     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)
		{
		x=x-10;
		y=y+1;
		transparent = new SFVec3f(.01, .01, .01);
			}

	value_changed = new SFVec3f (x, y, z);
	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);
}
""")
          .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("set_MassCounterWeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("set_MassProjectileWeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("MassCounterWeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
          .addField(new field().setName("MassProjectileWeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
          .addField(new field().setName("transparent").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("value_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))))
    .addChild(new TimeSensor("clock").setCycleInterval(10))
    .addChild(new PositionInterpolator("verticalweightpath").setKey(new double[] {0.0,.1,.2,.2,.3,.9}).setKeyValue(new MFVec3f(new double[] {1.4,1.6,0.0,1.,-8.0,0.0,-3.5,-12.0,0.0,-3.5,-12.0,0.0,1.2,-8.0,0.0,1.4,1.6,0.0})))
    .addChild(new OrientationInterpolator("flingerangles").setKey(new double[] {0.0,.1,.2,.2,.3,.9}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,.82,0.0,0.0,1.0,-.77,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-.77,0.0,0.0,1.0,.82})))
    .addChild(new PositionInterpolator("pinpath").setKey(new double[] {0.0,.01,.95,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,-3.0,0.0,0.0,-10.0,0.0,0.0,-10.0,0.0,0.0,-3.0})))
    .addChild(new OrientationInterpolator("RnSAngels").setKey(new double[] {0.0,.7,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,-3.14,0.0,0.0,1.0,0.0})))
    .addChild(new PositionInterpolator("invisiable").setKey(new double[] {0.0,.2,.98,.99}).setKeyValue(new MFVec3f(new double[] {1.0,1.0,1.0,.01,.01,.01,.01,.01,.01,1.0,1.0,1.0})))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("invisiable").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("invisiable").setFromField("value_changed").setToNode("projectiletransform").setToField("set_scale"))
    .addChild(new ROUTE().setFromNode("WeightScript").setFromField("CounterWeight").setToNode("Mover").setToField("set_MassCounterWeight"))
    .addChild(new ROUTE().setFromNode("LauncheeScript").setFromField("ProjectileWeight").setToNode("Mover").setToField("set_MassProjectileWeight"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("Mover").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Mover").setFromField("value_changed").setToNode("ProjectileTransform").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Mover").setFromField("transparent").setToNode("ProjectileTransform").setToField("set_scale"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("touchTime").setToNode("clock").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("isActive").setToNode("PigdogMonkScript").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("touchTime").setToNode("PigDogSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("Launch").setFromField("touchTime").setToNode("MonkSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("PigdogMonkScript").setFromField("whichchoice").setToNode("PigdogMonk").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("HolyHandGrenadeSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("CowSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("touchTime").setToNode("HamsterSound").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("LauncheeChoice").setFromField("isActive").setToNode("LauncheeScript").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("LauncheeScript").setFromField("whichchoice").setToNode("projectile").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("LauncheeScript").setFromField("whichchoice").setToNode("projectilename").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("weightselector").setFromField("isActive").setToNode("WeightScript").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("WeightScript").setFromField("whichchoice").setToNode("Weight").setToField("whichChoice"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("flingerangles").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("flingerangles").setFromField("value_changed").setToNode("flinger").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("verticalweightpath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("verticalweightpath").setFromField("value_changed").setToNode("verticalweight").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("clock").setFromField("fraction_changed").setToNode("pinpath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("pinpath").setFromField("value_changed").setToNode("Pin").setToField("set_translation")));
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
	 * @return Trebuchet model
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
        X3D thisExampleX3dModel = new Trebuchet().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.Trebuchet\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.Trebuchet self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./Trebuchet_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./Trebuchet_JavaExport.x3d"; 
                String filenameX3DV = "./Trebuchet_JavaExport.x3dv"; 
                String filenameJSON = "./Trebuchet_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
