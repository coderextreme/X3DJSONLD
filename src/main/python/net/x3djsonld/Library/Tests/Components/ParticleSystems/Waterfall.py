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
    meta(name='created',content='Sat, 23 Apr 2016 03:14:27 GMT'),
    meta(name='creator',content='Holger Seelig'),
    meta(name='generator',content='Titania V4.0.2, http://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Library/Tests/Components/ParticleSystems/Waterfall.x3d'),
    meta(name='modified',content='Mon, 04 Dec 2017 11:50:35 GMT')]),
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
    WorldInfo(),
    Background(DEF='Gray',skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Viewpoint',position=(5.84487,5.03472,4.6136),orientation=(-0.345888826425389,0.916328938277108,0.201747854090235,1.13369964678518),centerOfRotation=(-0.531098,1.64484,1.00739)),
    ParticleSystem(geometryType='LINE',maxParticles=10000,particleLifetime=20,lifetimeVariation=0.1,particleSize=(0.1,0.1),particleElasticity=0.5,colorKey=[0,0.1,0.4,1],
      emitter=PolylineEmitter(direction=(0,0,1),speed=0.2,mass=0.1,surfaceArea=0.01,
        coord=Coordinate(point=[(-1,4,0),(1,4,0)])),
      physics=ForcePhysicsModel(force=(0,-0.098,0)),
      WindPhysicsModel(direction=(0,1,0),speed=0.12,gustiness=8,turbulence=0.9),
      BoundedPhysicsModel(
        geometry=IndexedFaceSet(DEF='_1',texCoordIndex=[10,8,9,11,-1,11,0,1,10,-1,12,4,5,13,-1,13,9,8,12,-1,14,6,7,15,-1,15,5,4,14,-1,16,2,3,17,-1,17,7,6,16,-1,18,19,20,21,-1,21,22,23,18,-1,24,25,26,27,-1,27,20,19,24,-1,28,29,30,31,-1,31,26,25,28,-1,32,33,34,35,-1,35,30,29,32,-1,36,37,38,39,-1,39,40,41,36,-1,42,43,44,45,-1,45,38,37,42,-1,46,47,48,49,-1,49,44,43,46,-1,50,51,52,53,-1,53,48,47,50,-1],coordIndex=[10,8,9,11,-1,11,0,1,10,-1,12,4,5,13,-1,13,9,8,12,-1,14,6,7,15,-1,15,5,4,14,-1,16,2,3,17,-1,17,7,6,16,-1,18,19,20,21,-1,21,22,23,18,-1,24,25,26,27,-1,27,20,19,24,-1,28,29,30,31,-1,31,26,25,28,-1,32,33,34,35,-1,35,30,29,32,-1,36,37,38,39,-1,39,40,41,36,-1,42,43,44,45,-1,45,38,37,42,-1,46,47,48,49,-1,49,44,43,46,-1,50,51,52,53,-1,53,48,47,50,-1],
          texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1),(1,0.5),(0,0.5),(1,0.75),(0,0.75),(1,0.25),(0,0.25),(1,0.125),(0,0.125),(1,0.375),(0,0.375),(1,0.625),(0,0.625),(1,0.875),(0,0.875),(1,0.125),(1,0.25),(0,0.25),(0,0.125),(0,0),(1,0),(1,0.375),(1,0.5),(0,0.5),(0,0.375),(1,0.625),(1,0.75),(0,0.75),(0,0.625),(1,0.875),(1,1),(0,1),(0,0.875),(1,0.125),(1,0.25),(0,0.25),(0,0.125),(0,0),(1,0),(1,0.375),(1,0.5),(0,0.5),(0,0.375),(1,0.625),(1,0.75),(0,0.75),(0,0.625),(1,0.875),(1,1),(0,1),(0,0.875)]),
          coord=Coordinate(point=[(-1,-0.152656,2.87901),(0.999992,-0.152654,2.87901),(0.999994,1.35935,1.56987),(-1,1.35935,1.56986),(0.999993,0.603347,2.22444),(-1,0.603346,2.22443),(0.999994,0.98135,1.89715),(-1,0.98135,1.89715),(0.999993,0.225347,2.55172),(-1,0.225346,2.55172),(0.999992,0.197455,2.90145),(-1,0.197454,2.90144),(0.999992,0.575457,2.57415),(-1,0.575455,2.57415),(0.999993,0.953455,2.24687),(-1,0.953455,2.24687),(0.999993,1.33146,1.91959),(-1,1.33145,1.91958),(0.999994,1.7096,1.5963),(0.999995,1.7375,1.24658),(-1,1.73749,1.24658),(-1,1.70961,1.59631),(-1,1.35949,1.57386),(0.999994,1.35949,1.57387),(0.999994,2.0876,1.26902),(0.999995,2.1155,0.919301),(-1,2.1155,0.919296),(-1,2.0876,1.26901),(0.999995,2.46561,0.941743),(0.999996,2.49349,0.592018),(-1,2.49349,0.592014),(-1,2.4656,0.941731),(0.999995,2.84361,0.61445),(0.999996,2.8715,0.264734),(-1,2.87149,0.264728),(-1,2.84361,0.614446),(0.999996,3.22092,0.289732),(0.999997,3.24882,-0.059977),(-1,3.24881,-0.0599823),(-1,3.22093,0.289735),(-1,2.87081,0.267296),(0.999996,2.87081,0.267308),(0.999996,3.59892,-0.0375446),(0.999997,3.62682,-0.387262),(-1,3.62682,-0.387266),(-1,3.59892,-0.0375569),(0.999997,3.97693,-0.364829),(0.999998,4.00481,-0.714547),(-1,4.00481,-0.714546),(-1,3.97692,-0.364828),(0.999998,4.35492,-0.692108),(0.999998,4.3828,-1.04183),(-1,4.38281,-1.04184),(-1,4.35493,-0.692119)])))
      color=ColorRGBA(color=[(0,0.38,1,0),(0,0.58,1,0.1),(0,0.37,1,0.1),(0,0.6,1,0.05)]),
      appearance=Appearance(
        lineProperties=LineProperties(linewidthScaleFactor=8))),
    Transform(DEF='IndexedLineSet',
      children=[
      Shape(
        geometry=IndexedLineSet(colorPerVertex=False,colorIndex=[0,1,2],coordIndex=[0,1,-1,2,3,-1,4,5,-1],
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
          coord=Coordinate(point=[(-1,0,0),(1,0,0),(0,-1,0),(0,1,0),(0,0,-1),(0,0,1)])))]),
    Transform(DEF='Box',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=IndexedFaceSet(USE='_1'))]),
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
