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
    meta(content='NanuchkaMissileCorvetteWithLighthouse.x3d',name='title'),
    meta(content='Weng Wah LO',name='creator'),
    meta(content='27 September 2000',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Using Extrusion to model Nanuchka Missile Corvette',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNanuchkaLighthouseRussia/NanuchkaMissileCorvetteWithLighthouse.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=20),
    #  Horizon Background 
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.0,0.3,0.7),(.0,.1,.8),(0.0,0.0,0.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1,1,1)]),
    Transform(DEF='NuanuchkaLocation',
      children=[
      Viewpoint(description='Naunuchka',position=(0,10,50)),
      Inline(url=["NanuchkaMissileCorvette.wrl","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNanuchkaLighthouseRussia/NanuchkaMissileCorvette.wrl","NanuchkaMissileCorvette.x3d","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNanuchkaLighthouseRussia/NanuchkaMissileCorvette.x3d"])]),
    Transform(translation=(150,15,100),
      children=[
      Inline(url=["Lighthouse.wrl","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNanuchkaLighthouseRussia/Lighthouse.wrl","Lighthouse.x3d","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNanuchkaLighthouseRussia/Lighthouse.x3d"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NanuchkaMissileCorvetteWithLighthouse.py")
