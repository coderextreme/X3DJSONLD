####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python .py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(name='title',content='Bobble Spheres Full Animation (Final Working)'),
    meta(name='description',content='Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.'),
    meta(name='creator',content='Generated from Python script'),
    component(name='X_ITE',level=1)]),
  Scene=Scene(
    children=[
    WorldInfo(title='Bobble Spheres (PBR Full Animation)'),
    NavigationInfo(),
    Background(skyAngle=[1.57],skyColor=[(0.15,0.25,0.8),(0.9,0.9,0.9)]),
    Viewpoint(description='Initial Camera',position=(-70,15,-25),orientation=(0.147,0.989,0.005,-1.82),fieldOfView=0.349),
    DirectionalLight(direction=(-0.5,-1,-0.5),intensity=2),
    Comment(' Static objects '),
    Transform(translation=(0,-1000,-1),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(baseColor=(0.5,0.5,0.5))),
        geometry=Sphere(radius=1000))]),
    Transform(translation=(0,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(baseColor=(0.9,0.9,0.9),transmissionFactor=0.9,roughness=0.0,indexOfRefraction=1.5)),
        geometry=Sphere(),)]),
    Transform(translation=(-4,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(baseColor=(1.0,0.95,0.9),transmissionFactor=0.8,roughness=0.05,indexOfRefraction=1.1)),
        geometry=Sphere(),)]),
    Transform(translation=(4,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(baseColor=(0.7,0.6,0.5),roughness=0.1)),
        geometry=Sphere(),)]),
    Comment(' === DYNAMICALLY GENERATED SPHERES === '),
    Comment(' Example: Matte Sphere with animated color and roughness (Using initialize()) '),
    Transform(DEF='T_0',translation=(-10.871,0.2,-10.453),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(DEF='M_0',baseColor=(0.627,0.003,0.165))),
        geometry=Sphere(radius=0.2))]),
    TimeSensor(DEF='C_0',cycleInterval=5.21,loop=True),
    PositionInterpolator(DEF='PI_0',key=[0,0.5,1],keyValue=[(-10.871,0.2,-10.453),(-10.871,0.6,-10.453),(-10.871,0.2,-10.453)]),
    ColorInterpolator(DEF='CI_0',key=[0,0.5,1],keyValue=[(0.627,0.003,0.165),(0.011,0.583,0.443),(0.627,0.003,0.165)]),
    ScalarInterpolator(DEF='SI_0',key=[0,0.5,1],keyValue=[1.0,0.4,1.0]),
    Script(DEF='Animator_0',
      field=[
      field(name='set_color',type='SFColor',accessType='inputOnly'),
      field(name='set_roughness',type='SFFloat',accessType='inputOnly'),
      field(name='targetMaterial',type='SFNode',accessType='initializeOnly',
        children=[
        PhysicalMaterial(USE='M_0')])],

    sourceCode="""
ecmascript:
        var matNode = null; // Variable to hold the material node reference

        function initialize() {
          // This function runs AFTER the targetMaterial field is connected.
          // We safely store the reference to the actual material node.
          matNode = targetMaterial.value;
        }

        function set_color(value, timestamp) {
          if (matNode) { // Check if the node reference was stored
            matNode.baseColor = value;
          }
        }
        function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        }
"""),
    ROUTE(fromNode='C_0',fromField='fraction_changed',toNode='PI_0',toField='set_fraction'),
    ROUTE(fromNode='PI_0',fromField='value_changed',toNode='T_0',toField='set_translation'),
    ROUTE(fromNode='C_0',fromField='fraction_changed',toNode='CI_0',toField='set_fraction'),
    ROUTE(fromNode='CI_0',fromField='value_changed',toNode='Animator_0',toField='set_color'),
    ROUTE(fromNode='C_0',fromField='fraction_changed',toNode='SI_0',toField='set_fraction'),
    ROUTE(fromNode='SI_0',fromField='value_changed',toNode='Animator_0',toField='set_roughness'),
    Comment(' Example: Metal Sphere with animated roughness (Using initialize()) '),
    Transform(DEF='T_1',translation=(-10.411,0.2,-9.160),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(DEF='M_1',baseColor=(0.707,0.888,0.536),roughness=0.2)),
        geometry=Sphere(radius=0.2))]),
    TimeSensor(DEF='C_1',cycleInterval=4.15,loop=True),
    PositionInterpolator(DEF='PI_1',key=[0,0.5,1],keyValue=[(-10.411,0.2,-9.160),(-10.411,0.6,-9.160),(-10.411,0.2,-9.160)]),
    ScalarInterpolator(DEF='SI_1',key=[0,0.5,1],keyValue=[0.5,0.0,0.5]),
    Script(DEF='Animator_1',
      field=[
      field(name='set_roughness',type='SFFloat',accessType='inputOnly'),
      field(name='targetMaterial',type='SFNode',accessType='initializeOnly',
        children=[
        PhysicalMaterial(USE='M_1')])],

    sourceCode="""
ecmascript:
        var matNode = null;

        function initialize() {
          matNode = targetMaterial.value;
        }

        function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        }
"""),
    ROUTE(fromNode='C_1',fromField='fraction_changed',toNode='PI_1',toField='set_fraction'),
    ROUTE(fromNode='PI_1',fromField='value_changed',toNode='T_1',toField='set_translation'),
    ROUTE(fromNode='C_1',fromField='fraction_changed',toNode='SI_1',toField='set_fraction'),
    ROUTE(fromNode='SI_1',fromField='value_changed',toNode='Animator_1',toField='set_roughness'),
    Comment(' The extension-based spheres were already correct and need no changes '),
    Transform(DEF='T_2',translation=(-10.155,0.2,-8.324),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(transmissionFactor=0.95,roughness=0.05,
            material=IORMaterialExtension(DEF='IOR_2',indexOfRefraction=1.5))),
        geometry=Sphere(radius=0.2))]),
    TimeSensor(DEF='C_2',cycleInterval=3.88,loop=True),
    PositionInterpolator(DEF='PI_2',key=[0,0.5,1],keyValue=[(-10.155,0.2,-8.324),(-10.155,0.6,-8.324),(-10.155,0.2,-8.324)]),
    ScalarInterpolator(DEF='SI_2',key=[0,0.5,1],keyValue=[1.4,1.7,1.4]),
    ROUTE(fromNode='C_2',fromField='fraction_changed',toNode='PI_2',toField='set_fraction'),
    ROUTE(fromNode='PI_2',fromField='value_changed',toNode='T_2',toField='set_translation'),
    ROUTE(fromNode='C_2',fromField='fraction_changed',toNode='SI_2',toField='set_fraction'),
    ROUTE(fromNode='SI_2',fromField='value_changed',toNode='IOR_2',toField='set_indexOfRefraction'),
    Transform(DEF='T_3',translation=(-10.518,0.2,-7.283),
      children=[
      Shape(
        appearance=Appearance(
          material=PhysicalMaterial(transmissionFactor=0.95,roughness=0.05,indexOfRefraction=1.33,
            material=IridescenceMaterialExtension(DEF='IRI_3',iridescence=1.0,iridescenceIndexOfRefraction=1.3,iridescenceThicknessMinimum=100))),
        geometry=Sphere(radius=0.2))]),
    TimeSensor(DEF='C_3',cycleInterval=6.0,loop=True),
    PositionInterpolator(DEF='PI_3',key=[0,0.5,1],keyValue=[(-10.518,0.2,-7.283),(-10.518,0.6,-7.283),(-10.518,0.2,-7.283)]),
    ScalarInterpolator(DEF='SI_3',key=[0,0.5,1],keyValue=[100,700,100]),
    ROUTE(fromNode='C_3',fromField='fraction_changed',toNode='PI_3',toField='set_fraction'),
    ROUTE(fromNode='PI_3',fromField='value_changed',toNode='T_3',toField='set_translation'),
    ROUTE(fromNode='C_3',fromField='fraction_changed',toNode='SI_3',toField='set_fraction'),
    ROUTE(fromNode='SI_3',fromField='value_changed',toNode='IRI_3',toField='set_iridescenceThicknessMaximum')])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for .py:')
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

print("python .py load and self-test diagnostics complete.")
