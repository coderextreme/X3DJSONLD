####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='3.3',
  head=head(
    children=[
    meta(name='comment',content='World of Titania'),
    meta(name='created',content='Fri, 22 Apr 2016 03:51:27 GMT'),
    meta(name='creator',content='Holger Seelig'),
    meta(name='generator',content='Titania V1.4.1, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/ExplosionEmitter.x3d'),
    meta(name='modified',content='Fri, 22 Apr 2016 04:34:33 GMT')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='Grid',url=["GridTool.x3dv#Grid", "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"],
      field=[
      field(accessType='inputOutput',type='SFVec3f',name='translation'),
      field(accessType='inputOutput',type='SFRotation',name='rotation'),
      field(accessType='inputOutput',type='SFVec3f',name='scale'),
      field(accessType='inputOutput',type='MFInt32',name='dimension'),
      field(accessType='inputOutput',type='MFInt32',name='majorLineEvery'),
      field(accessType='inputOutput',type='MFInt32',name='majorLineOffset'),
      field(accessType='inputOutput',type='SFColor',name='color'),
      field(accessType='inputOutput',type='SFFloat',name='transparency'),
      field(accessType='inputOutput',type='SFColor',name='lineColor'),
      field(accessType='inputOutput',type='SFFloat',name='lineTransparency'),
      field(accessType='inputOutput',type='SFColor',name='majorLineColor'),
      field(accessType='inputOutput',type='SFFloat',name='majorLineTransparency'),
      field(accessType='initializeOnly',type='SFBool',name='solid')]),
    WorldInfo(title='ExplosionEmitter',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[0,0,10]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0,0,1,0]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[0,0,0])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de'),
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de',
            value=[
            Script(DEF='NumParticlesyScript',
              field=[
              field(accessType='inputOnly',type='SFVec3f',name='set_translation'),
              field(accessType='inputOutput',type='SFString',name='description',value='numParticles'),
              field(accessType='inputOutput',type='SFInt32',name='minValue'),
              field(accessType='inputOutput',type='SFInt32',name='maxValue',value=40000),
              field(accessType='outputOnly',type='SFInt32',name='value_changed'),
              field(accessType='outputOnly',type='MFString',name='string_changed'),
              field(accessType='initializeOnly',type='SFInt32',name='currentValue',value=2000)],

            sourceCode="""
ecmascript:

function initialized ()
{
	set_value (value);
}

function set_translation (value)
{
	set_value (minValue + (value .x * (maxValue - minValue)));
}

function set_value (value)
{
	var rounded = value .toFixed (0);

	if (rounded == currentValue)
		return;

	currentValue       = rounded;
	string_changed [0] = description + " " + rounded;
	value_changed      = rounded;
}
""")])]),
        MetadataSet(DEF='LayerSet',name='LayerSet',reference='http://titania.create3000.de',
          value=[
          MetadataInteger(DEF='activeLayer',name='activeLayer',reference='http://titania.create3000.de',value=[-1])])])),
    LayerSet(activeLayer=1,order=[0,1,2,3],
      layers=Layer(
        children=[
        Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
        Viewpoint(description='Viewpoint',position=(0,20,55)),
        ParticleSystem(DEF='_1',geometryType='POINT',maxParticles=2000,particleLifetime=4,lifetimeVariation=0.5,particleSize=(1,1),colorKey=[0,0.2,0.5,0.7,0.8,1],
          emitter=ExplosionEmitter(speed=0.5,variation=0.5,mass=0.1,surfaceArea=0.1),
          physics=WindPhysicsModel(direction=(0,1,0),speed=0.7,gustiness=1.7,turbulence=0.3),
          WindPhysicsModel(speed=0.5,gustiness=2)
          color=ColorRGBA(color=[(1,0.38,0,0),(1,0.58,0.06,0.01),(1,0.37,0,0.1),(1,0.05,0,0),(0,0,0,0.015),(0,0,0,0)]),
          appearance=Appearance(
            lineProperties=LineProperties(linewidthScaleFactor=10))),
        Transform(DEF='IndexedLineSet',
          children=[
          Shape(
            geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
              color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
              coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))])]),
      Layer(
        children=[
        OrthoViewpoint(),
        Transform(DEF='TransparencyText',translation=(1.675,-0.95,-3.49096e-06),scale=(0.0672307,0.0672307,0.0672307),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(emissiveColor=(1,1,1))),
            geometry=Text(DEF='_2',string=["numParticles 2337"],solid=True,
              fontStyle=FontStyle(family=["SANS"],justify=["END"])))]),
        Transform(DEF='TransparancySlider',translation=(0.025,-0.923,-3.49096e-06),center=(0,-0.027,0),
          children=[
          Transform(DEF='IndexedLineSet_1',
            children=[
            Shape(
              appearance=Appearance(
                lineProperties=LineProperties(linewidthScaleFactor=2),
                material=Material(DEF='Artdeco31',emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(colorPerVertex=False,coordIndex=[0,1,-1],
                coord=Coordinate(point=[(0,0,0),(1,0,0)])))]),
          Transform(
            children=[
            Transform(DEF='Rectangle2D',translation=(0.0584318,0,0),scale=(0.027,0.0267372,0.0267372),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=Disk2D(),)]),
            PlaneSensor(DEF='_3',offset=(0.0584318,0,0),maxPosition=(1,0))]),
          Group(
            children=[
            Group(DEF='Animation',
              metadata=MetadataSet(DEF='Animation_1',name='Animation',reference='http://titania.create3000.de',
                value=[
                MetadataInteger(DEF='duration',name='duration',reference='http://titania.create3000.de',value=[68]),
                MetadataInteger(DEF='framesPerSecond',name='framesPerSecond',reference='http://titania.create3000.de',value=[10])]),
              children=[
              TimeSensor(DEF='_4',cycleInterval=6.8,loop=True,startTime=1451028308.5169,resumeTime=1451028223.75739,pauseTime=1451028247.50596,stopTime=1451028309.80616),
              PositionInterpolator(DEF='pointSizeScriptSet_translationInterpolator',key=[0,0.0147059,0.0294118,0.0441176,0.0588235,0.0735294,0.0882353,0.102941,0.117647,0.132353,0.147059,0.161765,0.176471,0.191176,0.205882,0.220588,0.235294,0.25,0.264706,0.279412,0.294118,0.308824,0.323529,0.338235,0.352941,0.367647,0.382353,0.397059,0.411765,0.426471,0.441176,0.455882,0.470588,0.485294,0.5,0.514706,0.529412,0.544118,0.558824,0.573529,0.588235,0.602941,0.617647,0.632353,0.647059,0.661765,0.676471,0.691176,0.705882,0.720588,0.735294,0.75,0.764706,0.779412,0.794118,0.808824,0.823529,0.838235,0.852941,0.867647,0.882353,0.897059,0.911765,0.926471,0.941176,0.955882,0.970588,0.985294,1],keyValue=[(0.200605,0,0),(0.202642,0,0),(0.208588,0,0),(0.2182,0,0),(0.231232,0,0),(0.247441,0,0),(0.266581,0,0),(0.288408,0,0),(0.312679,0,0),(0.339147,0,0),(0.367569,0,0),(0.3977,0,0),(0.429295,0,0),(0.462111,0,0),(0.495902,0,0),(0.530424,0,0),(0.565432,0,0),(0.600683,0,0),(0.63593,0,0),(0.670931,0,0),(0.70544,0,0),(0.739212,0,0),(0.772004,0,0),(0.803571,0,0),(0.833668,0,0),(0.86205,0,0),(0.888474,0,0),(0.912694,0,0),(0.934466,0,0),(0.953546,0,0),(0.969689,0,0),(0.98265,0,0),(0.992186,0,0),(0.99805,0,0),(1,0,0),(0.997866,0,0),(0.991808,0,0),(0.982071,0,0),(0.968899,0,0),(0.95254,0,0),(0.933237,0,0),(0.911238,0,0),(0.886786,0,0),(0.860128,0,0),(0.831508,0,0),(0.801174,0,0),(0.769369,0,0),(0.736339,0,0),(0.70233,0,0),(0.667588,0,0),(0.632357,0,0),(0.596883,0,0),(0.561412,0,0),(0.526189,0,0),(0.49146,0,0),(0.457469,0,0),(0.424463,0,0),(0.392687,0,0),(0.362387,0,0),(0.333807,0,0),(0.307193,0,0),(0.282792,0,0),(0.260847,0,0),(0.241605,0,0),(0.225311,0,0),(0.212211,0,0),(0.20255,0,0),(0.196573,0,0),(0.194526,0,0)],
                metadata=MetadataSet(DEF='Interpolator',name='Interpolator',reference='http://titania.create3000.de',
                  value=[
                  MetadataInteger(DEF='key',name='key',reference='http://titania.create3000.de',value=[0,34,68]),
                  MetadataDouble(DEF='keyValue',name='keyValue',reference='http://titania.create3000.de',value=[0.20060533285141,0,0,1,0,0,0.194526299834251,0,0]),
                  MetadataString(DEF='keyType',name='keyType',reference='http://titania.create3000.de',value=["SPLINE", "SPLINE", "SPLINE"])]))]),
            Script(USE='NumParticlesyScript')]),
          Switch(whichChoice=-1,
            children=[
            Transform(DEF='Rectangle2D_1',translation=(-0.075,0,0),scale=(0.025,0.0247567,0.0247567),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=Rectangle2D(),),
              TouchSensor(DEF='_5',description='Toggle Animation'),
              Script(DEF='ToggleTransparencyAnim',
                field=[
                field(accessType='inputOnly',type='SFTime',name='set_touchTime'),
                field(accessType='initializeOnly',type='SFNode',name='timer',
                  children=[
                  TimeSensor(USE='_4')])],

              sourceCode="""
ecmascript:

function set_touchTime (value, time)
{
	if (timer .isActive)
	{
		if (timer .isPaused)
			timer .resumeTime = time;
		else
			timer .pauseTime = time;
	}
	else
		timer .startTime = time;
}
""")])])])])),
    ROUTE(fromNode='_4',fromField='fraction_changed',toNode='pointSizeScriptSet_translationInterpolator',toField='set_fraction'),
    ROUTE(fromNode='pointSizeScriptSet_translationInterpolator',fromField='value_changed',toNode='Rectangle2D',toField='set_translation'),
    ROUTE(fromNode='pointSizeScriptSet_translationInterpolator',fromField='value_changed',toNode='NumParticlesyScript',toField='set_translation'),
    ROUTE(fromNode='_5',fromField='touchTime',toNode='ToggleTransparencyAnim',toField='set_touchTime'),
    ROUTE(fromNode='_3',fromField='translation_changed',toNode='NumParticlesyScript',toField='set_translation'),
    ROUTE(fromNode='_3',fromField='translation_changed',toNode='Rectangle2D',toField='set_translation'),
    ROUTE(fromNode='pointSizeScriptSet_translationInterpolator',fromField='value_changed',toNode='_3',toField='set_offset'),
    ROUTE(fromNode='NumParticlesyScript',fromField='string_changed',toNode='_2',toField='set_string'),
    ROUTE(fromNode='NumParticlesyScript',fromField='value_changed',toNode='_1',toField='set_maxParticles')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python load and self-test diagnostics complete.")
