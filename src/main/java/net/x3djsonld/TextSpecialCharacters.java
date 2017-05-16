package net.x3djsonld;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities. </p>
 <p> Related links: <a href="../../../Chapter02GeometryPrimitives/TextSpecialCharacters.java">TextSpecialCharacters.java</a> source, <a href="../../../Chapter02GeometryPrimitives/TextSpecialCharactersIndex.html" target="_top">TextSpecialCharacters catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter02GeometryPrimitives/TextSpecialCharacters.x3d">TextSpecialCharacters.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 12 July 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 2 April 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Character entity references in HTML 4 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.w3.org/TR/REC-html40/sgml/entities.html" target="_blank">http://www.w3.org/TR/REC-html40/sgml/entities.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright (c) Don Brutzman and Leonard Daly, 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter02GeometryPrimitives/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman
 */

public class TextSpecialCharacters
{
  /** Default constructor to create this object. */
  public TextSpecialCharacters ()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
  public final void initialize()
  {
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("TextSpecialCharacters.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities"))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("12 July 2008"))
    .addMeta(new metaObject().setName("modified").setContent("2 April 2017"))
    .addMeta(new metaObject().setName("reference").setContent("Character entity references in HTML 4"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.w3.org/TR/REC-html40/sgml/entities.html"))
    .addMeta(new metaObject().setName("rights").setContent("Copyright (c) Don Brutzman and Leonard Daly, 2008"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {1.0f,1.0f,1.0f})))
    .addChild(new ViewpointObject().setDescription("Default View").setPosition(0.0f,0.0f,15.0f))
    .addChild(new ShapeObject()
      .addComments(" Empty string \"\" means to skip a line ")
      .addComments(" The ampersand escape characters are based on XML rules ")
      .addComments(" apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute ")
      .addComments(" ampersand & is &amp; and needs to be escaped ")
      .addComments(" quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute ")
      .addComments(" quotation \" can be used within an X3D string if escaped with backslash \\ as \\\" ")
      .addComments(" backslash \\ is used as escape character for \" (and itself) in X3D ")
      .addComments(" character entities are listed in HTML specification and are good for any XML ")
      .setGeometry(new TextObject("DefaultText").setString(DefaultText_4_15_string)
        .setFontStyle(new FontStyleObject("CenteredFontStyle").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
      .setAppearance(new AppearanceObject()
        .setMaterial(new MaterialObject("DefaultMaterial").setDiffuseColor(0.2f,0.2f,0.2f)))));
  }
  // end of initialize() method

	/** Large attribute array: Text DEF='DefaultText' string field, scene-graph level=4, element #15, 44 total values */
	private MFStringObject DefaultText_4_15_string = new MFStringObject(new MFStringObject("\"Character entity substitutions:\"         \"empty string \\\"\\\" skips a line:\"         \"\"         \"apostrophe  '  is &apos;\"          \"ampersand & is &amp;\"         \"quote mark  \\\"  is &quot;\"         \"backslash \\\\ is X3D escape character\"         \"double backslash \\\\\\\\ is X3D backslash \\\\ character\"         \"Pi Π is &#928; XML character entity\""));

  /** The initialized model object, created within initialize() method. */
  private X3DObject x3dModel;
  
  /** Provide a shallow copy of the X3D model.
   * @return TextSpecialCharacters model
   */
  public X3DObject getX3dModel()
  {	  
	  return x3dModel;
  }
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  public String validateSelf()
  {
	String       metaResult = new String();
	String validationResult = new String();
	String  exceptionResult = new String();
	try
	{
		initialize();
		
		if ((getX3dModel() == null) || (getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		for (metaObject meta : getX3dModel().getHead().getMetaList())
		{
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (Exception e)
	{
		exceptionResult = e.getMessage(); // report exception failures, if any
	}
	if  (metaResult.isEmpty() && exceptionResult.isEmpty() && validationResult.isEmpty())
	     return "success";
	else
	{
		String returnMessage = metaResult;
		if  (!exceptionResult.isEmpty() && !validationResult.isEmpty())
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult.isEmpty() && !validationResult.isEmpty())
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  }
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    public static void main(String argv[])
    {
		TextSpecialCharacters testObject = new TextSpecialCharacters();
		System.out.println ("TextSpecialCharacters execution self-validation test results: " + testObject.validateSelf());
	}
}
