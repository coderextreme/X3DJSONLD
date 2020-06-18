package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey. </p>
 <p> Related links: <a href="../../../../AircraftFixedWing/F16-FightingFalcon-Turkey/F16.java">F16.java</a> source, <a href="../../../../AircraftFixedWing/F16-FightingFalcon-Turkey/F16Index.html" target="_top">F16 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d">F16.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Murat ONDER, LTJG, Turkish Navy </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 13 July 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 November 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.fas.org/man/dod-101/sys/ac/f-16.htm" target="_blank">http://www.fas.org/man/dod-101/sys/ac/f-16.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> permission </i> </td>
			<td> Here is a copy of the permission for the usage of the main hull; -----Original Message----- From: Soji Yamakawa [mailto:soji@andrew.cmu.edu] Sent: Tuesday, September 16, 2003 8:00 PM To: Onder, Murat TUR Subject: Re: VRML model points usage permission Sure. No problem. Soji ----- Original Message ----- From: "Murat Onder" &lt;monder@nps.navy.mil&gt; To: &lt;Soji_Yamakawa@cmu.edu&gt;; &lt;PEB01130@nifty.ne.jp&gt; Sent: Monday, September 15, 2003 3:50 PM Subject: VRML model points usage permission Hi Sir, I&amp;apos;m a MS student in Naval Postgraduate School. I'm making a model of Turkish F-16 for my project in a VRML course. For the main hull of the F-16, I want to use the coordinate points of your VRML model since I think that model represents well enough F-16. This is going to be only a student project and will not be used for any commercial purposes. Of course I'll make the citation and put the reference links to your page in the meta files of x3d file. I'd like to know if you can give permission to use those points in my model. V/R, Murat Onder LTJG, TU NAVY </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> The landing gears are taken from the Savage Archive, from F18 Blue Angel, then modified and re-animated. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> drawing </i> </td>
			<td> "Drawing.jpg" "../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg" "<a href="https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg%22" target="_blank">https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg"</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> "FrontView.jpg" "FrontView2.jpg" "Missiles.jpg" "../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg" "<a href="https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg%22" target="_blank">https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg"</a> "../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg" "https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg" "../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg" "https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg" </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d" target="_blank">https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> F16, F-16, Fighting Falcon </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../AircraftFixedWing/F16-FightingFalcon-Turkey/../../license.html">../../license.html</a> </td>
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

	* @author Murat ONDER, LTJG, Turkish Navy
	* @author The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission.
 */

