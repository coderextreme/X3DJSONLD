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
    meta(name='created',content='Sun, 15 May 2016 00:15:37 GMT'),
    meta(name='creator',content='holger'),
    meta(name='generator',content='Titania V1.4.3, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GeometryLine.x3d'),
    meta(name='modified',content='Sun, 15 May 2016 00:59:41 GMT')]),
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
    WorldInfo(title='Geometry',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de'),
          MetadataSet(DEF='children',name='children',reference='http://titania.create3000.de',
            value=[
            ParticleSystem(DEF='_1',geometryType='GEOMETRY',maxParticles=10,particleLifetime=4,lifetimeVariation=0.5,particleSize=(1,1),
              emitter=PointEmitter(direction=(0,0,0),speed=0.5,variation=0.5,mass=0.1,surfaceArea=0.1),
              physics=WindPhysicsModel(direction=(0,1,0),speed=0.7,gustiness=1.7,turbulence=0.3),
              WindPhysicsModel(speed=0.5,gustiness=2)
              appearance=Appearance(),
              geometry=IndexedLineSet(DEF='_2',colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
                color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
                coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))])]),
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[0,20,55]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[0,0,1,0]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[0,0,0])])])),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Viewpoint',position=(0,20,55)),
    ParticleSystem(USE='_1'),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(USE='_2'))]),
    ProtoInstance(name='Grid')])
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
