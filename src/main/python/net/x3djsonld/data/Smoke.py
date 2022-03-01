###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Full',version='3.3',
  head=head(
    children=[
    meta(name='comment',content='World of Titania'),
    meta(name='created',content='Wed, 20 Apr 2016 09:17:14 GMT'),
    meta(name='creator',content='Holger Seelig'),
    meta(name='generator',content='Titania V1.4.1, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Smoke.x3d'),
    meta(name='modified',content='Wed, 20 Apr 2016 09:23:41 GMT')]),
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
    WorldInfo(
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='AngleGrid',name='AngleGrid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled',name='enabled',reference='http://titania.create3000.de',value=[False])]),
        MetadataSet(DEF='Grid',name='Grid',reference='http://titania.create3000.de',
          value=[
          MetadataBoolean(DEF='enabled_1',name='enabled',reference='http://titania.create3000.de',value=[False])]),
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[5.87788534164429,6.46984958648682,13.8524446487427]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[-1.77635683940025e-15,-7.105427357601e-15,3.5527136788005e-15])]),
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='previous',name='previous',reference='http://titania.create3000.de')])])),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    ProtoInstance(name='Grid'),
    Viewpoint(description='Home',position=(5.87789,6.46985,13.8524),orientation=(-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854),centerOfRotation=(-1.77636e-15,-7.10543e-15,3.55271e-15)),
    ParticleSystem(DEF='BlackSmoke',geometryType='POINT',maxParticles=4000,particleLifetime=4,lifetimeVariation=0.5,particleSize=(1,1),colorKey=[0,0.2,0.5,0.7,0.8,1],
      emitter=PointEmitter(direction=(0,0,0),speed=0.2,variation=0.5,mass=0.1,surfaceArea=0.1),
      physics=WindPhysicsModel(direction=(0,1,0),speed=0.5,gustiness=1.7,turbulence=0.1),
      WindPhysicsModel(speed=0.3,gustiness=2)
      appearance=Appearance(
        lineProperties=LineProperties(linewidthScaleFactor=8),
        material=Material(emissiveColor=(0.0437445,0.0437445,0.0437445),transparency=0.96)))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete")
