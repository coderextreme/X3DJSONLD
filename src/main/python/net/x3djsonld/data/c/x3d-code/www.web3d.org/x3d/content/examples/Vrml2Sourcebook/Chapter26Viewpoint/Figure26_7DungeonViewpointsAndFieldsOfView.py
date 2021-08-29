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
    meta(content='Figure26_7DungeonViewpointsAndFieldsOfView.x3d',name='title'),
    meta(content='Figure 26.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch26/26fig07.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This Viewpoint series does not move the user but rather increases the field of view (FOV) very widely, producing an interesting effect. Numerous additional viewpoints follow.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter26Viewpoint/Figure26_7DungeonViewpointsAndFieldsOfView.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure26_7DungeonViewpointsAndFieldsOfView.x3d'),
    Viewpoint(description='Forward view',position=(0,1.6,5)),
    Viewpoint(description='10 degree FOV corner view',fieldOfView=0.1745,orientation=(0,1,0,0.611),position=(0,1.6,5)),
    Viewpoint(description='20 degree FOV corner view',fieldOfView=0.3491,orientation=(0,1,0,0.611),position=(0,1.6,5)),
    Viewpoint(description='45 degree FOV (default value) corner view',orientation=(0,1,0,0.611),position=(0,1.6,5)),
    Viewpoint(description='60 degree FOV corner view',fieldOfView=1.047,orientation=(0,1,0,0.611),position=(0,1.6,5)),
    Viewpoint(description='90 degree FOV corner view',fieldOfView=1.57,orientation=(0,1,0,0.611),position=(0,1.6,5)),
    Viewpoint(description='135 degree FOV corner view',fieldOfView=2.42,orientation=(0,1,0,0.611),position=(0,1.6,5)),
    Viewpoint(description='Click door for next dungeon room',fieldOfView=1.05,position=(0,2,10)),
    NavigationInfo(avatarSize=[0.5,1.6,0.5],headlight=False,speed=2,type=["WALK","EXAMINE","ANY"]),
    Inline(url=["../Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.x3d","../Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure26_7DungeonViewpointsAndFieldsOfView.py")
