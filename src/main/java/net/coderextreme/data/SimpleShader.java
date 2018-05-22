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
public class SimpleShader {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SimpleShader().initialize().toFileJSON("../data/SimpleShader.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SimpleShader.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Simple shader example"))
        .addMeta(new metaObject().setName("creator").setContent("John Stewart"))
        .addMeta(new metaObject().setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMeta(new metaObject().setName("created").setContent("26 May 2009"))
        .addMeta(new metaObject().setName("translated").setContent("15 October 2009"))
        .addMeta(new metaObject().setName("modified").setContent("24 April 2017"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMeta(new metaObject().setName("subject").setContent("X3D shader example"))
        .addMeta(new metaObject().setName("reference").setContent("originals/simpleShader.x3dv"))
        .addMeta(new metaObject().setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
        .addMeta(new metaObject().setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
        .addMeta(new metaObject().setName("comment").setContent("World of Titania"))
        .addMeta(new metaObject().setName("outputStyle").setContent("nicest"))
        .addMeta(new metaObject().setName("warning").setContent("under development"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new TransformObject().setDEF("TR")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.5f,0.5f,0.9f}))
              .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                .addField(new fieldObject().setType("SFVec3f").setName("decis").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.44 0.22"))
                .addParts(new ShaderPartObject().setType("VERTEX")
                  .setSourceCode("\n"+
"\n"+
"#ifdef GL_ES\n"+
"  precision mediump float;\n"+
"#endif\n"+
"\n"+
"// the vertex shader is small enough we can uri it here\n"+
"// but the link also contains a 'toon.vs' for those interested\n"+
"\n"+
"    varying vec3 x3domnormal;\n"+
"    attribute vec3 normal;\n"+
"    attribute vec3 position;\n"+
"    uniform mat4 normalMatrix;\n"+
"    uniform mat4 modelViewProjectionMatrix;\n"+
"    void main()\n"+
"    {\n"+
"        x3domnormal=mat3(normalMatrix)*normal;\n"+
"        gl_Position=modelViewProjectionMatrix * vec4(position, 1.0);\n"+
"    }\n"+
"\n"+
"\n"+
""))
                .addParts(new ShaderPartObject().setType("FRAGMENT")
                  .setSourceCode("\n"+
"\n"+
"#ifdef GL_ES\n"+
"  precision mediump float;\n"+
"#endif\n"+
"\n"+
"varying vec3 x3domnormal;\n"+
"uniform vec3 decis;\n"+
"uniform vec3 light0_Location;\n"+
"\n"+
"void main()\n"+
"{\n"+
"        float intensity;\n"+
"        vec4 color;\n"+
"        vec3 n = normalize(x3domnormal);\n"+
"\n"+
"        intensity = dot(light0_Location,n);\n"+
"\n"+
"        if (intensity > decis[0])\n"+
"                color = vec4(0.0,0.5,0.5,1.0);\n"+
"        else if (intensity > decis[1])\n"+
"                color = vec4(0.6,0.3,0.3,1.0);\n"+
"        else if (intensity > decis[2])\n"+
"                color = vec4(1.0,0.2,0.2,1.0);\n"+
"        else\n"+
"                color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"        gl_FragColor = color;\n"+
"}\n"+
"\n"+
"\n"+
"")))
              .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                .addField(new fieldObject().setType("SFVec3f").setName("decis").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.44 0.22"))
                .addParts(new ShaderPartObject().setType("VERTEX")
                  .setSourceCode("\n"+
"\n"+
"# toon.vs\n"+
"# http://www.web3d.org/x3d/content/examples/Basic/Shaders/toon.vs\n"+
"\n"+
"// the vertex shader is small enough we can uri it here\n"+
"// but the link also contains a 'toon.vs' for those interested\n"+
"\n"+
"    varying vec3 normal;\n"+
"    void main()\n"+
"    {\n"+
"        normal=gl_NormalMatrix*gl_Normal;\n"+
"        gl_Position=ftransform();\n"+
"    }\n"+
"\n"+
"\n"+
""))
                .addParts(new ShaderPartObject().setType("FRAGMENT")
                  .setSourceCode("\n"+
"\n"+
"# toon.fs\n"+
"# http://www.web3d.org/x3d/content/examples/Basic/Shaders/toon.fs\n"+
"varying vec3 normal;\n"+
"uniform vec3 decis;\n"+
"\n"+
"void main()\n"+
"{\n"+
"        float intensity;\n"+
"        vec4 color;\n"+
"        vec3 n = normalize(normal);\n"+
"\n"+
"        intensity = dot(vec3(gl_LightSource[0].position),n);\n"+
"\n"+
"        if (intensity > decis[0])\n"+
"                color = vec4(0.0,0.5,0.5,1.0);\n"+
"        else if (intensity > decis[1])\n"+
"                color = vec4(0.6,0.3,0.3,1.0);\n"+
"        else if (intensity > decis[2])\n"+
"                color = vec4(1.0,0.2,0.2,1.0);\n"+
"        else\n"+
"                color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"        gl_FragColor = color;\n"+
"}\n"+
"\n"+
"\n"+
"")))
              .addShaders(new ComposedShaderObject().setDEF("Cobweb").setLanguage("GLSL")
                .addField(new fieldObject().setType("SFVec3f").setName("decis").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.77 0.44"))
                .addParts(new ShaderPartObject().setType("VERTEX")
                  .setSourceCode("\n"+
"                  data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform mat4 x3d_ProjectionMatrix;\n"+
"uniform mat4 x3d_ModelViewMatrix;\n"+
"uniform mat3 x3d_NormalMatrix;\n"+
"\n"+
"attribute vec4 x3d_Vertex;\n"+
"attribute vec3 x3d_Normal;\n"+
"\n"+
"varying vec3 normal;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	normal = x3d_NormalMatrix * x3d_Normal;\n"+
"	\n"+
"	gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * x3d_Vertex;\n"+
"}\n"+
"\n"+
"\n"+
""))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setDEF("_1")
                  .setSourceCode("\n"+
"                  data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform vec3 x3d_LightDirection [x3d_MaxLights];\n"+
"\n"+
"varying vec3 normal;\n"+
"uniform vec3 decis;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	float intensity;\n"+
"	vec4 color;\n"+
"	vec3 n = normalize (normal);\n"+
"\n"+
"	intensity = abs (dot (x3d_LightDirection [0], n));\n"+
"\n"+
"	if (intensity > decis[0])\n"+
"		color = vec4(0.0,0.5,0.5,1.0);\n"+
"	else if (intensity > decis[1])\n"+
"		color = vec4(0.6,0.3,0.3,1.0);\n"+
"	else if (intensity > decis[2])\n"+
"		color = vec4(1.0,0.2,0.2,1.0);\n"+
"	else\n"+
"		color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"	gl_FragColor = color;\n"+
"} \n"+
"\n"+
"\n"+
""))))
            .setGeometry(new SphereObject().setRadius(1.75f))))
        .addChild(new WorldInfoObject().setTitle("SimpleShader")
          .setMetadata(new MetadataSetObject().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .addValue(new MetadataSetObject().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .addValue(new MetadataSetObject().setName("nodes").setDEF("nodes").setReference("http://titania.create3000.de")
                .addComments(new CommentsBlock("NULL"))))
            .addValue(new MetadataSetObject().setName("NavigationInfo").setDEF("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue(new MetadataStringObject().setName("type").setDEF("type").setReference("http://titania.create3000.de").setValue(new MFStringObject(new MFString0().getArray()))))
            .addValue(new MetadataSetObject().setName("Viewpoint").setDEF("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new MetadataDoubleObject().setName("position").setDEF("position").setReference("http://titania.create3000.de").setValue(new MFDoubleObject(new MFDouble1().getArray())))
              .addValue(new MetadataDoubleObject().setName("orientation").setDEF("orientation").setReference("http://titania.create3000.de").setValue(new MFDoubleObject(new MFDouble2().getArray())))
              .addValue(new MetadataDoubleObject().setName("centerOfRotation").setDEF("centerOfRotation").setReference("http://titania.create3000.de").setValue(new MFDoubleObject(new MFDouble3().getArray())))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EXAMINE"});
  }
}
protected class MFDouble1 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {6.24067728185014d,0.00250837343276661d,2.92117542307615d});
  }
}
protected class MFDouble2 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {-0.110173424710488d,0.990158061907379d,-0.0863065984000336d,1.21146676119191d});
  }
}
protected class MFDouble3 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {-0.808320198626341d,-0.358072370409949d,0.22817191560906d});
  }
}
}
