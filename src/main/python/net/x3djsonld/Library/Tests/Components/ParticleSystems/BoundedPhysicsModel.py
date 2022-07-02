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
    meta(name='created',content='Mon, 02 May 2016 10:03:35 GMT'),
    meta(name='creator',content='holger'),
    meta(name='generator',content='Titania V4.0.6a, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Library/Tests/Components/ParticleSystems/BoundedPhysicsModel.x3d'),
    meta(name='modified',content='Sun, 25 Feb 2018 10:22:55 GMT')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='IcoSphere',url=["https://cdn.rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3d", "http://cdn.rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3d", "https://rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3d", "http://rawgit.com/create3000/Library/1.0.13/Prototypes/Geometry3D/IcoSphere.x3d"],
      field=[
      field(accessType='inputOutput',type='SFString',name='type'),
      field(accessType='inputOutput',type='SFInt32',name='order'),
      field(accessType='inputOutput',type='SFFloat',name='radius'),
      field(accessType='initializeOnly',type='SFBool',name='solid')]),
    WorldInfo(title='BoundedPhysicsModel',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[0,0,15]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0,0,1,0]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[0,0,0])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='nodes',name='nodes',reference='http://titania.create3000.de',
            value=[
            Transform(DEF='Icosahedron',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=ProtoInstance(name='IcoSphere',DEF='_1',
                  fieldValue=[
                  fieldValue(name='order',value=3)]))])]),
          MetadataBoolean(DEF='selectGeometry',name='selectGeometry',reference='http://titania.create3000.de',value=[False])]),
        MetadataSet(DEF='Page',name='Page',reference='http://titania.create3000.de',
          value=[
          MetadataInteger(DEF='activeView',name='activeView',reference='http://titania.create3000.de',value=[1]),
          MetadataInteger(DEF='multiView',name='multiView',reference='http://titania.create3000.de',value=[0])])])),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Viewpoint',position=(0,0,15)),
    Transform(DEF='Box',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(transparency=0.49)),
        geometry=Box(DEF='_2',size=(7,7,7)))]),
    Transform(USE='Icosahedron'),
    TimeSensor(DEF='_3',cycleInterval=20,loop=True),
    BooleanSequencer(DEF='_4',key=[0,0.3,1],keyValue=[True,False]),
    ParticleSystem(DEF='_5',geometryType='POINT',maxParticles=4000,createParticles=False,particleLifetime=30,lifetimeVariation=0,particleSize=(0.1,0.1),colorKey=[0,0.1,0.4,1],
      emitter=ConeEmitter(position=(0,-3,0),direction=(1,4,0),angle=0.4,speed=0.2,mass=3200),
      physics=BoundedPhysicsModel(DEF='BoundedSphere',
        geometry=ProtoInstance(name='IcoSphere',USE='_1')),
      BoundedPhysicsModel(DEF='BoundedBox',
        geometry=Box(USE='_2')),
      ForcePhysicsModel(force=(0,-0.098,0))
      color=ColorRGBA(color=[(1,0.38,0,0.5),(1,0.58,0.06,0.5),(1,0.37,0,0.5),(1,0.05,0,0.5)]),
      appearance=Appearance(
        lineProperties=LineProperties(linewidthScaleFactor=4))),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    ROUTE(fromNode='_3',fromField='fraction_changed',toNode='_4',toField='set_fraction'),
    ROUTE(fromNode='_4',fromField='value_changed',toNode='_5',toField='set_createParticles')])
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
