package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.Geospatial;
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
public class newGeospatialScene {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new newGeospatialScene().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/newGeospatialScene.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("newGeospatialScene.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("23 May 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("description").setContent("Sample default scene which shows syntax and provides default relationships among Geospatial nodes."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/newGeospatialScene.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("ExternProtoDeclare statements for Geospatial nodes are no longer needed for backwards compatibility for VRML 97, since X3dToVrml97.xsl now handles that task."))
        .addComments(new CommentsBlock("This scene shows example Geospatial node relationships in a scene graph."))
        .addChild(new WorldInfoObject().setTitle("newGeospatialScene.x3d"))
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())))
        .addChild(new GeoMetadataObject().setSummary(new MFStringObject(new MFString1().getArray())).setUrl(new MFStringObject(new MFString2().getArray())))
        .addChild(new GeoViewpointObject()
          .setGeoOrigin(new GeoOriginObject().setDEF("DefaultGeoOrigin")))
        .addComments(new CommentsBlock("GeoInline replaced by Inline"))
        .addChild(new InlineObject())
        .addChild(new GeoLocationObject()
          .setGeoOrigin(new GeoOriginObject().setUSE("DefaultGeoOrigin")))
        .addChild(new GeoLODObject().setCenter(new double[] {10d,10d,1d}).setChild1Url(new MFStringObject(new MFString3().getArray())).setChild2Url(new MFStringObject(new MFString4().getArray())).setChild3Url(new MFStringObject(new MFString5().getArray())).setChild4Url(new MFStringObject(new MFString6().getArray())).setRange(1000f).setRootUrl(new MFStringObject(new MFString7().getArray()))
          .setGeoOrigin(new GeoOriginObject().setUSE("DefaultGeoOrigin"))
          .addComments(new CommentsBlock("Nodes loaded via the 'rootUrl' field appear under 'rootNode' for current GeoLOD level."))
          .addComments(new CommentsBlock("Defining both 'rootUrl' and 'rootNode' is erroneous, use either one or the other."))
          .addComments(new CommentsBlock("rootNode nodes are the default geometry to be shown at this level of detail"))
          .addRootNode(new WorldInfoObject())
          .addRootNode(new ShapeObject()))
        .addChild(new ShapeObject()
          .setGeometry(new GeoElevationGridObject().setHeight(new MFDoubleObject(new MFDouble8().getArray()))
            .setGeoOrigin(new GeoOriginObject().setUSE("DefaultGeoOrigin"))
            .setColor(new ColorObject())
            .setNormal(new NormalObject())
            .setTexCoord(new TextureCoordinateObject())))
        .addChild(new ShapeObject()
          .setGeometry(new IndexedFaceSetObject()
            .setCoord(new GeoCoordinateObject()
              .setGeoOrigin(new GeoOriginObject().setUSE("DefaultGeoOrigin"))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"WorldInfo contains generic information or metadata about a VRML scene, not about the georeferenced information."});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"title","example title","description","example description"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://example"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://b"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://c"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://d"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://e"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://a"});
  }
}
protected class MFDouble8 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {0d,0d});
  }
}
}
