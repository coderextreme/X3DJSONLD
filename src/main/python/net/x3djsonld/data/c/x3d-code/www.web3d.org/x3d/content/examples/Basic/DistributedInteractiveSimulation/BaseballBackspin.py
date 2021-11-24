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
    component(level=1,name='DIS'),
    meta(content='BaseballBackspin.x3d',name='title'),
    meta(content='MV4472 example demonstration of the effects of backspin on baseball trajectory, communicated via DIS ESPDUs.',name='description'),
    meta(content='Victor Spears and David Back',name='creator'),
    meta(content='14 December 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='BaseballBackspin/run.bat',name='reference'),
    meta(content='BaseballBackspin/compile.bat',name='reference'),
    meta(content='BaseballBackspin/compile.out',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter17-Textures/Figure17.04dTextureSphereTest.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BaseballBackspin.x3d'),
    Viewpoint(description='Texture test on a basic shape',orientation=(0,1,0,1.57),position=(25,1,0)),
    EspduTransform(address='224.0.0.3',marking='Baseball',networkMode='networkReader',port=64200,siteID=3,writeInterval=0,
      children=[
      Transform(DEF='ballThing',
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["BaseballBackspin/testimg.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/testimg.jpg"])),
          geometry=Sphere(radius=.1)),
        Viewpoint(description='Top ball',orientation=(1,0,0,-90),position=(0,10,-3.5)),
        Viewpoint(description='Behind ball',orientation=(0,1,0,-90),position=(-4,0,0)),
        Viewpoint(description='Front Ball',orientation=(0,1,0,90),position=(4,0,0))])]),
    #  <Sound maxBack="1000" maxFront="1000" minBack="1" minFront="1"> <AudioClip loop="true" url="sound.wav"/> </Sound> 
    Transform(rotation=(0,0,1,1.57),translation=(8.9,0,0),
      children=[
      Shape(DEF='Path',
        geometry=Cylinder(height=17.8,radius=0.005),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0))))]),
    Transform(rotation=(1,0,0,-1.55),scale=(0.9,0.25,0.7),translation=(-0.4,-6.8,0),
      children=[
      Shape(DEF='Pitcher',
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
          coord=Coordinate(point=[(0,10,0),(0,10,10),(0,0,10),(0,0,0)])),
        appearance=Appearance(
          texture=ImageTexture(url=["BaseballBackspin/pitch.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/pitch.jpg"])))]),
    Transform(rotation=(1,0,0,-1.55),scale=(0.7,0.9,1.3),translation=(18,-10.75,3),
      children=[
      Shape(DEF='Catcher',
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
          coord=Coordinate(point=[(0,10,10),(0,10,0),(0,0,0),(0,0,10)])),
        appearance=Appearance(
          texture=ImageTexture(url=["BaseballBackspin/backstop.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/backstop.jpg"])))]),
    Transform(rotation=(0,1,0,-1.5),translation=(18,-6.8,-20),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["BaseballBackspin/diamond.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/diamond.jpg"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
          coord=Coordinate(point=[(40,0,40),(40,0,0),(0,0,0),(0,0,40)])))]),
    Background(backUrl=["urn:web3d:media:textures/panoramas/mountains_2_back.jpg","mountains_2_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/mountains_2_bottom.jpg","mountains_2_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/mountains_2_front.jpg","mountains_2_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/mountains_2_left.jpg","mountains_2_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/mountains_2_right.jpg","mountains_2_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_right.jpg"],skyAngle=[0.1,0.15,1.309,1.571],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["urn:web3d:media:textures/panoramas/mountains_2_top.jpg","mountains_2_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_top.jpg"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BaseballBackspin.py")
