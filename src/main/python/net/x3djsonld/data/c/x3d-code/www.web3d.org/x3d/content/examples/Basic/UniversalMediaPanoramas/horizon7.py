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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='horizon7.x3d',name='title'),
    meta(content='Panoramic background for Universal Media, showing a low-hanging moon in the night sky opposite a lens-flare sun at the edge of the horizon.',name='description'),
    meta(content='Pamela Maloney, aka Imagica, copyright 1998',name='creator'),
    meta(content='Mark Scorgie, NPS MV 4470 Image Synthesis class',name='translator'),
    meta(content='29 May 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='copyright.htm',name='rights'),
    meta(content='http://www.web3dmedia.com/UniversalMedia',name='reference'),
    meta(content='https://www.web3d.org/WorkingGroups/media',name='reference'),
    meta(content='indexOriginalPanoramas.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon7.x3d',name='identifier'),
    meta(content='UniversalMedia background texture panorama',name='subject'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='horizon7.x3d'),
    Background(backUrl=["urn:web3d:media:textures/panoramas/horizon_7_back.jpg","horizon_7_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon_7_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_7_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_7_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_7_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_7_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/horizon_7_bottom.jpg","horizon_7_bottom.jpg","horizon_7_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_7_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon_7_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_7_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_7_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_7_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_7_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/horizon_7_front.jpg","horizon_7_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon_7_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_7_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_7_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_7_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_7_front.jpg"],groundColor=[(0,0,0)],leftUrl=["urn:web3d:media:textures/panoramas/horizon_7_left.jpg","horizon_7_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon_7_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_7_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_7_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_7_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_7_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/horizon_7_right.jpg","horizon_7_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon_7_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_7_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_7_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_7_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_7_right.jpg"],topUrl=["urn:web3d:media:textures/panoramas/horizon_7_top.jpg","horizon_7_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/horizon_7_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_7_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_7_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_7_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_7_top.jpg"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for horizon7.py")
