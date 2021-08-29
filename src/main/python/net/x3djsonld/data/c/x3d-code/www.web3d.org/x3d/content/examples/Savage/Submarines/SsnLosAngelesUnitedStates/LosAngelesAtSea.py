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
    meta(content='LosAngelesAtSea.x3d',name='title'),
    meta(content='Los Angeles Class Submarine At Sea',name='description'),
    meta(content='LT Ken Curtin',name='creator'),
    meta(content='18 September 2003',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='688, Los Angeles Class, Submarine',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/LosAngelesAtSea.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Inline(url=["LosAngelesClassSubmarineFlight1.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/LosAngelesClassSubmarineFlight1.x3d","LosAngelesClassSubmarineFlight1.wrl","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/LosAngelesClassSubmarineFlight1.wrl"]),
    Transform(scale=(1,1,2),translation=(-300,11.7,0),
      children=[
      Inline(url=["../../ShipsMilitary/DDGArleighBurkeUnitedStates/Water.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Water.x3d","../../ShipsMilitary/DDGArleighBurkeUnitedStates/Water.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Water.wrl"])]),
    Background(backUrl=["ocean_3_back.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg"],bottomUrl=["ocean_3_bottom.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"],frontUrl=["ocean_3_front.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_3_left.jpg","ocean_3_left.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_3_right.jpg","ocean_3_right.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"],skyAngle=[0.1,0.15,1.309,1.571],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["ocean_3_top.jpg","../../../Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LosAngelesAtSea.py")
