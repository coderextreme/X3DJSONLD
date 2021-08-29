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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='MH53ESeaDragonAtSea.x3d',name='title'),
    meta(content="MH-53E Sea Dragon constructed with inlines of the various parts including fuselage, engines, EAPS, main and tail rotor heads. Notice the 5 degree forward tilt of the main rotor head. Viewpoints and background borrowed from Capt Allen A. Harper's CH-46 model.",name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='19 March 2004',name='created'),
    meta(content='3 September 2015',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='Sikorsky MH-53E Sea Dragon Multi-mission helicopter for the U.S. Navy.',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ESeaDragonAtSea.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Inline(url=["MH53ESeaDragon.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ESeaDragon.x3d","MH53ESeaDragon.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ESeaDragon.wrl"])]),
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_3_back.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_back.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_3_bottom.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_bottom.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_3_front.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_3_left.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_3_right.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"],skyAngle=[0.1,0.15,1.309,1.57079],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["urn:web3d:media:textures/panoramas/ocean_3_top.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53ESeaDragonAtSea.py")
