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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='BackgroundImagesOnly.x3d',name='title'),
    meta(content='Simple Background node with images only.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='20 April 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon3.x3d',name='reference'),
    meta(content='X3D Background example',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironmentalEffects/BackgroundImagesOnly.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BackgroundImagesOnly.x3d'),
    Background(backUrl=["urn:web3d:media:textures/panoramas/horizon_3_back.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_back.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/horizon_3_bottom.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_bottom.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/horizon_3_front.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_front.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_front.jpg"],leftUrl=["urn:web3d:media:textures/panoramas/horizon_3_left.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_left.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/horizon_3_right.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_right.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_right.jpg"],topUrl=["urn:web3d:media:textures/panoramas/horizon_3_top.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_top.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_top.jpg"]),
    Viewpoint(description='Background images view'),
    Shape(
      geometry=Text(string=["Background node using","image url arrays"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD')),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BackgroundImagesOnly.py")
