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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class TextSpecialCharacters {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new TextSpecialCharacters().initialize().toFileJSON("../data/TextSpecialCharacters.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
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
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new ViewpointObject().setDescription("Default View").setPosition(new float[] {0f,0f,15f}))
        .addChild(new ShapeObject()
          .addComments(new CommentsBlock("Empty string \"\" means to skip a line"))
          .addComments(new CommentsBlock("The ampersand escape characters are based on XML rules"))
          .addComments(new CommentsBlock("apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute"))
          .addComments(new CommentsBlock("ampersand & is &amp; and needs to be escaped"))
          .addComments(new CommentsBlock("quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute"))
          .addComments(new CommentsBlock("quotation \" can be used within an X3D string if escaped with backslash \\ as \\\""))
          .addComments(new CommentsBlock("backslash \\ is used as escape character for \" (and itself) in X3D"))
          .addComments(new CommentsBlock("character entities are listed in HTML specification and are good for any XML"))
          .setGeometry(new TextObject().setDEF("DefaultText").setString(new MFStringObject(new MFString1().getArray()))
            .setFontStyle(new FontStyleObject().setDEF("CenteredFontStyle").setJustify(new MFStringObject(new MFString2().getArray()))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDEF("DefaultMaterial").setDiffuseColor(new float[] {0.2f,0.2f,0.2f})))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Character entity substitutions:".replaceAll("\"", "\\\""),"empty string \"\" skips a line:".replaceAll("\"", "\\\""),"".replaceAll("\"", "\\\""),"apostrophe ' is &apos;".replaceAll("\"", "\\\""),"ampersand & is &amp;".replaceAll("\"", "\\\""),"quote mark \" is &quot;".replaceAll("\"", "\\\""),"backslash \\ is X3D escape character".replaceAll("\"", "\\\""),"double backslash \\\\ is X3D backslash \\ character".replaceAll("\"", "\\\""),"Pi Π is &#928; XML character entity".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
}
