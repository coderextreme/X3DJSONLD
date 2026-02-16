package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
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
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.TextureProjection.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example scene Nodes. </p>
 <p> Related links:  source Nodes.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Holger Seelig </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> Tue, 10 Feb 2026 12:09:57 GMT </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> Tue, 10 Feb 2026 12:34:21 GMT </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> x3d-tidy V3.0.2, <a href="https://www.npmjs.com/package/x3d-tidy" target="_blank">https://www.npmjs.com/package/x3d-tidy</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Sunrize X3D Editor V2.0.2, <a href="https://create3000.github.io/sunrize/" target="_blank">https://create3000.github.io/sunrize/</a> </td>
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

	* @author Holger Seelig
 */

public class Nodes
{
	/** Default constructor to create this object. */
	public Nodes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_1)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Holger Seelig"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("Tue, 10 Feb 2026 12:09:57 GMT"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("Tue, 10 Feb 2026 12:34:21 GMT"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/")))
  .setScene(new Scene()
    .addMetadata(new MetadataBoolean())
    .addMetadata(new MetadataDouble())
    .addMetadata(new MetadataFloat())
    .addMetadata(new MetadataInteger())
    .addMetadata(new MetadataSet())
    .addMetadata(new MetadataString())
    .addChild(new WorldInfo())
    .addChild(new Background())
    .addChild(new Fog())
    .addChild(new FogCoordinate())
    .addChild(new LocalFog())
    .addChild(new TextureBackground())
    .addChild(new ProximitySensor())
    .addChild(new TransformSensor())
    .addChild(new VisibilitySensor())
    .addChild(new ColorChaser())
    .addChild(new ColorDamper())
    .addChild(new CoordinateChaser())
    .addChild(new CoordinateDamper())
    .addChild(new OrientationChaser())
    .addChild(new OrientationDamper())
    .addChild(new PositionChaser())
    .addChild(new PositionChaser2D())
    .addChild(new PositionDamper())
    .addChild(new PositionDamper2D())
    .addChild(new ScalarChaser())
    .addChild(new ScalarDamper())
    .addChild(new TexCoordChaser2D())
    .addChild(new TexCoordDamper2D())
    .addChild(new Box())
    .addChild(new Cone())
    .addChild(new Cylinder())
    .addChild(new ElevationGrid())
    .addChild(new Extrusion())
    .addChild(new IndexedFaceSet())
    .addChild(new Sphere())
    .addChild(new Group())
    .addChild(new StaticGroup())
    .addChild(new Switch().setWhichChoice(-1))
    .addChild(new Transform())
    .addChild(new ColorInterpolator())
    .addChild(new CoordinateInterpolator())
    .addChild(new CoordinateInterpolator2D())
    .addChild(new EaseInEaseOut())
    .addChild(new NormalInterpolator())
    .addChild(new OrientationInterpolator())
    .addChild(new PositionInterpolator())
    .addChild(new PositionInterpolator2D())
    .addChild(new ScalarInterpolator())
    .addChild(new SplinePositionInterpolator())
    .addChild(new SplinePositionInterpolator2D())
    .addChild(new SplineScalarInterpolator())
    .addChild(new SquadOrientationInterpolator())
    .addChild(new Layer().setObjectType(new String[] {"ALL"}).setPickable(true))
    .addLayerSet(new LayerSet())
    .addChild(new Viewport())
    .addChild(new DirectionalLight())
    .addChild(new EnvironmentLight().setOrigin("0 0 0"
// *** (X3dToJava.xslt error?) Encountered incorrect type, EnvironmentLight origin: $isNumeric=true, $attributeType=FieldTypeNotFound, value='0 0 0']
).setRotation(0.0,0.0,1.0,0.0))
    .addChild(new PointLight())
    .addChild(new SpotLight().setBeamWidth(0.589049))
    .addChild(new Billboard())
    .addChild(new Collision())
    .addChild(new LOD())
    .addChild(new NavigationInfo())
    .addChild(new OrthoViewpoint())
    .addChild(new Viewpoint())
    .addChild(new ViewpointGroup())
    .addChild(new Anchor())
    .addChild(new Inline())
    .addChild(new LoadSensor())
    .addChild(new CylinderSensor())
    .addChild(new PlaneSensor())
    .addChild(new SphereSensor())
    .addChild(new TouchSensor())
    .addChild(new ClipPlane())
    .addChild(new Color())
    .addChild(new ColorRGBA())
    .addChild(new Coordinate())
    .addChild(new CoordinateDouble())
    .addChild(new IndexedLineSet())
    .addChild(new IndexedTriangleFanSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new IndexedTriangleStripSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new LineSet())
    .addChild(new Normal())
    .addChild(new PointSet())
    .addChild(new Tangent())
    .addChild(new TriangleFanSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new TriangleSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new TriangleStripSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new ComposedShader())
    .addChild(new FloatVertexAttribute())
    .addChild(new Matrix3VertexAttribute())
    .addChild(new Matrix4VertexAttribute())
    .addChild(new PackagedShader())
    .addChild(new ProgramShader())
    .addChild(new ShaderPart())
    .addChild(new ShaderProgram())
    .addChild(new AcousticProperties())
    .addChild(new Appearance())
    .addChild(new FillProperties())
    .addChild(new LineProperties())
    .addChild(new Material())
    .addChild(new PhysicalMaterial())
    .addChild(new PointProperties())
    .addChild(new Shape())
    .addChild(new TwoSidedMaterial())
    .addChild(new UnlitMaterial().setEmissiveColor(1.0,1.0,1.0).setNormalScale(0))
    .addChild(new Analyser())
    .addChild(new AudioClip())
    .addChild(new AudioDestination())
    .addChild(new BiquadFilter().setType("LOWPASS"))
    .addChild(new BufferAudioSource())
    .addChild(new ChannelMerger())
    .addChild(new ChannelSelector())
    .addChild(new ChannelSplitter())
    .addChild(new Convolver())
    .addChild(new Delay())
    .addChild(new DynamicsCompressor())
    .addChild(new Gain())
    .addChild(new ListenerPointSource())
    .addChild(new MicrophoneSource())
    .addChild(new OscillatorSource())
    .addChild(new PeriodicWave())
    .addChild(new Sound())
    .addChild(new SpatialSound())
    .addChild(new StreamAudioDestination())
    .addChild(new StreamAudioSource())
    .addChild(new WaveShaper())
    .addChild(new ImageTexture())
    .addChild(new MovieTexture())
    .addChild(new MultiTexture())
    .addChild(new MultiTextureCoordinate())
    .addChild(new MultiTextureTransform())
    .addChild(new PixelTexture())
    .addChild(new TextureCoordinate())
    .addChild(new TextureCoordinateGenerator())
    .addChild(new TextureProperties())
    .addChild(new TextureTransform())
    .addChild(new TimeSensor())
    .addChild(new CADAssembly())
    .addChild(new CADFace())
    .addChild(new CADLayer())
    .addChild(new CADPart())
    .addChild(new IndexedQuadSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new QuadSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
    .addChild(new DISEntityManager())
    .addChild(new DISEntityTypeMapping())
    .addChild(new EspduTransform())
    .addChild(new ReceiverPdu().setReceivedPower(0.0))
    .addChild(new SignalPdu())
    .addChild(new TransmitterPdu().setRelativeAntennaLocation(0.0,0.0,0.0).setTransmitFrequencyBandwidth(0.0))
    .addChild(new BooleanFilter())
    .addChild(new BooleanSequencer())
    .addChild(new BooleanToggle())
    .addChild(new BooleanTrigger())
    .addChild(new IntegerSequencer())
    .addChild(new IntegerTrigger())
    .addChild(new TimeTrigger())
    .addChild(new KeySensor().setEnabled(false))
    .addChild(new StringSensor())
    .addChild(new TextureProjector().setAmbientIntensity(0).setColor(1.0,1.0,1.0).setFieldOfView(0.7854).setIntensity(0.7854).setUpVector(0.0,1.0,0.0))
    .addChild(new TextureProjectorParallel().setAmbientIntensity(0).setColor(1.0,1.0,1.0).setIntensity(0.7854).setUpVector(0.0,1.0,0.0))
    .addChild(new ComposedCubeMapTexture())
    .addChild(new GeneratedCubeMapTexture())
    .addChild(new ImageCubeMapTexture())
    .addChild(new Arc2D())
    .addChild(new ArcClose2D().setClosureType("PIE"))
    .addChild(new Circle2D())
    .addChild(new Disk2D())
    .addChild(new Polyline2D())
    .addChild(new Polypoint2D())
    .addChild(new Rectangle2D())
    .addChild(new TriangleSet2D())
    .addChild(new HAnimDisplacer())
    .addChild(new HAnimHumanoid().setVersion("2.0"))
    .addChild(new HAnimJoint().setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))
    .addChild(new HAnimMotion().setEndFrame(-1))
    .addChild(new HAnimPose().setLoa(-1).setTransitionDuration(0))
    .addChild(new HAnimSegment())
    .addChild(new HAnimSite())
    .addChild(new BoundedPhysicsModel())
    .addChild(new ConeEmitter())
    .addChild(new ExplosionEmitter())
    .addChild(new ForcePhysicsModel())
    .addChild(new ParticleSystem())
    .addChild(new PointEmitter())
    .addChild(new PolylineEmitter())
    .addChild(new SurfaceEmitter())
    .addChild(new VolumeEmitter())
    .addChild(new WindPhysicsModel())
    .addChild(new Script())
    .addChild(new FontLibrary())
    .addChild(new FontStyle())
    .addChild(new Text())
    .addChild(new ComposedTexture3D())
    .addChild(new ImageTexture3D())
    .addChild(new ImageTextureAtlas())
    .addChild(new PixelTexture3D())
    .addChild(new TextureCoordinate3D())
    .addChild(new TextureCoordinate4D())
    .addChild(new TextureTransform3D())
    .addChild(new TextureTransformMatrix3D())
    .addChild(new BallJoint())
    .addChild(new CollidableOffset())
    .addChild(new CollidableShape())
    .addChild(new CollisionCollection())
    .addChild(new CollisionSensor())
    .addChild(new CollisionSpace())
    .addChild(new Contact())
    .addChild(new DoubleAxisHingeJoint().setAxis1(1.0,0.0,0.0).setAxis2(0.0,1.0,0.0))
    .addChild(new MotorJoint().setMotor1Axis(1.0,0.0,0.0).setMotor2Axis(0.0,1.0,0.0).setMotor3Axis(0.0,0.0,1.0))
    .addChild(new RigidBody())
    .addChild(new RigidBodyCollection())
    .addChild(new SingleAxisHingeJoint().setAxis(0.0,1.0,0.0))
    .addChild(new SliderJoint())
    .addChild(new UniversalJoint().setAxis1(1.0,0.0,0.0).setAxis2(0.0,1.0,0.0))
    .addChild(new BlendedVolumeStyle())
    .addChild(new BoundaryEnhancementVolumeStyle())
    .addChild(new CartoonVolumeStyle())
    .addChild(new ComposedVolumeStyle())
    .addChild(new EdgeEnhancementVolumeStyle())
    .addChild(new IsoSurfaceVolumeData())
    .addChild(new OpacityMapVolumeStyle())
    .addChild(new ProjectionVolumeStyle())
    .addChild(new SegmentedVolumeData())
    .addChild(new ShadedVolumeStyle())
    .addChild(new SilhouetteEnhancementVolumeStyle())
    .addChild(new ToneMappedVolumeStyle())
    .addChild(new VolumeData())
    .addChild(new GeoCoordinate())
    .addChild(new GeoElevationGrid())
    .addChild(new GeoLOD())
    .addChild(new GeoLocation())
    .addChild(new GeoMetadata())
    .setGeoOrigin(new GeoOrigin())
    .addChild(new GeoPositionInterpolator())
    .addChild(new GeoProximitySensor())
    .addChild(new GeoTouchSensor())
    .addChild(new GeoTransform())
    .addChild(new GeoViewpoint())
    .addChild(new Contour2D())
    .addChild(new ContourPolyline2D())
    .addChild(new NurbsCurve())
    .addChild(new NurbsCurve2D())
    .addChild(new NurbsOrientationInterpolator())
    .addChild(new NurbsPatchSurface())
    .addChild(new NurbsPositionInterpolator())
    .addChild(new NurbsSet())
    .addChild(new NurbsSurfaceInterpolator())
    .addChild(new NurbsSweptSurface())
    .addChild(new NurbsSwungSurface())
    .addChild(new NurbsTextureCoordinate())
    .addChild(new NurbsTrimmedSurface())
    .addChild(new Layout())
    .addChild(new LayoutGroup())
    .addChild(new LayoutLayer().setObjectType(new String[] {"ALL"}).setPickable(true))
    .addChild(new ScreenFontStyle())
    .addChild(new ScreenGroup())
    .addChild(new LinePickSensor())
    .addChild(new PickableGroup())
    .addChild(new PointPickSensor())
    .addChild(new PrimitivePickSensor())
    .addChild(new VolumePickSensor()));
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
	 * @return Nodes model
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
        X3D thisExampleX3dModel = new Nodes().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.Nodes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.Nodes self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./Nodes_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./Nodes_JavaExport.x3d"; 
                String filenameX3DV = "./Nodes_JavaExport.x3dv"; 
                String filenameJSON = "./Nodes_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
