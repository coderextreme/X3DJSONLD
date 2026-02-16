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
public class StringArrayEncodingExamples implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new StringArrayEncodingExamples().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/StringArrayEncodingExamples.new.java.x3d");
    model.toFileJSON("../data/StringArrayEncodingExamples.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("StringArrayEncodingExamples.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Demonstrate simple X3D MFString (string array) encoding.")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("27 May 2017")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("27 May 2017")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("X3dHeaderPrototypeSyntaxExamples.x3d")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDEF(new SFString("EntryView")).setDescription(new SFString("Hello MFString syntax")))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Shape()
          .setGeometry(new Text().setString(new MFString1().getArray())
            .addComments(new CommentsBlock("alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"))
            .addComments(new CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"))
            .setFontStyle(new FontStyle().setJustify(new MFString2().getArray()).setStyle(new SFString("BOLD"))))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(new float[] {0.6f ,0.4f ,0.2f })))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.6f ,1f ,0.8f });
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"One, Two, Three","","He said, \"Immel did it!\""});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
