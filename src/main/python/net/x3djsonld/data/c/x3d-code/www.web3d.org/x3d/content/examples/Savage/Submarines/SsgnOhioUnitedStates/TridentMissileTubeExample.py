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
    meta(content='TridentMissileTubeExample.x3d',name='title'),
    meta(content='Trident Missile Tube for Ohio Class SSBN or SSGN',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='19 September 2001',name='created'),
    meta(content='7 April 2012',name='modified'),
    meta(content='http://www.fas.org/nuke/guide/usa/slbm/ssbn-726.htm',name='reference'),
    meta(content='http://www.chinfo.navy.mil/navpalib/cno/n87/usw/issue_6/ssgn.html',name='reference'),
    meta(content='SsgnSecondCareer.pdf',name='reference'),
    meta(content='http://www.chinfo.navy.mil/navpalib/cno/n87/future/ssgn.html',name='reference'),
    meta(content='http://www.ohio.navy.mil/html/conversion.htm',name='reference'),
    meta(content='Trident Missile Tube Prototype Ohio Class Submarine',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Submarines/SsgnOhioUnitedStates/TridentMissileTubeExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Builds a Trident missile tube for Ohio Class Submarine.',name='TridentMissileTube',url=["TridentMissileTubePrototype.x3d#TridentMissileTube","https://savage.nps.edu/Savage/Submarines/SsgnOhioUnitedStates/TridentMissileTubePrototype.x3d#TridentMissileTube","TridentMissileTubePrototype.wrl#TridentMissileTube","https://savage.nps.edu/Savage/Submarines/SsgnOhioUnitedStates/TridentMissileTubePrototype.wrl#TridentMissileTube"]),
    Viewpoint(description='Missile Tubes',position=(0,0,30)),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.2,0.4),(0.05,0.25,0.6),(0.1,0.2,0.4)],skyAngle=[1.309,1.571],skyColor=[(0.1,0.1,0.4),(0.1,0.125,0.4),(0.1,0.1,0.3)]),
    ProtoInstance(name='TridentMissileTube')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TridentMissileTubeExample.py")