public class F16
{
	/** Default constructor to create this object. */
	public F16 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("F16.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Murat ONDER, LTJG, Turkish Navy"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("13 July 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("27 November 2015"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.fas.org/man/dod-101/sys/ac/f-16.htm"))
    .addMeta(new meta().setName("permission").setContent("Here is a copy of the permission for the usage of the main hull; -----Original Message----- From: Soji Yamakawa [mailto:soji@andrew.cmu.edu] Sent: Tuesday, September 16, 2003 8:00 PM To: Onder, Murat TUR Subject: Re: VRML model points usage permission Sure. No problem. Soji ----- Original Message ----- From: \"Murat Onder\" <monder@nps.navy.mil> To: <Soji_Yamakawa@cmu.edu>; <PEB01130@nifty.ne.jp> Sent: Monday, September 15, 2003 3:50 PM Subject: VRML model points usage permission Hi Sir, I&apos;m a MS student in Naval Postgraduate School. I'm making a model of Turkish F-16 for my project in a VRML course. For the main hull of the F-16, I want to use the coordinate points of your VRML model since I think that model represents well enough F-16. This is going to be only a student project and will not be used for any commercial purposes. Of course I'll make the citation and put the reference links to your page in the meta files of x3d file. I'd like to know if you can give permission to use those points in my model. V/R, Murat Onder LTJG, TU NAVY"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("The landing gears are taken from the Savage Archive, from F18 Blue Angel, then modified and re-animated."))
    .addMeta(new meta().setName(meta.NAME_DRAWING    ).setContent("\"Drawing.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\""))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("\"FrontView.jpg\" \"FrontView2.jpg\" \"Missiles.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\""))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("F16, F-16, Fighting Falcon"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new Transform("F16Transform")
      .addChild(new Transform("MainFrameTransform").setScale(3.0f,3.0f,3.0f)
        .addChild(new Shape("Nose")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.25f,.25f,.25f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {24,0,3,-1,4,0,24,-1,25,26,27,-1,28,25,27,-1,27,29,28,-1,27,30,29,-1,27,31,30,-1,3,18,24,-1}).setNormalIndex(new int[] {16,0,3,-1,4,0,16,-1,17,17,17,-1,18,18,18,-1,19,19,19,-1,20,20,20,-1,21,21,21,-1,3,14,16,-1})
            .setCoord(new Coordinate("coordinates").setPoint(getcoordinates_7_19_point()))
            .setNormal(new Normal("normalVector").setVector(getnormalVector_7_20_vector()))))
        .addChild(new Shape("Canopy")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.25f,.25f,.25f).setTransparency(0.8f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {2,32,33,-1,34,32,2,-1,35,36,37,-1,38,36,35,-1,39,40,41,-1,37,36,42,-1,2,43,44,-1,33,43,2,-1,45,37,42,46,-1,46,42,47,48,-1,33,45,46,43,-1,43,46,48,44,-1,34,49,50,32,-1,32,50,45,33,-1,49,38,35,50,-1,50,35,37,45,-1}).setNormalIndex(new int[] {2,22,23,-1,24,22,2,-1,25,26,27,-1,28,26,25,-1,29,29,29,-1,27,26,30,-1,2,31,32,-1,23,31,2,-1,33,27,30,34,-1,34,30,35,36,-1,23,33,34,31,-1,31,34,36,32,-1,24,37,38,22,-1,22,38,33,23,-1,37,28,25,38,-1,38,25,27,33,-1})
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector"))))
        .addChild(new Shape("MainBodyAndWingEdges")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.1796f,.1914f,.2382f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(getIndexedFaceSet_6_31_coordIndex()).setNormalIndex(getIndexedFaceSet_6_31_normalIndex())
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector"))))
        .addChild(new Shape("ExhaustExitFlatPanel")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.5f,.5f,.5f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {186,187,188,189,190,-1,190,191,192,193,186,-1}).setNormalIndex(new int[] {118,119,120,121,122,-1,122,123,124,125,118,-1})
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector"))))
        .addChild(new Shape("ExhaustEntranceFrontBottomPart")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.2304f,.2304f,.2304f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {194,130,173,195,196,197,-1,197,198,199,82,81,194,-1}).setNormalIndex(new int[] {126,126,126,126,126,126,-1,126,126,126,126,126,126,-1})
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector"))))
        .addChild(new Shape("ThirdPartFromNoseUnderCanopy")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.6f,.6f,.6f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {12,200,201,15,-1,19,48,127,17,-1,15,201,128,5,-1,17,127,202,11,-1,11,202,200,12,-1,5,128,49,1,-1,48,19,44,-1,19,2,44,-1,34,1,49,-1,34,2,1,-1}).setNormalIndex(new int[] {8,127,128,11,-1,15,36,83,13,-1,11,128,85,5,-1,13,83,129,7,-1,7,129,127,8,-1,5,85,37,1,-1,36,15,32,-1,15,2,32,-1,24,1,37,-1,24,2,1,-1})
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector"))))
        .addChild(new Shape("RearExhaustExitPartLastPartOfMainBody")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.37f,.37f,.37f).setShininess(.5f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {64,186,193,165,-1,203,204,164,163,-1,192,191,138,142,-1,191,190,96,138,-1,94,96,190,189,-1,95,94,189,188,-1,63,187,186,64,-1,62,61,205,206,-1}).setNormalIndex(new int[] {50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1})
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector"))))
        .addChild(new Shape("WingsAndTail")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(.1796f,.1914f,.2382f)))
          .setGeometry(new IndexedFaceSet().setColorPerVertex(false).setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {6,7,8,9,-1,9,8,7,6,-1,20,21,22,23,-1,23,22,21,20,-1,97,20,23,98,99,-1,99,98,23,20,97,-1,108,109,110,111,-1,111,110,109,108,-1,112,113,114,115,-1,115,114,113,112,-1,132,6,9,133,134,-1,134,133,9,6,132,-1,86,139,140,67,-1,67,140,139,86,-1,143,144,145,146,-1,146,145,144,143,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1}).setNormalIndex(new int[] {50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1})
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector"))))
        .addChild(new Shape("SecondPartAfterNose")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.6f,.6f,.6f)))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1,4,5,1,0,-1,10,11,12,13,-1,14,15,5,4,-1,13,12,15,14,-1,16,17,11,10,-1,18,19,17,16,-1,3,2,19,18,-1}).setNormalIndex(new int[] {0,1,2,3,-1,4,5,1,0,-1,6,7,8,9,-1,10,11,5,4,-1,9,8,11,10,-1,12,13,7,6,-1,14,15,13,12,-1,3,2,15,14,-1})
            .setCoord(new Coordinate().setUSE("coordinates"))
            .setNormal(new Normal().setUSE("normalVector")))))
      .addChild(new Transform("CockpitTransform").setRotation(1.0f,0.0f,0.0f,-0.1f).setScale(0.045f,0.045f,0.045f).setTranslation(0.0f,1.0f,-10.0f)
        .addChild(new Inline().setUrl(new String[] {"Cockpit.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.x3d","Cockpit.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.wrl"})))
      .addChild(new Transform("SeatTransform").setRotation(-1.0f,0.0f,0.0f,-0.1f).setScale(0.9f,0.9f,0.9f).setTranslation(0.0f,0.0f,-8.3f)
        .addChild(new Inline().setUrl(new String[] {"Seat.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.x3d","Seat.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.wrl"})))
      .addChild(new Transform("FrontWheelTransform").setCenter(0.0f,2.5f,0.0f).setRotation(-1.0f,0.0f,0.0f,1.92f).setTranslation(0.7f,-5.2f,-6.5f)
        .addComments(" Front wheel is taken from the Savage Library, modified and re-animated.(from F18 Blue Angel) ")
        .addChild(new Inline().setUrl(new String[] {"FrontWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.x3d","FrontWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.wrl"})))
      .addChild(new Transform("RearLeftWheelTransform").setCenter(0.0f,2.5f,0.0f).setRotation(1.0f,0.0f,1.0f,1.92f).setTranslation(-2.95f,-5.0f,7.0f)
        .addComments(" Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel) ")
        .addChild(new Inline().setUrl(new String[] {"RearLeftWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.x3d","RearLeftWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.wrl"})))
      .addChild(new Transform("RearRightWheelTransform").setCenter(0.0f,2.5f,0.0f).setRotation(-1.0f,0.0f,-1.0f,1.92f).setTranslation(2.95f,-5.0f,7.0f)
        .addComments(" Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel) ")
        .addChild(new Inline().setUrl(new String[] {"RearRightWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.x3d","RearRightWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.wrl"})))
      .addChild(new Transform("CockpitButtonsTransform")
        .addChild(new Transform("UpButtonTransform").setRotation(1.0f,0.0f,0.0f,1.57f).setScale(.008f,.008f,.008f).setTranslation(-0.95f,1.05f,-10.0f)
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(1f).setRadius(4f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0f,0.0f,0.0f).setShininess(.8f))))
          .addChild(new TouchSensor("TouchSensorUp").setDescription("click for gears up")))
        .addChild(new Transform("DownButtonTransform").setRotation(1.0f,0.0f,0.0f,1.57f).setScale(.008f,.008f,.008f).setTranslation(-0.83f,1.05f,-10.0f)
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(1f).setRadius(4f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0f,1.0f,0.0f).setShininess(.8f))))
          .addChild(new TouchSensor("TouchSensorDown").setDescription("click for gears down")))
        .addChild(new Transform("GearUpTextTransform").setScale(.06f,.06f,.06f).setTranslation(-.65f,1.55f,-10.0f)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"RED Button","Gear Up"}))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0f,0.0f,0.0f)))))
        .addChild(new Transform("GearDownTextTransform").setScale(.06f,.06f,.06f).setTranslation(-.65f,1.35f,-10.0f)
          .addChild(new Shape()
            .setGeometry(new Text().setLength(new float[] {5.5f}).setString(new String[] {"YELLOW Button","Gear Down"}))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0f,1.0f,0.0f)))))
        .addChild(new Transform("FireButtonTransform").setRotation(1.0f,0.0f,0.0f,1.57f).setScale(.008f,.008f,.008f).setTranslation(.52f,1.6f,-10.0f)
          .addChild(new Shape()
            .setGeometry(new Cylinder().setHeight(1f).setRadius(4f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0f,.75f,.18f).setShininess(.8f))))
          .addChild(new TouchSensor("FireSensor").setDescription("click to fire")))
        .addChild(new Transform("FireTextTransform").setScale(.06f,.06f,.06f).setTranslation(.36f,1.5f,-10.0f)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Target Locked","      FIRE!..","(Green Button)"}))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0f,.75f,.18f))))))
      .addChild(new Viewpoint().setDescription("F16 Close Look-up").setOrientation(-0.559f,-0.827f,-0.057f,1.3534f).setPosition(-28.7f,19.9f,17.4f))
      .addChild(new Viewpoint().setDescription("Cockpit").setOrientation(-1.0f,0.0f,0.0f,0.1249f).setPosition(0.0f,1.5f,-7.9f))
      .addChild(new Viewpoint("LandingGearAnimationView").setDescription("Landing Gear Animation View").setOrientation(-0.003f,1.0f,-0.012f,2.5741f).setPosition(16.1f,-5.8f,-24.6f))
      .addChild(new Viewpoint().setDescription("Cockpit Left View").setOrientation(-0.276f,-0.922f,-0.271f,1.2338f).setPosition(-6.7f,6.1f,-3.9f))
      .addChild(new Viewpoint().setDescription("F-16 Front View").setOrientation(-0.007f,0.995f,0.102f,3.1152f).setPosition(-0.1f,13.4f,-65.0f))
      .addChild(new Viewpoint().setDescription("Cockpit Target View").setOrientation(-0.834f,-0.523f,-0.176f,0.0875f).setPosition(0.0f,2.4f,-7.9f))
      .addChild(new Transform("NoseAntennaTransform").setRotation(1.0f,0.0f,0.0f,1.57f).setTranslation(0.0f,-.275f,-21.0f)
        .addChild(new Shape()
          .setGeometry(new Cylinder().setRadius(.05f))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.5f,.5f,.5f).setShininess(.5f))))))
    .addChild(new TimeSensor("WheelUp").setCycleInterval(8))
    .addChild(new OrientationInterpolator("GearUpInterpolator").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,-0.79f,1.0f,0.0f,0.0f,-1.92f})))
    .addChild(new ROUTE().setFromNode("TouchSensorUp").setFromField("touchTime").setToNode("WheelUp").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("WheelUp").setFromField("fraction_changed").setToNode("GearUpInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("GearUpInterpolator").setFromField("value_changed").setToNode("FrontWheelTransform").setToField("set_rotation"))
    .addChild(new TimeSensor("WheelDown").setCycleInterval(8))
    .addChild(new OrientationInterpolator("GearDownInterpolator").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,0.0f,-1.92f,1.0f,0.0f,0.0f,-0.79f,1.0f,0.0f,0.0f,0.0f})))
    .addChild(new ROUTE().setFromNode("TouchSensorDown").setFromField("touchTime").setToNode("WheelDown").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("WheelDown").setFromField("fraction_changed").setToNode("GearDownInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("GearDownInterpolator").setFromField("value_changed").setToNode("FrontWheelTransform").setToField("set_rotation"))
    .addComments(" Animation commands for Rear Right Wheel Starts ")
    .addChild(new TimeSensor("RRearUp1").setCycleInterval(8))
    .addChild(new TimeSensor("RRearDown1").setCycleInterval(8))
    .addChild(new OrientationInterpolator("RRearInterUp1").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotation(new float[] {-1.0f,0.0f,-1.0f,0.0f,-1.0f,0.0f,-1.0f,0.44f,-1.0f,0.0f,-1.0f,1.92f})))
    .addChild(new OrientationInterpolator("RRearInterDown1").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotation(new float[] {-1.0f,0.0f,-1.0f,1.92f,-1.0f,0.0f,-1.0f,0.44f,-1.0f,0.0f,-1.0f,0.0f})))
    .addChild(new ROUTE().setFromNode("TouchSensorDown").setFromField("touchTime").setToNode("RRearDown1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("TouchSensorUp").setFromField("touchTime").setToNode("RRearUp1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("RRearDown1").setFromField("fraction_changed").setToNode("RRearInterDown1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RRearUp1").setFromField("fraction_changed").setToNode("RRearInterUp1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RRearInterDown1").setFromField("value_changed").setToNode("RearRightWheelTransform").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("RRearInterUp1").setFromField("value_changed").setToNode("RearRightWheelTransform").setToField("set_rotation"))
    .addComments(" Animation commands for Rear Left Wheel ")
    .addChild(new TimeSensor("LRearUp1").setCycleInterval(8))
    .addChild(new TimeSensor("LRearDown1").setCycleInterval(8))
    .addChild(new OrientationInterpolator("LRearInterUp1").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,1.0f,0.0f,1.0f,0.0f,1.0f,0.44f,1.0f,0.0f,1.0f,1.92f})))
    .addChild(new OrientationInterpolator("LRearInterDown1").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotation(new float[] {1.0f,0.0f,1.0f,1.92f,1.0f,0.0f,1.0f,0.44f,1.0f,0.0f,1.0f,0.0f})))
    .addChild(new ROUTE().setFromNode("TouchSensorDown").setFromField("touchTime").setToNode("LRearDown1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("TouchSensorUp").setFromField("touchTime").setToNode("LRearUp1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("LRearDown1").setFromField("fraction_changed").setToNode("LRearInterDown1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("LRearUp1").setFromField("fraction_changed").setToNode("LRearInterUp1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("LRearInterDown1").setFromField("value_changed").setToNode("RearLeftWheelTransform").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("LRearInterUp1").setFromField("value_changed").setToNode("RearLeftWheelTransform").setToField("set_rotation"))
    .addChild(new Background().setGroundAngle(new float[] {1.309f,1.570796f}).setGroundColor(new MFColor(new float[] {0.0f,0.3f,.7f,0.0f,0.35f,0.75f,0.0f,0.4f,0.8f})).setSkyAngle(new float[] {1.309f,1.571f}).setSkyColor(new MFColor(new float[] {0.0f,0.3f,0.8f,0.0f,0.5f,1.0f,1.0f,1.0f,1.0f})))
    .addChild(new Transform("RightmostAmraamTransform").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.4f,1.4f,1.4f).setTranslation(15.65f,0.0f,4.5f)
      .addChild(new Inline("Amraam").setUrl(new String[] {"../../Weapons/Missiles/Amraam.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.x3d","../../Weapons/Missiles/Amraam.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.wrl"})))
    .addChild(new Transform("LeftmostAmraamTransform").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.4f,1.4f,1.4f).setTranslation(-15.65f,0.0f,4.5f)
      .addChild(new Inline().setUSE("Amraam")))
    .addChild(new Transform("SidewinderHolderTransformRight").setRotation(0.0f,1.0f,0.0f,1.57f).setScale(6.0f,3.0f,3.0f).setTranslation(9.0f,-1.125f,8.0f)
      .addChild(new Inline("SidewinderHolder").setUrl(new String[] {"SidewinderHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.x3d","SidewinderHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.wrl"})))
    .addChild(new Transform("SidewinderHolderTransformLeft").setRotation(0.0f,1.0f,0.0f,1.57f).setScale(6.0f,3.0f,3.0f).setTranslation(-8.45f,-1.125f,8.0f)
      .addChild(new Inline().setUSE("SidewinderHolder")))
    .addChild(new Transform("TurkishFlagTransformLeft").setRotation(0.0f,-1.0f,0.0f,1.57f).setScale(.3f,.25f,.3f).setTranslation(-.01f,8.0f,19.5f)
      .addChild(new Inline().setUrl(new String[] {"TurkishFlagLeft.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.x3d","TurkishFlagLeft.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.wrl"})))
    .addChild(new Transform("TurkishFlagTransformRight").setRotation(0.0f,1.0f,0.0f,1.57f).setScale(.3f,.25f,.3f).setTranslation(.01f,8.0f,20.5f)
      .addChild(new Inline().setUrl(new String[] {"TurkishFlagRight.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.x3d","TurkishFlagRight.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.wrl"})))
    .addChild(new Transform("AmraamHolderTransformLeft").setTranslation(-12.0f,-.176f,10.7f)
      .addChild(new Inline("AmraamHolder").setUrl(new String[] {"AmraamHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.x3d","AmraamHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.wrl"})))
    .addChild(new Transform("AmraamHolderTransformRight").setTranslation(12.0f,-.176f,10.7f)
      .addChild(new Inline().setUSE("AmraamHolder")))
    .addChild(new Transform("AmraamInnerTransformRight").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.4f,1.4f,1.4f).setTranslation(12.0f,-1.6f,4.5f)
      .addChild(new Inline().setUSE("Amraam")))
    .addChild(new Transform("AmraamInnerTransformLeft").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.4f,1.4f,1.4f).setTranslation(-12.0f,-1.6f,4.5f)
      .addChild(new Inline().setUSE("Amraam")))
    .addChild(new Transform("SidewinderTransformLeft").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.6f,1.6f,1.6f).setTranslation(-8.7f,-2.0f,3.5f)
      .addChild(new Inline("Sidewinder").setUrl(new String[] {"../../Weapons/Missiles/Sidewinder.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.x3d","../../Weapons/Missiles/Sidewinder.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.wrl"})))
    .addChild(new Transform("SidewinderTransformRight").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.6f,1.6f,1.6f).setTranslation(8.7f,-2.0f,3.5f)
      .addChild(new Inline().setUSE("Sidewinder")))
    .addChild(new Transform("FuelTankHolderTransformLeft").setRotation(0.0f,1.0f,0.0f,1.57f).setScale(1.5f,1.5f,1.5f).setTranslation(-4.8f,-1.125f,6.0f)
      .addChild(new Inline("FuelTankHolder").setUrl(new String[] {"FuelTankHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.x3d","FuelTankHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.wrl"})))
    .addChild(new Transform("FuelTankHolderTransformRight").setRotation(0.0f,1.0f,0.0f,1.57f).setScale(1.5f,1.5f,1.5f).setTranslation(5.3f,-1.125f,6.0f)
      .addChild(new Inline().setUSE("FuelTankHolder")))
    .addChild(new Transform("FuelTankTransformRight").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.5f,1.5f,1.5f).setTranslation(5.0f,-2.85f,5.5f)
      .addChild(new Inline("FuelTank").setUrl(new String[] {"FuelTank.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.x3d","FuelTank.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.wrl"})))
    .addChild(new Transform("FuelTankTransformLeft").setRotation(-1.0f,0.0f,0.0f,1.57f).setScale(1.5f,1.5f,1.5f).setTranslation(-5.0f,-2.85f,5.5f)
      .addChild(new Inline().setUSE("FuelTank")))
    .addChild(new Transform("InlineCoverOfPlaneTansform")
      .addChild(new Shape()
        .setGeometry(new Box().setSize(4.15f,.1f,20.0f))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(.25f,.25f,.25f)))))
    .addChild(new Transform("TargetHelicopterTransform").setTranslation(16.0f,-50.0f,-500.0f)
      .addChild(new Inline().setUrl(new String[] {"Target.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.x3d","Target.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.wrl"})))
    .addChild(new TimeSensor("FireClock").setCycleInterval(8))
    .addChild(new PositionInterpolator("MissilePath").setKey(new float[] {0.0f,.1f,1.0f}).setKeyValue(new MFVec3f(new float[] {-15.65f,0.0f,4.5f,-15.65f,-2.0f,4.5f,16.0f,-50.0f,-500.0f})))
    .addChild(new ROUTE().setFromNode("FireSensor").setFromField("touchTime").setToNode("FireClock").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("FireClock").setFromField("fraction_changed").setToNode("MissilePath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MissilePath").setFromField("value_changed").setToNode("LeftmostAmraamTransform").setToField("set_translation"))
    .addChild(new Viewpoint("MissileLaunchView").setDescription("Missile Fire View").setOrientation(0.094f,-0.994f,0.057f,1.1716f).setPosition(-344.3f,-142.8f,-27.7f))
    .addChild(new ROUTE().setFromNode("FireSensor").setFromField("isActive").setToNode("MissileLaunchView").setToField("set_bind"))
    .addComments(" TODO fix type, add filter "));
    }
	// end of initialize() method

		/** Define subarrays using type float[] */
		private float[] getcoordinates_7_19_point_1()
		{
			float[] value = {-0.32f,0.36f,-4.91f,-0.38f,0.43f,-4.21f,0.0f,0.6f,-4.2f,0.0f,0.5f,-4.9f,-0.5f,0.0f,-4.9f,-0.6f,0.0f,-4.2f,1.0f,0.0f,5.8f,1.0f,0.0f,5.3f,2.8f,-0.4f,6.3f,2.8f,-0.4f,6.61f,0.31f,-0.36f,-4.9f,0.4f,-0.35f,-4.2f,0.0f,-0.4f,-4.2f,0.0f,-0.4f,-4.9f,-0.31f,-0.36f,-4.9f,-0.4f,-0.35f,-4.2f,0.5f,0.0f,-4.9f,0.6f,0.0f,-4.2f,0.32f,0.36f,-4.91f,0.38f,0.43f,-4.21f,-1.0f,0.0f,5.8f,-1.0f,0.0f,5.3f,-2.8f,-0.4f,6.3f,-2.8f,-0.4f,6.61f,0.0f,-0.1f,-7.0f,-0.31f,-0.36f,-4.9f,-0.5f,0.0f,-4.9f,0.0f,-0.1f,-7.0f,0.0f,-0.4f,-4.9f,0.31f,-0.36f,-4.9f,0.5f,0.0f,-4.9f,0.32f,0.36f,-4.91f,-0.27f,0.93f,-3.51f,0.0f,1.1f,-3.6f,-0.33f,0.5f,-3.41f,-0.34f,0.9f,-1.73f,0.0f,0.9f,-1.0f,0.0f,1.1f,-1.8f,-0.38f,0.64f,-1.68f,0.34f,0.9f,-1.73f,0.0f,0.9f,-1.0f,0.38f,0.64f,-1.68f,0.34f,0.9f,-1.73f,0.27f,0.93f,-3.51f,0.33f,0.5f,-3.41f,0.0f,1.3f,-2.8f,0.45f,1.02f,-2.68f,0.38f,0.64f,-1.68f,0.53f,0.5f,-2.56f,-0.53f,0.5f,-2.56f,-0.45f,1.02f,-2.68f,-0.53f,0.75f,0.0f,-0.56f,0.66f,2.8f,0.0f,0.7f,2.8f,0.0f,0.8f,0.0f,-1.1f,0.3f,0.0f,-1.0f,0.3f,2.8f,-0.37f,0.57f,4.9f,0.0f,0.59f,4.9f,-0.7f,0.3f,4.9f,-0.7f,0.3f,4.9f,-0.7f,0.0f,7.0f,-0.5f,0.49f,7.0f,-0.5f,0.49f,7.0f,0.0f,0.7f,7.0f,-1.4f,0.0f,0.0f,-1.4f,0.0f,3.9f,-1.4f,0.0f,3.9f,-1.0f,0.0f,3.9f,-1.0f,0.3f,2.8f,-1.0f,0.3f,4.9f,-0.59f,0.65f,-0.77f,-0.8f,0.3f,-0.6f,-1.4f,0.0f,-0.7f,-1.0f,-0.1f,2.8f,-0.7f,-0.7f,-2.5f,-0.5f,-0.9f,-2.5f,-0.5f,-0.9f,-0.6f,-0.7f,-0.7f,-0.6f,0.0f,-1.0f,-2.5f,0.0f,-1.0f,-0.6f,-0.72f,-0.12f,-2.5f,-0.8f,-0.3f,-2.5f,-0.8f,-0.3f,-0.6f,-0.8f,-0.3f,-2.5f,-0.8f,-0.3f,-0.6f,-1.4f,0.0f,0.0f,-1.4f,0.0f,-0.7f,-0.7f,-0.1f,4.9f,-1.0f,-0.1f,4.9f,-0.5f,-0.9f,4.9f,-0.7f,-0.7f,4.9f,0.0f,-1.0f,4.9f,-0.7f,-0.1f,4.9f,-0.5f,-0.5f,7.0f,-0.7f,0.0f,7.0f,0.0f,-0.7f,7.0f,-1.0f,0.0f,7.4f,-2.8f,-0.4f,7.1f,-2.57f,-0.32f,7.42f};
			return value;
		}
		private float[] getcoordinates_7_19_point_2()
		{
			float[] value = {-4.9f,0.1f,4.0f,-5.1f,0.1f,4.0f,-5.1f,-0.1f,4.0f,-4.9f,-0.1f,4.0f,-5.1f,0.1f,1.6f,-5.1f,-0.1f,1.6f,-4.9f,0.1f,2.8f,-4.9f,-0.1f,2.8f,-0.58f,-0.83f,3.6f,-0.72f,-1.4f,3.9f,-0.69f,-1.32f,4.9f,-0.58f,-0.83f,4.9f,0.58f,-0.83f,3.6f,0.72f,-1.4f,3.9f,0.69f,-1.32f,4.9f,0.58f,-0.83f,4.9f,4.9f,-0.1f,2.8f,5.1f,-0.1f,1.6f,5.1f,-0.1f,4.0f,4.9f,-0.1f,4.0f,-0.8f,0.0f,-2.5f,4.9f,0.1f,4.0f,5.1f,0.1f,4.0f,5.1f,0.1f,1.6f,4.9f,0.1f,2.8f,0.59f,0.65f,-0.77f,0.8f,0.3f,-0.6f,0.8f,0.0f,-2.5f,-0.8f,0.0f,-2.5f,0.8f,-0.3f,-0.6f,0.72f,-0.12f,-2.5f,0.8f,0.0f,-2.5f,1.0f,0.0f,7.4f,2.8f,-0.4f,7.1f,2.57f,-0.32f,7.42f,-0.7f,0.0f,7.4f,0.5f,-0.9f,4.9f,0.7f,-0.7f,4.9f,0.5f,-0.5f,7.0f,-4.9f,0.0f,2.8f,-4.9f,0.0f,3.9f,0.7f,-0.1f,4.9f,0.7f,0.0f,7.0f,1.4f,0.0f,0.0f,4.9f,0.0f,2.8f,4.9f,0.0f,3.9f,1.4f,0.0f,3.9f,1.4f,0.0f,-0.7f,1.4f,0.0f,-0.7f,0.7f,-0.7f,-0.6f,0.8f,-0.3f,-0.6f,0.5f,-0.9f,-0.6f,1.0f,-0.1f,4.9f,1.0f,0.3f,4.9f,0.7f,0.0f,7.4f,0.7f,0.3f,4.9f,0.7f,-0.1f,4.9f,0.56f,0.66f,2.8f,0.53f,0.75f,0.0f,1.0f,0.3f,2.8f,1.1f,0.3f,0.0f,0.37f,0.57f,4.9f,0.7f,0.3f,4.9f,0.5f,0.49f,7.0f,0.7f,0.0f,7.0f,0.5f,0.49f,7.0f,1.4f,0.0f,3.9f,1.4f,0.0f,0.0f,1.0f,0.3f,2.8f,1.0f,0.0f,3.9f,1.0f,-0.1f,2.8f,0.5f,-0.9f,-2.5f,0.7f,-0.7f,-2.5f,0.8f,-0.3f,-2.5f,0.8f,-0.3f,-2.5f,1.0f,0.3f,3.9f,0.59f,0.65f,-0.77f,0.0f,0.7f,2.8f,0.0f,1.4f,4.5f,0.0f,0.59f,4.9f,0.0f,3.5f,6.8f,0.0f,3.5f,8.1f,0.0f,1.4f,7.3f,0.0f,0.7f,7.0f,0.0f,0.7f,7.3f,-1.0f,0.3f,3.9f,0.0f,0.35f,7.7f,-0.25f,0.24f,7.7f,-0.35f,0.0f,7.7f,-0.25f,-0.25f,7.7f,0.0f,-0.35f,7.7f,0.25f,-0.25f,7.7f,0.35f,0.0f,7.7f,0.25f,0.24f,7.7f,0.0f,-0.2f,-2.5f,0.7f,-0.7f,-2.5f,0.5f,-0.9f,-2.5f,0.0f,-1.0f,-2.5f,-0.5f,-0.9f,-2.5f,-0.7f,-0.7f,-2.5f};
			return value;
		}
		private float[] getcoordinates_7_19_point_3()
		{
			float[] value = {0.0f,-0.2f,-2.5f,-0.72f,-0.12f,-2.5f,0.72f,-0.12f,-2.5f,0.25f,0.24f,7.7f,0.35f,0.0f,7.7f,-0.35f,0.0f,7.7f,-0.25f,0.24f,7.7f};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getnormalVector_7_20_vector_1()
		{
			float[] value = {-0.68f,0.714f,-0.166f,-0.689f,0.721f,-0.072f,0.0f,0.965f,-0.26f,0.0f,0.985f,-0.175f,-0.99f,-0.016f,-0.138f,-0.999f,-0.022f,-0.037f,0.567f,-0.819f,-0.093f,0.561f,-0.828f,0.0f,0.0f,-1.0f,0.0f,0.0f,-0.997f,-0.071f,-0.567f,-0.819f,-0.093f,-0.561f,-0.828f,0.0f,0.99f,-0.016f,-0.138f,0.999f,-0.022f,-0.037f,0.68f,0.714f,-0.166f,0.689f,0.721f,-0.072f,-0.351f,0.889f,-0.294f,-0.868f,-0.459f,-0.19f,-0.13f,-0.982f,-0.14f,0.13f,-0.982f,-0.14f,0.868f,-0.459f,-0.19f,0.872f,0.431f,-0.231f,-0.834f,0.445f,-0.327f,0.0f,0.929f,-0.369f,-0.88f,0.401f,-0.256f,-0.799f,0.577f,0.169f,-0.58f,0.798f,0.164f,0.0f,0.998f,0.065f,-0.862f,0.486f,0.146f,0.886f,0.219f,0.408f,0.799f,0.577f,0.169f,0.834f,0.445f,-0.327f,0.88f,0.401f,-0.256f,-0.0f,0.995f,-0.096f,0.842f,0.534f,-0.08f,0.862f,0.486f,0.146f,0.833f,0.549f,-0.073f,-0.833f,0.549f,-0.073f,-0.842f,0.534f,-0.08f,-0.485f,0.87f,-0.089f,-0.37f,0.929f,0.0f,0.0f,1.0f,0.0f,-0.0f,1.0f,-0.01f,-0.592f,0.796f,-0.125f,-0.573f,0.818f,0.05f,-0.37f,0.929f,-0.01f,0.0f,1.0f,-0.025f,-0.487f,0.873f,0.036f,-0.923f,0.381f,0.05f,-0.683f,0.704f,0.195f,0.0f,0.99f,0.14f,-0.707f,0.707f,0.0f,-0.385f,0.912f,0.141f,0.0f,0.966f,0.259f,-0.563f,0.826f,-0.037f,-0.661f,0.738f,-0.138f,-0.521f,0.846f,-0.115f,0.0f,-0.996f,0.09f,-0.773f,-0.436f,-0.461f,-0.42f,-0.781f,-0.463f,-0.474f,-0.881f,0.0f,-0.871f,-0.492f,0.0f,0.0f,-0.891f,-0.455f,-0.917f,0.399f,0.0f,-0.881f,0.074f,-0.467f,-0.902f,-0.429f,-0.039f,-0.09f,-0.995f,0.05f,-0.451f,-0.892f,0.0f,-0.28f,-0.959f,0.04f,-0.468f,-0.878f,0.097f,-0.877f,-0.474f,0.085f,0.0f,-0.997f,0.072f,-0.693f,-0.72f,0.045f,-0.79f,-0.562f,0.244f,-0.968f,0.003f,0.25f,0.0f,-0.966f,0.257f,0.0f,0.0f,1.0f,-1.0f,0.0f,0.0f,0.987f,0.0f,-0.16f,1.0f,0.0f,0.0f,-0.831f,-0.551f,-0.08f,0.563f,0.826f,-0.037f,0.661f,0.738f,-0.138f,0.998f,-0.037f,-0.049f,-0.987f,0.0f,-0.16f,-0.998f,-0.037f,-0.049f,0.831f,-0.551f,-0.08f,0.0f,-0.999f,0.04f,0.0f,0.993f,0.12f,0.468f,-0.878f,0.097f,0.877f,-0.474f,0.085f,0.79f,-0.562f,0.244f,-0.419f,-0.897f,-0.14f,0.693f,-0.72f,0.045f,0.968f,0.003f,0.25f,0.521f,0.846f,-0.115f,0.419f,-0.897f,-0.14f,0.871f,-0.492f,0.0f,0.902f,-0.429f,-0.039f,0.474f,-0.881f,0.0f};
			return value;
		}
		private float[] getnormalVector_7_20_vector_2()
		{
			float[] value = {0.37f,0.929f,0.0f,0.485f,0.87f,-0.089f,0.573f,0.818f,0.05f,0.592f,0.796f,-0.125f,0.37f,0.929f,-0.01f,0.487f,0.873f,0.036f,0.923f,0.381f,0.05f,0.683f,0.704f,0.195f,0.385f,0.912f,0.141f,0.707f,0.707f,0.0f,0.42f,-0.781f,-0.463f,0.773f,-0.436f,-0.461f,0.917f,0.399f,0.0f,0.881f,0.074f,-0.467f,0.09f,-0.995f,0.05f,0.451f,-0.892f,0.0f,0.28f,-0.959f,0.04f,0.42f,0.901f,-0.11f,0.0f,0.666f,0.746f,-0.481f,0.468f,0.741f,-0.674f,0.0f,0.738f,-0.475f,-0.475f,0.741f,0.0f,-0.674f,0.738f,0.475f,-0.475f,0.741f,0.674f,0.0f,0.738f,0.481f,0.468f,0.741f,0.0f,0.0f,-1.0f,0.0f,-0.893f,-0.45f,-0.901f,-0.224f,-0.372f,0.901f,-0.224f,-0.372f,0.841f,0.34f,0.421f,-0.841f,0.34f,0.421f};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_6_31_coordIndex_1()
		{
			int[] value = {51,52,53,54,-1,55,56,52,51,-1,52,57,58,53,-1,56,59,57,52,-1,60,61,62,-1,57,59,63,-1,57,63,64,-1,58,57,64,-1,56,55,65,66,-1,67,68,69,-1,69,70,60,-1,71,54,36,-1,51,54,71,-1,72,51,71,-1,55,51,72,-1,72,73,55,-1,65,55,73,-1,68,67,74,-1,75,76,77,78,-1,76,79,80,77,-1,81,82,83,-1,84,75,78,85,-1,83,74,67,-1,67,86,87,83,-1,74,88,89,-1,88,74,83,-1,78,77,90,91,-1,77,80,92,90,-1,85,91,93,-1,85,78,91,-1,94,95,93,-1,94,93,91,-1,91,96,94,-1,96,91,90,-1,90,92,96,-1,100,101,102,103,-1,101,104,105,102,-1,104,106,107,105,-1,106,100,103,107,-1,106,104,101,100,-1,103,102,105,107,-1,116,117,118,119,-1,120,81,83,-1,121,122,123,124,-1,116,119,121,124,-1,48,125,126,127,-1,117,116,124,123,-1,128,72,71,49,-1,118,117,123,122,-1,119,118,122,121,-1,129,130,131,-1,89,88,135,97,-1,60,70,97,135,-1,70,89,97,-1,96,92,136,-1,136,137,96,-1,138,96,137,-1,120,83,87,-1,128,73,72,-1,137,141,138,-1,141,142,138,-1,126,147,127,-1,148,129,131,-1,137,149,150,-1,141,137,150,-1,136,92,80,151,-1,137,136,151,149,-1,132,152,153,-1,154,132,153,155,-1,132,154,156,152,-1,54,53,157,158,-1,158,157,159,160,-1,53,58,161,157,-1,157,161,162,159,-1,163,164,155,-1,165,162,161,-1,64,165,161,-1,64,161,58,-1,166,167,160,159,-1,168,169,146,-1,155,153,168,-1,36,54,125,-1,125,54,158,-1,125,158,126,-1,126,158,160,-1,160,147,126,-1,147,160,167,-1,170,146,169,-1,149,151,171,172,-1,151,80,79,171,-1,129,173,130,-1,150,149,172,174,-1,146,170,129,-1,129,148,143,146,-1,152,156,170,-1,129,170,156,-1,156,154,164,-1,154,155,164,-1,168,175,169,-1,175,153,152,169,-1,152,170,169,-1,48,47,125,-1,41,40,176,-1,71,38,49,-1,71,36,38,-1,61,135,88,-1,61,60,135,-1,68,185,69,-1,68,74,89,-1,68,89,70,185,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_6_31_normalIndex_1()
		{
			int[] value = {39,40,41,42,-1,43,44,40,39,-1,40,45,46,41,-1,44,47,45,40,-1,48,48,48,-1,45,47,49,-1,45,49,50,-1,46,45,50,-1,44,43,51,52,-1,53,53,53,-1,41,41,41,-1,54,42,26,-1,39,42,54,-1,55,39,54,-1,43,39,55,-1,55,56,43,-1,51,43,56,-1,57,57,57,-1,58,59,60,61,-1,59,62,8,60,-1,63,63,63,-1,64,58,61,65,-1,66,66,66,-1,67,67,67,67,-1,8,8,8,-1,68,68,68,-1,61,60,69,70,-1,60,8,71,69,-1,65,70,72,-1,65,61,70,-1,73,74,72,-1,73,72,70,-1,70,75,73,-1,75,70,69,-1,69,71,75,-1,76,76,76,76,-1,77,77,77,77,-1,78,78,78,78,-1,79,79,79,79,-1,41,41,41,41,-1,8,8,8,8,-1,8,8,8,8,-1,80,80,80,-1,41,41,41,41,-1,77,77,77,77,-1,36,81,82,83,-1,84,84,84,84,-1,85,55,54,37,-1,79,79,79,79,-1,76,76,76,76,-1,86,86,86,-1,87,87,87,87,-1,88,88,88,88,-1,77,77,77,-1,75,71,89,-1,89,90,75,-1,91,75,90,-1,92,92,92,-1,85,56,55,-1,90,93,91,-1,93,94,91,-1,82,95,83,-1,96,96,96,-1,90,97,98,-1,93,90,98,-1,89,71,8,99,-1,90,89,99,97,-1,79,79,79,-1,88,88,88,88,-1,87,87,87,87,-1,42,41,100,101,-1,101,100,102,103,-1,41,46,104,100,-1,100,104,105,102,-1,106,106,106,-1,107,105,104,-1,50,107,104,-1,50,104,46,-1,108,109,103,102,-1,53,53,53,-1,41,41,41,-1,26,42,81,-1,81,42,101,-1,81,101,82,-1,82,101,103,-1,103,95,82,-1,95,103,109,-1,57,57,57,-1,97,99,110,111,-1,99,8,62,110,-1,112,112,112,-1,98,97,111,113,-1,114,114,114,-1,115,115,115,115,-1,8,8,8,-1,116,116,116,-1,77,77,77,-1,77,77,77,-1,79,79,79,-1,79,79,79,79,-1,79,79,79,-1,36,35,81,-1,117,117,117,-1,54,28,37,-1,54,26,28,-1,79,79,79,-1,79,79,79,-1,77,77,77,-1,77,77,77,-1,77,77,77,77,-1};
			return value;
		}

		/** Large attribute array: Coordinate DEF='coordinates' point field, scene-graph level=7, element #19, 621 total numbers made up of 207 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getcoordinates_7_19_point()
		{
			MFVec3f coordinates_7_19_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getcoordinates_7_19_point_1()))
				.append(new MFVec3f(getcoordinates_7_19_point_2()))
				.append(new MFVec3f(getcoordinates_7_19_point_3()));
			return coordinates_7_19_point;
		}
		/** Large attribute array: Normal DEF='normalVector' vector field, scene-graph level=7, element #20, 396 total numbers made up of 132 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getnormalVector_7_20_vector()
		{
			MFVec3f normalVector_7_20_vector = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getnormalVector_7_20_vector_1()))
				.append(new MFVec3f(getnormalVector_7_20_vector_2()));
			return normalVector_7_20_vector;
		}
		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #31, 482 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_6_31_coordIndex()
		{
			MFInt32 IndexedFaceSet_6_31_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_6_31_coordIndex_1()));
			return IndexedFaceSet_6_31_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet normalIndex field, scene-graph level=6, element #31, 482 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_6_31_normalIndex()
		{
			MFInt32 IndexedFaceSet_6_31_normalIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_6_31_normalIndex_1()));
			return IndexedFaceSet_6_31_normalIndex;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return F16 model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new F16().getX3dModel();

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
			System.out.println("WARNING: \"F16\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"F16\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
			System.out.println(validationResults);
		}
    }
}
