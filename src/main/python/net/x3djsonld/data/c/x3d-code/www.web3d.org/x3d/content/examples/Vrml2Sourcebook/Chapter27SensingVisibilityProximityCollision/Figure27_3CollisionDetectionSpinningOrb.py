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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure27_3CollisionDetectionSpinningOrb.x3d',name='title'),
    meta(content='Figure 27.3, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch27/27fig03.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='An orb that animates (for a single revolution) when the viewer collides with its box proxy shape. Walk towards the orb by using the up-arrow key.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter27SensingVisibilityProximityCollision/Figure27_3CollisionDetectionSpinningOrb.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure27_3CollisionDetectionSpinningOrb.x3d'),
    Viewpoint(description='Zoom in on the orb to trigger the Collision node',position=(0,2,10)),
    Viewpoint(description='Close-up viewpoint by the orb that triggers the Collision node',position=(0,0.8,2.5)),
    #  Note NavigationInfo avatarSize affects collision range 
    NavigationInfo(avatarSize=[2,1,0.5],headlight=False,speed=2,type=["WALK","EXAMINE","ANY"]),
    Group(
      children=[
      Transform(translation=(0,0,2.5),
        children=[
        Inline(DEF='Floor',url=["../Chapter25LevelOfDetail/Figure25_06DungeonRoomFloor.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_06DungeonRoomFloor.x3d","../Chapter25LevelOfDetail/Figure25_06DungeonRoomFloor.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_06DungeonRoomFloor.wrl"])]),
      Transform(translation=(0,0,-2.5),
        children=[
        Inline(USE='Floor')]),
      Collision(DEF='OrbCollide',
        #  Note that proxy geometry is not rendered 
        proxy=Transform(DEF='ProxyGeometryTransform',translation=(0,0.6,0),
          children=[
          Shape(
            geometry=Box(size=(0.4,1.2,0.4)),
            appearance=Appearance(
              material=Material(transparency=0.8)))]),
        #  If you want to also see the simplifying proxy geometry, DEF/USE it outside of the proxy containerField subtree. 
        children=[
        Transform(USE='ProxyGeometryTransform'),
        #  Rest of collidable scene follows. 
        Transform(DEF='OrbSpin',translation=(0,1,0),
          children=[
          PointLight(ambientIntensity=0.2,color=(0.7,0.5,0),location=(0.3,0,0),radius=10),
          Shape(
            appearance=Appearance(
              texture=ImageTexture(url=["fire.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter27SensingVisibilityProximityCollision/fire.jpg"]),
              #  alternate emissive material as backup, comparable to fire.jpg texturing 
              material=Material(emissiveColor=(0.8,0.4,0.1))),
            geometry=Sphere(radius=0.2))])]),
      Shape(
        appearance=Appearance(DEF='PedestalColor',
          material=Material(diffuseColor=(0.7,0.6,0.5))),
        geometry=IndexedFaceSet(coordIndex=[0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1],
          coord=Coordinate(point=[(-0.12,0.03,0.12),(0.12,0.03,0.12),(0.12,0.03,-0.12),(-0.12,0.03,-0.12),(0.0,0.63,0.0)]))),
      Transform(translation=(0,0.015,0),
        children=[
        Shape(
          appearance=Appearance(USE='PedestalColor'),
          geometry=Box(size=(0.4,0.03,0.4)))])]),
    Sound(DEF='WispyAmp',intensity=0.5,
      source=AudioClip(DEF='Wispy',description='drone',loop=True,url=["drone1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter27SensingVisibilityProximityCollision/drone1.wav"])),
    #  Animation clock 
    TimeSensor(DEF='Clock',cycleInterval=8),
    ROUTE(fromField='collideTime',fromNode='OrbCollide',toField='set_startTime',toNode='Clock'),
    ROUTE(fromField='collideTime',fromNode='OrbCollide',toField='set_startTime',toNode='Wispy'),
    #  Orb rotation animation and scalar-driven volume control 
    OrientationInterpolator(DEF='OrbSpinner',key=[0,0.5,1],keyValue=[(0,1,0,0.0),(0,1,0,3.14),(0,1,0,6.28)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='OrbSpinner'),
    ROUTE(fromField='value_changed',fromNode='OrbSpinner',toField='set_rotation',toNode='OrbSpin'),
    ScalarInterpolator(DEF='WispyVolume',key=[0,0.1,0.9,1],keyValue=[0,0.6,0.6,0]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='WispyVolume'),
    ROUTE(fromField='value_changed',fromNode='WispyVolume',toField='set_intensity',toNode='WispyAmp')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure27_3CollisionDetectionSpinningOrb.py")
